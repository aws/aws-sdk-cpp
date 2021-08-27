/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/iot1click-projects/IoT1ClickProjectsClient.h>
#include <aws/iot1click-projects/IoT1ClickProjectsEndpoint.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrorMarshaller.h>
#include <aws/iot1click-projects/model/AssociateDeviceWithPlacementRequest.h>
#include <aws/iot1click-projects/model/CreatePlacementRequest.h>
#include <aws/iot1click-projects/model/CreateProjectRequest.h>
#include <aws/iot1click-projects/model/DeletePlacementRequest.h>
#include <aws/iot1click-projects/model/DeleteProjectRequest.h>
#include <aws/iot1click-projects/model/DescribePlacementRequest.h>
#include <aws/iot1click-projects/model/DescribeProjectRequest.h>
#include <aws/iot1click-projects/model/DisassociateDeviceFromPlacementRequest.h>
#include <aws/iot1click-projects/model/GetDevicesInPlacementRequest.h>
#include <aws/iot1click-projects/model/ListPlacementsRequest.h>
#include <aws/iot1click-projects/model/ListProjectsRequest.h>
#include <aws/iot1click-projects/model/ListTagsForResourceRequest.h>
#include <aws/iot1click-projects/model/TagResourceRequest.h>
#include <aws/iot1click-projects/model/UntagResourceRequest.h>
#include <aws/iot1click-projects/model/UpdatePlacementRequest.h>
#include <aws/iot1click-projects/model/UpdateProjectRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT1ClickProjects;
using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "iot1click";
static const char* ALLOCATION_TAG = "IoT1ClickProjectsClient";


IoT1ClickProjectsClient::IoT1ClickProjectsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickProjectsClient::~IoT1ClickProjectsClient()
{
}

void IoT1ClickProjectsClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("IoT 1Click Projects");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoT1ClickProjectsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoT1ClickProjectsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AssociateDeviceWithPlacementOutcome IoT1ClickProjectsClient::AssociateDeviceWithPlacement(const AssociateDeviceWithPlacementRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDeviceWithPlacement", "Required field: ProjectName, is not set");
    return AssociateDeviceWithPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDeviceWithPlacement", "Required field: PlacementName, is not set");
    return AssociateDeviceWithPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.DeviceTemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateDeviceWithPlacement", "Required field: DeviceTemplateName, is not set");
    return AssociateDeviceWithPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceTemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  ss << "/devices/";
  ss << request.GetDeviceTemplateName();
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateDeviceWithPlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateDeviceWithPlacementOutcomeCallable IoT1ClickProjectsClient::AssociateDeviceWithPlacementCallable(const AssociateDeviceWithPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateDeviceWithPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateDeviceWithPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::AssociateDeviceWithPlacementAsync(const AssociateDeviceWithPlacementRequest& request, const AssociateDeviceWithPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateDeviceWithPlacementAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::AssociateDeviceWithPlacementAsyncHelper(const AssociateDeviceWithPlacementRequest& request, const AssociateDeviceWithPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateDeviceWithPlacement(request), context);
}

CreatePlacementOutcome IoT1ClickProjectsClient::CreatePlacement(const CreatePlacementRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePlacement", "Required field: ProjectName, is not set");
    return CreatePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreatePlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePlacementOutcomeCallable IoT1ClickProjectsClient::CreatePlacementCallable(const CreatePlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::CreatePlacementAsync(const CreatePlacementRequest& request, const CreatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePlacementAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::CreatePlacementAsyncHelper(const CreatePlacementRequest& request, const CreatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePlacement(request), context);
}

CreateProjectOutcome IoT1ClickProjectsClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable IoT1ClickProjectsClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProjectAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::CreateProjectAsyncHelper(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProject(request), context);
}

DeletePlacementOutcome IoT1ClickProjectsClient::DeletePlacement(const DeletePlacementRequest& request) const
{
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlacement", "Required field: PlacementName, is not set");
    return DeletePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePlacement", "Required field: ProjectName, is not set");
    return DeletePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeletePlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePlacementOutcomeCallable IoT1ClickProjectsClient::DeletePlacementCallable(const DeletePlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::DeletePlacementAsync(const DeletePlacementRequest& request, const DeletePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePlacementAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::DeletePlacementAsyncHelper(const DeletePlacementRequest& request, const DeletePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePlacement(request), context);
}

DeleteProjectOutcome IoT1ClickProjectsClient::DeleteProject(const DeleteProjectRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: ProjectName, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable IoT1ClickProjectsClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProjectAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::DeleteProjectAsyncHelper(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProject(request), context);
}

DescribePlacementOutcome IoT1ClickProjectsClient::DescribePlacement(const DescribePlacementRequest& request) const
{
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePlacement", "Required field: PlacementName, is not set");
    return DescribePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePlacement", "Required field: ProjectName, is not set");
    return DescribePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribePlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePlacementOutcomeCallable IoT1ClickProjectsClient::DescribePlacementCallable(const DescribePlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::DescribePlacementAsync(const DescribePlacementRequest& request, const DescribePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePlacementAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::DescribePlacementAsyncHelper(const DescribePlacementRequest& request, const DescribePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePlacement(request), context);
}

DescribeProjectOutcome IoT1ClickProjectsClient::DescribeProject(const DescribeProjectRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: ProjectName, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable IoT1ClickProjectsClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProjectAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::DescribeProjectAsyncHelper(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProject(request), context);
}

DisassociateDeviceFromPlacementOutcome IoT1ClickProjectsClient::DisassociateDeviceFromPlacement(const DisassociateDeviceFromPlacementRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateDeviceFromPlacement", "Required field: ProjectName, is not set");
    return DisassociateDeviceFromPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateDeviceFromPlacement", "Required field: PlacementName, is not set");
    return DisassociateDeviceFromPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.DeviceTemplateNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateDeviceFromPlacement", "Required field: DeviceTemplateName, is not set");
    return DisassociateDeviceFromPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeviceTemplateName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  ss << "/devices/";
  ss << request.GetDeviceTemplateName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateDeviceFromPlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateDeviceFromPlacementOutcomeCallable IoT1ClickProjectsClient::DisassociateDeviceFromPlacementCallable(const DisassociateDeviceFromPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateDeviceFromPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateDeviceFromPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::DisassociateDeviceFromPlacementAsync(const DisassociateDeviceFromPlacementRequest& request, const DisassociateDeviceFromPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateDeviceFromPlacementAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::DisassociateDeviceFromPlacementAsyncHelper(const DisassociateDeviceFromPlacementRequest& request, const DisassociateDeviceFromPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateDeviceFromPlacement(request), context);
}

GetDevicesInPlacementOutcome IoT1ClickProjectsClient::GetDevicesInPlacement(const GetDevicesInPlacementRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicesInPlacement", "Required field: ProjectName, is not set");
    return GetDevicesInPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDevicesInPlacement", "Required field: PlacementName, is not set");
    return GetDevicesInPlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  ss << "/devices";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDevicesInPlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDevicesInPlacementOutcomeCallable IoT1ClickProjectsClient::GetDevicesInPlacementCallable(const GetDevicesInPlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDevicesInPlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDevicesInPlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::GetDevicesInPlacementAsync(const GetDevicesInPlacementRequest& request, const GetDevicesInPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDevicesInPlacementAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::GetDevicesInPlacementAsyncHelper(const GetDevicesInPlacementRequest& request, const GetDevicesInPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDevicesInPlacement(request), context);
}

ListPlacementsOutcome IoT1ClickProjectsClient::ListPlacements(const ListPlacementsRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPlacements", "Required field: ProjectName, is not set");
    return ListPlacementsOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListPlacementsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPlacementsOutcomeCallable IoT1ClickProjectsClient::ListPlacementsCallable(const ListPlacementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPlacementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPlacements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::ListPlacementsAsync(const ListPlacementsRequest& request, const ListPlacementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPlacementsAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::ListPlacementsAsyncHelper(const ListPlacementsRequest& request, const ListPlacementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPlacements(request), context);
}

ListProjectsOutcome IoT1ClickProjectsClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable IoT1ClickProjectsClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProjectsAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::ListProjectsAsyncHelper(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProjects(request), context);
}

ListTagsForResourceOutcome IoT1ClickProjectsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoT1ClickProjectsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome IoT1ClickProjectsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoT1ClickProjectsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome IoT1ClickProjectsClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoT1ClickProjectsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdatePlacementOutcome IoT1ClickProjectsClient::UpdatePlacement(const UpdatePlacementRequest& request) const
{
  if (!request.PlacementNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePlacement", "Required field: PlacementName, is not set");
    return UpdatePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PlacementName]", false));
  }
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePlacement", "Required field: ProjectName, is not set");
    return UpdatePlacementOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdatePlacementOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePlacementOutcomeCallable IoT1ClickProjectsClient::UpdatePlacementCallable(const UpdatePlacementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePlacementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePlacement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::UpdatePlacementAsync(const UpdatePlacementRequest& request, const UpdatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePlacementAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::UpdatePlacementAsyncHelper(const UpdatePlacementRequest& request, const UpdatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePlacement(request), context);
}

UpdateProjectOutcome IoT1ClickProjectsClient::UpdateProject(const UpdateProjectRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: ProjectName, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<IoT1ClickProjectsErrors>(IoT1ClickProjectsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable IoT1ClickProjectsClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoT1ClickProjectsClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProjectAsyncHelper( request, handler, context ); } );
}

void IoT1ClickProjectsClient::UpdateProjectAsyncHelper(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProject(request), context);
}


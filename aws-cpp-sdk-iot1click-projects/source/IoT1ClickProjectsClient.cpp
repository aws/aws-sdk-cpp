﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoT1ClickProjectsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoT1ClickProjectsClient::IoT1ClickProjectsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << IoT1ClickProjectsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AssociateDeviceWithPlacementOutcome IoT1ClickProjectsClient::AssociateDeviceWithPlacement(const AssociateDeviceWithPlacementRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  ss << "/devices/";
  ss << request.GetDeviceTemplateName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateDeviceWithPlacementOutcome(AssociateDeviceWithPlacementResult(outcome.GetResult()));
  }
  else
  {
    return AssociateDeviceWithPlacementOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePlacementOutcome(CreatePlacementResult(outcome.GetResult()));
  }
  else
  {
    return CreatePlacementOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProjectOutcome(CreateProjectResult(outcome.GetResult()));
  }
  else
  {
    return CreateProjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeletePlacementOutcome(DeletePlacementResult(outcome.GetResult()));
  }
  else
  {
    return DeletePlacementOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteProjectOutcome(DeleteProjectResult(outcome.GetResult()));
  }
  else
  {
    return DeleteProjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePlacementOutcome(DescribePlacementResult(outcome.GetResult()));
  }
  else
  {
    return DescribePlacementOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProjectOutcome(DescribeProjectResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProjectOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  ss << "/devices/";
  ss << request.GetDeviceTemplateName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateDeviceFromPlacementOutcome(DisassociateDeviceFromPlacementResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateDeviceFromPlacementOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  ss << "/devices";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDevicesInPlacementOutcome(GetDevicesInPlacementResult(outcome.GetResult()));
  }
  else
  {
    return GetDevicesInPlacementOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPlacementsOutcome(ListPlacementsResult(outcome.GetResult()));
  }
  else
  {
    return ListPlacementsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProjectsOutcome(ListProjectsResult(outcome.GetResult()));
  }
  else
  {
    return ListProjectsOutcome(outcome.GetError());
  }
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

UpdatePlacementOutcome IoT1ClickProjectsClient::UpdatePlacement(const UpdatePlacementRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  ss << "/placements/";
  ss << request.GetPlacementName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdatePlacementOutcome(UpdatePlacementResult(outcome.GetResult()));
  }
  else
  {
    return UpdatePlacementOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateProjectOutcome(UpdateProjectResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProjectOutcome(outcome.GetError());
  }
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


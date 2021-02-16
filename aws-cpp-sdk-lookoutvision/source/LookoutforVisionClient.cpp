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

#include <aws/lookoutvision/LookoutforVisionClient.h>
#include <aws/lookoutvision/LookoutforVisionEndpoint.h>
#include <aws/lookoutvision/LookoutforVisionErrorMarshaller.h>
#include <aws/lookoutvision/model/CreateDatasetRequest.h>
#include <aws/lookoutvision/model/CreateModelRequest.h>
#include <aws/lookoutvision/model/CreateProjectRequest.h>
#include <aws/lookoutvision/model/DeleteDatasetRequest.h>
#include <aws/lookoutvision/model/DeleteModelRequest.h>
#include <aws/lookoutvision/model/DeleteProjectRequest.h>
#include <aws/lookoutvision/model/DescribeDatasetRequest.h>
#include <aws/lookoutvision/model/DescribeModelRequest.h>
#include <aws/lookoutvision/model/DescribeProjectRequest.h>
#include <aws/lookoutvision/model/DetectAnomaliesRequest.h>
#include <aws/lookoutvision/model/ListDatasetEntriesRequest.h>
#include <aws/lookoutvision/model/ListModelsRequest.h>
#include <aws/lookoutvision/model/ListProjectsRequest.h>
#include <aws/lookoutvision/model/ListTagsForResourceRequest.h>
#include <aws/lookoutvision/model/StartModelRequest.h>
#include <aws/lookoutvision/model/StopModelRequest.h>
#include <aws/lookoutvision/model/TagResourceRequest.h>
#include <aws/lookoutvision/model/UntagResourceRequest.h>
#include <aws/lookoutvision/model/UpdateDatasetEntriesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LookoutforVision;
using namespace Aws::LookoutforVision::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "lookoutvision";
static const char* ALLOCATION_TAG = "LookoutforVisionClient";


LookoutforVisionClient::LookoutforVisionClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LookoutforVisionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutforVisionClient::LookoutforVisionClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LookoutforVisionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutforVisionClient::LookoutforVisionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LookoutforVisionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutforVisionClient::~LookoutforVisionClient()
{
}

void LookoutforVisionClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("LookoutVision");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LookoutforVisionEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LookoutforVisionClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateDatasetOutcome LookoutforVisionClient::CreateDataset(const CreateDatasetRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataset", "Required field: ProjectName, is not set");
    return CreateDatasetOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/datasets";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable LookoutforVisionClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::CreateDatasetAsyncHelper(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataset(request), context);
}

CreateModelOutcome LookoutforVisionClient::CreateModel(const CreateModelRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateModel", "Required field: ProjectName, is not set");
    return CreateModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/models";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable LookoutforVisionClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateModelAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::CreateModelAsyncHelper(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateModel(request), context);
}

CreateProjectOutcome LookoutforVisionClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable LookoutforVisionClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProjectAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::CreateProjectAsyncHelper(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProject(request), context);
}

DeleteDatasetOutcome LookoutforVisionClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: ProjectName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.DatasetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetType, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/datasets/";
  ss << request.GetDatasetType();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable LookoutforVisionClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

DeleteModelOutcome LookoutforVisionClient::DeleteModel(const DeleteModelRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ProjectName, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.ModelVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ModelVersion, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/models/";
  ss << request.GetModelVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable LookoutforVisionClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteModelAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::DeleteModelAsyncHelper(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteModel(request), context);
}

DeleteProjectOutcome LookoutforVisionClient::DeleteProject(const DeleteProjectRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: ProjectName, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable LookoutforVisionClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteProjectAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::DeleteProjectAsyncHelper(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteProject(request), context);
}

DescribeDatasetOutcome LookoutforVisionClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: ProjectName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.DatasetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetType, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/datasets/";
  ss << request.GetDatasetType();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable LookoutforVisionClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDatasetAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::DescribeDatasetAsyncHelper(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDataset(request), context);
}

DescribeModelOutcome LookoutforVisionClient::DescribeModel(const DescribeModelRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeModel", "Required field: ProjectName, is not set");
    return DescribeModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.ModelVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeModel", "Required field: ModelVersion, is not set");
    return DescribeModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/models/";
  ss << request.GetModelVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeModelOutcomeCallable LookoutforVisionClient::DescribeModelCallable(const DescribeModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeModelAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::DescribeModelAsyncHelper(const DescribeModelRequest& request, const DescribeModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeModel(request), context);
}

DescribeProjectOutcome LookoutforVisionClient::DescribeProject(const DescribeProjectRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: ProjectName, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProjectOutcomeCallable LookoutforVisionClient::DescribeProjectCallable(const DescribeProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProjectAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::DescribeProjectAsyncHelper(const DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProject(request), context);
}

DetectAnomaliesOutcome LookoutforVisionClient::DetectAnomalies(const DetectAnomaliesRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetectAnomalies", "Required field: ProjectName, is not set");
    return DetectAnomaliesOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.ModelVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DetectAnomalies", "Required field: ModelVersion, is not set");
    return DetectAnomaliesOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/models/";
  ss << request.GetModelVersion();
  ss << "/detect";
  uri.SetPath(uri.GetPath() + ss.str());
  return DetectAnomaliesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectAnomaliesOutcomeCallable LookoutforVisionClient::DetectAnomaliesCallable(const DetectAnomaliesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectAnomaliesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectAnomalies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::DetectAnomaliesAsync(const DetectAnomaliesRequest& request, const DetectAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectAnomaliesAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::DetectAnomaliesAsyncHelper(const DetectAnomaliesRequest& request, const DetectAnomaliesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectAnomalies(request), context);
}

ListDatasetEntriesOutcome LookoutforVisionClient::ListDatasetEntries(const ListDatasetEntriesRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasetEntries", "Required field: ProjectName, is not set");
    return ListDatasetEntriesOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.DatasetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasetEntries", "Required field: DatasetType, is not set");
    return ListDatasetEntriesOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/datasets/";
  ss << request.GetDatasetType();
  ss << "/entries";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListDatasetEntriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetEntriesOutcomeCallable LookoutforVisionClient::ListDatasetEntriesCallable(const ListDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::ListDatasetEntriesAsync(const ListDatasetEntriesRequest& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetEntriesAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::ListDatasetEntriesAsyncHelper(const ListDatasetEntriesRequest& request, const ListDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasetEntries(request), context);
}

ListModelsOutcome LookoutforVisionClient::ListModels(const ListModelsRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListModels", "Required field: ProjectName, is not set");
    return ListModelsOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/models";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListModelsOutcomeCallable LookoutforVisionClient::ListModelsCallable(const ListModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::ListModelsAsync(const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListModelsAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::ListModelsAsyncHelper(const ListModelsRequest& request, const ListModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListModels(request), context);
}

ListProjectsOutcome LookoutforVisionClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable LookoutforVisionClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProjectsAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::ListProjectsAsyncHelper(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProjects(request), context);
}

ListTagsForResourceOutcome LookoutforVisionClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable LookoutforVisionClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartModelOutcome LookoutforVisionClient::StartModel(const StartModelRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartModel", "Required field: ProjectName, is not set");
    return StartModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.ModelVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartModel", "Required field: ModelVersion, is not set");
    return StartModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/models/";
  ss << request.GetModelVersion();
  ss << "/start";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartModelOutcomeCallable LookoutforVisionClient::StartModelCallable(const StartModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::StartModelAsync(const StartModelRequest& request, const StartModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartModelAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::StartModelAsyncHelper(const StartModelRequest& request, const StartModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartModel(request), context);
}

StopModelOutcome LookoutforVisionClient::StopModel(const StopModelRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopModel", "Required field: ProjectName, is not set");
    return StopModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.ModelVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopModel", "Required field: ModelVersion, is not set");
    return StopModelOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/models/";
  ss << request.GetModelVersion();
  ss << "/stop";
  uri.SetPath(uri.GetPath() + ss.str());
  return StopModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopModelOutcomeCallable LookoutforVisionClient::StopModelCallable(const StopModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::StopModelAsync(const StopModelRequest& request, const StopModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopModelAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::StopModelAsyncHelper(const StopModelRequest& request, const StopModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopModel(request), context);
}

TagResourceOutcome LookoutforVisionClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LookoutforVisionClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome LookoutforVisionClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LookoutforVisionClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDatasetEntriesOutcome LookoutforVisionClient::UpdateDatasetEntries(const UpdateDatasetEntriesRequest& request) const
{
  if (!request.ProjectNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDatasetEntries", "Required field: ProjectName, is not set");
    return UpdateDatasetEntriesOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectName]", false));
  }
  if (!request.DatasetTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDatasetEntries", "Required field: DatasetType, is not set");
    return UpdateDatasetEntriesOutcome(Aws::Client::AWSError<LookoutforVisionErrors>(LookoutforVisionErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetType]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2020-11-20/projects/";
  ss << request.GetProjectName();
  ss << "/datasets/";
  ss << request.GetDatasetType();
  ss << "/entries";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDatasetEntriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetEntriesOutcomeCallable LookoutforVisionClient::UpdateDatasetEntriesCallable(const UpdateDatasetEntriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetEntriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatasetEntries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutforVisionClient::UpdateDatasetEntriesAsync(const UpdateDatasetEntriesRequest& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDatasetEntriesAsyncHelper( request, handler, context ); } );
}

void LookoutforVisionClient::UpdateDatasetEntriesAsyncHelper(const UpdateDatasetEntriesRequest& request, const UpdateDatasetEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDatasetEntries(request), context);
}


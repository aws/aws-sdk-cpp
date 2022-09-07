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

#include <aws/m2/MainframeModernizationClient.h>
#include <aws/m2/MainframeModernizationEndpoint.h>
#include <aws/m2/MainframeModernizationErrorMarshaller.h>
#include <aws/m2/model/CancelBatchJobExecutionRequest.h>
#include <aws/m2/model/CreateApplicationRequest.h>
#include <aws/m2/model/CreateDataSetImportTaskRequest.h>
#include <aws/m2/model/CreateDeploymentRequest.h>
#include <aws/m2/model/CreateEnvironmentRequest.h>
#include <aws/m2/model/DeleteApplicationRequest.h>
#include <aws/m2/model/DeleteApplicationFromEnvironmentRequest.h>
#include <aws/m2/model/DeleteEnvironmentRequest.h>
#include <aws/m2/model/GetApplicationRequest.h>
#include <aws/m2/model/GetApplicationVersionRequest.h>
#include <aws/m2/model/GetBatchJobExecutionRequest.h>
#include <aws/m2/model/GetDataSetDetailsRequest.h>
#include <aws/m2/model/GetDataSetImportTaskRequest.h>
#include <aws/m2/model/GetDeploymentRequest.h>
#include <aws/m2/model/GetEnvironmentRequest.h>
#include <aws/m2/model/ListApplicationVersionsRequest.h>
#include <aws/m2/model/ListApplicationsRequest.h>
#include <aws/m2/model/ListBatchJobDefinitionsRequest.h>
#include <aws/m2/model/ListBatchJobExecutionsRequest.h>
#include <aws/m2/model/ListDataSetImportHistoryRequest.h>
#include <aws/m2/model/ListDataSetsRequest.h>
#include <aws/m2/model/ListDeploymentsRequest.h>
#include <aws/m2/model/ListEngineVersionsRequest.h>
#include <aws/m2/model/ListEnvironmentsRequest.h>
#include <aws/m2/model/ListTagsForResourceRequest.h>
#include <aws/m2/model/StartApplicationRequest.h>
#include <aws/m2/model/StartBatchJobRequest.h>
#include <aws/m2/model/StopApplicationRequest.h>
#include <aws/m2/model/TagResourceRequest.h>
#include <aws/m2/model/UntagResourceRequest.h>
#include <aws/m2/model/UpdateApplicationRequest.h>
#include <aws/m2/model/UpdateEnvironmentRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MainframeModernization;
using namespace Aws::MainframeModernization::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "m2";
static const char* ALLOCATION_TAG = "MainframeModernizationClient";

MainframeModernizationClient::MainframeModernizationClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MainframeModernizationClient::MainframeModernizationClient(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MainframeModernizationClient::MainframeModernizationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MainframeModernizationErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MainframeModernizationClient::~MainframeModernizationClient()
{
}

void MainframeModernizationClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("m2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MainframeModernizationEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MainframeModernizationClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelBatchJobExecutionOutcome MainframeModernizationClient::CancelBatchJobExecution(const CancelBatchJobExecutionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelBatchJobExecution", "Required field: ApplicationId, is not set");
    return CancelBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ExecutionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelBatchJobExecution", "Required field: ExecutionId, is not set");
    return CancelBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/batch-job-executions/");
  uri.AddPathSegment(request.GetExecutionId());
  uri.AddPathSegments("/cancel");
  return CancelBatchJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelBatchJobExecutionOutcomeCallable MainframeModernizationClient::CancelBatchJobExecutionCallable(const CancelBatchJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelBatchJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelBatchJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientCancelBatchJobExecutionAsyncHelper(MainframeModernizationClient const * const clientThis, const CancelBatchJobExecutionRequest& request, const CancelBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelBatchJobExecution(request), context);
}

void MainframeModernizationClient::CancelBatchJobExecutionAsync(const CancelBatchJobExecutionRequest& request, const CancelBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientCancelBatchJobExecutionAsyncHelper( this, request, handler, context ); } );
}

CreateApplicationOutcome MainframeModernizationClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable MainframeModernizationClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientCreateApplicationAsyncHelper(MainframeModernizationClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void MainframeModernizationClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
}

CreateDataSetImportTaskOutcome MainframeModernizationClient::CreateDataSetImportTask(const CreateDataSetImportTaskRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSetImportTask", "Required field: ApplicationId, is not set");
    return CreateDataSetImportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/dataset-import-task");
  return CreateDataSetImportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSetImportTaskOutcomeCallable MainframeModernizationClient::CreateDataSetImportTaskCallable(const CreateDataSetImportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSetImportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSetImportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientCreateDataSetImportTaskAsyncHelper(MainframeModernizationClient const * const clientThis, const CreateDataSetImportTaskRequest& request, const CreateDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSetImportTask(request), context);
}

void MainframeModernizationClient::CreateDataSetImportTaskAsync(const CreateDataSetImportTaskRequest& request, const CreateDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientCreateDataSetImportTaskAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentOutcome MainframeModernizationClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: ApplicationId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/deployments");
  return CreateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable MainframeModernizationClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientCreateDeploymentAsyncHelper(MainframeModernizationClient const * const clientThis, const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeployment(request), context);
}

void MainframeModernizationClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientCreateDeploymentAsyncHelper( this, request, handler, context ); } );
}

CreateEnvironmentOutcome MainframeModernizationClient::CreateEnvironment(const CreateEnvironmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments");
  return CreateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEnvironmentOutcomeCallable MainframeModernizationClient::CreateEnvironmentCallable(const CreateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientCreateEnvironmentAsyncHelper(MainframeModernizationClient const * const clientThis, const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEnvironment(request), context);
}

void MainframeModernizationClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientCreateEnvironmentAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome MainframeModernizationClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable MainframeModernizationClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientDeleteApplicationAsyncHelper(MainframeModernizationClient const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void MainframeModernizationClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationFromEnvironmentOutcome MainframeModernizationClient::DeleteApplicationFromEnvironment(const DeleteApplicationFromEnvironmentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplicationFromEnvironment", "Required field: ApplicationId, is not set");
    return DeleteApplicationFromEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplicationFromEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteApplicationFromEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentId());
  return DeleteApplicationFromEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationFromEnvironmentOutcomeCallable MainframeModernizationClient::DeleteApplicationFromEnvironmentCallable(const DeleteApplicationFromEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationFromEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplicationFromEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientDeleteApplicationFromEnvironmentAsyncHelper(MainframeModernizationClient const * const clientThis, const DeleteApplicationFromEnvironmentRequest& request, const DeleteApplicationFromEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplicationFromEnvironment(request), context);
}

void MainframeModernizationClient::DeleteApplicationFromEnvironmentAsync(const DeleteApplicationFromEnvironmentRequest& request, const DeleteApplicationFromEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientDeleteApplicationFromEnvironmentAsyncHelper( this, request, handler, context ); } );
}

DeleteEnvironmentOutcome MainframeModernizationClient::DeleteEnvironment(const DeleteEnvironmentRequest& request) const
{
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEnvironment", "Required field: EnvironmentId, is not set");
    return DeleteEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  return DeleteEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEnvironmentOutcomeCallable MainframeModernizationClient::DeleteEnvironmentCallable(const DeleteEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientDeleteEnvironmentAsyncHelper(MainframeModernizationClient const * const clientThis, const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEnvironment(request), context);
}

void MainframeModernizationClient::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientDeleteEnvironmentAsyncHelper( this, request, handler, context ); } );
}

GetApplicationOutcome MainframeModernizationClient::GetApplication(const GetApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return GetApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable MainframeModernizationClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientGetApplicationAsyncHelper(MainframeModernizationClient const * const clientThis, const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplication(request), context);
}

void MainframeModernizationClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientGetApplicationAsyncHelper( this, request, handler, context ); } );
}

GetApplicationVersionOutcome MainframeModernizationClient::GetApplicationVersion(const GetApplicationVersionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationVersion", "Required field: ApplicationId, is not set");
    return GetApplicationVersionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ApplicationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationVersion", "Required field: ApplicationVersion, is not set");
    return GetApplicationVersionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetApplicationVersion());
  return GetApplicationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationVersionOutcomeCallable MainframeModernizationClient::GetApplicationVersionCallable(const GetApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientGetApplicationVersionAsyncHelper(MainframeModernizationClient const * const clientThis, const GetApplicationVersionRequest& request, const GetApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApplicationVersion(request), context);
}

void MainframeModernizationClient::GetApplicationVersionAsync(const GetApplicationVersionRequest& request, const GetApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientGetApplicationVersionAsyncHelper( this, request, handler, context ); } );
}

GetBatchJobExecutionOutcome MainframeModernizationClient::GetBatchJobExecution(const GetBatchJobExecutionRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBatchJobExecution", "Required field: ApplicationId, is not set");
    return GetBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ExecutionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBatchJobExecution", "Required field: ExecutionId, is not set");
    return GetBatchJobExecutionOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/batch-job-executions/");
  uri.AddPathSegment(request.GetExecutionId());
  return GetBatchJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBatchJobExecutionOutcomeCallable MainframeModernizationClient::GetBatchJobExecutionCallable(const GetBatchJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBatchJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBatchJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientGetBatchJobExecutionAsyncHelper(MainframeModernizationClient const * const clientThis, const GetBatchJobExecutionRequest& request, const GetBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBatchJobExecution(request), context);
}

void MainframeModernizationClient::GetBatchJobExecutionAsync(const GetBatchJobExecutionRequest& request, const GetBatchJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientGetBatchJobExecutionAsyncHelper( this, request, handler, context ); } );
}

GetDataSetDetailsOutcome MainframeModernizationClient::GetDataSetDetails(const GetDataSetDetailsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSetDetails", "Required field: ApplicationId, is not set");
    return GetDataSetDetailsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.DataSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSetDetails", "Required field: DataSetName, is not set");
    return GetDataSetDetailsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDataSetName());
  return GetDataSetDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataSetDetailsOutcomeCallable MainframeModernizationClient::GetDataSetDetailsCallable(const GetDataSetDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataSetDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataSetDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientGetDataSetDetailsAsyncHelper(MainframeModernizationClient const * const clientThis, const GetDataSetDetailsRequest& request, const GetDataSetDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataSetDetails(request), context);
}

void MainframeModernizationClient::GetDataSetDetailsAsync(const GetDataSetDetailsRequest& request, const GetDataSetDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientGetDataSetDetailsAsyncHelper( this, request, handler, context ); } );
}

GetDataSetImportTaskOutcome MainframeModernizationClient::GetDataSetImportTask(const GetDataSetImportTaskRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSetImportTask", "Required field: ApplicationId, is not set");
    return GetDataSetImportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSetImportTask", "Required field: TaskId, is not set");
    return GetDataSetImportTaskOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/dataset-import-tasks/");
  uri.AddPathSegment(request.GetTaskId());
  return GetDataSetImportTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataSetImportTaskOutcomeCallable MainframeModernizationClient::GetDataSetImportTaskCallable(const GetDataSetImportTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataSetImportTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataSetImportTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientGetDataSetImportTaskAsyncHelper(MainframeModernizationClient const * const clientThis, const GetDataSetImportTaskRequest& request, const GetDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataSetImportTask(request), context);
}

void MainframeModernizationClient::GetDataSetImportTaskAsync(const GetDataSetImportTaskRequest& request, const GetDataSetImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientGetDataSetImportTaskAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentOutcome MainframeModernizationClient::GetDeployment(const GetDeploymentRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: ApplicationId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/deployments/");
  uri.AddPathSegment(request.GetDeploymentId());
  return GetDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcomeCallable MainframeModernizationClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientGetDeploymentAsyncHelper(MainframeModernizationClient const * const clientThis, const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeployment(request), context);
}

void MainframeModernizationClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientGetDeploymentAsyncHelper( this, request, handler, context ); } );
}

GetEnvironmentOutcome MainframeModernizationClient::GetEnvironment(const GetEnvironmentRequest& request) const
{
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEnvironment", "Required field: EnvironmentId, is not set");
    return GetEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  return GetEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEnvironmentOutcomeCallable MainframeModernizationClient::GetEnvironmentCallable(const GetEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientGetEnvironmentAsyncHelper(MainframeModernizationClient const * const clientThis, const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEnvironment(request), context);
}

void MainframeModernizationClient::GetEnvironmentAsync(const GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientGetEnvironmentAsyncHelper( this, request, handler, context ); } );
}

ListApplicationVersionsOutcome MainframeModernizationClient::ListApplicationVersions(const ListApplicationVersionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationVersions", "Required field: ApplicationId, is not set");
    return ListApplicationVersionsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/versions");
  return ListApplicationVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationVersionsOutcomeCallable MainframeModernizationClient::ListApplicationVersionsCallable(const ListApplicationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListApplicationVersionsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplicationVersions(request), context);
}

void MainframeModernizationClient::ListApplicationVersionsAsync(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListApplicationVersionsAsyncHelper( this, request, handler, context ); } );
}

ListApplicationsOutcome MainframeModernizationClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable MainframeModernizationClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListApplicationsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplications(request), context);
}

void MainframeModernizationClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListApplicationsAsyncHelper( this, request, handler, context ); } );
}

ListBatchJobDefinitionsOutcome MainframeModernizationClient::ListBatchJobDefinitions(const ListBatchJobDefinitionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBatchJobDefinitions", "Required field: ApplicationId, is not set");
    return ListBatchJobDefinitionsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/batch-job-definitions");
  return ListBatchJobDefinitionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBatchJobDefinitionsOutcomeCallable MainframeModernizationClient::ListBatchJobDefinitionsCallable(const ListBatchJobDefinitionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBatchJobDefinitionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBatchJobDefinitions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListBatchJobDefinitionsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListBatchJobDefinitionsRequest& request, const ListBatchJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBatchJobDefinitions(request), context);
}

void MainframeModernizationClient::ListBatchJobDefinitionsAsync(const ListBatchJobDefinitionsRequest& request, const ListBatchJobDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListBatchJobDefinitionsAsyncHelper( this, request, handler, context ); } );
}

ListBatchJobExecutionsOutcome MainframeModernizationClient::ListBatchJobExecutions(const ListBatchJobExecutionsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBatchJobExecutions", "Required field: ApplicationId, is not set");
    return ListBatchJobExecutionsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/batch-job-executions");
  return ListBatchJobExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBatchJobExecutionsOutcomeCallable MainframeModernizationClient::ListBatchJobExecutionsCallable(const ListBatchJobExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBatchJobExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBatchJobExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListBatchJobExecutionsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListBatchJobExecutionsRequest& request, const ListBatchJobExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListBatchJobExecutions(request), context);
}

void MainframeModernizationClient::ListBatchJobExecutionsAsync(const ListBatchJobExecutionsRequest& request, const ListBatchJobExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListBatchJobExecutionsAsyncHelper( this, request, handler, context ); } );
}

ListDataSetImportHistoryOutcome MainframeModernizationClient::ListDataSetImportHistory(const ListDataSetImportHistoryRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSetImportHistory", "Required field: ApplicationId, is not set");
    return ListDataSetImportHistoryOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/dataset-import-tasks");
  return ListDataSetImportHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSetImportHistoryOutcomeCallable MainframeModernizationClient::ListDataSetImportHistoryCallable(const ListDataSetImportHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSetImportHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSetImportHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListDataSetImportHistoryAsyncHelper(MainframeModernizationClient const * const clientThis, const ListDataSetImportHistoryRequest& request, const ListDataSetImportHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataSetImportHistory(request), context);
}

void MainframeModernizationClient::ListDataSetImportHistoryAsync(const ListDataSetImportHistoryRequest& request, const ListDataSetImportHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListDataSetImportHistoryAsyncHelper( this, request, handler, context ); } );
}

ListDataSetsOutcome MainframeModernizationClient::ListDataSets(const ListDataSetsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSets", "Required field: ApplicationId, is not set");
    return ListDataSetsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/datasets");
  return ListDataSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSetsOutcomeCallable MainframeModernizationClient::ListDataSetsCallable(const ListDataSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListDataSetsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataSets(request), context);
}

void MainframeModernizationClient::ListDataSetsAsync(const ListDataSetsRequest& request, const ListDataSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListDataSetsAsyncHelper( this, request, handler, context ); } );
}

ListDeploymentsOutcome MainframeModernizationClient::ListDeployments(const ListDeploymentsRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDeployments", "Required field: ApplicationId, is not set");
    return ListDeploymentsOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/deployments");
  return ListDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeploymentsOutcomeCallable MainframeModernizationClient::ListDeploymentsCallable(const ListDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListDeploymentsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeployments(request), context);
}

void MainframeModernizationClient::ListDeploymentsAsync(const ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListDeploymentsAsyncHelper( this, request, handler, context ); } );
}

ListEngineVersionsOutcome MainframeModernizationClient::ListEngineVersions(const ListEngineVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/engine-versions");
  return ListEngineVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEngineVersionsOutcomeCallable MainframeModernizationClient::ListEngineVersionsCallable(const ListEngineVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEngineVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEngineVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListEngineVersionsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListEngineVersionsRequest& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEngineVersions(request), context);
}

void MainframeModernizationClient::ListEngineVersionsAsync(const ListEngineVersionsRequest& request, const ListEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListEngineVersionsAsyncHelper( this, request, handler, context ); } );
}

ListEnvironmentsOutcome MainframeModernizationClient::ListEnvironments(const ListEnvironmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments");
  return ListEnvironmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEnvironmentsOutcomeCallable MainframeModernizationClient::ListEnvironmentsCallable(const ListEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListEnvironmentsAsyncHelper(MainframeModernizationClient const * const clientThis, const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEnvironments(request), context);
}

void MainframeModernizationClient::ListEnvironmentsAsync(const ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListEnvironmentsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome MainframeModernizationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable MainframeModernizationClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientListTagsForResourceAsyncHelper(MainframeModernizationClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void MainframeModernizationClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

StartApplicationOutcome MainframeModernizationClient::StartApplication(const StartApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartApplication", "Required field: ApplicationId, is not set");
    return StartApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/start");
  return StartApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartApplicationOutcomeCallable MainframeModernizationClient::StartApplicationCallable(const StartApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientStartApplicationAsyncHelper(MainframeModernizationClient const * const clientThis, const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartApplication(request), context);
}

void MainframeModernizationClient::StartApplicationAsync(const StartApplicationRequest& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientStartApplicationAsyncHelper( this, request, handler, context ); } );
}

StartBatchJobOutcome MainframeModernizationClient::StartBatchJob(const StartBatchJobRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartBatchJob", "Required field: ApplicationId, is not set");
    return StartBatchJobOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/batch-job");
  return StartBatchJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartBatchJobOutcomeCallable MainframeModernizationClient::StartBatchJobCallable(const StartBatchJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBatchJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBatchJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientStartBatchJobAsyncHelper(MainframeModernizationClient const * const clientThis, const StartBatchJobRequest& request, const StartBatchJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartBatchJob(request), context);
}

void MainframeModernizationClient::StartBatchJobAsync(const StartBatchJobRequest& request, const StartBatchJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientStartBatchJobAsyncHelper( this, request, handler, context ); } );
}

StopApplicationOutcome MainframeModernizationClient::StopApplication(const StopApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopApplication", "Required field: ApplicationId, is not set");
    return StopApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  uri.AddPathSegments("/stop");
  return StopApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopApplicationOutcomeCallable MainframeModernizationClient::StopApplicationCallable(const StopApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientStopApplicationAsyncHelper(MainframeModernizationClient const * const clientThis, const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopApplication(request), context);
}

void MainframeModernizationClient::StopApplicationAsync(const StopApplicationRequest& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientStopApplicationAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome MainframeModernizationClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable MainframeModernizationClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientTagResourceAsyncHelper(MainframeModernizationClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void MainframeModernizationClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome MainframeModernizationClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable MainframeModernizationClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientUntagResourceAsyncHelper(MainframeModernizationClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void MainframeModernizationClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome MainframeModernizationClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/applications/");
  uri.AddPathSegment(request.GetApplicationId());
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable MainframeModernizationClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientUpdateApplicationAsyncHelper(MainframeModernizationClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void MainframeModernizationClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateEnvironmentOutcome MainframeModernizationClient::UpdateEnvironment(const UpdateEnvironmentRequest& request) const
{
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEnvironment", "Required field: EnvironmentId, is not set");
    return UpdateEnvironmentOutcome(Aws::Client::AWSError<MainframeModernizationErrors>(MainframeModernizationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetEnvironmentId());
  return UpdateEnvironmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateEnvironmentOutcomeCallable MainframeModernizationClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MainframeModernizationClientUpdateEnvironmentAsyncHelper(MainframeModernizationClient const * const clientThis, const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEnvironment(request), context);
}

void MainframeModernizationClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ MainframeModernizationClientUpdateEnvironmentAsyncHelper( this, request, handler, context ); } );
}


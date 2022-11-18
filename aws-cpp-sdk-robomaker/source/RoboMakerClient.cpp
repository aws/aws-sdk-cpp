/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/robomaker/RoboMakerClient.h>
#include <aws/robomaker/RoboMakerErrorMarshaller.h>
#include <aws/robomaker/RoboMakerEndpointProvider.h>
#include <aws/robomaker/model/BatchDeleteWorldsRequest.h>
#include <aws/robomaker/model/BatchDescribeSimulationJobRequest.h>
#include <aws/robomaker/model/CancelSimulationJobRequest.h>
#include <aws/robomaker/model/CancelSimulationJobBatchRequest.h>
#include <aws/robomaker/model/CancelWorldExportJobRequest.h>
#include <aws/robomaker/model/CancelWorldGenerationJobRequest.h>
#include <aws/robomaker/model/CreateRobotApplicationRequest.h>
#include <aws/robomaker/model/CreateRobotApplicationVersionRequest.h>
#include <aws/robomaker/model/CreateSimulationApplicationRequest.h>
#include <aws/robomaker/model/CreateSimulationApplicationVersionRequest.h>
#include <aws/robomaker/model/CreateSimulationJobRequest.h>
#include <aws/robomaker/model/CreateWorldExportJobRequest.h>
#include <aws/robomaker/model/CreateWorldGenerationJobRequest.h>
#include <aws/robomaker/model/CreateWorldTemplateRequest.h>
#include <aws/robomaker/model/DeleteRobotApplicationRequest.h>
#include <aws/robomaker/model/DeleteSimulationApplicationRequest.h>
#include <aws/robomaker/model/DeleteWorldTemplateRequest.h>
#include <aws/robomaker/model/DescribeRobotApplicationRequest.h>
#include <aws/robomaker/model/DescribeSimulationApplicationRequest.h>
#include <aws/robomaker/model/DescribeSimulationJobRequest.h>
#include <aws/robomaker/model/DescribeSimulationJobBatchRequest.h>
#include <aws/robomaker/model/DescribeWorldRequest.h>
#include <aws/robomaker/model/DescribeWorldExportJobRequest.h>
#include <aws/robomaker/model/DescribeWorldGenerationJobRequest.h>
#include <aws/robomaker/model/DescribeWorldTemplateRequest.h>
#include <aws/robomaker/model/GetWorldTemplateBodyRequest.h>
#include <aws/robomaker/model/ListRobotApplicationsRequest.h>
#include <aws/robomaker/model/ListSimulationApplicationsRequest.h>
#include <aws/robomaker/model/ListSimulationJobBatchesRequest.h>
#include <aws/robomaker/model/ListSimulationJobsRequest.h>
#include <aws/robomaker/model/ListTagsForResourceRequest.h>
#include <aws/robomaker/model/ListWorldExportJobsRequest.h>
#include <aws/robomaker/model/ListWorldGenerationJobsRequest.h>
#include <aws/robomaker/model/ListWorldTemplatesRequest.h>
#include <aws/robomaker/model/ListWorldsRequest.h>
#include <aws/robomaker/model/RestartSimulationJobRequest.h>
#include <aws/robomaker/model/StartSimulationJobBatchRequest.h>
#include <aws/robomaker/model/TagResourceRequest.h>
#include <aws/robomaker/model/UntagResourceRequest.h>
#include <aws/robomaker/model/UpdateRobotApplicationRequest.h>
#include <aws/robomaker/model/UpdateSimulationApplicationRequest.h>
#include <aws/robomaker/model/UpdateWorldTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RoboMaker;
using namespace Aws::RoboMaker::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* RoboMakerClient::SERVICE_NAME = "robomaker";
const char* RoboMakerClient::ALLOCATION_TAG = "RoboMakerClient";

RoboMakerClient::RoboMakerClient(const RoboMaker::RoboMakerClientConfiguration& clientConfiguration,
                                 std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const AWSCredentials& credentials,
                                 std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider,
                                 const RoboMaker::RoboMakerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider,
                                 const RoboMaker::RoboMakerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  RoboMakerClient::RoboMakerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RoboMakerClient::RoboMakerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RoboMakerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
RoboMakerClient::~RoboMakerClient()
{
}

std::shared_ptr<RoboMakerEndpointProviderBase>& RoboMakerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void RoboMakerClient::init(const RoboMaker::RoboMakerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("RoboMaker");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void RoboMakerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchDeleteWorldsOutcome RoboMakerClient::BatchDeleteWorlds(const BatchDeleteWorldsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteWorlds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteWorlds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batchDeleteWorlds");
  return BatchDeleteWorldsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteWorldsOutcomeCallable RoboMakerClient::BatchDeleteWorldsCallable(const BatchDeleteWorldsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchDeleteWorlds, request, m_executor.get());
}

void RoboMakerClient::BatchDeleteWorldsAsync(const BatchDeleteWorldsRequest& request, const BatchDeleteWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchDeleteWorlds, request, handler, context, m_executor.get());
}

BatchDescribeSimulationJobOutcome RoboMakerClient::BatchDescribeSimulationJob(const BatchDescribeSimulationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDescribeSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDescribeSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/batchDescribeSimulationJob");
  return BatchDescribeSimulationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDescribeSimulationJobOutcomeCallable RoboMakerClient::BatchDescribeSimulationJobCallable(const BatchDescribeSimulationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchDescribeSimulationJob, request, m_executor.get());
}

void RoboMakerClient::BatchDescribeSimulationJobAsync(const BatchDescribeSimulationJobRequest& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchDescribeSimulationJob, request, handler, context, m_executor.get());
}

CancelSimulationJobOutcome RoboMakerClient::CancelSimulationJob(const CancelSimulationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancelSimulationJob");
  return CancelSimulationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelSimulationJobOutcomeCallable RoboMakerClient::CancelSimulationJobCallable(const CancelSimulationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CancelSimulationJob, request, m_executor.get());
}

void RoboMakerClient::CancelSimulationJobAsync(const CancelSimulationJobRequest& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CancelSimulationJob, request, handler, context, m_executor.get());
}

CancelSimulationJobBatchOutcome RoboMakerClient::CancelSimulationJobBatch(const CancelSimulationJobBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelSimulationJobBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelSimulationJobBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancelSimulationJobBatch");
  return CancelSimulationJobBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelSimulationJobBatchOutcomeCallable RoboMakerClient::CancelSimulationJobBatchCallable(const CancelSimulationJobBatchRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CancelSimulationJobBatch, request, m_executor.get());
}

void RoboMakerClient::CancelSimulationJobBatchAsync(const CancelSimulationJobBatchRequest& request, const CancelSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CancelSimulationJobBatch, request, handler, context, m_executor.get());
}

CancelWorldExportJobOutcome RoboMakerClient::CancelWorldExportJob(const CancelWorldExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelWorldExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelWorldExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancelWorldExportJob");
  return CancelWorldExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelWorldExportJobOutcomeCallable RoboMakerClient::CancelWorldExportJobCallable(const CancelWorldExportJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CancelWorldExportJob, request, m_executor.get());
}

void RoboMakerClient::CancelWorldExportJobAsync(const CancelWorldExportJobRequest& request, const CancelWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CancelWorldExportJob, request, handler, context, m_executor.get());
}

CancelWorldGenerationJobOutcome RoboMakerClient::CancelWorldGenerationJob(const CancelWorldGenerationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelWorldGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelWorldGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancelWorldGenerationJob");
  return CancelWorldGenerationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelWorldGenerationJobOutcomeCallable RoboMakerClient::CancelWorldGenerationJobCallable(const CancelWorldGenerationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CancelWorldGenerationJob, request, m_executor.get());
}

void RoboMakerClient::CancelWorldGenerationJobAsync(const CancelWorldGenerationJobRequest& request, const CancelWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CancelWorldGenerationJob, request, handler, context, m_executor.get());
}

CreateRobotApplicationOutcome RoboMakerClient::CreateRobotApplication(const CreateRobotApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createRobotApplication");
  return CreateRobotApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRobotApplicationOutcomeCallable RoboMakerClient::CreateRobotApplicationCallable(const CreateRobotApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateRobotApplication, request, m_executor.get());
}

void RoboMakerClient::CreateRobotApplicationAsync(const CreateRobotApplicationRequest& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateRobotApplication, request, handler, context, m_executor.get());
}

CreateRobotApplicationVersionOutcome RoboMakerClient::CreateRobotApplicationVersion(const CreateRobotApplicationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRobotApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRobotApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createRobotApplicationVersion");
  return CreateRobotApplicationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRobotApplicationVersionOutcomeCallable RoboMakerClient::CreateRobotApplicationVersionCallable(const CreateRobotApplicationVersionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateRobotApplicationVersion, request, m_executor.get());
}

void RoboMakerClient::CreateRobotApplicationVersionAsync(const CreateRobotApplicationVersionRequest& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateRobotApplicationVersion, request, handler, context, m_executor.get());
}

CreateSimulationApplicationOutcome RoboMakerClient::CreateSimulationApplication(const CreateSimulationApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createSimulationApplication");
  return CreateSimulationApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSimulationApplicationOutcomeCallable RoboMakerClient::CreateSimulationApplicationCallable(const CreateSimulationApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateSimulationApplication, request, m_executor.get());
}

void RoboMakerClient::CreateSimulationApplicationAsync(const CreateSimulationApplicationRequest& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateSimulationApplication, request, handler, context, m_executor.get());
}

CreateSimulationApplicationVersionOutcome RoboMakerClient::CreateSimulationApplicationVersion(const CreateSimulationApplicationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSimulationApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSimulationApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createSimulationApplicationVersion");
  return CreateSimulationApplicationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSimulationApplicationVersionOutcomeCallable RoboMakerClient::CreateSimulationApplicationVersionCallable(const CreateSimulationApplicationVersionRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateSimulationApplicationVersion, request, m_executor.get());
}

void RoboMakerClient::CreateSimulationApplicationVersionAsync(const CreateSimulationApplicationVersionRequest& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateSimulationApplicationVersion, request, handler, context, m_executor.get());
}

CreateSimulationJobOutcome RoboMakerClient::CreateSimulationJob(const CreateSimulationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createSimulationJob");
  return CreateSimulationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSimulationJobOutcomeCallable RoboMakerClient::CreateSimulationJobCallable(const CreateSimulationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateSimulationJob, request, m_executor.get());
}

void RoboMakerClient::CreateSimulationJobAsync(const CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateSimulationJob, request, handler, context, m_executor.get());
}

CreateWorldExportJobOutcome RoboMakerClient::CreateWorldExportJob(const CreateWorldExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorldExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorldExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createWorldExportJob");
  return CreateWorldExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorldExportJobOutcomeCallable RoboMakerClient::CreateWorldExportJobCallable(const CreateWorldExportJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateWorldExportJob, request, m_executor.get());
}

void RoboMakerClient::CreateWorldExportJobAsync(const CreateWorldExportJobRequest& request, const CreateWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateWorldExportJob, request, handler, context, m_executor.get());
}

CreateWorldGenerationJobOutcome RoboMakerClient::CreateWorldGenerationJob(const CreateWorldGenerationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorldGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorldGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createWorldGenerationJob");
  return CreateWorldGenerationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorldGenerationJobOutcomeCallable RoboMakerClient::CreateWorldGenerationJobCallable(const CreateWorldGenerationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateWorldGenerationJob, request, m_executor.get());
}

void RoboMakerClient::CreateWorldGenerationJobAsync(const CreateWorldGenerationJobRequest& request, const CreateWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateWorldGenerationJob, request, handler, context, m_executor.get());
}

CreateWorldTemplateOutcome RoboMakerClient::CreateWorldTemplate(const CreateWorldTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/createWorldTemplate");
  return CreateWorldTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorldTemplateOutcomeCallable RoboMakerClient::CreateWorldTemplateCallable(const CreateWorldTemplateRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateWorldTemplate, request, m_executor.get());
}

void RoboMakerClient::CreateWorldTemplateAsync(const CreateWorldTemplateRequest& request, const CreateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateWorldTemplate, request, handler, context, m_executor.get());
}

DeleteRobotApplicationOutcome RoboMakerClient::DeleteRobotApplication(const DeleteRobotApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteRobotApplication");
  return DeleteRobotApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRobotApplicationOutcomeCallable RoboMakerClient::DeleteRobotApplicationCallable(const DeleteRobotApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteRobotApplication, request, m_executor.get());
}

void RoboMakerClient::DeleteRobotApplicationAsync(const DeleteRobotApplicationRequest& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteRobotApplication, request, handler, context, m_executor.get());
}

DeleteSimulationApplicationOutcome RoboMakerClient::DeleteSimulationApplication(const DeleteSimulationApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteSimulationApplication");
  return DeleteSimulationApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSimulationApplicationOutcomeCallable RoboMakerClient::DeleteSimulationApplicationCallable(const DeleteSimulationApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteSimulationApplication, request, m_executor.get());
}

void RoboMakerClient::DeleteSimulationApplicationAsync(const DeleteSimulationApplicationRequest& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteSimulationApplication, request, handler, context, m_executor.get());
}

DeleteWorldTemplateOutcome RoboMakerClient::DeleteWorldTemplate(const DeleteWorldTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deleteWorldTemplate");
  return DeleteWorldTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorldTemplateOutcomeCallable RoboMakerClient::DeleteWorldTemplateCallable(const DeleteWorldTemplateRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteWorldTemplate, request, m_executor.get());
}

void RoboMakerClient::DeleteWorldTemplateAsync(const DeleteWorldTemplateRequest& request, const DeleteWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteWorldTemplate, request, handler, context, m_executor.get());
}

DescribeRobotApplicationOutcome RoboMakerClient::DescribeRobotApplication(const DescribeRobotApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeRobotApplication");
  return DescribeRobotApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRobotApplicationOutcomeCallable RoboMakerClient::DescribeRobotApplicationCallable(const DescribeRobotApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeRobotApplication, request, m_executor.get());
}

void RoboMakerClient::DescribeRobotApplicationAsync(const DescribeRobotApplicationRequest& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeRobotApplication, request, handler, context, m_executor.get());
}

DescribeSimulationApplicationOutcome RoboMakerClient::DescribeSimulationApplication(const DescribeSimulationApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeSimulationApplication");
  return DescribeSimulationApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSimulationApplicationOutcomeCallable RoboMakerClient::DescribeSimulationApplicationCallable(const DescribeSimulationApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeSimulationApplication, request, m_executor.get());
}

void RoboMakerClient::DescribeSimulationApplicationAsync(const DescribeSimulationApplicationRequest& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeSimulationApplication, request, handler, context, m_executor.get());
}

DescribeSimulationJobOutcome RoboMakerClient::DescribeSimulationJob(const DescribeSimulationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeSimulationJob");
  return DescribeSimulationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSimulationJobOutcomeCallable RoboMakerClient::DescribeSimulationJobCallable(const DescribeSimulationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeSimulationJob, request, m_executor.get());
}

void RoboMakerClient::DescribeSimulationJobAsync(const DescribeSimulationJobRequest& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeSimulationJob, request, handler, context, m_executor.get());
}

DescribeSimulationJobBatchOutcome RoboMakerClient::DescribeSimulationJobBatch(const DescribeSimulationJobBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSimulationJobBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSimulationJobBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeSimulationJobBatch");
  return DescribeSimulationJobBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSimulationJobBatchOutcomeCallable RoboMakerClient::DescribeSimulationJobBatchCallable(const DescribeSimulationJobBatchRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeSimulationJobBatch, request, m_executor.get());
}

void RoboMakerClient::DescribeSimulationJobBatchAsync(const DescribeSimulationJobBatchRequest& request, const DescribeSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeSimulationJobBatch, request, handler, context, m_executor.get());
}

DescribeWorldOutcome RoboMakerClient::DescribeWorld(const DescribeWorldRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorld, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorld, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeWorld");
  return DescribeWorldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldOutcomeCallable RoboMakerClient::DescribeWorldCallable(const DescribeWorldRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeWorld, request, m_executor.get());
}

void RoboMakerClient::DescribeWorldAsync(const DescribeWorldRequest& request, const DescribeWorldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeWorld, request, handler, context, m_executor.get());
}

DescribeWorldExportJobOutcome RoboMakerClient::DescribeWorldExportJob(const DescribeWorldExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorldExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorldExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeWorldExportJob");
  return DescribeWorldExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldExportJobOutcomeCallable RoboMakerClient::DescribeWorldExportJobCallable(const DescribeWorldExportJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeWorldExportJob, request, m_executor.get());
}

void RoboMakerClient::DescribeWorldExportJobAsync(const DescribeWorldExportJobRequest& request, const DescribeWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeWorldExportJob, request, handler, context, m_executor.get());
}

DescribeWorldGenerationJobOutcome RoboMakerClient::DescribeWorldGenerationJob(const DescribeWorldGenerationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorldGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorldGenerationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeWorldGenerationJob");
  return DescribeWorldGenerationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldGenerationJobOutcomeCallable RoboMakerClient::DescribeWorldGenerationJobCallable(const DescribeWorldGenerationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeWorldGenerationJob, request, m_executor.get());
}

void RoboMakerClient::DescribeWorldGenerationJobAsync(const DescribeWorldGenerationJobRequest& request, const DescribeWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeWorldGenerationJob, request, handler, context, m_executor.get());
}

DescribeWorldTemplateOutcome RoboMakerClient::DescribeWorldTemplate(const DescribeWorldTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describeWorldTemplate");
  return DescribeWorldTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeWorldTemplateOutcomeCallable RoboMakerClient::DescribeWorldTemplateCallable(const DescribeWorldTemplateRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeWorldTemplate, request, m_executor.get());
}

void RoboMakerClient::DescribeWorldTemplateAsync(const DescribeWorldTemplateRequest& request, const DescribeWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeWorldTemplate, request, handler, context, m_executor.get());
}

GetWorldTemplateBodyOutcome RoboMakerClient::GetWorldTemplateBody(const GetWorldTemplateBodyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorldTemplateBody, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorldTemplateBody, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getWorldTemplateBody");
  return GetWorldTemplateBodyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorldTemplateBodyOutcomeCallable RoboMakerClient::GetWorldTemplateBodyCallable(const GetWorldTemplateBodyRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetWorldTemplateBody, request, m_executor.get());
}

void RoboMakerClient::GetWorldTemplateBodyAsync(const GetWorldTemplateBodyRequest& request, const GetWorldTemplateBodyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetWorldTemplateBody, request, handler, context, m_executor.get());
}

ListRobotApplicationsOutcome RoboMakerClient::ListRobotApplications(const ListRobotApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRobotApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRobotApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listRobotApplications");
  return ListRobotApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRobotApplicationsOutcomeCallable RoboMakerClient::ListRobotApplicationsCallable(const ListRobotApplicationsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListRobotApplications, request, m_executor.get());
}

void RoboMakerClient::ListRobotApplicationsAsync(const ListRobotApplicationsRequest& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListRobotApplications, request, handler, context, m_executor.get());
}

ListSimulationApplicationsOutcome RoboMakerClient::ListSimulationApplications(const ListSimulationApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSimulationApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSimulationApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listSimulationApplications");
  return ListSimulationApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSimulationApplicationsOutcomeCallable RoboMakerClient::ListSimulationApplicationsCallable(const ListSimulationApplicationsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListSimulationApplications, request, m_executor.get());
}

void RoboMakerClient::ListSimulationApplicationsAsync(const ListSimulationApplicationsRequest& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListSimulationApplications, request, handler, context, m_executor.get());
}

ListSimulationJobBatchesOutcome RoboMakerClient::ListSimulationJobBatches(const ListSimulationJobBatchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSimulationJobBatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSimulationJobBatches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listSimulationJobBatches");
  return ListSimulationJobBatchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSimulationJobBatchesOutcomeCallable RoboMakerClient::ListSimulationJobBatchesCallable(const ListSimulationJobBatchesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListSimulationJobBatches, request, m_executor.get());
}

void RoboMakerClient::ListSimulationJobBatchesAsync(const ListSimulationJobBatchesRequest& request, const ListSimulationJobBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListSimulationJobBatches, request, handler, context, m_executor.get());
}

ListSimulationJobsOutcome RoboMakerClient::ListSimulationJobs(const ListSimulationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSimulationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSimulationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listSimulationJobs");
  return ListSimulationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSimulationJobsOutcomeCallable RoboMakerClient::ListSimulationJobsCallable(const ListSimulationJobsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListSimulationJobs, request, m_executor.get());
}

void RoboMakerClient::ListSimulationJobsAsync(const ListSimulationJobsRequest& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListSimulationJobs, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome RoboMakerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable RoboMakerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void RoboMakerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

ListWorldExportJobsOutcome RoboMakerClient::ListWorldExportJobs(const ListWorldExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorldExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorldExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listWorldExportJobs");
  return ListWorldExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldExportJobsOutcomeCallable RoboMakerClient::ListWorldExportJobsCallable(const ListWorldExportJobsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListWorldExportJobs, request, m_executor.get());
}

void RoboMakerClient::ListWorldExportJobsAsync(const ListWorldExportJobsRequest& request, const ListWorldExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListWorldExportJobs, request, handler, context, m_executor.get());
}

ListWorldGenerationJobsOutcome RoboMakerClient::ListWorldGenerationJobs(const ListWorldGenerationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorldGenerationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorldGenerationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listWorldGenerationJobs");
  return ListWorldGenerationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldGenerationJobsOutcomeCallable RoboMakerClient::ListWorldGenerationJobsCallable(const ListWorldGenerationJobsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListWorldGenerationJobs, request, m_executor.get());
}

void RoboMakerClient::ListWorldGenerationJobsAsync(const ListWorldGenerationJobsRequest& request, const ListWorldGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListWorldGenerationJobs, request, handler, context, m_executor.get());
}

ListWorldTemplatesOutcome RoboMakerClient::ListWorldTemplates(const ListWorldTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorldTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorldTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listWorldTemplates");
  return ListWorldTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldTemplatesOutcomeCallable RoboMakerClient::ListWorldTemplatesCallable(const ListWorldTemplatesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListWorldTemplates, request, m_executor.get());
}

void RoboMakerClient::ListWorldTemplatesAsync(const ListWorldTemplatesRequest& request, const ListWorldTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListWorldTemplates, request, handler, context, m_executor.get());
}

ListWorldsOutcome RoboMakerClient::ListWorlds(const ListWorldsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorlds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorlds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listWorlds");
  return ListWorldsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListWorldsOutcomeCallable RoboMakerClient::ListWorldsCallable(const ListWorldsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListWorlds, request, m_executor.get());
}

void RoboMakerClient::ListWorldsAsync(const ListWorldsRequest& request, const ListWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListWorlds, request, handler, context, m_executor.get());
}

RestartSimulationJobOutcome RoboMakerClient::RestartSimulationJob(const RestartSimulationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestartSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestartSimulationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/restartSimulationJob");
  return RestartSimulationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestartSimulationJobOutcomeCallable RoboMakerClient::RestartSimulationJobCallable(const RestartSimulationJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(RestartSimulationJob, request, m_executor.get());
}

void RoboMakerClient::RestartSimulationJobAsync(const RestartSimulationJobRequest& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(RestartSimulationJob, request, handler, context, m_executor.get());
}

StartSimulationJobBatchOutcome RoboMakerClient::StartSimulationJobBatch(const StartSimulationJobBatchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSimulationJobBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSimulationJobBatch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/startSimulationJobBatch");
  return StartSimulationJobBatchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSimulationJobBatchOutcomeCallable RoboMakerClient::StartSimulationJobBatchCallable(const StartSimulationJobBatchRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(StartSimulationJobBatch, request, m_executor.get());
}

void RoboMakerClient::StartSimulationJobBatchAsync(const StartSimulationJobBatchRequest& request, const StartSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(StartSimulationJobBatch, request, handler, context, m_executor.get());
}

TagResourceOutcome RoboMakerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable RoboMakerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void RoboMakerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome RoboMakerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<RoboMakerErrors>(RoboMakerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable RoboMakerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void RoboMakerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateRobotApplicationOutcome RoboMakerClient::UpdateRobotApplication(const UpdateRobotApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRobotApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateRobotApplication");
  return UpdateRobotApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRobotApplicationOutcomeCallable RoboMakerClient::UpdateRobotApplicationCallable(const UpdateRobotApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateRobotApplication, request, m_executor.get());
}

void RoboMakerClient::UpdateRobotApplicationAsync(const UpdateRobotApplicationRequest& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateRobotApplication, request, handler, context, m_executor.get());
}

UpdateSimulationApplicationOutcome RoboMakerClient::UpdateSimulationApplication(const UpdateSimulationApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSimulationApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateSimulationApplication");
  return UpdateSimulationApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSimulationApplicationOutcomeCallable RoboMakerClient::UpdateSimulationApplicationCallable(const UpdateSimulationApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateSimulationApplication, request, m_executor.get());
}

void RoboMakerClient::UpdateSimulationApplicationAsync(const UpdateSimulationApplicationRequest& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateSimulationApplication, request, handler, context, m_executor.get());
}

UpdateWorldTemplateOutcome RoboMakerClient::UpdateWorldTemplate(const UpdateWorldTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorldTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/updateWorldTemplate");
  return UpdateWorldTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorldTemplateOutcomeCallable RoboMakerClient::UpdateWorldTemplateCallable(const UpdateWorldTemplateRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateWorldTemplate, request, m_executor.get());
}

void RoboMakerClient::UpdateWorldTemplateAsync(const UpdateWorldTemplateRequest& request, const UpdateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateWorldTemplate, request, handler, context, m_executor.get());
}


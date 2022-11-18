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

#include <aws/iotanalytics/IoTAnalyticsClient.h>
#include <aws/iotanalytics/IoTAnalyticsErrorMarshaller.h>
#include <aws/iotanalytics/IoTAnalyticsEndpointProvider.h>
#include <aws/iotanalytics/model/BatchPutMessageRequest.h>
#include <aws/iotanalytics/model/CancelPipelineReprocessingRequest.h>
#include <aws/iotanalytics/model/CreateChannelRequest.h>
#include <aws/iotanalytics/model/CreateDatasetRequest.h>
#include <aws/iotanalytics/model/CreateDatasetContentRequest.h>
#include <aws/iotanalytics/model/CreateDatastoreRequest.h>
#include <aws/iotanalytics/model/CreatePipelineRequest.h>
#include <aws/iotanalytics/model/DeleteChannelRequest.h>
#include <aws/iotanalytics/model/DeleteDatasetRequest.h>
#include <aws/iotanalytics/model/DeleteDatasetContentRequest.h>
#include <aws/iotanalytics/model/DeleteDatastoreRequest.h>
#include <aws/iotanalytics/model/DeletePipelineRequest.h>
#include <aws/iotanalytics/model/DescribeChannelRequest.h>
#include <aws/iotanalytics/model/DescribeDatasetRequest.h>
#include <aws/iotanalytics/model/DescribeDatastoreRequest.h>
#include <aws/iotanalytics/model/DescribeLoggingOptionsRequest.h>
#include <aws/iotanalytics/model/DescribePipelineRequest.h>
#include <aws/iotanalytics/model/GetDatasetContentRequest.h>
#include <aws/iotanalytics/model/ListChannelsRequest.h>
#include <aws/iotanalytics/model/ListDatasetContentsRequest.h>
#include <aws/iotanalytics/model/ListDatasetsRequest.h>
#include <aws/iotanalytics/model/ListDatastoresRequest.h>
#include <aws/iotanalytics/model/ListPipelinesRequest.h>
#include <aws/iotanalytics/model/ListTagsForResourceRequest.h>
#include <aws/iotanalytics/model/PutLoggingOptionsRequest.h>
#include <aws/iotanalytics/model/RunPipelineActivityRequest.h>
#include <aws/iotanalytics/model/SampleChannelDataRequest.h>
#include <aws/iotanalytics/model/StartPipelineReprocessingRequest.h>
#include <aws/iotanalytics/model/TagResourceRequest.h>
#include <aws/iotanalytics/model/UntagResourceRequest.h>
#include <aws/iotanalytics/model/UpdateChannelRequest.h>
#include <aws/iotanalytics/model/UpdateDatasetRequest.h>
#include <aws/iotanalytics/model/UpdateDatastoreRequest.h>
#include <aws/iotanalytics/model/UpdatePipelineRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTAnalytics;
using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* IoTAnalyticsClient::SERVICE_NAME = "iotanalytics";
const char* IoTAnalyticsClient::ALLOCATION_TAG = "IoTAnalyticsClient";

IoTAnalyticsClient::IoTAnalyticsClient(const IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration,
                                       std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const AWSCredentials& credentials,
                                       std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider,
                                       const IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<IoTAnalyticsEndpointProviderBase> endpointProvider,
                                       const IoTAnalytics::IoTAnalyticsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  IoTAnalyticsClient::IoTAnalyticsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<IoTAnalyticsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTAnalyticsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

IoTAnalyticsClient::IoTAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<IoTAnalyticsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
IoTAnalyticsClient::~IoTAnalyticsClient()
{
}

std::shared_ptr<IoTAnalyticsEndpointProviderBase>& IoTAnalyticsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTAnalyticsClient::init(const IoTAnalytics::IoTAnalyticsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoTAnalytics");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void IoTAnalyticsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchPutMessageOutcome IoTAnalyticsClient::BatchPutMessage(const BatchPutMessageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchPutMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchPutMessage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/batch");
  return BatchPutMessageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchPutMessageOutcomeCallable IoTAnalyticsClient::BatchPutMessageCallable(const BatchPutMessageRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchPutMessage, request, m_executor.get());
}

void IoTAnalyticsClient::BatchPutMessageAsync(const BatchPutMessageRequest& request, const BatchPutMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchPutMessage, request, handler, context, m_executor.get());
}

CancelPipelineReprocessingOutcome IoTAnalyticsClient::CancelPipelineReprocessing(const CancelPipelineReprocessingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelPipelineReprocessing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelPipelineReprocessing", "Required field: PipelineName, is not set");
    return CancelPipelineReprocessingOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  if (!request.ReprocessingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelPipelineReprocessing", "Required field: ReprocessingId, is not set");
    return CancelPipelineReprocessingOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReprocessingId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelPipelineReprocessing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reprocessing/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReprocessingId());
  return CancelPipelineReprocessingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelPipelineReprocessingOutcomeCallable IoTAnalyticsClient::CancelPipelineReprocessingCallable(const CancelPipelineReprocessingRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CancelPipelineReprocessing, request, m_executor.get());
}

void IoTAnalyticsClient::CancelPipelineReprocessingAsync(const CancelPipelineReprocessingRequest& request, const CancelPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CancelPipelineReprocessing, request, handler, context, m_executor.get());
}

CreateChannelOutcome IoTAnalyticsClient::CreateChannel(const CreateChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  return CreateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChannelOutcomeCallable IoTAnalyticsClient::CreateChannelCallable(const CreateChannelRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateChannel, request, m_executor.get());
}

void IoTAnalyticsClient::CreateChannelAsync(const CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateChannel, request, handler, context, m_executor.get());
}

CreateDatasetOutcome IoTAnalyticsClient::CreateDataset(const CreateDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  return CreateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable IoTAnalyticsClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateDataset, request, m_executor.get());
}

void IoTAnalyticsClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateDataset, request, handler, context, m_executor.get());
}

CreateDatasetContentOutcome IoTAnalyticsClient::CreateDatasetContent(const CreateDatasetContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDatasetContent", "Required field: DatasetName, is not set");
    return CreateDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/content");
  return CreateDatasetContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetContentOutcomeCallable IoTAnalyticsClient::CreateDatasetContentCallable(const CreateDatasetContentRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateDatasetContent, request, m_executor.get());
}

void IoTAnalyticsClient::CreateDatasetContentAsync(const CreateDatasetContentRequest& request, const CreateDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateDatasetContent, request, handler, context, m_executor.get());
}

CreateDatastoreOutcome IoTAnalyticsClient::CreateDatastore(const CreateDatastoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datastores");
  return CreateDatastoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatastoreOutcomeCallable IoTAnalyticsClient::CreateDatastoreCallable(const CreateDatastoreRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateDatastore, request, m_executor.get());
}

void IoTAnalyticsClient::CreateDatastoreAsync(const CreateDatastoreRequest& request, const CreateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateDatastore, request, handler, context, m_executor.get());
}

CreatePipelineOutcome IoTAnalyticsClient::CreatePipeline(const CreatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelines");
  return CreatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePipelineOutcomeCallable IoTAnalyticsClient::CreatePipelineCallable(const CreatePipelineRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreatePipeline, request, m_executor.get());
}

void IoTAnalyticsClient::CreatePipelineAsync(const CreatePipelineRequest& request, const CreatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreatePipeline, request, handler, context, m_executor.get());
}

DeleteChannelOutcome IoTAnalyticsClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return DeleteChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteChannelOutcomeCallable IoTAnalyticsClient::DeleteChannelCallable(const DeleteChannelRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteChannel, request, m_executor.get());
}

void IoTAnalyticsClient::DeleteChannelAsync(const DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteChannel, request, handler, context, m_executor.get());
}

DeleteDatasetOutcome IoTAnalyticsClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  return DeleteDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable IoTAnalyticsClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteDataset, request, m_executor.get());
}

void IoTAnalyticsClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteDataset, request, handler, context, m_executor.get());
}

DeleteDatasetContentOutcome IoTAnalyticsClient::DeleteDatasetContent(const DeleteDatasetContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatasetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatasetContent", "Required field: DatasetName, is not set");
    return DeleteDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatasetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/content");
  return DeleteDatasetContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetContentOutcomeCallable IoTAnalyticsClient::DeleteDatasetContentCallable(const DeleteDatasetContentRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteDatasetContent, request, m_executor.get());
}

void IoTAnalyticsClient::DeleteDatasetContentAsync(const DeleteDatasetContentRequest& request, const DeleteDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteDatasetContent, request, handler, context, m_executor.get());
}

DeleteDatastoreOutcome IoTAnalyticsClient::DeleteDatastore(const DeleteDatastoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatastore", "Required field: DatastoreName, is not set");
    return DeleteDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datastores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreName());
  return DeleteDatastoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatastoreOutcomeCallable IoTAnalyticsClient::DeleteDatastoreCallable(const DeleteDatastoreRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteDatastore, request, m_executor.get());
}

void IoTAnalyticsClient::DeleteDatastoreAsync(const DeleteDatastoreRequest& request, const DeleteDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteDatastore, request, handler, context, m_executor.get());
}

DeletePipelineOutcome IoTAnalyticsClient::DeletePipeline(const DeletePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePipeline", "Required field: PipelineName, is not set");
    return DeletePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return DeletePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePipelineOutcomeCallable IoTAnalyticsClient::DeletePipelineCallable(const DeletePipelineRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeletePipeline, request, m_executor.get());
}

void IoTAnalyticsClient::DeletePipelineAsync(const DeletePipelineRequest& request, const DeletePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeletePipeline, request, handler, context, m_executor.get());
}

DescribeChannelOutcome IoTAnalyticsClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelName, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return DescribeChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeChannelOutcomeCallable IoTAnalyticsClient::DescribeChannelCallable(const DescribeChannelRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeChannel, request, m_executor.get());
}

void IoTAnalyticsClient::DescribeChannelAsync(const DescribeChannelRequest& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeChannel, request, handler, context, m_executor.get());
}

DescribeDatasetOutcome IoTAnalyticsClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  return DescribeDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable IoTAnalyticsClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeDataset, request, m_executor.get());
}

void IoTAnalyticsClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeDataset, request, handler, context, m_executor.get());
}

DescribeDatastoreOutcome IoTAnalyticsClient::DescribeDatastore(const DescribeDatastoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDatastore", "Required field: DatastoreName, is not set");
    return DescribeDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datastores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreName());
  return DescribeDatastoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatastoreOutcomeCallable IoTAnalyticsClient::DescribeDatastoreCallable(const DescribeDatastoreRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeDatastore, request, m_executor.get());
}

void IoTAnalyticsClient::DescribeDatastoreAsync(const DescribeDatastoreRequest& request, const DescribeDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeDatastore, request, handler, context, m_executor.get());
}

DescribeLoggingOptionsOutcome IoTAnalyticsClient::DescribeLoggingOptions(const DescribeLoggingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  return DescribeLoggingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoggingOptionsOutcomeCallable IoTAnalyticsClient::DescribeLoggingOptionsCallable(const DescribeLoggingOptionsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeLoggingOptions, request, m_executor.get());
}

void IoTAnalyticsClient::DescribeLoggingOptionsAsync(const DescribeLoggingOptionsRequest& request, const DescribeLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeLoggingOptions, request, handler, context, m_executor.get());
}

DescribePipelineOutcome IoTAnalyticsClient::DescribePipeline(const DescribePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePipeline", "Required field: PipelineName, is not set");
    return DescribePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return DescribePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePipelineOutcomeCallable IoTAnalyticsClient::DescribePipelineCallable(const DescribePipelineRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribePipeline, request, m_executor.get());
}

void IoTAnalyticsClient::DescribePipelineAsync(const DescribePipelineRequest& request, const DescribePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribePipeline, request, handler, context, m_executor.get());
}

GetDatasetContentOutcome IoTAnalyticsClient::GetDatasetContent(const GetDatasetContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatasetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDatasetContent", "Required field: DatasetName, is not set");
    return GetDatasetContentOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatasetContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/content");
  return GetDatasetContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatasetContentOutcomeCallable IoTAnalyticsClient::GetDatasetContentCallable(const GetDatasetContentRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetDatasetContent, request, m_executor.get());
}

void IoTAnalyticsClient::GetDatasetContentAsync(const GetDatasetContentRequest& request, const GetDatasetContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetDatasetContent, request, handler, context, m_executor.get());
}

ListChannelsOutcome IoTAnalyticsClient::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  return ListChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChannelsOutcomeCallable IoTAnalyticsClient::ListChannelsCallable(const ListChannelsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListChannels, request, m_executor.get());
}

void IoTAnalyticsClient::ListChannelsAsync(const ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListChannels, request, handler, context, m_executor.get());
}

ListDatasetContentsOutcome IoTAnalyticsClient::ListDatasetContents(const ListDatasetContentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDatasetContents", "Required field: DatasetName, is not set");
    return ListDatasetContentsOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetContents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  return ListDatasetContentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetContentsOutcomeCallable IoTAnalyticsClient::ListDatasetContentsCallable(const ListDatasetContentsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDatasetContents, request, m_executor.get());
}

void IoTAnalyticsClient::ListDatasetContentsAsync(const ListDatasetContentsRequest& request, const ListDatasetContentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDatasetContents, request, handler, context, m_executor.get());
}

ListDatasetsOutcome IoTAnalyticsClient::ListDatasets(const ListDatasetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  return ListDatasetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable IoTAnalyticsClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDatasets, request, m_executor.get());
}

void IoTAnalyticsClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDatasets, request, handler, context, m_executor.get());
}

ListDatastoresOutcome IoTAnalyticsClient::ListDatastores(const ListDatastoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatastores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatastores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datastores");
  return ListDatastoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatastoresOutcomeCallable IoTAnalyticsClient::ListDatastoresCallable(const ListDatastoresRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDatastores, request, m_executor.get());
}

void IoTAnalyticsClient::ListDatastoresAsync(const ListDatastoresRequest& request, const ListDatastoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDatastores, request, handler, context, m_executor.get());
}

ListPipelinesOutcome IoTAnalyticsClient::ListPipelines(const ListPipelinesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelines");
  return ListPipelinesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPipelinesOutcomeCallable IoTAnalyticsClient::ListPipelinesCallable(const ListPipelinesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListPipelines, request, m_executor.get());
}

void IoTAnalyticsClient::ListPipelinesAsync(const ListPipelinesRequest& request, const ListPipelinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListPipelines, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome IoTAnalyticsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable IoTAnalyticsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void IoTAnalyticsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

PutLoggingOptionsOutcome IoTAnalyticsClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLoggingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  return PutLoggingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutLoggingOptionsOutcomeCallable IoTAnalyticsClient::PutLoggingOptionsCallable(const PutLoggingOptionsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(PutLoggingOptions, request, m_executor.get());
}

void IoTAnalyticsClient::PutLoggingOptionsAsync(const PutLoggingOptionsRequest& request, const PutLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(PutLoggingOptions, request, handler, context, m_executor.get());
}

RunPipelineActivityOutcome IoTAnalyticsClient::RunPipelineActivity(const RunPipelineActivityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RunPipelineActivity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RunPipelineActivity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelineactivities/run");
  return RunPipelineActivityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RunPipelineActivityOutcomeCallable IoTAnalyticsClient::RunPipelineActivityCallable(const RunPipelineActivityRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(RunPipelineActivity, request, m_executor.get());
}

void IoTAnalyticsClient::RunPipelineActivityAsync(const RunPipelineActivityRequest& request, const RunPipelineActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(RunPipelineActivity, request, handler, context, m_executor.get());
}

SampleChannelDataOutcome IoTAnalyticsClient::SampleChannelData(const SampleChannelDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SampleChannelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SampleChannelData", "Required field: ChannelName, is not set");
    return SampleChannelDataOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SampleChannelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sample");
  return SampleChannelDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

SampleChannelDataOutcomeCallable IoTAnalyticsClient::SampleChannelDataCallable(const SampleChannelDataRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SampleChannelData, request, m_executor.get());
}

void IoTAnalyticsClient::SampleChannelDataAsync(const SampleChannelDataRequest& request, const SampleChannelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SampleChannelData, request, handler, context, m_executor.get());
}

StartPipelineReprocessingOutcome IoTAnalyticsClient::StartPipelineReprocessing(const StartPipelineReprocessingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartPipelineReprocessing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartPipelineReprocessing", "Required field: PipelineName, is not set");
    return StartPipelineReprocessingOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartPipelineReprocessing, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reprocessing");
  return StartPipelineReprocessingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPipelineReprocessingOutcomeCallable IoTAnalyticsClient::StartPipelineReprocessingCallable(const StartPipelineReprocessingRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(StartPipelineReprocessing, request, m_executor.get());
}

void IoTAnalyticsClient::StartPipelineReprocessingAsync(const StartPipelineReprocessingRequest& request, const StartPipelineReprocessingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(StartPipelineReprocessing, request, handler, context, m_executor.get());
}

TagResourceOutcome IoTAnalyticsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable IoTAnalyticsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void IoTAnalyticsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome IoTAnalyticsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable IoTAnalyticsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void IoTAnalyticsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateChannelOutcome IoTAnalyticsClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelName());
  return UpdateChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChannelOutcomeCallable IoTAnalyticsClient::UpdateChannelCallable(const UpdateChannelRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateChannel, request, m_executor.get());
}

void IoTAnalyticsClient::UpdateChannelAsync(const UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateChannel, request, handler, context, m_executor.get());
}

UpdateDatasetOutcome IoTAnalyticsClient::UpdateDataset(const UpdateDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatasetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: DatasetName, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  return UpdateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetOutcomeCallable IoTAnalyticsClient::UpdateDatasetCallable(const UpdateDatasetRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateDataset, request, m_executor.get());
}

void IoTAnalyticsClient::UpdateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateDataset, request, handler, context, m_executor.get());
}

UpdateDatastoreOutcome IoTAnalyticsClient::UpdateDatastore(const UpdateDatastoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDatastore", "Required field: DatastoreName, is not set");
    return UpdateDatastoreOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/datastores/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatastoreName());
  return UpdateDatastoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatastoreOutcomeCallable IoTAnalyticsClient::UpdateDatastoreCallable(const UpdateDatastoreRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateDatastore, request, m_executor.get());
}

void IoTAnalyticsClient::UpdateDatastoreAsync(const UpdateDatastoreRequest& request, const UpdateDatastoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateDatastore, request, handler, context, m_executor.get());
}

UpdatePipelineOutcome IoTAnalyticsClient::UpdatePipeline(const UpdatePipelineRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PipelineNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePipeline", "Required field: PipelineName, is not set");
    return UpdatePipelineOutcome(Aws::Client::AWSError<IoTAnalyticsErrors>(IoTAnalyticsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePipeline, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pipelines/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPipelineName());
  return UpdatePipelineOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdatePipelineOutcomeCallable IoTAnalyticsClient::UpdatePipelineCallable(const UpdatePipelineRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdatePipeline, request, m_executor.get());
}

void IoTAnalyticsClient::UpdatePipelineAsync(const UpdatePipelineRequest& request, const UpdatePipelineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdatePipeline, request, handler, context, m_executor.get());
}


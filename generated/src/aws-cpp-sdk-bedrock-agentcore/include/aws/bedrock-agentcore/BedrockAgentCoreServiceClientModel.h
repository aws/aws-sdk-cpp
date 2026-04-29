/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-agentcore/BedrockAgentCoreEndpointProvider.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in BedrockAgentCoreClient header */
#include <aws/bedrock-agentcore/model/BatchCreateMemoryRecordsResult.h>
#include <aws/bedrock-agentcore/model/BatchDeleteMemoryRecordsResult.h>
#include <aws/bedrock-agentcore/model/BatchUpdateMemoryRecordsResult.h>
#include <aws/bedrock-agentcore/model/CompleteResourceTokenAuthResult.h>
#include <aws/bedrock-agentcore/model/CreateABTestResult.h>
#include <aws/bedrock-agentcore/model/CreateEventResult.h>
#include <aws/bedrock-agentcore/model/DeleteABTestResult.h>
#include <aws/bedrock-agentcore/model/DeleteBatchEvaluationResult.h>
#include <aws/bedrock-agentcore/model/DeleteEventResult.h>
#include <aws/bedrock-agentcore/model/DeleteMemoryRecordResult.h>
#include <aws/bedrock-agentcore/model/DeleteRecommendationResult.h>
#include <aws/bedrock-agentcore/model/EvaluateResult.h>
#include <aws/bedrock-agentcore/model/GetABTestResult.h>
#include <aws/bedrock-agentcore/model/GetAgentCardResult.h>
#include <aws/bedrock-agentcore/model/GetBatchEvaluationResult.h>
#include <aws/bedrock-agentcore/model/GetBrowserSessionResult.h>
#include <aws/bedrock-agentcore/model/GetCodeInterpreterSessionResult.h>
#include <aws/bedrock-agentcore/model/GetEventResult.h>
#include <aws/bedrock-agentcore/model/GetMemoryRecordResult.h>
#include <aws/bedrock-agentcore/model/GetRecommendationResult.h>
#include <aws/bedrock-agentcore/model/GetResourceApiKeyResult.h>
#include <aws/bedrock-agentcore/model/GetResourceOauth2TokenResult.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForJWTResult.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForUserIdResult.h>
#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenResult.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeResult.h>
#include <aws/bedrock-agentcore/model/InvokeBrowserResult.h>
#include <aws/bedrock-agentcore/model/ListABTestsRequest.h>
#include <aws/bedrock-agentcore/model/ListABTestsResult.h>
#include <aws/bedrock-agentcore/model/ListActorsResult.h>
#include <aws/bedrock-agentcore/model/ListBatchEvaluationsRequest.h>
#include <aws/bedrock-agentcore/model/ListBatchEvaluationsResult.h>
#include <aws/bedrock-agentcore/model/ListBrowserSessionsResult.h>
#include <aws/bedrock-agentcore/model/ListCodeInterpreterSessionsResult.h>
#include <aws/bedrock-agentcore/model/ListEventsResult.h>
#include <aws/bedrock-agentcore/model/ListMemoryExtractionJobsResult.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsResult.h>
#include <aws/bedrock-agentcore/model/ListRecommendationsRequest.h>
#include <aws/bedrock-agentcore/model/ListRecommendationsResult.h>
#include <aws/bedrock-agentcore/model/ListSessionsResult.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsResult.h>
#include <aws/bedrock-agentcore/model/SaveBrowserSessionProfileResult.h>
#include <aws/bedrock-agentcore/model/SearchRegistryRecordsResult.h>
#include <aws/bedrock-agentcore/model/StartBatchEvaluationResult.h>
#include <aws/bedrock-agentcore/model/StartBrowserSessionResult.h>
#include <aws/bedrock-agentcore/model/StartCodeInterpreterSessionResult.h>
#include <aws/bedrock-agentcore/model/StartMemoryExtractionJobResult.h>
#include <aws/bedrock-agentcore/model/StartRecommendationResult.h>
#include <aws/bedrock-agentcore/model/StopBatchEvaluationResult.h>
#include <aws/bedrock-agentcore/model/StopBrowserSessionResult.h>
#include <aws/bedrock-agentcore/model/StopCodeInterpreterSessionResult.h>
#include <aws/bedrock-agentcore/model/StopRuntimeSessionResult.h>
#include <aws/bedrock-agentcore/model/UpdateABTestResult.h>
#include <aws/bedrock-agentcore/model/UpdateBrowserStreamResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in BedrockAgentCoreClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace BedrockAgentCore {
using BedrockAgentCoreClientConfiguration = Aws::Client::GenericClientConfiguration;
using BedrockAgentCoreEndpointProviderBase = Aws::BedrockAgentCore::Endpoint::BedrockAgentCoreEndpointProviderBase;
using BedrockAgentCoreEndpointProvider = Aws::BedrockAgentCore::Endpoint::BedrockAgentCoreEndpointProvider;

namespace Model {
/* Service model forward declarations required in BedrockAgentCoreClient header */
class BatchCreateMemoryRecordsRequest;
class BatchDeleteMemoryRecordsRequest;
class BatchUpdateMemoryRecordsRequest;
class CompleteResourceTokenAuthRequest;
class CreateABTestRequest;
class CreateEventRequest;
class DeleteABTestRequest;
class DeleteBatchEvaluationRequest;
class DeleteEventRequest;
class DeleteMemoryRecordRequest;
class DeleteRecommendationRequest;
class EvaluateRequest;
class GetABTestRequest;
class GetAgentCardRequest;
class GetBatchEvaluationRequest;
class GetBrowserSessionRequest;
class GetCodeInterpreterSessionRequest;
class GetEventRequest;
class GetMemoryRecordRequest;
class GetRecommendationRequest;
class GetResourceApiKeyRequest;
class GetResourceOauth2TokenRequest;
class GetWorkloadAccessTokenRequest;
class GetWorkloadAccessTokenForJWTRequest;
class GetWorkloadAccessTokenForUserIdRequest;
class InvokeAgentRuntimeRequest;
class InvokeAgentRuntimeCommandRequest;
class InvokeBrowserRequest;
class InvokeCodeInterpreterRequest;
class InvokeHarnessRequest;
class ListABTestsRequest;
class ListActorsRequest;
class ListBatchEvaluationsRequest;
class ListBrowserSessionsRequest;
class ListCodeInterpreterSessionsRequest;
class ListEventsRequest;
class ListMemoryExtractionJobsRequest;
class ListMemoryRecordsRequest;
class ListRecommendationsRequest;
class ListSessionsRequest;
class RetrieveMemoryRecordsRequest;
class SaveBrowserSessionProfileRequest;
class SearchRegistryRecordsRequest;
class StartBatchEvaluationRequest;
class StartBrowserSessionRequest;
class StartCodeInterpreterSessionRequest;
class StartMemoryExtractionJobRequest;
class StartRecommendationRequest;
class StopBatchEvaluationRequest;
class StopBrowserSessionRequest;
class StopCodeInterpreterSessionRequest;
class StopRuntimeSessionRequest;
class UpdateABTestRequest;
class UpdateBrowserStreamRequest;
/* End of service model forward declarations required in BedrockAgentCoreClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchCreateMemoryRecordsResult, BedrockAgentCoreError> BatchCreateMemoryRecordsOutcome;
typedef Aws::Utils::Outcome<BatchDeleteMemoryRecordsResult, BedrockAgentCoreError> BatchDeleteMemoryRecordsOutcome;
typedef Aws::Utils::Outcome<BatchUpdateMemoryRecordsResult, BedrockAgentCoreError> BatchUpdateMemoryRecordsOutcome;
typedef Aws::Utils::Outcome<CompleteResourceTokenAuthResult, BedrockAgentCoreError> CompleteResourceTokenAuthOutcome;
typedef Aws::Utils::Outcome<CreateABTestResult, BedrockAgentCoreError> CreateABTestOutcome;
typedef Aws::Utils::Outcome<CreateEventResult, BedrockAgentCoreError> CreateEventOutcome;
typedef Aws::Utils::Outcome<DeleteABTestResult, BedrockAgentCoreError> DeleteABTestOutcome;
typedef Aws::Utils::Outcome<DeleteBatchEvaluationResult, BedrockAgentCoreError> DeleteBatchEvaluationOutcome;
typedef Aws::Utils::Outcome<DeleteEventResult, BedrockAgentCoreError> DeleteEventOutcome;
typedef Aws::Utils::Outcome<DeleteMemoryRecordResult, BedrockAgentCoreError> DeleteMemoryRecordOutcome;
typedef Aws::Utils::Outcome<DeleteRecommendationResult, BedrockAgentCoreError> DeleteRecommendationOutcome;
typedef Aws::Utils::Outcome<EvaluateResult, BedrockAgentCoreError> EvaluateOutcome;
typedef Aws::Utils::Outcome<GetABTestResult, BedrockAgentCoreError> GetABTestOutcome;
typedef Aws::Utils::Outcome<GetAgentCardResult, BedrockAgentCoreError> GetAgentCardOutcome;
typedef Aws::Utils::Outcome<GetBatchEvaluationResult, BedrockAgentCoreError> GetBatchEvaluationOutcome;
typedef Aws::Utils::Outcome<GetBrowserSessionResult, BedrockAgentCoreError> GetBrowserSessionOutcome;
typedef Aws::Utils::Outcome<GetCodeInterpreterSessionResult, BedrockAgentCoreError> GetCodeInterpreterSessionOutcome;
typedef Aws::Utils::Outcome<GetEventResult, BedrockAgentCoreError> GetEventOutcome;
typedef Aws::Utils::Outcome<GetMemoryRecordResult, BedrockAgentCoreError> GetMemoryRecordOutcome;
typedef Aws::Utils::Outcome<GetRecommendationResult, BedrockAgentCoreError> GetRecommendationOutcome;
typedef Aws::Utils::Outcome<GetResourceApiKeyResult, BedrockAgentCoreError> GetResourceApiKeyOutcome;
typedef Aws::Utils::Outcome<GetResourceOauth2TokenResult, BedrockAgentCoreError> GetResourceOauth2TokenOutcome;
typedef Aws::Utils::Outcome<GetWorkloadAccessTokenResult, BedrockAgentCoreError> GetWorkloadAccessTokenOutcome;
typedef Aws::Utils::Outcome<GetWorkloadAccessTokenForJWTResult, BedrockAgentCoreError> GetWorkloadAccessTokenForJWTOutcome;
typedef Aws::Utils::Outcome<GetWorkloadAccessTokenForUserIdResult, BedrockAgentCoreError> GetWorkloadAccessTokenForUserIdOutcome;
typedef Aws::Utils::Outcome<InvokeAgentRuntimeResult, BedrockAgentCoreError> InvokeAgentRuntimeOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentCoreError> InvokeAgentRuntimeCommandOutcome;
typedef Aws::Utils::Outcome<InvokeBrowserResult, BedrockAgentCoreError> InvokeBrowserOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentCoreError> InvokeCodeInterpreterOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, BedrockAgentCoreError> InvokeHarnessOutcome;
typedef Aws::Utils::Outcome<ListABTestsResult, BedrockAgentCoreError> ListABTestsOutcome;
typedef Aws::Utils::Outcome<ListActorsResult, BedrockAgentCoreError> ListActorsOutcome;
typedef Aws::Utils::Outcome<ListBatchEvaluationsResult, BedrockAgentCoreError> ListBatchEvaluationsOutcome;
typedef Aws::Utils::Outcome<ListBrowserSessionsResult, BedrockAgentCoreError> ListBrowserSessionsOutcome;
typedef Aws::Utils::Outcome<ListCodeInterpreterSessionsResult, BedrockAgentCoreError> ListCodeInterpreterSessionsOutcome;
typedef Aws::Utils::Outcome<ListEventsResult, BedrockAgentCoreError> ListEventsOutcome;
typedef Aws::Utils::Outcome<ListMemoryExtractionJobsResult, BedrockAgentCoreError> ListMemoryExtractionJobsOutcome;
typedef Aws::Utils::Outcome<ListMemoryRecordsResult, BedrockAgentCoreError> ListMemoryRecordsOutcome;
typedef Aws::Utils::Outcome<ListRecommendationsResult, BedrockAgentCoreError> ListRecommendationsOutcome;
typedef Aws::Utils::Outcome<ListSessionsResult, BedrockAgentCoreError> ListSessionsOutcome;
typedef Aws::Utils::Outcome<RetrieveMemoryRecordsResult, BedrockAgentCoreError> RetrieveMemoryRecordsOutcome;
typedef Aws::Utils::Outcome<SaveBrowserSessionProfileResult, BedrockAgentCoreError> SaveBrowserSessionProfileOutcome;
typedef Aws::Utils::Outcome<SearchRegistryRecordsResult, BedrockAgentCoreError> SearchRegistryRecordsOutcome;
typedef Aws::Utils::Outcome<StartBatchEvaluationResult, BedrockAgentCoreError> StartBatchEvaluationOutcome;
typedef Aws::Utils::Outcome<StartBrowserSessionResult, BedrockAgentCoreError> StartBrowserSessionOutcome;
typedef Aws::Utils::Outcome<StartCodeInterpreterSessionResult, BedrockAgentCoreError> StartCodeInterpreterSessionOutcome;
typedef Aws::Utils::Outcome<StartMemoryExtractionJobResult, BedrockAgentCoreError> StartMemoryExtractionJobOutcome;
typedef Aws::Utils::Outcome<StartRecommendationResult, BedrockAgentCoreError> StartRecommendationOutcome;
typedef Aws::Utils::Outcome<StopBatchEvaluationResult, BedrockAgentCoreError> StopBatchEvaluationOutcome;
typedef Aws::Utils::Outcome<StopBrowserSessionResult, BedrockAgentCoreError> StopBrowserSessionOutcome;
typedef Aws::Utils::Outcome<StopCodeInterpreterSessionResult, BedrockAgentCoreError> StopCodeInterpreterSessionOutcome;
typedef Aws::Utils::Outcome<StopRuntimeSessionResult, BedrockAgentCoreError> StopRuntimeSessionOutcome;
typedef Aws::Utils::Outcome<UpdateABTestResult, BedrockAgentCoreError> UpdateABTestOutcome;
typedef Aws::Utils::Outcome<UpdateBrowserStreamResult, BedrockAgentCoreError> UpdateBrowserStreamOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchCreateMemoryRecordsOutcome> BatchCreateMemoryRecordsOutcomeCallable;
typedef std::future<BatchDeleteMemoryRecordsOutcome> BatchDeleteMemoryRecordsOutcomeCallable;
typedef std::future<BatchUpdateMemoryRecordsOutcome> BatchUpdateMemoryRecordsOutcomeCallable;
typedef std::future<CompleteResourceTokenAuthOutcome> CompleteResourceTokenAuthOutcomeCallable;
typedef std::future<CreateABTestOutcome> CreateABTestOutcomeCallable;
typedef std::future<CreateEventOutcome> CreateEventOutcomeCallable;
typedef std::future<DeleteABTestOutcome> DeleteABTestOutcomeCallable;
typedef std::future<DeleteBatchEvaluationOutcome> DeleteBatchEvaluationOutcomeCallable;
typedef std::future<DeleteEventOutcome> DeleteEventOutcomeCallable;
typedef std::future<DeleteMemoryRecordOutcome> DeleteMemoryRecordOutcomeCallable;
typedef std::future<DeleteRecommendationOutcome> DeleteRecommendationOutcomeCallable;
typedef std::future<EvaluateOutcome> EvaluateOutcomeCallable;
typedef std::future<GetABTestOutcome> GetABTestOutcomeCallable;
typedef std::future<GetAgentCardOutcome> GetAgentCardOutcomeCallable;
typedef std::future<GetBatchEvaluationOutcome> GetBatchEvaluationOutcomeCallable;
typedef std::future<GetBrowserSessionOutcome> GetBrowserSessionOutcomeCallable;
typedef std::future<GetCodeInterpreterSessionOutcome> GetCodeInterpreterSessionOutcomeCallable;
typedef std::future<GetEventOutcome> GetEventOutcomeCallable;
typedef std::future<GetMemoryRecordOutcome> GetMemoryRecordOutcomeCallable;
typedef std::future<GetRecommendationOutcome> GetRecommendationOutcomeCallable;
typedef std::future<GetResourceApiKeyOutcome> GetResourceApiKeyOutcomeCallable;
typedef std::future<GetResourceOauth2TokenOutcome> GetResourceOauth2TokenOutcomeCallable;
typedef std::future<GetWorkloadAccessTokenOutcome> GetWorkloadAccessTokenOutcomeCallable;
typedef std::future<GetWorkloadAccessTokenForJWTOutcome> GetWorkloadAccessTokenForJWTOutcomeCallable;
typedef std::future<GetWorkloadAccessTokenForUserIdOutcome> GetWorkloadAccessTokenForUserIdOutcomeCallable;
typedef std::future<InvokeAgentRuntimeOutcome> InvokeAgentRuntimeOutcomeCallable;
typedef std::future<InvokeAgentRuntimeCommandOutcome> InvokeAgentRuntimeCommandOutcomeCallable;
typedef std::future<InvokeBrowserOutcome> InvokeBrowserOutcomeCallable;
typedef std::future<InvokeCodeInterpreterOutcome> InvokeCodeInterpreterOutcomeCallable;
typedef std::future<InvokeHarnessOutcome> InvokeHarnessOutcomeCallable;
typedef std::future<ListABTestsOutcome> ListABTestsOutcomeCallable;
typedef std::future<ListActorsOutcome> ListActorsOutcomeCallable;
typedef std::future<ListBatchEvaluationsOutcome> ListBatchEvaluationsOutcomeCallable;
typedef std::future<ListBrowserSessionsOutcome> ListBrowserSessionsOutcomeCallable;
typedef std::future<ListCodeInterpreterSessionsOutcome> ListCodeInterpreterSessionsOutcomeCallable;
typedef std::future<ListEventsOutcome> ListEventsOutcomeCallable;
typedef std::future<ListMemoryExtractionJobsOutcome> ListMemoryExtractionJobsOutcomeCallable;
typedef std::future<ListMemoryRecordsOutcome> ListMemoryRecordsOutcomeCallable;
typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
typedef std::future<RetrieveMemoryRecordsOutcome> RetrieveMemoryRecordsOutcomeCallable;
typedef std::future<SaveBrowserSessionProfileOutcome> SaveBrowserSessionProfileOutcomeCallable;
typedef std::future<SearchRegistryRecordsOutcome> SearchRegistryRecordsOutcomeCallable;
typedef std::future<StartBatchEvaluationOutcome> StartBatchEvaluationOutcomeCallable;
typedef std::future<StartBrowserSessionOutcome> StartBrowserSessionOutcomeCallable;
typedef std::future<StartCodeInterpreterSessionOutcome> StartCodeInterpreterSessionOutcomeCallable;
typedef std::future<StartMemoryExtractionJobOutcome> StartMemoryExtractionJobOutcomeCallable;
typedef std::future<StartRecommendationOutcome> StartRecommendationOutcomeCallable;
typedef std::future<StopBatchEvaluationOutcome> StopBatchEvaluationOutcomeCallable;
typedef std::future<StopBrowserSessionOutcome> StopBrowserSessionOutcomeCallable;
typedef std::future<StopCodeInterpreterSessionOutcome> StopCodeInterpreterSessionOutcomeCallable;
typedef std::future<StopRuntimeSessionOutcome> StopRuntimeSessionOutcomeCallable;
typedef std::future<UpdateABTestOutcome> UpdateABTestOutcomeCallable;
typedef std::future<UpdateBrowserStreamOutcome> UpdateBrowserStreamOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class BedrockAgentCoreClient;

/* Service model async handlers definitions */
typedef std::function<void(const BedrockAgentCoreClient*, const Model::BatchCreateMemoryRecordsRequest&,
                           const Model::BatchCreateMemoryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchCreateMemoryRecordsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::BatchDeleteMemoryRecordsRequest&,
                           const Model::BatchDeleteMemoryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchDeleteMemoryRecordsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::BatchUpdateMemoryRecordsRequest&,
                           const Model::BatchUpdateMemoryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchUpdateMemoryRecordsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::CompleteResourceTokenAuthRequest&,
                           const Model::CompleteResourceTokenAuthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CompleteResourceTokenAuthResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::CreateABTestRequest&, const Model::CreateABTestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateABTestResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::CreateEventRequest&, const Model::CreateEventOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEventResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::DeleteABTestRequest&, const Model::DeleteABTestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteABTestResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::DeleteBatchEvaluationRequest&,
                           const Model::DeleteBatchEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteBatchEvaluationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::DeleteEventRequest&, const Model::DeleteEventOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEventResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::DeleteMemoryRecordRequest&, const Model::DeleteMemoryRecordOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteMemoryRecordResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::DeleteRecommendationRequest&,
                           const Model::DeleteRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRecommendationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::EvaluateRequest&, const Model::EvaluateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    EvaluateResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetABTestRequest&, const Model::GetABTestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetABTestResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetAgentCardRequest&, const Model::GetAgentCardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgentCardResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetBatchEvaluationRequest&, const Model::GetBatchEvaluationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBatchEvaluationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetBrowserSessionRequest&, const Model::GetBrowserSessionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBrowserSessionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetCodeInterpreterSessionRequest&,
                           const Model::GetCodeInterpreterSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCodeInterpreterSessionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetEventRequest&, const Model::GetEventOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEventResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetMemoryRecordRequest&, const Model::GetMemoryRecordOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMemoryRecordResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetRecommendationRequest&, const Model::GetRecommendationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRecommendationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetResourceApiKeyRequest&, const Model::GetResourceApiKeyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourceApiKeyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetResourceOauth2TokenRequest&,
                           const Model::GetResourceOauth2TokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourceOauth2TokenResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetWorkloadAccessTokenRequest&,
                           const Model::GetWorkloadAccessTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkloadAccessTokenResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetWorkloadAccessTokenForJWTRequest&,
                           const Model::GetWorkloadAccessTokenForJWTOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkloadAccessTokenForJWTResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::GetWorkloadAccessTokenForUserIdRequest&,
                           const Model::GetWorkloadAccessTokenForUserIdOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkloadAccessTokenForUserIdResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::InvokeAgentRuntimeRequest&, Model::InvokeAgentRuntimeOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeAgentRuntimeResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::InvokeAgentRuntimeCommandRequest&,
                           const Model::InvokeAgentRuntimeCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeAgentRuntimeCommandResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::InvokeBrowserRequest&, const Model::InvokeBrowserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeBrowserResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::InvokeCodeInterpreterRequest&,
                           const Model::InvokeCodeInterpreterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeCodeInterpreterResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::InvokeHarnessRequest&, const Model::InvokeHarnessOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeHarnessResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListABTestsRequest&, const Model::ListABTestsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListABTestsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListActorsRequest&, const Model::ListActorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListActorsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListBatchEvaluationsRequest&,
                           const Model::ListBatchEvaluationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBatchEvaluationsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListBrowserSessionsRequest&,
                           const Model::ListBrowserSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBrowserSessionsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListCodeInterpreterSessionsRequest&,
                           const Model::ListCodeInterpreterSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeInterpreterSessionsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListEventsRequest&, const Model::ListEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEventsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListMemoryExtractionJobsRequest&,
                           const Model::ListMemoryExtractionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMemoryExtractionJobsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListMemoryRecordsRequest&, const Model::ListMemoryRecordsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMemoryRecordsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListRecommendationsRequest&,
                           const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRecommendationsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSessionsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::RetrieveMemoryRecordsRequest&,
                           const Model::RetrieveMemoryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RetrieveMemoryRecordsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::SaveBrowserSessionProfileRequest&,
                           const Model::SaveBrowserSessionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SaveBrowserSessionProfileResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::SearchRegistryRecordsRequest&,
                           const Model::SearchRegistryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchRegistryRecordsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StartBatchEvaluationRequest&,
                           const Model::StartBatchEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartBatchEvaluationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StartBrowserSessionRequest&,
                           const Model::StartBrowserSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartBrowserSessionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StartCodeInterpreterSessionRequest&,
                           const Model::StartCodeInterpreterSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartCodeInterpreterSessionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StartMemoryExtractionJobRequest&,
                           const Model::StartMemoryExtractionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartMemoryExtractionJobResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StartRecommendationRequest&,
                           const Model::StartRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartRecommendationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StopBatchEvaluationRequest&,
                           const Model::StopBatchEvaluationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopBatchEvaluationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StopBrowserSessionRequest&, const Model::StopBrowserSessionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopBrowserSessionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StopCodeInterpreterSessionRequest&,
                           const Model::StopCodeInterpreterSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopCodeInterpreterSessionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::StopRuntimeSessionRequest&, const Model::StopRuntimeSessionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopRuntimeSessionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::UpdateABTestRequest&, const Model::UpdateABTestOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateABTestResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreClient*, const Model::UpdateBrowserStreamRequest&,
                           const Model::UpdateBrowserStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateBrowserStreamResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace BedrockAgentCore
}  // namespace Aws

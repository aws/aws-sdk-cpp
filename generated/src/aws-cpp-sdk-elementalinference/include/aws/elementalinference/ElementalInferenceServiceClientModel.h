/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceEndpointProvider.h>
#include <aws/elementalinference/ElementalInferenceErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ElementalInferenceClient header */
#include <aws/core/NoResult.h>
#include <aws/elementalinference/model/AssociateFeedResult.h>
#include <aws/elementalinference/model/CreateDictionaryResult.h>
#include <aws/elementalinference/model/CreateFeedResult.h>
#include <aws/elementalinference/model/CreateFunctionResult.h>
#include <aws/elementalinference/model/CreateQuestionSetResult.h>
#include <aws/elementalinference/model/CreateQuestionSetVersionResult.h>
#include <aws/elementalinference/model/CreateScheduleActionResult.h>
#include <aws/elementalinference/model/DeleteDictionaryResult.h>
#include <aws/elementalinference/model/DeleteFeedResult.h>
#include <aws/elementalinference/model/DeleteFunctionResult.h>
#include <aws/elementalinference/model/DeleteQuestionSetResult.h>
#include <aws/elementalinference/model/DeleteQuestionSetVersionResult.h>
#include <aws/elementalinference/model/DeleteScheduleActionResult.h>
#include <aws/elementalinference/model/DisassociateFeedResult.h>
#include <aws/elementalinference/model/ExportDictionaryEntriesResult.h>
#include <aws/elementalinference/model/GetDictionaryResult.h>
#include <aws/elementalinference/model/GetFeedPolicyResult.h>
#include <aws/elementalinference/model/GetFeedResult.h>
#include <aws/elementalinference/model/GetFixtureResult.h>
#include <aws/elementalinference/model/GetFunctionResult.h>
#include <aws/elementalinference/model/GetQuestionSetResult.h>
#include <aws/elementalinference/model/ListDictionariesRequest.h>
#include <aws/elementalinference/model/ListDictionariesResult.h>
#include <aws/elementalinference/model/ListFeedsRequest.h>
#include <aws/elementalinference/model/ListFeedsResult.h>
#include <aws/elementalinference/model/ListFunctionsRequest.h>
#include <aws/elementalinference/model/ListFunctionsResult.h>
#include <aws/elementalinference/model/ListQuestionSetVersionsResult.h>
#include <aws/elementalinference/model/ListQuestionSetsRequest.h>
#include <aws/elementalinference/model/ListQuestionSetsResult.h>
#include <aws/elementalinference/model/ListScheduleActionsResult.h>
#include <aws/elementalinference/model/ListTagsForResourceResult.h>
#include <aws/elementalinference/model/PutFeedPolicyResult.h>
#include <aws/elementalinference/model/SearchFixturesResult.h>
#include <aws/elementalinference/model/UpdateDictionaryResult.h>
#include <aws/elementalinference/model/UpdateFeedResult.h>
#include <aws/elementalinference/model/UpdateFunctionResult.h>
#include <aws/elementalinference/model/UpdateQuestionSetResult.h>
/* End of service model headers required in ElementalInferenceClient header */

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

namespace ElementalInference {
using ElementalInferenceClientConfiguration = Aws::Client::GenericClientConfiguration;
using ElementalInferenceEndpointProviderBase = Aws::ElementalInference::Endpoint::ElementalInferenceEndpointProviderBase;
using ElementalInferenceEndpointProvider = Aws::ElementalInference::Endpoint::ElementalInferenceEndpointProvider;

namespace Model {
/* Service model forward declarations required in ElementalInferenceClient header */
class AssociateFeedRequest;
class CreateDictionaryRequest;
class CreateFeedRequest;
class CreateFunctionRequest;
class CreateQuestionSetRequest;
class CreateQuestionSetVersionRequest;
class CreateScheduleActionRequest;
class DeleteDictionaryRequest;
class DeleteFeedRequest;
class DeleteFeedPolicyRequest;
class DeleteFunctionRequest;
class DeleteQuestionSetRequest;
class DeleteQuestionSetVersionRequest;
class DeleteScheduleActionRequest;
class DisassociateFeedRequest;
class ExportDictionaryEntriesRequest;
class GetDictionaryRequest;
class GetFeedRequest;
class GetFeedPolicyRequest;
class GetFixtureRequest;
class GetFunctionRequest;
class GetQuestionSetRequest;
class ListDictionariesRequest;
class ListFeedsRequest;
class ListFunctionsRequest;
class ListQuestionSetVersionsRequest;
class ListQuestionSetsRequest;
class ListScheduleActionsRequest;
class ListTagsForResourceRequest;
class PutFeedPolicyRequest;
class SearchFixturesRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateDictionaryRequest;
class UpdateFeedRequest;
class UpdateFunctionRequest;
class UpdateQuestionSetRequest;
/* End of service model forward declarations required in ElementalInferenceClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateFeedResult, ElementalInferenceError> AssociateFeedOutcome;
typedef Aws::Utils::Outcome<CreateDictionaryResult, ElementalInferenceError> CreateDictionaryOutcome;
typedef Aws::Utils::Outcome<CreateFeedResult, ElementalInferenceError> CreateFeedOutcome;
typedef Aws::Utils::Outcome<CreateFunctionResult, ElementalInferenceError> CreateFunctionOutcome;
typedef Aws::Utils::Outcome<CreateQuestionSetResult, ElementalInferenceError> CreateQuestionSetOutcome;
typedef Aws::Utils::Outcome<CreateQuestionSetVersionResult, ElementalInferenceError> CreateQuestionSetVersionOutcome;
typedef Aws::Utils::Outcome<CreateScheduleActionResult, ElementalInferenceError> CreateScheduleActionOutcome;
typedef Aws::Utils::Outcome<DeleteDictionaryResult, ElementalInferenceError> DeleteDictionaryOutcome;
typedef Aws::Utils::Outcome<DeleteFeedResult, ElementalInferenceError> DeleteFeedOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ElementalInferenceError> DeleteFeedPolicyOutcome;
typedef Aws::Utils::Outcome<DeleteFunctionResult, ElementalInferenceError> DeleteFunctionOutcome;
typedef Aws::Utils::Outcome<DeleteQuestionSetResult, ElementalInferenceError> DeleteQuestionSetOutcome;
typedef Aws::Utils::Outcome<DeleteQuestionSetVersionResult, ElementalInferenceError> DeleteQuestionSetVersionOutcome;
typedef Aws::Utils::Outcome<DeleteScheduleActionResult, ElementalInferenceError> DeleteScheduleActionOutcome;
typedef Aws::Utils::Outcome<DisassociateFeedResult, ElementalInferenceError> DisassociateFeedOutcome;
typedef Aws::Utils::Outcome<ExportDictionaryEntriesResult, ElementalInferenceError> ExportDictionaryEntriesOutcome;
typedef Aws::Utils::Outcome<GetDictionaryResult, ElementalInferenceError> GetDictionaryOutcome;
typedef Aws::Utils::Outcome<GetFeedResult, ElementalInferenceError> GetFeedOutcome;
typedef Aws::Utils::Outcome<GetFeedPolicyResult, ElementalInferenceError> GetFeedPolicyOutcome;
typedef Aws::Utils::Outcome<GetFixtureResult, ElementalInferenceError> GetFixtureOutcome;
typedef Aws::Utils::Outcome<GetFunctionResult, ElementalInferenceError> GetFunctionOutcome;
typedef Aws::Utils::Outcome<GetQuestionSetResult, ElementalInferenceError> GetQuestionSetOutcome;
typedef Aws::Utils::Outcome<ListDictionariesResult, ElementalInferenceError> ListDictionariesOutcome;
typedef Aws::Utils::Outcome<ListFeedsResult, ElementalInferenceError> ListFeedsOutcome;
typedef Aws::Utils::Outcome<ListFunctionsResult, ElementalInferenceError> ListFunctionsOutcome;
typedef Aws::Utils::Outcome<ListQuestionSetVersionsResult, ElementalInferenceError> ListQuestionSetVersionsOutcome;
typedef Aws::Utils::Outcome<ListQuestionSetsResult, ElementalInferenceError> ListQuestionSetsOutcome;
typedef Aws::Utils::Outcome<ListScheduleActionsResult, ElementalInferenceError> ListScheduleActionsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ElementalInferenceError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PutFeedPolicyResult, ElementalInferenceError> PutFeedPolicyOutcome;
typedef Aws::Utils::Outcome<SearchFixturesResult, ElementalInferenceError> SearchFixturesOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ElementalInferenceError> TagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ElementalInferenceError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateDictionaryResult, ElementalInferenceError> UpdateDictionaryOutcome;
typedef Aws::Utils::Outcome<UpdateFeedResult, ElementalInferenceError> UpdateFeedOutcome;
typedef Aws::Utils::Outcome<UpdateFunctionResult, ElementalInferenceError> UpdateFunctionOutcome;
typedef Aws::Utils::Outcome<UpdateQuestionSetResult, ElementalInferenceError> UpdateQuestionSetOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateFeedOutcome> AssociateFeedOutcomeCallable;
typedef std::future<CreateDictionaryOutcome> CreateDictionaryOutcomeCallable;
typedef std::future<CreateFeedOutcome> CreateFeedOutcomeCallable;
typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
typedef std::future<CreateQuestionSetOutcome> CreateQuestionSetOutcomeCallable;
typedef std::future<CreateQuestionSetVersionOutcome> CreateQuestionSetVersionOutcomeCallable;
typedef std::future<CreateScheduleActionOutcome> CreateScheduleActionOutcomeCallable;
typedef std::future<DeleteDictionaryOutcome> DeleteDictionaryOutcomeCallable;
typedef std::future<DeleteFeedOutcome> DeleteFeedOutcomeCallable;
typedef std::future<DeleteFeedPolicyOutcome> DeleteFeedPolicyOutcomeCallable;
typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
typedef std::future<DeleteQuestionSetOutcome> DeleteQuestionSetOutcomeCallable;
typedef std::future<DeleteQuestionSetVersionOutcome> DeleteQuestionSetVersionOutcomeCallable;
typedef std::future<DeleteScheduleActionOutcome> DeleteScheduleActionOutcomeCallable;
typedef std::future<DisassociateFeedOutcome> DisassociateFeedOutcomeCallable;
typedef std::future<ExportDictionaryEntriesOutcome> ExportDictionaryEntriesOutcomeCallable;
typedef std::future<GetDictionaryOutcome> GetDictionaryOutcomeCallable;
typedef std::future<GetFeedOutcome> GetFeedOutcomeCallable;
typedef std::future<GetFeedPolicyOutcome> GetFeedPolicyOutcomeCallable;
typedef std::future<GetFixtureOutcome> GetFixtureOutcomeCallable;
typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
typedef std::future<GetQuestionSetOutcome> GetQuestionSetOutcomeCallable;
typedef std::future<ListDictionariesOutcome> ListDictionariesOutcomeCallable;
typedef std::future<ListFeedsOutcome> ListFeedsOutcomeCallable;
typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
typedef std::future<ListQuestionSetVersionsOutcome> ListQuestionSetVersionsOutcomeCallable;
typedef std::future<ListQuestionSetsOutcome> ListQuestionSetsOutcomeCallable;
typedef std::future<ListScheduleActionsOutcome> ListScheduleActionsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutFeedPolicyOutcome> PutFeedPolicyOutcomeCallable;
typedef std::future<SearchFixturesOutcome> SearchFixturesOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateDictionaryOutcome> UpdateDictionaryOutcomeCallable;
typedef std::future<UpdateFeedOutcome> UpdateFeedOutcomeCallable;
typedef std::future<UpdateFunctionOutcome> UpdateFunctionOutcomeCallable;
typedef std::future<UpdateQuestionSetOutcome> UpdateQuestionSetOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ElementalInferenceClient;

/* Service model async handlers definitions */
typedef std::function<void(const ElementalInferenceClient*, const Model::AssociateFeedRequest&, const Model::AssociateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::CreateDictionaryRequest&, const Model::CreateDictionaryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDictionaryResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::CreateFeedRequest&, const Model::CreateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateFunctionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::CreateQuestionSetRequest&, const Model::CreateQuestionSetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateQuestionSetResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::CreateQuestionSetVersionRequest&,
                           const Model::CreateQuestionSetVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateQuestionSetVersionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::CreateScheduleActionRequest&,
                           const Model::CreateScheduleActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateScheduleActionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteDictionaryRequest&, const Model::DeleteDictionaryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDictionaryResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteFeedRequest&, const Model::DeleteFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteFeedPolicyRequest&, const Model::DeleteFeedPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFeedPolicyResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFunctionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteQuestionSetRequest&, const Model::DeleteQuestionSetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteQuestionSetResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteQuestionSetVersionRequest&,
                           const Model::DeleteQuestionSetVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteQuestionSetVersionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DeleteScheduleActionRequest&,
                           const Model::DeleteScheduleActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteScheduleActionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::DisassociateFeedRequest&, const Model::DisassociateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ExportDictionaryEntriesRequest&,
                           const Model::ExportDictionaryEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExportDictionaryEntriesResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::GetDictionaryRequest&, const Model::GetDictionaryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDictionaryResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::GetFeedRequest&, const Model::GetFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::GetFeedPolicyRequest&, const Model::GetFeedPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFeedPolicyResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::GetFixtureRequest&, const Model::GetFixtureOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFixtureResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFunctionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::GetQuestionSetRequest&, const Model::GetQuestionSetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetQuestionSetResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListDictionariesRequest&, const Model::ListDictionariesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDictionariesResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListFeedsRequest&, const Model::ListFeedsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFeedsResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFunctionsResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListQuestionSetVersionsRequest&,
                           const Model::ListQuestionSetVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListQuestionSetVersionsResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListQuestionSetsRequest&, const Model::ListQuestionSetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListQuestionSetsResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListScheduleActionsRequest&,
                           const Model::ListScheduleActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListScheduleActionsResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::PutFeedPolicyRequest&, const Model::PutFeedPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutFeedPolicyResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::SearchFixturesRequest&, const Model::SearchFixturesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchFixturesResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::UpdateDictionaryRequest&, const Model::UpdateDictionaryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDictionaryResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::UpdateFeedRequest&, const Model::UpdateFeedOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFeedResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::UpdateFunctionRequest&, const Model::UpdateFunctionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateFunctionResponseReceivedHandler;
typedef std::function<void(const ElementalInferenceClient*, const Model::UpdateQuestionSetRequest&, const Model::UpdateQuestionSetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateQuestionSetResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ElementalInference
}  // namespace Aws

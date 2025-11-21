/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationEndpointProvider.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ComputeOptimizerAutomationClient header */
#include <aws/compute-optimizer-automation/model/AssociateAccountsResult.h>
#include <aws/compute-optimizer-automation/model/CreateAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/DeleteAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/DisassociateAccountsResult.h>
#include <aws/compute-optimizer-automation/model/GetAutomationEventResult.h>
#include <aws/compute-optimizer-automation/model/GetAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/GetEnrollmentConfigurationRequest.h>
#include <aws/compute-optimizer-automation/model/GetEnrollmentConfigurationResult.h>
#include <aws/compute-optimizer-automation/model/ListAccountsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAccountsResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventStepsResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventSummariesResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationEventsResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulePreviewSummariesResult.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesRequest.h>
#include <aws/compute-optimizer-automation/model/ListAutomationRulesResult.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionSummariesRequest.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionSummariesResult.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionsRequest.h>
#include <aws/compute-optimizer-automation/model/ListRecommendedActionsResult.h>
#include <aws/compute-optimizer-automation/model/ListTagsForResourceResult.h>
#include <aws/compute-optimizer-automation/model/RollbackAutomationEventResult.h>
#include <aws/compute-optimizer-automation/model/StartAutomationEventResult.h>
#include <aws/compute-optimizer-automation/model/TagResourceResult.h>
#include <aws/compute-optimizer-automation/model/UntagResourceResult.h>
#include <aws/compute-optimizer-automation/model/UpdateAutomationRuleResult.h>
#include <aws/compute-optimizer-automation/model/UpdateEnrollmentConfigurationResult.h>
/* End of service model headers required in ComputeOptimizerAutomationClient header */

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

namespace ComputeOptimizerAutomation {
using ComputeOptimizerAutomationClientConfiguration = Aws::Client::GenericClientConfiguration;
using ComputeOptimizerAutomationEndpointProviderBase =
    Aws::ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationEndpointProviderBase;
using ComputeOptimizerAutomationEndpointProvider = Aws::ComputeOptimizerAutomation::Endpoint::ComputeOptimizerAutomationEndpointProvider;

namespace Model {
/* Service model forward declarations required in ComputeOptimizerAutomationClient header */
class AssociateAccountsRequest;
class CreateAutomationRuleRequest;
class DeleteAutomationRuleRequest;
class DisassociateAccountsRequest;
class GetAutomationEventRequest;
class GetAutomationRuleRequest;
class GetEnrollmentConfigurationRequest;
class ListAccountsRequest;
class ListAutomationEventStepsRequest;
class ListAutomationEventSummariesRequest;
class ListAutomationEventsRequest;
class ListAutomationRulePreviewRequest;
class ListAutomationRulePreviewSummariesRequest;
class ListAutomationRulesRequest;
class ListRecommendedActionSummariesRequest;
class ListRecommendedActionsRequest;
class ListTagsForResourceRequest;
class RollbackAutomationEventRequest;
class StartAutomationEventRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAutomationRuleRequest;
class UpdateEnrollmentConfigurationRequest;
/* End of service model forward declarations required in ComputeOptimizerAutomationClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateAccountsResult, ComputeOptimizerAutomationError> AssociateAccountsOutcome;
typedef Aws::Utils::Outcome<CreateAutomationRuleResult, ComputeOptimizerAutomationError> CreateAutomationRuleOutcome;
typedef Aws::Utils::Outcome<DeleteAutomationRuleResult, ComputeOptimizerAutomationError> DeleteAutomationRuleOutcome;
typedef Aws::Utils::Outcome<DisassociateAccountsResult, ComputeOptimizerAutomationError> DisassociateAccountsOutcome;
typedef Aws::Utils::Outcome<GetAutomationEventResult, ComputeOptimizerAutomationError> GetAutomationEventOutcome;
typedef Aws::Utils::Outcome<GetAutomationRuleResult, ComputeOptimizerAutomationError> GetAutomationRuleOutcome;
typedef Aws::Utils::Outcome<GetEnrollmentConfigurationResult, ComputeOptimizerAutomationError> GetEnrollmentConfigurationOutcome;
typedef Aws::Utils::Outcome<ListAccountsResult, ComputeOptimizerAutomationError> ListAccountsOutcome;
typedef Aws::Utils::Outcome<ListAutomationEventStepsResult, ComputeOptimizerAutomationError> ListAutomationEventStepsOutcome;
typedef Aws::Utils::Outcome<ListAutomationEventSummariesResult, ComputeOptimizerAutomationError> ListAutomationEventSummariesOutcome;
typedef Aws::Utils::Outcome<ListAutomationEventsResult, ComputeOptimizerAutomationError> ListAutomationEventsOutcome;
typedef Aws::Utils::Outcome<ListAutomationRulePreviewResult, ComputeOptimizerAutomationError> ListAutomationRulePreviewOutcome;
typedef Aws::Utils::Outcome<ListAutomationRulePreviewSummariesResult, ComputeOptimizerAutomationError>
    ListAutomationRulePreviewSummariesOutcome;
typedef Aws::Utils::Outcome<ListAutomationRulesResult, ComputeOptimizerAutomationError> ListAutomationRulesOutcome;
typedef Aws::Utils::Outcome<ListRecommendedActionSummariesResult, ComputeOptimizerAutomationError> ListRecommendedActionSummariesOutcome;
typedef Aws::Utils::Outcome<ListRecommendedActionsResult, ComputeOptimizerAutomationError> ListRecommendedActionsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, ComputeOptimizerAutomationError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<RollbackAutomationEventResult, ComputeOptimizerAutomationError> RollbackAutomationEventOutcome;
typedef Aws::Utils::Outcome<StartAutomationEventResult, ComputeOptimizerAutomationError> StartAutomationEventOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, ComputeOptimizerAutomationError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, ComputeOptimizerAutomationError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAutomationRuleResult, ComputeOptimizerAutomationError> UpdateAutomationRuleOutcome;
typedef Aws::Utils::Outcome<UpdateEnrollmentConfigurationResult, ComputeOptimizerAutomationError> UpdateEnrollmentConfigurationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateAccountsOutcome> AssociateAccountsOutcomeCallable;
typedef std::future<CreateAutomationRuleOutcome> CreateAutomationRuleOutcomeCallable;
typedef std::future<DeleteAutomationRuleOutcome> DeleteAutomationRuleOutcomeCallable;
typedef std::future<DisassociateAccountsOutcome> DisassociateAccountsOutcomeCallable;
typedef std::future<GetAutomationEventOutcome> GetAutomationEventOutcomeCallable;
typedef std::future<GetAutomationRuleOutcome> GetAutomationRuleOutcomeCallable;
typedef std::future<GetEnrollmentConfigurationOutcome> GetEnrollmentConfigurationOutcomeCallable;
typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
typedef std::future<ListAutomationEventStepsOutcome> ListAutomationEventStepsOutcomeCallable;
typedef std::future<ListAutomationEventSummariesOutcome> ListAutomationEventSummariesOutcomeCallable;
typedef std::future<ListAutomationEventsOutcome> ListAutomationEventsOutcomeCallable;
typedef std::future<ListAutomationRulePreviewOutcome> ListAutomationRulePreviewOutcomeCallable;
typedef std::future<ListAutomationRulePreviewSummariesOutcome> ListAutomationRulePreviewSummariesOutcomeCallable;
typedef std::future<ListAutomationRulesOutcome> ListAutomationRulesOutcomeCallable;
typedef std::future<ListRecommendedActionSummariesOutcome> ListRecommendedActionSummariesOutcomeCallable;
typedef std::future<ListRecommendedActionsOutcome> ListRecommendedActionsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<RollbackAutomationEventOutcome> RollbackAutomationEventOutcomeCallable;
typedef std::future<StartAutomationEventOutcome> StartAutomationEventOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAutomationRuleOutcome> UpdateAutomationRuleOutcomeCallable;
typedef std::future<UpdateEnrollmentConfigurationOutcome> UpdateEnrollmentConfigurationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ComputeOptimizerAutomationClient;

/* Service model async handlers definitions */
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::AssociateAccountsRequest&,
                           const Model::AssociateAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateAccountsResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::CreateAutomationRuleRequest&,
                           const Model::CreateAutomationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAutomationRuleResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::DeleteAutomationRuleRequest&,
                           const Model::DeleteAutomationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAutomationRuleResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::DisassociateAccountsRequest&,
                           const Model::DisassociateAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateAccountsResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::GetAutomationEventRequest&,
                           const Model::GetAutomationEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAutomationEventResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::GetAutomationRuleRequest&,
                           const Model::GetAutomationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAutomationRuleResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::GetEnrollmentConfigurationRequest&,
                           const Model::GetEnrollmentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEnrollmentConfigurationResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListAccountsRequest&, const Model::ListAccountsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAccountsResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListAutomationEventStepsRequest&,
                           const Model::ListAutomationEventStepsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutomationEventStepsResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListAutomationEventSummariesRequest&,
                           const Model::ListAutomationEventSummariesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutomationEventSummariesResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListAutomationEventsRequest&,
                           const Model::ListAutomationEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutomationEventsResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListAutomationRulePreviewRequest&,
                           const Model::ListAutomationRulePreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutomationRulePreviewResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListAutomationRulePreviewSummariesRequest&,
                           const Model::ListAutomationRulePreviewSummariesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutomationRulePreviewSummariesResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListAutomationRulesRequest&,
                           const Model::ListAutomationRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutomationRulesResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListRecommendedActionSummariesRequest&,
                           const Model::ListRecommendedActionSummariesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRecommendedActionSummariesResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListRecommendedActionsRequest&,
                           const Model::ListRecommendedActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRecommendedActionsResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::RollbackAutomationEventRequest&,
                           const Model::RollbackAutomationEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RollbackAutomationEventResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::StartAutomationEventRequest&,
                           const Model::StartAutomationEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartAutomationEventResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::UpdateAutomationRuleRequest&,
                           const Model::UpdateAutomationRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAutomationRuleResponseReceivedHandler;
typedef std::function<void(const ComputeOptimizerAutomationClient*, const Model::UpdateEnrollmentConfigurationRequest&,
                           const Model::UpdateEnrollmentConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateEnrollmentConfigurationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws

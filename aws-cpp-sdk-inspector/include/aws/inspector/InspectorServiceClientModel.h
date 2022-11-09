/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/inspector/InspectorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/inspector/InspectorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in InspectorClient header */
#include <aws/inspector/model/AddAttributesToFindingsResult.h>
#include <aws/inspector/model/CreateAssessmentTargetResult.h>
#include <aws/inspector/model/CreateAssessmentTemplateResult.h>
#include <aws/inspector/model/CreateExclusionsPreviewResult.h>
#include <aws/inspector/model/CreateResourceGroupResult.h>
#include <aws/inspector/model/DescribeAssessmentRunsResult.h>
#include <aws/inspector/model/DescribeAssessmentTargetsResult.h>
#include <aws/inspector/model/DescribeAssessmentTemplatesResult.h>
#include <aws/inspector/model/DescribeCrossAccountAccessRoleResult.h>
#include <aws/inspector/model/DescribeExclusionsResult.h>
#include <aws/inspector/model/DescribeFindingsResult.h>
#include <aws/inspector/model/DescribeResourceGroupsResult.h>
#include <aws/inspector/model/DescribeRulesPackagesResult.h>
#include <aws/inspector/model/GetAssessmentReportResult.h>
#include <aws/inspector/model/GetExclusionsPreviewResult.h>
#include <aws/inspector/model/GetTelemetryMetadataResult.h>
#include <aws/inspector/model/ListAssessmentRunAgentsResult.h>
#include <aws/inspector/model/ListAssessmentRunsResult.h>
#include <aws/inspector/model/ListAssessmentTargetsResult.h>
#include <aws/inspector/model/ListAssessmentTemplatesResult.h>
#include <aws/inspector/model/ListEventSubscriptionsResult.h>
#include <aws/inspector/model/ListExclusionsResult.h>
#include <aws/inspector/model/ListFindingsResult.h>
#include <aws/inspector/model/ListRulesPackagesResult.h>
#include <aws/inspector/model/ListTagsForResourceResult.h>
#include <aws/inspector/model/PreviewAgentsResult.h>
#include <aws/inspector/model/RemoveAttributesFromFindingsResult.h>
#include <aws/inspector/model/StartAssessmentRunResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in InspectorClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Inspector
  {
    using InspectorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using InspectorEndpointProviderBase = Aws::Inspector::Endpoint::InspectorEndpointProviderBase;
    using InspectorEndpointProvider = Aws::Inspector::Endpoint::InspectorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in InspectorClient header */
      class AddAttributesToFindingsRequest;
      class CreateAssessmentTargetRequest;
      class CreateAssessmentTemplateRequest;
      class CreateExclusionsPreviewRequest;
      class CreateResourceGroupRequest;
      class DeleteAssessmentRunRequest;
      class DeleteAssessmentTargetRequest;
      class DeleteAssessmentTemplateRequest;
      class DescribeAssessmentRunsRequest;
      class DescribeAssessmentTargetsRequest;
      class DescribeAssessmentTemplatesRequest;
      class DescribeExclusionsRequest;
      class DescribeFindingsRequest;
      class DescribeResourceGroupsRequest;
      class DescribeRulesPackagesRequest;
      class GetAssessmentReportRequest;
      class GetExclusionsPreviewRequest;
      class GetTelemetryMetadataRequest;
      class ListAssessmentRunAgentsRequest;
      class ListAssessmentRunsRequest;
      class ListAssessmentTargetsRequest;
      class ListAssessmentTemplatesRequest;
      class ListEventSubscriptionsRequest;
      class ListExclusionsRequest;
      class ListFindingsRequest;
      class ListRulesPackagesRequest;
      class ListTagsForResourceRequest;
      class PreviewAgentsRequest;
      class RegisterCrossAccountAccessRoleRequest;
      class RemoveAttributesFromFindingsRequest;
      class SetTagsForResourceRequest;
      class StartAssessmentRunRequest;
      class StopAssessmentRunRequest;
      class SubscribeToEventRequest;
      class UnsubscribeFromEventRequest;
      class UpdateAssessmentTargetRequest;
      /* End of service model forward declarations required in InspectorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddAttributesToFindingsResult, InspectorError> AddAttributesToFindingsOutcome;
      typedef Aws::Utils::Outcome<CreateAssessmentTargetResult, InspectorError> CreateAssessmentTargetOutcome;
      typedef Aws::Utils::Outcome<CreateAssessmentTemplateResult, InspectorError> CreateAssessmentTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateExclusionsPreviewResult, InspectorError> CreateExclusionsPreviewOutcome;
      typedef Aws::Utils::Outcome<CreateResourceGroupResult, InspectorError> CreateResourceGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> DeleteAssessmentRunOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> DeleteAssessmentTargetOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> DeleteAssessmentTemplateOutcome;
      typedef Aws::Utils::Outcome<DescribeAssessmentRunsResult, InspectorError> DescribeAssessmentRunsOutcome;
      typedef Aws::Utils::Outcome<DescribeAssessmentTargetsResult, InspectorError> DescribeAssessmentTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeAssessmentTemplatesResult, InspectorError> DescribeAssessmentTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeCrossAccountAccessRoleResult, InspectorError> DescribeCrossAccountAccessRoleOutcome;
      typedef Aws::Utils::Outcome<DescribeExclusionsResult, InspectorError> DescribeExclusionsOutcome;
      typedef Aws::Utils::Outcome<DescribeFindingsResult, InspectorError> DescribeFindingsOutcome;
      typedef Aws::Utils::Outcome<DescribeResourceGroupsResult, InspectorError> DescribeResourceGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeRulesPackagesResult, InspectorError> DescribeRulesPackagesOutcome;
      typedef Aws::Utils::Outcome<GetAssessmentReportResult, InspectorError> GetAssessmentReportOutcome;
      typedef Aws::Utils::Outcome<GetExclusionsPreviewResult, InspectorError> GetExclusionsPreviewOutcome;
      typedef Aws::Utils::Outcome<GetTelemetryMetadataResult, InspectorError> GetTelemetryMetadataOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentRunAgentsResult, InspectorError> ListAssessmentRunAgentsOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentRunsResult, InspectorError> ListAssessmentRunsOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentTargetsResult, InspectorError> ListAssessmentTargetsOutcome;
      typedef Aws::Utils::Outcome<ListAssessmentTemplatesResult, InspectorError> ListAssessmentTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListEventSubscriptionsResult, InspectorError> ListEventSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListExclusionsResult, InspectorError> ListExclusionsOutcome;
      typedef Aws::Utils::Outcome<ListFindingsResult, InspectorError> ListFindingsOutcome;
      typedef Aws::Utils::Outcome<ListRulesPackagesResult, InspectorError> ListRulesPackagesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, InspectorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PreviewAgentsResult, InspectorError> PreviewAgentsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> RegisterCrossAccountAccessRoleOutcome;
      typedef Aws::Utils::Outcome<RemoveAttributesFromFindingsResult, InspectorError> RemoveAttributesFromFindingsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> SetTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartAssessmentRunResult, InspectorError> StartAssessmentRunOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> StopAssessmentRunOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> SubscribeToEventOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> UnsubscribeFromEventOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, InspectorError> UpdateAssessmentTargetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddAttributesToFindingsOutcome> AddAttributesToFindingsOutcomeCallable;
      typedef std::future<CreateAssessmentTargetOutcome> CreateAssessmentTargetOutcomeCallable;
      typedef std::future<CreateAssessmentTemplateOutcome> CreateAssessmentTemplateOutcomeCallable;
      typedef std::future<CreateExclusionsPreviewOutcome> CreateExclusionsPreviewOutcomeCallable;
      typedef std::future<CreateResourceGroupOutcome> CreateResourceGroupOutcomeCallable;
      typedef std::future<DeleteAssessmentRunOutcome> DeleteAssessmentRunOutcomeCallable;
      typedef std::future<DeleteAssessmentTargetOutcome> DeleteAssessmentTargetOutcomeCallable;
      typedef std::future<DeleteAssessmentTemplateOutcome> DeleteAssessmentTemplateOutcomeCallable;
      typedef std::future<DescribeAssessmentRunsOutcome> DescribeAssessmentRunsOutcomeCallable;
      typedef std::future<DescribeAssessmentTargetsOutcome> DescribeAssessmentTargetsOutcomeCallable;
      typedef std::future<DescribeAssessmentTemplatesOutcome> DescribeAssessmentTemplatesOutcomeCallable;
      typedef std::future<DescribeCrossAccountAccessRoleOutcome> DescribeCrossAccountAccessRoleOutcomeCallable;
      typedef std::future<DescribeExclusionsOutcome> DescribeExclusionsOutcomeCallable;
      typedef std::future<DescribeFindingsOutcome> DescribeFindingsOutcomeCallable;
      typedef std::future<DescribeResourceGroupsOutcome> DescribeResourceGroupsOutcomeCallable;
      typedef std::future<DescribeRulesPackagesOutcome> DescribeRulesPackagesOutcomeCallable;
      typedef std::future<GetAssessmentReportOutcome> GetAssessmentReportOutcomeCallable;
      typedef std::future<GetExclusionsPreviewOutcome> GetExclusionsPreviewOutcomeCallable;
      typedef std::future<GetTelemetryMetadataOutcome> GetTelemetryMetadataOutcomeCallable;
      typedef std::future<ListAssessmentRunAgentsOutcome> ListAssessmentRunAgentsOutcomeCallable;
      typedef std::future<ListAssessmentRunsOutcome> ListAssessmentRunsOutcomeCallable;
      typedef std::future<ListAssessmentTargetsOutcome> ListAssessmentTargetsOutcomeCallable;
      typedef std::future<ListAssessmentTemplatesOutcome> ListAssessmentTemplatesOutcomeCallable;
      typedef std::future<ListEventSubscriptionsOutcome> ListEventSubscriptionsOutcomeCallable;
      typedef std::future<ListExclusionsOutcome> ListExclusionsOutcomeCallable;
      typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
      typedef std::future<ListRulesPackagesOutcome> ListRulesPackagesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PreviewAgentsOutcome> PreviewAgentsOutcomeCallable;
      typedef std::future<RegisterCrossAccountAccessRoleOutcome> RegisterCrossAccountAccessRoleOutcomeCallable;
      typedef std::future<RemoveAttributesFromFindingsOutcome> RemoveAttributesFromFindingsOutcomeCallable;
      typedef std::future<SetTagsForResourceOutcome> SetTagsForResourceOutcomeCallable;
      typedef std::future<StartAssessmentRunOutcome> StartAssessmentRunOutcomeCallable;
      typedef std::future<StopAssessmentRunOutcome> StopAssessmentRunOutcomeCallable;
      typedef std::future<SubscribeToEventOutcome> SubscribeToEventOutcomeCallable;
      typedef std::future<UnsubscribeFromEventOutcome> UnsubscribeFromEventOutcomeCallable;
      typedef std::future<UpdateAssessmentTargetOutcome> UpdateAssessmentTargetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class InspectorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const InspectorClient*, const Model::AddAttributesToFindingsRequest&, const Model::AddAttributesToFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddAttributesToFindingsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::CreateAssessmentTargetRequest&, const Model::CreateAssessmentTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssessmentTargetResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::CreateAssessmentTemplateRequest&, const Model::CreateAssessmentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssessmentTemplateResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::CreateExclusionsPreviewRequest&, const Model::CreateExclusionsPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExclusionsPreviewResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::CreateResourceGroupRequest&, const Model::CreateResourceGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceGroupResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DeleteAssessmentRunRequest&, const Model::DeleteAssessmentRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentRunResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DeleteAssessmentTargetRequest&, const Model::DeleteAssessmentTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentTargetResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DeleteAssessmentTemplateRequest&, const Model::DeleteAssessmentTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssessmentTemplateResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeAssessmentRunsRequest&, const Model::DescribeAssessmentRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssessmentRunsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeAssessmentTargetsRequest&, const Model::DescribeAssessmentTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssessmentTargetsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeAssessmentTemplatesRequest&, const Model::DescribeAssessmentTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssessmentTemplatesResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeCrossAccountAccessRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCrossAccountAccessRoleResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeExclusionsRequest&, const Model::DescribeExclusionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExclusionsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeFindingsRequest&, const Model::DescribeFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFindingsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeResourceGroupsRequest&, const Model::DescribeResourceGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceGroupsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::DescribeRulesPackagesRequest&, const Model::DescribeRulesPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRulesPackagesResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::GetAssessmentReportRequest&, const Model::GetAssessmentReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssessmentReportResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::GetExclusionsPreviewRequest&, const Model::GetExclusionsPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExclusionsPreviewResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::GetTelemetryMetadataRequest&, const Model::GetTelemetryMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTelemetryMetadataResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAssessmentRunAgentsRequest&, const Model::ListAssessmentRunAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentRunAgentsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAssessmentRunsRequest&, const Model::ListAssessmentRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentRunsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAssessmentTargetsRequest&, const Model::ListAssessmentTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentTargetsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListAssessmentTemplatesRequest&, const Model::ListAssessmentTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssessmentTemplatesResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListEventSubscriptionsRequest&, const Model::ListEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListExclusionsRequest&, const Model::ListExclusionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExclusionsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListRulesPackagesRequest&, const Model::ListRulesPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesPackagesResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::PreviewAgentsRequest&, const Model::PreviewAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PreviewAgentsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::RegisterCrossAccountAccessRoleRequest&, const Model::RegisterCrossAccountAccessRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCrossAccountAccessRoleResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::RemoveAttributesFromFindingsRequest&, const Model::RemoveAttributesFromFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAttributesFromFindingsResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::SetTagsForResourceRequest&, const Model::SetTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::StartAssessmentRunRequest&, const Model::StartAssessmentRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAssessmentRunResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::StopAssessmentRunRequest&, const Model::StopAssessmentRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAssessmentRunResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::SubscribeToEventRequest&, const Model::SubscribeToEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SubscribeToEventResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::UnsubscribeFromEventRequest&, const Model::UnsubscribeFromEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnsubscribeFromEventResponseReceivedHandler;
    typedef std::function<void(const InspectorClient*, const Model::UpdateAssessmentTargetRequest&, const Model::UpdateAssessmentTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssessmentTargetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Inspector
} // namespace Aws

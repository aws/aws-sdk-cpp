/*
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

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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

        typedef Aws::Utils::Outcome<AddAttributesToFindingsResult, Aws::Client::AWSError<InspectorErrors>> AddAttributesToFindingsOutcome;
        typedef Aws::Utils::Outcome<CreateAssessmentTargetResult, Aws::Client::AWSError<InspectorErrors>> CreateAssessmentTargetOutcome;
        typedef Aws::Utils::Outcome<CreateAssessmentTemplateResult, Aws::Client::AWSError<InspectorErrors>> CreateAssessmentTemplateOutcome;
        typedef Aws::Utils::Outcome<CreateExclusionsPreviewResult, Aws::Client::AWSError<InspectorErrors>> CreateExclusionsPreviewOutcome;
        typedef Aws::Utils::Outcome<CreateResourceGroupResult, Aws::Client::AWSError<InspectorErrors>> CreateResourceGroupOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> DeleteAssessmentRunOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> DeleteAssessmentTargetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> DeleteAssessmentTemplateOutcome;
        typedef Aws::Utils::Outcome<DescribeAssessmentRunsResult, Aws::Client::AWSError<InspectorErrors>> DescribeAssessmentRunsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssessmentTargetsResult, Aws::Client::AWSError<InspectorErrors>> DescribeAssessmentTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssessmentTemplatesResult, Aws::Client::AWSError<InspectorErrors>> DescribeAssessmentTemplatesOutcome;
        typedef Aws::Utils::Outcome<DescribeCrossAccountAccessRoleResult, Aws::Client::AWSError<InspectorErrors>> DescribeCrossAccountAccessRoleOutcome;
        typedef Aws::Utils::Outcome<DescribeExclusionsResult, Aws::Client::AWSError<InspectorErrors>> DescribeExclusionsOutcome;
        typedef Aws::Utils::Outcome<DescribeFindingsResult, Aws::Client::AWSError<InspectorErrors>> DescribeFindingsOutcome;
        typedef Aws::Utils::Outcome<DescribeResourceGroupsResult, Aws::Client::AWSError<InspectorErrors>> DescribeResourceGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeRulesPackagesResult, Aws::Client::AWSError<InspectorErrors>> DescribeRulesPackagesOutcome;
        typedef Aws::Utils::Outcome<GetAssessmentReportResult, Aws::Client::AWSError<InspectorErrors>> GetAssessmentReportOutcome;
        typedef Aws::Utils::Outcome<GetExclusionsPreviewResult, Aws::Client::AWSError<InspectorErrors>> GetExclusionsPreviewOutcome;
        typedef Aws::Utils::Outcome<GetTelemetryMetadataResult, Aws::Client::AWSError<InspectorErrors>> GetTelemetryMetadataOutcome;
        typedef Aws::Utils::Outcome<ListAssessmentRunAgentsResult, Aws::Client::AWSError<InspectorErrors>> ListAssessmentRunAgentsOutcome;
        typedef Aws::Utils::Outcome<ListAssessmentRunsResult, Aws::Client::AWSError<InspectorErrors>> ListAssessmentRunsOutcome;
        typedef Aws::Utils::Outcome<ListAssessmentTargetsResult, Aws::Client::AWSError<InspectorErrors>> ListAssessmentTargetsOutcome;
        typedef Aws::Utils::Outcome<ListAssessmentTemplatesResult, Aws::Client::AWSError<InspectorErrors>> ListAssessmentTemplatesOutcome;
        typedef Aws::Utils::Outcome<ListEventSubscriptionsResult, Aws::Client::AWSError<InspectorErrors>> ListEventSubscriptionsOutcome;
        typedef Aws::Utils::Outcome<ListExclusionsResult, Aws::Client::AWSError<InspectorErrors>> ListExclusionsOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, Aws::Client::AWSError<InspectorErrors>> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListRulesPackagesResult, Aws::Client::AWSError<InspectorErrors>> ListRulesPackagesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<InspectorErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PreviewAgentsResult, Aws::Client::AWSError<InspectorErrors>> PreviewAgentsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> RegisterCrossAccountAccessRoleOutcome;
        typedef Aws::Utils::Outcome<RemoveAttributesFromFindingsResult, Aws::Client::AWSError<InspectorErrors>> RemoveAttributesFromFindingsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> SetTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartAssessmentRunResult, Aws::Client::AWSError<InspectorErrors>> StartAssessmentRunOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> StopAssessmentRunOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> SubscribeToEventOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> UnsubscribeFromEventOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<InspectorErrors>> UpdateAssessmentTargetOutcome;

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
} // namespace Model

  class InspectorClient;

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

  /**
   * <fullname>Amazon Inspector</fullname> <p>Amazon Inspector enables you to analyze
   * the behavior of your AWS resources and to identify potential security issues.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
   * Amazon Inspector User Guide</a>.</p>
   */
  class AWS_INSPECTOR_API InspectorClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InspectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~InspectorClient();

        inline virtual const char* GetServiceClientName() const override { return "Inspector"; }


        /**
         * <p>Assigns attributes (key and value pairs) to the findings that are specified
         * by the ARNs of the findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AddAttributesToFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::AddAttributesToFindingsOutcome AddAttributesToFindings(const Model::AddAttributesToFindingsRequest& request) const;

        /**
         * <p>Assigns attributes (key and value pairs) to the findings that are specified
         * by the ARNs of the findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AddAttributesToFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddAttributesToFindingsOutcomeCallable AddAttributesToFindingsCallable(const Model::AddAttributesToFindingsRequest& request) const;

        /**
         * <p>Assigns attributes (key and value pairs) to the findings that are specified
         * by the ARNs of the findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AddAttributesToFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddAttributesToFindingsAsync(const Model::AddAttributesToFindingsRequest& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new assessment target using the ARN of the resource group that is
         * generated by <a>CreateResourceGroup</a>. If resourceGroupArn is not specified,
         * all EC2 instances in the current AWS account and region are included in the
         * assessment target. If the <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked
         * role</a> isn’t already registered, this action also creates and registers a
         * service-linked role to grant Amazon Inspector access to AWS Services needed to
         * perform security assessments. You can create up to 50 assessment targets per AWS
         * account. You can run up to 500 concurrent agents per AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html">
         * Amazon Inspector Assessment Targets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateAssessmentTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentTargetOutcome CreateAssessmentTarget(const Model::CreateAssessmentTargetRequest& request) const;

        /**
         * <p>Creates a new assessment target using the ARN of the resource group that is
         * generated by <a>CreateResourceGroup</a>. If resourceGroupArn is not specified,
         * all EC2 instances in the current AWS account and region are included in the
         * assessment target. If the <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked
         * role</a> isn’t already registered, this action also creates and registers a
         * service-linked role to grant Amazon Inspector access to AWS Services needed to
         * perform security assessments. You can create up to 50 assessment targets per AWS
         * account. You can run up to 500 concurrent agents per AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html">
         * Amazon Inspector Assessment Targets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateAssessmentTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssessmentTargetOutcomeCallable CreateAssessmentTargetCallable(const Model::CreateAssessmentTargetRequest& request) const;

        /**
         * <p>Creates a new assessment target using the ARN of the resource group that is
         * generated by <a>CreateResourceGroup</a>. If resourceGroupArn is not specified,
         * all EC2 instances in the current AWS account and region are included in the
         * assessment target. If the <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked
         * role</a> isn’t already registered, this action also creates and registers a
         * service-linked role to grant Amazon Inspector access to AWS Services needed to
         * perform security assessments. You can create up to 50 assessment targets per AWS
         * account. You can run up to 500 concurrent agents per AWS account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html">
         * Amazon Inspector Assessment Targets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateAssessmentTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssessmentTargetAsync(const Model::CreateAssessmentTargetRequest& request, const CreateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an assessment template for the assessment target that is specified by
         * the ARN of the assessment target. If the <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked
         * role</a> isn’t already registered, this action also creates and registers a
         * service-linked role to grant Amazon Inspector access to AWS Services needed to
         * perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateAssessmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAssessmentTemplateOutcome CreateAssessmentTemplate(const Model::CreateAssessmentTemplateRequest& request) const;

        /**
         * <p>Creates an assessment template for the assessment target that is specified by
         * the ARN of the assessment target. If the <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked
         * role</a> isn’t already registered, this action also creates and registers a
         * service-linked role to grant Amazon Inspector access to AWS Services needed to
         * perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateAssessmentTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssessmentTemplateOutcomeCallable CreateAssessmentTemplateCallable(const Model::CreateAssessmentTemplateRequest& request) const;

        /**
         * <p>Creates an assessment template for the assessment target that is specified by
         * the ARN of the assessment target. If the <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_slr.html">service-linked
         * role</a> isn’t already registered, this action also creates and registers a
         * service-linked role to grant Amazon Inspector access to AWS Services needed to
         * perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateAssessmentTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssessmentTemplateAsync(const Model::CreateAssessmentTemplateRequest& request, const CreateAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the generation of an exclusions preview for the specified assessment
         * template. The exclusions preview lists the potential exclusions
         * (ExclusionPreview) that Inspector can detect before it runs the assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateExclusionsPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExclusionsPreviewOutcome CreateExclusionsPreview(const Model::CreateExclusionsPreviewRequest& request) const;

        /**
         * <p>Starts the generation of an exclusions preview for the specified assessment
         * template. The exclusions preview lists the potential exclusions
         * (ExclusionPreview) that Inspector can detect before it runs the assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateExclusionsPreview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExclusionsPreviewOutcomeCallable CreateExclusionsPreviewCallable(const Model::CreateExclusionsPreviewRequest& request) const;

        /**
         * <p>Starts the generation of an exclusions preview for the specified assessment
         * template. The exclusions preview lists the potential exclusions
         * (ExclusionPreview) that Inspector can detect before it runs the assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateExclusionsPreview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExclusionsPreviewAsync(const Model::CreateExclusionsPreviewRequest& request, const CreateExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a resource group using the specified set of tags (key and value
         * pairs) that are used to select the EC2 instances to be included in an Amazon
         * Inspector assessment target. The created resource group is then used to create
         * an Amazon Inspector assessment target. For more information, see
         * <a>CreateAssessmentTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateResourceGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceGroupOutcome CreateResourceGroup(const Model::CreateResourceGroupRequest& request) const;

        /**
         * <p>Creates a resource group using the specified set of tags (key and value
         * pairs) that are used to select the EC2 instances to be included in an Amazon
         * Inspector assessment target. The created resource group is then used to create
         * an Amazon Inspector assessment target. For more information, see
         * <a>CreateAssessmentTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateResourceGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceGroupOutcomeCallable CreateResourceGroupCallable(const Model::CreateResourceGroupRequest& request) const;

        /**
         * <p>Creates a resource group using the specified set of tags (key and value
         * pairs) that are used to select the EC2 instances to be included in an Amazon
         * Inspector assessment target. The created resource group is then used to create
         * an Amazon Inspector assessment target. For more information, see
         * <a>CreateAssessmentTarget</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateResourceGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceGroupAsync(const Model::CreateResourceGroupRequest& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentRunOutcome DeleteAssessmentRun(const Model::DeleteAssessmentRunRequest& request) const;

        /**
         * <p>Deletes the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentRunOutcomeCallable DeleteAssessmentRunCallable(const Model::DeleteAssessmentRunRequest& request) const;

        /**
         * <p>Deletes the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentRunAsync(const Model::DeleteAssessmentRunRequest& request, const DeleteAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the assessment target that is specified by the ARN of the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentTargetOutcome DeleteAssessmentTarget(const Model::DeleteAssessmentTargetRequest& request) const;

        /**
         * <p>Deletes the assessment target that is specified by the ARN of the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentTargetOutcomeCallable DeleteAssessmentTargetCallable(const Model::DeleteAssessmentTargetRequest& request) const;

        /**
         * <p>Deletes the assessment target that is specified by the ARN of the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentTargetAsync(const Model::DeleteAssessmentTargetRequest& request, const DeleteAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the assessment template that is specified by the ARN of the
         * assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentTemplateOutcome DeleteAssessmentTemplate(const Model::DeleteAssessmentTemplateRequest& request) const;

        /**
         * <p>Deletes the assessment template that is specified by the ARN of the
         * assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssessmentTemplateOutcomeCallable DeleteAssessmentTemplateCallable(const Model::DeleteAssessmentTemplateRequest& request) const;

        /**
         * <p>Deletes the assessment template that is specified by the ARN of the
         * assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssessmentTemplateAsync(const Model::DeleteAssessmentTemplateRequest& request, const DeleteAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentRunsOutcome DescribeAssessmentRuns(const Model::DescribeAssessmentRunsRequest& request) const;

        /**
         * <p>Describes the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssessmentRunsOutcomeCallable DescribeAssessmentRunsCallable(const Model::DescribeAssessmentRunsRequest& request) const;

        /**
         * <p>Describes the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssessmentRunsAsync(const Model::DescribeAssessmentRunsRequest& request, const DescribeAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the assessment targets that are specified by the ARNs of the
         * assessment targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentTargetsOutcome DescribeAssessmentTargets(const Model::DescribeAssessmentTargetsRequest& request) const;

        /**
         * <p>Describes the assessment targets that are specified by the ARNs of the
         * assessment targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssessmentTargetsOutcomeCallable DescribeAssessmentTargetsCallable(const Model::DescribeAssessmentTargetsRequest& request) const;

        /**
         * <p>Describes the assessment targets that are specified by the ARNs of the
         * assessment targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssessmentTargetsAsync(const Model::DescribeAssessmentTargetsRequest& request, const DescribeAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the assessment templates that are specified by the ARNs of the
         * assessment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentTemplatesOutcome DescribeAssessmentTemplates(const Model::DescribeAssessmentTemplatesRequest& request) const;

        /**
         * <p>Describes the assessment templates that are specified by the ARNs of the
         * assessment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssessmentTemplatesOutcomeCallable DescribeAssessmentTemplatesCallable(const Model::DescribeAssessmentTemplatesRequest& request) const;

        /**
         * <p>Describes the assessment templates that are specified by the ARNs of the
         * assessment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssessmentTemplatesAsync(const Model::DescribeAssessmentTemplatesRequest& request, const DescribeAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the IAM role that enables Amazon Inspector to access your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeCrossAccountAccessRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCrossAccountAccessRoleOutcome DescribeCrossAccountAccessRole() const;

        /**
         * <p>Describes the IAM role that enables Amazon Inspector to access your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeCrossAccountAccessRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCrossAccountAccessRoleOutcomeCallable DescribeCrossAccountAccessRoleCallable() const;

        /**
         * <p>Describes the IAM role that enables Amazon Inspector to access your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeCrossAccountAccessRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCrossAccountAccessRoleAsync(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the exclusions that are specified by the exclusions'
         * ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeExclusions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExclusionsOutcome DescribeExclusions(const Model::DescribeExclusionsRequest& request) const;

        /**
         * <p>Describes the exclusions that are specified by the exclusions'
         * ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeExclusions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExclusionsOutcomeCallable DescribeExclusionsCallable(const Model::DescribeExclusionsRequest& request) const;

        /**
         * <p>Describes the exclusions that are specified by the exclusions'
         * ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeExclusions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExclusionsAsync(const Model::DescribeExclusionsRequest& request, const DescribeExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the findings that are specified by the ARNs of the
         * findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFindingsOutcome DescribeFindings(const Model::DescribeFindingsRequest& request) const;

        /**
         * <p>Describes the findings that are specified by the ARNs of the
         * findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFindingsOutcomeCallable DescribeFindingsCallable(const Model::DescribeFindingsRequest& request) const;

        /**
         * <p>Describes the findings that are specified by the ARNs of the
         * findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFindingsAsync(const Model::DescribeFindingsRequest& request, const DescribeFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the resource groups that are specified by the ARNs of the resource
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeResourceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceGroupsOutcome DescribeResourceGroups(const Model::DescribeResourceGroupsRequest& request) const;

        /**
         * <p>Describes the resource groups that are specified by the ARNs of the resource
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeResourceGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceGroupsOutcomeCallable DescribeResourceGroupsCallable(const Model::DescribeResourceGroupsRequest& request) const;

        /**
         * <p>Describes the resource groups that are specified by the ARNs of the resource
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeResourceGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceGroupsAsync(const Model::DescribeResourceGroupsRequest& request, const DescribeResourceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the rules packages that are specified by the ARNs of the rules
         * packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeRulesPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRulesPackagesOutcome DescribeRulesPackages(const Model::DescribeRulesPackagesRequest& request) const;

        /**
         * <p>Describes the rules packages that are specified by the ARNs of the rules
         * packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeRulesPackages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRulesPackagesOutcomeCallable DescribeRulesPackagesCallable(const Model::DescribeRulesPackagesRequest& request) const;

        /**
         * <p>Describes the rules packages that are specified by the ARNs of the rules
         * packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeRulesPackages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRulesPackagesAsync(const Model::DescribeRulesPackagesRequest& request, const DescribeRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Produces an assessment report that includes detailed and comprehensive
         * results of a specified assessment run. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetAssessmentReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentReportOutcome GetAssessmentReport(const Model::GetAssessmentReportRequest& request) const;

        /**
         * <p>Produces an assessment report that includes detailed and comprehensive
         * results of a specified assessment run. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetAssessmentReport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssessmentReportOutcomeCallable GetAssessmentReportCallable(const Model::GetAssessmentReportRequest& request) const;

        /**
         * <p>Produces an assessment report that includes detailed and comprehensive
         * results of a specified assessment run. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetAssessmentReport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssessmentReportAsync(const Model::GetAssessmentReportRequest& request, const GetAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the exclusions preview (a list of ExclusionPreview objects)
         * specified by the preview token. You can obtain the preview token by running the
         * CreateExclusionsPreview API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetExclusionsPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExclusionsPreviewOutcome GetExclusionsPreview(const Model::GetExclusionsPreviewRequest& request) const;

        /**
         * <p>Retrieves the exclusions preview (a list of ExclusionPreview objects)
         * specified by the preview token. You can obtain the preview token by running the
         * CreateExclusionsPreview API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetExclusionsPreview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExclusionsPreviewOutcomeCallable GetExclusionsPreviewCallable(const Model::GetExclusionsPreviewRequest& request) const;

        /**
         * <p>Retrieves the exclusions preview (a list of ExclusionPreview objects)
         * specified by the preview token. You can obtain the preview token by running the
         * CreateExclusionsPreview API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetExclusionsPreview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExclusionsPreviewAsync(const Model::GetExclusionsPreviewRequest& request, const GetExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Information about the data that is collected for the specified assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetTelemetryMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTelemetryMetadataOutcome GetTelemetryMetadata(const Model::GetTelemetryMetadataRequest& request) const;

        /**
         * <p>Information about the data that is collected for the specified assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetTelemetryMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTelemetryMetadataOutcomeCallable GetTelemetryMetadataCallable(const Model::GetTelemetryMetadataRequest& request) const;

        /**
         * <p>Information about the data that is collected for the specified assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetTelemetryMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTelemetryMetadataAsync(const Model::GetTelemetryMetadataRequest& request, const GetTelemetryMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the agents of the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRunAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentRunAgentsOutcome ListAssessmentRunAgents(const Model::ListAssessmentRunAgentsRequest& request) const;

        /**
         * <p>Lists the agents of the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRunAgents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentRunAgentsOutcomeCallable ListAssessmentRunAgentsCallable(const Model::ListAssessmentRunAgentsRequest& request) const;

        /**
         * <p>Lists the agents of the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRunAgents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentRunAgentsAsync(const Model::ListAssessmentRunAgentsRequest& request, const ListAssessmentRunAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the assessment runs that correspond to the assessment templates that
         * are specified by the ARNs of the assessment templates.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentRunsOutcome ListAssessmentRuns(const Model::ListAssessmentRunsRequest& request) const;

        /**
         * <p>Lists the assessment runs that correspond to the assessment templates that
         * are specified by the ARNs of the assessment templates.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentRunsOutcomeCallable ListAssessmentRunsCallable(const Model::ListAssessmentRunsRequest& request) const;

        /**
         * <p>Lists the assessment runs that correspond to the assessment templates that
         * are specified by the ARNs of the assessment templates.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentRunsAsync(const Model::ListAssessmentRunsRequest& request, const ListAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the ARNs of the assessment targets within this AWS account. For more
         * information about assessment targets, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html">Amazon
         * Inspector Assessment Targets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentTargetsOutcome ListAssessmentTargets(const Model::ListAssessmentTargetsRequest& request) const;

        /**
         * <p>Lists the ARNs of the assessment targets within this AWS account. For more
         * information about assessment targets, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html">Amazon
         * Inspector Assessment Targets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentTargetsOutcomeCallable ListAssessmentTargetsCallable(const Model::ListAssessmentTargetsRequest& request) const;

        /**
         * <p>Lists the ARNs of the assessment targets within this AWS account. For more
         * information about assessment targets, see <a
         * href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_applications.html">Amazon
         * Inspector Assessment Targets</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentTargetsAsync(const Model::ListAssessmentTargetsRequest& request, const ListAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the assessment templates that correspond to the assessment targets that
         * are specified by the ARNs of the assessment targets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentTemplatesOutcome ListAssessmentTemplates(const Model::ListAssessmentTemplatesRequest& request) const;

        /**
         * <p>Lists the assessment templates that correspond to the assessment targets that
         * are specified by the ARNs of the assessment targets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssessmentTemplatesOutcomeCallable ListAssessmentTemplatesCallable(const Model::ListAssessmentTemplatesRequest& request) const;

        /**
         * <p>Lists the assessment templates that correspond to the assessment targets that
         * are specified by the ARNs of the assessment targets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssessmentTemplatesAsync(const Model::ListAssessmentTemplatesRequest& request, const ListAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the event subscriptions for the assessment template that is
         * specified by the ARN of the assessment template. For more information, see
         * <a>SubscribeToEvent</a> and <a>UnsubscribeFromEvent</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventSubscriptionsOutcome ListEventSubscriptions(const Model::ListEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the event subscriptions for the assessment template that is
         * specified by the ARN of the assessment template. For more information, see
         * <a>SubscribeToEvent</a> and <a>UnsubscribeFromEvent</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventSubscriptionsOutcomeCallable ListEventSubscriptionsCallable(const Model::ListEventSubscriptionsRequest& request) const;

        /**
         * <p>Lists all the event subscriptions for the assessment template that is
         * specified by the ARN of the assessment template. For more information, see
         * <a>SubscribeToEvent</a> and <a>UnsubscribeFromEvent</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListEventSubscriptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventSubscriptionsAsync(const Model::ListEventSubscriptionsRequest& request, const ListEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List exclusions that are generated by the assessment run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListExclusions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExclusionsOutcome ListExclusions(const Model::ListExclusionsRequest& request) const;

        /**
         * <p>List exclusions that are generated by the assessment run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListExclusions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExclusionsOutcomeCallable ListExclusionsCallable(const Model::ListExclusionsRequest& request) const;

        /**
         * <p>List exclusions that are generated by the assessment run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListExclusions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExclusionsAsync(const Model::ListExclusionsRequest& request, const ListExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists findings that are generated by the assessment runs that are specified
         * by the ARNs of the assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Lists findings that are generated by the assessment runs that are specified
         * by the ARNs of the assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Lists findings that are generated by the assessment runs that are specified
         * by the ARNs of the assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all available Amazon Inspector rules packages.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListRulesPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesPackagesOutcome ListRulesPackages(const Model::ListRulesPackagesRequest& request) const;

        /**
         * <p>Lists all available Amazon Inspector rules packages.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListRulesPackages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRulesPackagesOutcomeCallable ListRulesPackagesCallable(const Model::ListRulesPackagesRequest& request) const;

        /**
         * <p>Lists all available Amazon Inspector rules packages.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListRulesPackages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRulesPackagesAsync(const Model::ListRulesPackagesRequest& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags associated with an assessment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags associated with an assessment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags associated with an assessment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Previews the agents installed on the EC2 instances that are part of the
         * specified assessment target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/PreviewAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::PreviewAgentsOutcome PreviewAgents(const Model::PreviewAgentsRequest& request) const;

        /**
         * <p>Previews the agents installed on the EC2 instances that are part of the
         * specified assessment target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/PreviewAgents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PreviewAgentsOutcomeCallable PreviewAgentsCallable(const Model::PreviewAgentsRequest& request) const;

        /**
         * <p>Previews the agents installed on the EC2 instances that are part of the
         * specified assessment target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/PreviewAgents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PreviewAgentsAsync(const Model::PreviewAgentsRequest& request, const PreviewAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the IAM role that grants Amazon Inspector access to AWS Services
         * needed to perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RegisterCrossAccountAccessRole">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCrossAccountAccessRoleOutcome RegisterCrossAccountAccessRole(const Model::RegisterCrossAccountAccessRoleRequest& request) const;

        /**
         * <p>Registers the IAM role that grants Amazon Inspector access to AWS Services
         * needed to perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RegisterCrossAccountAccessRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCrossAccountAccessRoleOutcomeCallable RegisterCrossAccountAccessRoleCallable(const Model::RegisterCrossAccountAccessRoleRequest& request) const;

        /**
         * <p>Registers the IAM role that grants Amazon Inspector access to AWS Services
         * needed to perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RegisterCrossAccountAccessRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCrossAccountAccessRoleAsync(const Model::RegisterCrossAccountAccessRoleRequest& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes entire attributes (key and value pairs) from the findings that are
         * specified by the ARNs of the findings where an attribute with the specified key
         * exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RemoveAttributesFromFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesFromFindingsOutcome RemoveAttributesFromFindings(const Model::RemoveAttributesFromFindingsRequest& request) const;

        /**
         * <p>Removes entire attributes (key and value pairs) from the findings that are
         * specified by the ARNs of the findings where an attribute with the specified key
         * exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RemoveAttributesFromFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAttributesFromFindingsOutcomeCallable RemoveAttributesFromFindingsCallable(const Model::RemoveAttributesFromFindingsRequest& request) const;

        /**
         * <p>Removes entire attributes (key and value pairs) from the findings that are
         * specified by the ARNs of the findings where an attribute with the specified key
         * exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RemoveAttributesFromFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAttributesFromFindingsAsync(const Model::RemoveAttributesFromFindingsRequest& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets tags (key and value pairs) to the assessment template that is specified
         * by the ARN of the assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SetTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTagsForResourceOutcome SetTagsForResource(const Model::SetTagsForResourceRequest& request) const;

        /**
         * <p>Sets tags (key and value pairs) to the assessment template that is specified
         * by the ARN of the assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SetTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTagsForResourceOutcomeCallable SetTagsForResourceCallable(const Model::SetTagsForResourceRequest& request) const;

        /**
         * <p>Sets tags (key and value pairs) to the assessment template that is specified
         * by the ARN of the assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SetTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTagsForResourceAsync(const Model::SetTagsForResourceRequest& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the assessment run specified by the ARN of the assessment template.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StartAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssessmentRunOutcome StartAssessmentRun(const Model::StartAssessmentRunRequest& request) const;

        /**
         * <p>Starts the assessment run specified by the ARN of the assessment template.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StartAssessmentRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAssessmentRunOutcomeCallable StartAssessmentRunCallable(const Model::StartAssessmentRunRequest& request) const;

        /**
         * <p>Starts the assessment run specified by the ARN of the assessment template.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StartAssessmentRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAssessmentRunAsync(const Model::StartAssessmentRunRequest& request, const StartAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StopAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAssessmentRunOutcome StopAssessmentRun(const Model::StopAssessmentRunRequest& request) const;

        /**
         * <p>Stops the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StopAssessmentRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAssessmentRunOutcomeCallable StopAssessmentRunCallable(const Model::StopAssessmentRunRequest& request) const;

        /**
         * <p>Stops the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StopAssessmentRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAssessmentRunAsync(const Model::StopAssessmentRunRequest& request, const StopAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SubscribeToEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeToEventOutcome SubscribeToEvent(const Model::SubscribeToEventRequest& request) const;

        /**
         * <p>Enables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SubscribeToEvent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SubscribeToEventOutcomeCallable SubscribeToEventCallable(const Model::SubscribeToEventRequest& request) const;

        /**
         * <p>Enables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SubscribeToEvent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SubscribeToEventAsync(const Model::SubscribeToEventRequest& request, const SubscribeToEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UnsubscribeFromEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeFromEventOutcome UnsubscribeFromEvent(const Model::UnsubscribeFromEventRequest& request) const;

        /**
         * <p>Disables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UnsubscribeFromEvent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnsubscribeFromEventOutcomeCallable UnsubscribeFromEventCallable(const Model::UnsubscribeFromEventRequest& request) const;

        /**
         * <p>Disables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UnsubscribeFromEvent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnsubscribeFromEventAsync(const Model::UnsubscribeFromEventRequest& request, const UnsubscribeFromEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the assessment target that is specified by the ARN of the assessment
         * target.</p> <p>If resourceGroupArn is not specified, all EC2 instances in the
         * current AWS account and region are included in the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UpdateAssessmentTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentTargetOutcome UpdateAssessmentTarget(const Model::UpdateAssessmentTargetRequest& request) const;

        /**
         * <p>Updates the assessment target that is specified by the ARN of the assessment
         * target.</p> <p>If resourceGroupArn is not specified, all EC2 instances in the
         * current AWS account and region are included in the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UpdateAssessmentTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssessmentTargetOutcomeCallable UpdateAssessmentTargetCallable(const Model::UpdateAssessmentTargetRequest& request) const;

        /**
         * <p>Updates the assessment target that is specified by the ARN of the assessment
         * target.</p> <p>If resourceGroupArn is not specified, all EC2 instances in the
         * current AWS account and region are included in the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UpdateAssessmentTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssessmentTargetAsync(const Model::UpdateAssessmentTargetRequest& request, const UpdateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddAttributesToFindingsAsyncHelper(const Model::AddAttributesToFindingsRequest& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssessmentTargetAsyncHelper(const Model::CreateAssessmentTargetRequest& request, const CreateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssessmentTemplateAsyncHelper(const Model::CreateAssessmentTemplateRequest& request, const CreateAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateExclusionsPreviewAsyncHelper(const Model::CreateExclusionsPreviewRequest& request, const CreateExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceGroupAsyncHelper(const Model::CreateResourceGroupRequest& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssessmentRunAsyncHelper(const Model::DeleteAssessmentRunRequest& request, const DeleteAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssessmentTargetAsyncHelper(const Model::DeleteAssessmentTargetRequest& request, const DeleteAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssessmentTemplateAsyncHelper(const Model::DeleteAssessmentTemplateRequest& request, const DeleteAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssessmentRunsAsyncHelper(const Model::DescribeAssessmentRunsRequest& request, const DescribeAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssessmentTargetsAsyncHelper(const Model::DescribeAssessmentTargetsRequest& request, const DescribeAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssessmentTemplatesAsyncHelper(const Model::DescribeAssessmentTemplatesRequest& request, const DescribeAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCrossAccountAccessRoleAsyncHelper(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExclusionsAsyncHelper(const Model::DescribeExclusionsRequest& request, const DescribeExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFindingsAsyncHelper(const Model::DescribeFindingsRequest& request, const DescribeFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceGroupsAsyncHelper(const Model::DescribeResourceGroupsRequest& request, const DescribeResourceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRulesPackagesAsyncHelper(const Model::DescribeRulesPackagesRequest& request, const DescribeRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssessmentReportAsyncHelper(const Model::GetAssessmentReportRequest& request, const GetAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExclusionsPreviewAsyncHelper(const Model::GetExclusionsPreviewRequest& request, const GetExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTelemetryMetadataAsyncHelper(const Model::GetTelemetryMetadataRequest& request, const GetTelemetryMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssessmentRunAgentsAsyncHelper(const Model::ListAssessmentRunAgentsRequest& request, const ListAssessmentRunAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssessmentRunsAsyncHelper(const Model::ListAssessmentRunsRequest& request, const ListAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssessmentTargetsAsyncHelper(const Model::ListAssessmentTargetsRequest& request, const ListAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssessmentTemplatesAsyncHelper(const Model::ListAssessmentTemplatesRequest& request, const ListAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventSubscriptionsAsyncHelper(const Model::ListEventSubscriptionsRequest& request, const ListEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListExclusionsAsyncHelper(const Model::ListExclusionsRequest& request, const ListExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsAsyncHelper(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRulesPackagesAsyncHelper(const Model::ListRulesPackagesRequest& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PreviewAgentsAsyncHelper(const Model::PreviewAgentsRequest& request, const PreviewAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterCrossAccountAccessRoleAsyncHelper(const Model::RegisterCrossAccountAccessRoleRequest& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAttributesFromFindingsAsyncHelper(const Model::RemoveAttributesFromFindingsRequest& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTagsForResourceAsyncHelper(const Model::SetTagsForResourceRequest& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAssessmentRunAsyncHelper(const Model::StartAssessmentRunRequest& request, const StartAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopAssessmentRunAsyncHelper(const Model::StopAssessmentRunRequest& request, const StopAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SubscribeToEventAsyncHelper(const Model::SubscribeToEventRequest& request, const SubscribeToEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnsubscribeFromEventAsyncHelper(const Model::UnsubscribeFromEventRequest& request, const UnsubscribeFromEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssessmentTargetAsyncHelper(const Model::UpdateAssessmentTargetRequest& request, const UpdateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Inspector
} // namespace Aws

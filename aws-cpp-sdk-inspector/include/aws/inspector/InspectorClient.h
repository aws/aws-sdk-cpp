/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector/InspectorServiceClientModel.h>
#include <aws/inspector/InspectorLegacyAsyncMacros.h>

namespace Aws
{
namespace Inspector
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Inspector::InspectorClientConfiguration& clientConfiguration = Aws::Inspector::InspectorClientConfiguration(),
                        std::shared_ptr<InspectorEndpointProviderBase> endpointProvider = Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<InspectorEndpointProviderBase> endpointProvider = Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Inspector::InspectorClientConfiguration& clientConfiguration = Aws::Inspector::InspectorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InspectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<InspectorEndpointProviderBase> endpointProvider = Aws::MakeShared<InspectorEndpointProvider>(ALLOCATION_TAG),
                        const Aws::Inspector::InspectorClientConfiguration& clientConfiguration = Aws::Inspector::InspectorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InspectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~InspectorClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Assigns attributes (key and value pairs) to the findings that are specified
         * by the ARNs of the findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AddAttributesToFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::AddAttributesToFindingsOutcome AddAttributesToFindings(const Model::AddAttributesToFindingsRequest& request) const;


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
         * <p>Starts the generation of an exclusions preview for the specified assessment
         * template. The exclusions preview lists the potential exclusions
         * (ExclusionPreview) that Inspector can detect before it runs the assessment.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/CreateExclusionsPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExclusionsPreviewOutcome CreateExclusionsPreview(const Model::CreateExclusionsPreviewRequest& request) const;


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
         * <p>Deletes the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentRunOutcome DeleteAssessmentRun(const Model::DeleteAssessmentRunRequest& request) const;


        /**
         * <p>Deletes the assessment target that is specified by the ARN of the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentTargetOutcome DeleteAssessmentTarget(const Model::DeleteAssessmentTargetRequest& request) const;


        /**
         * <p>Deletes the assessment template that is specified by the ARN of the
         * assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentTemplateOutcome DeleteAssessmentTemplate(const Model::DeleteAssessmentTemplateRequest& request) const;


        /**
         * <p>Describes the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentRunsOutcome DescribeAssessmentRuns(const Model::DescribeAssessmentRunsRequest& request) const;


        /**
         * <p>Describes the assessment targets that are specified by the ARNs of the
         * assessment targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentTargetsOutcome DescribeAssessmentTargets(const Model::DescribeAssessmentTargetsRequest& request) const;


        /**
         * <p>Describes the assessment templates that are specified by the ARNs of the
         * assessment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentTemplatesOutcome DescribeAssessmentTemplates(const Model::DescribeAssessmentTemplatesRequest& request) const;


        /**
         * <p>Describes the IAM role that enables Amazon Inspector to access your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeCrossAccountAccessRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCrossAccountAccessRoleOutcome DescribeCrossAccountAccessRole() const;

        /**
         * A Callable wrapper for DescribeCrossAccountAccessRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCrossAccountAccessRoleOutcomeCallable DescribeCrossAccountAccessRoleCallable() const;

        /**
         * An Async wrapper for DescribeCrossAccountAccessRole that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Describes the findings that are specified by the ARNs of the
         * findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFindingsOutcome DescribeFindings(const Model::DescribeFindingsRequest& request) const;


        /**
         * <p>Describes the resource groups that are specified by the ARNs of the resource
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeResourceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceGroupsOutcome DescribeResourceGroups(const Model::DescribeResourceGroupsRequest& request) const;


        /**
         * <p>Describes the rules packages that are specified by the ARNs of the rules
         * packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeRulesPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRulesPackagesOutcome DescribeRulesPackages(const Model::DescribeRulesPackagesRequest& request) const;


        /**
         * <p>Produces an assessment report that includes detailed and comprehensive
         * results of a specified assessment run. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetAssessmentReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentReportOutcome GetAssessmentReport(const Model::GetAssessmentReportRequest& request) const;


        /**
         * <p>Retrieves the exclusions preview (a list of ExclusionPreview objects)
         * specified by the preview token. You can obtain the preview token by running the
         * CreateExclusionsPreview API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetExclusionsPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExclusionsPreviewOutcome GetExclusionsPreview(const Model::GetExclusionsPreviewRequest& request) const;


        /**
         * <p>Information about the data that is collected for the specified assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetTelemetryMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTelemetryMetadataOutcome GetTelemetryMetadata(const Model::GetTelemetryMetadataRequest& request) const;


        /**
         * <p>Lists the agents of the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRunAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentRunAgentsOutcome ListAssessmentRunAgents(const Model::ListAssessmentRunAgentsRequest& request) const;


        /**
         * <p>Lists the assessment runs that correspond to the assessment templates that
         * are specified by the ARNs of the assessment templates.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentRunsOutcome ListAssessmentRuns(const Model::ListAssessmentRunsRequest& request) const;


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
         * <p>Lists the assessment templates that correspond to the assessment targets that
         * are specified by the ARNs of the assessment targets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentTemplatesOutcome ListAssessmentTemplates(const Model::ListAssessmentTemplatesRequest& request) const;


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
         * <p>List exclusions that are generated by the assessment run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListExclusions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExclusionsOutcome ListExclusions(const Model::ListExclusionsRequest& request) const;


        /**
         * <p>Lists findings that are generated by the assessment runs that are specified
         * by the ARNs of the assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;


        /**
         * <p>Lists all available Amazon Inspector rules packages.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListRulesPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesPackagesOutcome ListRulesPackages(const Model::ListRulesPackagesRequest& request) const;


        /**
         * <p>Lists all tags associated with an assessment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Previews the agents installed on the EC2 instances that are part of the
         * specified assessment target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/PreviewAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::PreviewAgentsOutcome PreviewAgents(const Model::PreviewAgentsRequest& request) const;


        /**
         * <p>Registers the IAM role that grants Amazon Inspector access to AWS Services
         * needed to perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RegisterCrossAccountAccessRole">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCrossAccountAccessRoleOutcome RegisterCrossAccountAccessRole(const Model::RegisterCrossAccountAccessRoleRequest& request) const;


        /**
         * <p>Removes entire attributes (key and value pairs) from the findings that are
         * specified by the ARNs of the findings where an attribute with the specified key
         * exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RemoveAttributesFromFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesFromFindingsOutcome RemoveAttributesFromFindings(const Model::RemoveAttributesFromFindingsRequest& request) const;


        /**
         * <p>Sets tags (key and value pairs) to the assessment template that is specified
         * by the ARN of the assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SetTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTagsForResourceOutcome SetTagsForResource(const Model::SetTagsForResourceRequest& request) const;


        /**
         * <p>Starts the assessment run specified by the ARN of the assessment template.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StartAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssessmentRunOutcome StartAssessmentRun(const Model::StartAssessmentRunRequest& request) const;


        /**
         * <p>Stops the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StopAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAssessmentRunOutcome StopAssessmentRun(const Model::StopAssessmentRunRequest& request) const;


        /**
         * <p>Enables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SubscribeToEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeToEventOutcome SubscribeToEvent(const Model::SubscribeToEventRequest& request) const;


        /**
         * <p>Disables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UnsubscribeFromEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeFromEventOutcome UnsubscribeFromEvent(const Model::UnsubscribeFromEventRequest& request) const;


        /**
         * <p>Updates the assessment target that is specified by the ARN of the assessment
         * target.</p> <p>If resourceGroupArn is not specified, all EC2 instances in the
         * current AWS account and region are included in the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UpdateAssessmentTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAssessmentTargetOutcome UpdateAssessmentTarget(const Model::UpdateAssessmentTargetRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<InspectorEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const InspectorClientConfiguration& clientConfiguration);

      InspectorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<InspectorEndpointProviderBase> m_endpointProvider;
  };

} // namespace Inspector
} // namespace Aws

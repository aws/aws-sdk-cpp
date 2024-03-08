/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector/InspectorServiceClientModel.h>
#include <aws/inspector/model/DescribeCrossAccountAccessRoleRequest.h>

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
  class AWS_INSPECTOR_API InspectorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<InspectorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef InspectorClientConfiguration ClientConfigurationType;
      typedef InspectorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Inspector::InspectorClientConfiguration& clientConfiguration = Aws::Inspector::InspectorClientConfiguration(),
                        std::shared_ptr<InspectorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        InspectorClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<InspectorEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Inspector::InspectorClientConfiguration& clientConfiguration = Aws::Inspector::InspectorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        InspectorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<InspectorEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * <p>Assigns attributes (key and value pairs) to the findings that are specified
         * by the ARNs of the findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AddAttributesToFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::AddAttributesToFindingsOutcome AddAttributesToFindings(const Model::AddAttributesToFindingsRequest& request) const;

        /**
         * A Callable wrapper for AddAttributesToFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddAttributesToFindingsRequestT = Model::AddAttributesToFindingsRequest>
        Model::AddAttributesToFindingsOutcomeCallable AddAttributesToFindingsCallable(const AddAttributesToFindingsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::AddAttributesToFindings, request);
        }

        /**
         * An Async wrapper for AddAttributesToFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddAttributesToFindingsRequestT = Model::AddAttributesToFindingsRequest>
        void AddAttributesToFindingsAsync(const AddAttributesToFindingsRequestT& request, const AddAttributesToFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::AddAttributesToFindings, request, handler, context);
        }

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
         * A Callable wrapper for CreateAssessmentTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssessmentTargetRequestT = Model::CreateAssessmentTargetRequest>
        Model::CreateAssessmentTargetOutcomeCallable CreateAssessmentTargetCallable(const CreateAssessmentTargetRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::CreateAssessmentTarget, request);
        }

        /**
         * An Async wrapper for CreateAssessmentTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssessmentTargetRequestT = Model::CreateAssessmentTargetRequest>
        void CreateAssessmentTargetAsync(const CreateAssessmentTargetRequestT& request, const CreateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::CreateAssessmentTarget, request, handler, context);
        }

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
         * A Callable wrapper for CreateAssessmentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAssessmentTemplateRequestT = Model::CreateAssessmentTemplateRequest>
        Model::CreateAssessmentTemplateOutcomeCallable CreateAssessmentTemplateCallable(const CreateAssessmentTemplateRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::CreateAssessmentTemplate, request);
        }

        /**
         * An Async wrapper for CreateAssessmentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAssessmentTemplateRequestT = Model::CreateAssessmentTemplateRequest>
        void CreateAssessmentTemplateAsync(const CreateAssessmentTemplateRequestT& request, const CreateAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::CreateAssessmentTemplate, request, handler, context);
        }

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
         * A Callable wrapper for CreateExclusionsPreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExclusionsPreviewRequestT = Model::CreateExclusionsPreviewRequest>
        Model::CreateExclusionsPreviewOutcomeCallable CreateExclusionsPreviewCallable(const CreateExclusionsPreviewRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::CreateExclusionsPreview, request);
        }

        /**
         * An Async wrapper for CreateExclusionsPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExclusionsPreviewRequestT = Model::CreateExclusionsPreviewRequest>
        void CreateExclusionsPreviewAsync(const CreateExclusionsPreviewRequestT& request, const CreateExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::CreateExclusionsPreview, request, handler, context);
        }

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
         * A Callable wrapper for CreateResourceGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourceGroupRequestT = Model::CreateResourceGroupRequest>
        Model::CreateResourceGroupOutcomeCallable CreateResourceGroupCallable(const CreateResourceGroupRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::CreateResourceGroup, request);
        }

        /**
         * An Async wrapper for CreateResourceGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourceGroupRequestT = Model::CreateResourceGroupRequest>
        void CreateResourceGroupAsync(const CreateResourceGroupRequestT& request, const CreateResourceGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::CreateResourceGroup, request, handler, context);
        }

        /**
         * <p>Deletes the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentRunOutcome DeleteAssessmentRun(const Model::DeleteAssessmentRunRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessmentRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssessmentRunRequestT = Model::DeleteAssessmentRunRequest>
        Model::DeleteAssessmentRunOutcomeCallable DeleteAssessmentRunCallable(const DeleteAssessmentRunRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DeleteAssessmentRun, request);
        }

        /**
         * An Async wrapper for DeleteAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssessmentRunRequestT = Model::DeleteAssessmentRunRequest>
        void DeleteAssessmentRunAsync(const DeleteAssessmentRunRequestT& request, const DeleteAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DeleteAssessmentRun, request, handler, context);
        }

        /**
         * <p>Deletes the assessment target that is specified by the ARN of the assessment
         * target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentTargetOutcome DeleteAssessmentTarget(const Model::DeleteAssessmentTargetRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessmentTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssessmentTargetRequestT = Model::DeleteAssessmentTargetRequest>
        Model::DeleteAssessmentTargetOutcomeCallable DeleteAssessmentTargetCallable(const DeleteAssessmentTargetRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DeleteAssessmentTarget, request);
        }

        /**
         * An Async wrapper for DeleteAssessmentTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssessmentTargetRequestT = Model::DeleteAssessmentTargetRequest>
        void DeleteAssessmentTargetAsync(const DeleteAssessmentTargetRequestT& request, const DeleteAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DeleteAssessmentTarget, request, handler, context);
        }

        /**
         * <p>Deletes the assessment template that is specified by the ARN of the
         * assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DeleteAssessmentTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAssessmentTemplateOutcome DeleteAssessmentTemplate(const Model::DeleteAssessmentTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteAssessmentTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAssessmentTemplateRequestT = Model::DeleteAssessmentTemplateRequest>
        Model::DeleteAssessmentTemplateOutcomeCallable DeleteAssessmentTemplateCallable(const DeleteAssessmentTemplateRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DeleteAssessmentTemplate, request);
        }

        /**
         * An Async wrapper for DeleteAssessmentTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAssessmentTemplateRequestT = Model::DeleteAssessmentTemplateRequest>
        void DeleteAssessmentTemplateAsync(const DeleteAssessmentTemplateRequestT& request, const DeleteAssessmentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DeleteAssessmentTemplate, request, handler, context);
        }

        /**
         * <p>Describes the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentRunsOutcome DescribeAssessmentRuns(const Model::DescribeAssessmentRunsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssessmentRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssessmentRunsRequestT = Model::DescribeAssessmentRunsRequest>
        Model::DescribeAssessmentRunsOutcomeCallable DescribeAssessmentRunsCallable(const DescribeAssessmentRunsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DescribeAssessmentRuns, request);
        }

        /**
         * An Async wrapper for DescribeAssessmentRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssessmentRunsRequestT = Model::DescribeAssessmentRunsRequest>
        void DescribeAssessmentRunsAsync(const DescribeAssessmentRunsRequestT& request, const DescribeAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DescribeAssessmentRuns, request, handler, context);
        }

        /**
         * <p>Describes the assessment targets that are specified by the ARNs of the
         * assessment targets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentTargetsOutcome DescribeAssessmentTargets(const Model::DescribeAssessmentTargetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssessmentTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssessmentTargetsRequestT = Model::DescribeAssessmentTargetsRequest>
        Model::DescribeAssessmentTargetsOutcomeCallable DescribeAssessmentTargetsCallable(const DescribeAssessmentTargetsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DescribeAssessmentTargets, request);
        }

        /**
         * An Async wrapper for DescribeAssessmentTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssessmentTargetsRequestT = Model::DescribeAssessmentTargetsRequest>
        void DescribeAssessmentTargetsAsync(const DescribeAssessmentTargetsRequestT& request, const DescribeAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DescribeAssessmentTargets, request, handler, context);
        }

        /**
         * <p>Describes the assessment templates that are specified by the ARNs of the
         * assessment templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeAssessmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAssessmentTemplatesOutcome DescribeAssessmentTemplates(const Model::DescribeAssessmentTemplatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAssessmentTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAssessmentTemplatesRequestT = Model::DescribeAssessmentTemplatesRequest>
        Model::DescribeAssessmentTemplatesOutcomeCallable DescribeAssessmentTemplatesCallable(const DescribeAssessmentTemplatesRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DescribeAssessmentTemplates, request);
        }

        /**
         * An Async wrapper for DescribeAssessmentTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAssessmentTemplatesRequestT = Model::DescribeAssessmentTemplatesRequest>
        void DescribeAssessmentTemplatesAsync(const DescribeAssessmentTemplatesRequestT& request, const DescribeAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DescribeAssessmentTemplates, request, handler, context);
        }

        /**
         * <p>Describes the IAM role that enables Amazon Inspector to access your AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeCrossAccountAccessRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCrossAccountAccessRoleOutcome DescribeCrossAccountAccessRole(const Model::DescribeCrossAccountAccessRoleRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeCrossAccountAccessRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCrossAccountAccessRoleRequestT = Model::DescribeCrossAccountAccessRoleRequest>
        Model::DescribeCrossAccountAccessRoleOutcomeCallable DescribeCrossAccountAccessRoleCallable(const DescribeCrossAccountAccessRoleRequestT& request = {}) const
        {
            return SubmitCallable(&InspectorClient::DescribeCrossAccountAccessRole, request);
        }

        /**
         * An Async wrapper for DescribeCrossAccountAccessRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCrossAccountAccessRoleRequestT = Model::DescribeCrossAccountAccessRoleRequest>
        void DescribeCrossAccountAccessRoleAsync(const DescribeCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeCrossAccountAccessRoleRequestT& request = {}) const
        {
            return SubmitAsync(&InspectorClient::DescribeCrossAccountAccessRole, request, handler, context);
        }

        /**
         * <p>Describes the exclusions that are specified by the exclusions'
         * ARNs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeExclusions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExclusionsOutcome DescribeExclusions(const Model::DescribeExclusionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeExclusions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExclusionsRequestT = Model::DescribeExclusionsRequest>
        Model::DescribeExclusionsOutcomeCallable DescribeExclusionsCallable(const DescribeExclusionsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DescribeExclusions, request);
        }

        /**
         * An Async wrapper for DescribeExclusions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExclusionsRequestT = Model::DescribeExclusionsRequest>
        void DescribeExclusionsAsync(const DescribeExclusionsRequestT& request, const DescribeExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DescribeExclusions, request, handler, context);
        }

        /**
         * <p>Describes the findings that are specified by the ARNs of the
         * findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFindingsOutcome DescribeFindings(const Model::DescribeFindingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFindingsRequestT = Model::DescribeFindingsRequest>
        Model::DescribeFindingsOutcomeCallable DescribeFindingsCallable(const DescribeFindingsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DescribeFindings, request);
        }

        /**
         * An Async wrapper for DescribeFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFindingsRequestT = Model::DescribeFindingsRequest>
        void DescribeFindingsAsync(const DescribeFindingsRequestT& request, const DescribeFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DescribeFindings, request, handler, context);
        }

        /**
         * <p>Describes the resource groups that are specified by the ARNs of the resource
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeResourceGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceGroupsOutcome DescribeResourceGroups(const Model::DescribeResourceGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourceGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourceGroupsRequestT = Model::DescribeResourceGroupsRequest>
        Model::DescribeResourceGroupsOutcomeCallable DescribeResourceGroupsCallable(const DescribeResourceGroupsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DescribeResourceGroups, request);
        }

        /**
         * An Async wrapper for DescribeResourceGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourceGroupsRequestT = Model::DescribeResourceGroupsRequest>
        void DescribeResourceGroupsAsync(const DescribeResourceGroupsRequestT& request, const DescribeResourceGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DescribeResourceGroups, request, handler, context);
        }

        /**
         * <p>Describes the rules packages that are specified by the ARNs of the rules
         * packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DescribeRulesPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRulesPackagesOutcome DescribeRulesPackages(const Model::DescribeRulesPackagesRequest& request) const;

        /**
         * A Callable wrapper for DescribeRulesPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRulesPackagesRequestT = Model::DescribeRulesPackagesRequest>
        Model::DescribeRulesPackagesOutcomeCallable DescribeRulesPackagesCallable(const DescribeRulesPackagesRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::DescribeRulesPackages, request);
        }

        /**
         * An Async wrapper for DescribeRulesPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRulesPackagesRequestT = Model::DescribeRulesPackagesRequest>
        void DescribeRulesPackagesAsync(const DescribeRulesPackagesRequestT& request, const DescribeRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::DescribeRulesPackages, request, handler, context);
        }

        /**
         * <p>Produces an assessment report that includes detailed and comprehensive
         * results of a specified assessment run. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetAssessmentReport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentReportOutcome GetAssessmentReport(const Model::GetAssessmentReportRequest& request) const;

        /**
         * A Callable wrapper for GetAssessmentReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssessmentReportRequestT = Model::GetAssessmentReportRequest>
        Model::GetAssessmentReportOutcomeCallable GetAssessmentReportCallable(const GetAssessmentReportRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::GetAssessmentReport, request);
        }

        /**
         * An Async wrapper for GetAssessmentReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssessmentReportRequestT = Model::GetAssessmentReportRequest>
        void GetAssessmentReportAsync(const GetAssessmentReportRequestT& request, const GetAssessmentReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::GetAssessmentReport, request, handler, context);
        }

        /**
         * <p>Retrieves the exclusions preview (a list of ExclusionPreview objects)
         * specified by the preview token. You can obtain the preview token by running the
         * CreateExclusionsPreview API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetExclusionsPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExclusionsPreviewOutcome GetExclusionsPreview(const Model::GetExclusionsPreviewRequest& request) const;

        /**
         * A Callable wrapper for GetExclusionsPreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExclusionsPreviewRequestT = Model::GetExclusionsPreviewRequest>
        Model::GetExclusionsPreviewOutcomeCallable GetExclusionsPreviewCallable(const GetExclusionsPreviewRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::GetExclusionsPreview, request);
        }

        /**
         * An Async wrapper for GetExclusionsPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExclusionsPreviewRequestT = Model::GetExclusionsPreviewRequest>
        void GetExclusionsPreviewAsync(const GetExclusionsPreviewRequestT& request, const GetExclusionsPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::GetExclusionsPreview, request, handler, context);
        }

        /**
         * <p>Information about the data that is collected for the specified assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/GetTelemetryMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTelemetryMetadataOutcome GetTelemetryMetadata(const Model::GetTelemetryMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetTelemetryMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTelemetryMetadataRequestT = Model::GetTelemetryMetadataRequest>
        Model::GetTelemetryMetadataOutcomeCallable GetTelemetryMetadataCallable(const GetTelemetryMetadataRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::GetTelemetryMetadata, request);
        }

        /**
         * An Async wrapper for GetTelemetryMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTelemetryMetadataRequestT = Model::GetTelemetryMetadataRequest>
        void GetTelemetryMetadataAsync(const GetTelemetryMetadataRequestT& request, const GetTelemetryMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::GetTelemetryMetadata, request, handler, context);
        }

        /**
         * <p>Lists the agents of the assessment runs that are specified by the ARNs of the
         * assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRunAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentRunAgentsOutcome ListAssessmentRunAgents(const Model::ListAssessmentRunAgentsRequest& request) const;

        /**
         * A Callable wrapper for ListAssessmentRunAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssessmentRunAgentsRequestT = Model::ListAssessmentRunAgentsRequest>
        Model::ListAssessmentRunAgentsOutcomeCallable ListAssessmentRunAgentsCallable(const ListAssessmentRunAgentsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListAssessmentRunAgents, request);
        }

        /**
         * An Async wrapper for ListAssessmentRunAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentRunAgentsRequestT = Model::ListAssessmentRunAgentsRequest>
        void ListAssessmentRunAgentsAsync(const ListAssessmentRunAgentsRequestT& request, const ListAssessmentRunAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListAssessmentRunAgents, request, handler, context);
        }

        /**
         * <p>Lists the assessment runs that correspond to the assessment templates that
         * are specified by the ARNs of the assessment templates.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentRunsOutcome ListAssessmentRuns(const Model::ListAssessmentRunsRequest& request) const;

        /**
         * A Callable wrapper for ListAssessmentRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssessmentRunsRequestT = Model::ListAssessmentRunsRequest>
        Model::ListAssessmentRunsOutcomeCallable ListAssessmentRunsCallable(const ListAssessmentRunsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListAssessmentRuns, request);
        }

        /**
         * An Async wrapper for ListAssessmentRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentRunsRequestT = Model::ListAssessmentRunsRequest>
        void ListAssessmentRunsAsync(const ListAssessmentRunsRequestT& request, const ListAssessmentRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListAssessmentRuns, request, handler, context);
        }

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
         * A Callable wrapper for ListAssessmentTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssessmentTargetsRequestT = Model::ListAssessmentTargetsRequest>
        Model::ListAssessmentTargetsOutcomeCallable ListAssessmentTargetsCallable(const ListAssessmentTargetsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListAssessmentTargets, request);
        }

        /**
         * An Async wrapper for ListAssessmentTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentTargetsRequestT = Model::ListAssessmentTargetsRequest>
        void ListAssessmentTargetsAsync(const ListAssessmentTargetsRequestT& request, const ListAssessmentTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListAssessmentTargets, request, handler, context);
        }

        /**
         * <p>Lists the assessment templates that correspond to the assessment targets that
         * are specified by the ARNs of the assessment targets.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListAssessmentTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssessmentTemplatesOutcome ListAssessmentTemplates(const Model::ListAssessmentTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListAssessmentTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssessmentTemplatesRequestT = Model::ListAssessmentTemplatesRequest>
        Model::ListAssessmentTemplatesOutcomeCallable ListAssessmentTemplatesCallable(const ListAssessmentTemplatesRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListAssessmentTemplates, request);
        }

        /**
         * An Async wrapper for ListAssessmentTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssessmentTemplatesRequestT = Model::ListAssessmentTemplatesRequest>
        void ListAssessmentTemplatesAsync(const ListAssessmentTemplatesRequestT& request, const ListAssessmentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListAssessmentTemplates, request, handler, context);
        }

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
         * A Callable wrapper for ListEventSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventSubscriptionsRequestT = Model::ListEventSubscriptionsRequest>
        Model::ListEventSubscriptionsOutcomeCallable ListEventSubscriptionsCallable(const ListEventSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListEventSubscriptions, request);
        }

        /**
         * An Async wrapper for ListEventSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventSubscriptionsRequestT = Model::ListEventSubscriptionsRequest>
        void ListEventSubscriptionsAsync(const ListEventSubscriptionsRequestT& request, const ListEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListEventSubscriptions, request, handler, context);
        }

        /**
         * <p>List exclusions that are generated by the assessment run.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListExclusions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExclusionsOutcome ListExclusions(const Model::ListExclusionsRequest& request) const;

        /**
         * A Callable wrapper for ListExclusions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExclusionsRequestT = Model::ListExclusionsRequest>
        Model::ListExclusionsOutcomeCallable ListExclusionsCallable(const ListExclusionsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListExclusions, request);
        }

        /**
         * An Async wrapper for ListExclusions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExclusionsRequestT = Model::ListExclusionsRequest>
        void ListExclusionsAsync(const ListExclusionsRequestT& request, const ListExclusionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListExclusions, request, handler, context);
        }

        /**
         * <p>Lists findings that are generated by the assessment runs that are specified
         * by the ARNs of the assessment runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        Model::ListFindingsOutcomeCallable ListFindingsCallable(const ListFindingsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListFindings, request);
        }

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        void ListFindingsAsync(const ListFindingsRequestT& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListFindings, request, handler, context);
        }

        /**
         * <p>Lists all available Amazon Inspector rules packages.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListRulesPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesPackagesOutcome ListRulesPackages(const Model::ListRulesPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListRulesPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesPackagesRequestT = Model::ListRulesPackagesRequest>
        Model::ListRulesPackagesOutcomeCallable ListRulesPackagesCallable(const ListRulesPackagesRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListRulesPackages, request);
        }

        /**
         * An Async wrapper for ListRulesPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesPackagesRequestT = Model::ListRulesPackagesRequest>
        void ListRulesPackagesAsync(const ListRulesPackagesRequestT& request, const ListRulesPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListRulesPackages, request, handler, context);
        }

        /**
         * <p>Lists all tags associated with an assessment template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Previews the agents installed on the EC2 instances that are part of the
         * specified assessment target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/PreviewAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::PreviewAgentsOutcome PreviewAgents(const Model::PreviewAgentsRequest& request) const;

        /**
         * A Callable wrapper for PreviewAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PreviewAgentsRequestT = Model::PreviewAgentsRequest>
        Model::PreviewAgentsOutcomeCallable PreviewAgentsCallable(const PreviewAgentsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::PreviewAgents, request);
        }

        /**
         * An Async wrapper for PreviewAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PreviewAgentsRequestT = Model::PreviewAgentsRequest>
        void PreviewAgentsAsync(const PreviewAgentsRequestT& request, const PreviewAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::PreviewAgents, request, handler, context);
        }

        /**
         * <p>Registers the IAM role that grants Amazon Inspector access to AWS Services
         * needed to perform security assessments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RegisterCrossAccountAccessRole">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCrossAccountAccessRoleOutcome RegisterCrossAccountAccessRole(const Model::RegisterCrossAccountAccessRoleRequest& request) const;

        /**
         * A Callable wrapper for RegisterCrossAccountAccessRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterCrossAccountAccessRoleRequestT = Model::RegisterCrossAccountAccessRoleRequest>
        Model::RegisterCrossAccountAccessRoleOutcomeCallable RegisterCrossAccountAccessRoleCallable(const RegisterCrossAccountAccessRoleRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::RegisterCrossAccountAccessRole, request);
        }

        /**
         * An Async wrapper for RegisterCrossAccountAccessRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterCrossAccountAccessRoleRequestT = Model::RegisterCrossAccountAccessRoleRequest>
        void RegisterCrossAccountAccessRoleAsync(const RegisterCrossAccountAccessRoleRequestT& request, const RegisterCrossAccountAccessRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::RegisterCrossAccountAccessRole, request, handler, context);
        }

        /**
         * <p>Removes entire attributes (key and value pairs) from the findings that are
         * specified by the ARNs of the findings where an attribute with the specified key
         * exists.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/RemoveAttributesFromFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAttributesFromFindingsOutcome RemoveAttributesFromFindings(const Model::RemoveAttributesFromFindingsRequest& request) const;

        /**
         * A Callable wrapper for RemoveAttributesFromFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveAttributesFromFindingsRequestT = Model::RemoveAttributesFromFindingsRequest>
        Model::RemoveAttributesFromFindingsOutcomeCallable RemoveAttributesFromFindingsCallable(const RemoveAttributesFromFindingsRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::RemoveAttributesFromFindings, request);
        }

        /**
         * An Async wrapper for RemoveAttributesFromFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveAttributesFromFindingsRequestT = Model::RemoveAttributesFromFindingsRequest>
        void RemoveAttributesFromFindingsAsync(const RemoveAttributesFromFindingsRequestT& request, const RemoveAttributesFromFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::RemoveAttributesFromFindings, request, handler, context);
        }

        /**
         * <p>Sets tags (key and value pairs) to the assessment template that is specified
         * by the ARN of the assessment template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SetTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTagsForResourceOutcome SetTagsForResource(const Model::SetTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for SetTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetTagsForResourceRequestT = Model::SetTagsForResourceRequest>
        Model::SetTagsForResourceOutcomeCallable SetTagsForResourceCallable(const SetTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::SetTagsForResource, request);
        }

        /**
         * An Async wrapper for SetTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetTagsForResourceRequestT = Model::SetTagsForResourceRequest>
        void SetTagsForResourceAsync(const SetTagsForResourceRequestT& request, const SetTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::SetTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts the assessment run specified by the ARN of the assessment template.
         * For this API to function properly, you must not exceed the limit of running up
         * to 500 concurrent agents per AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StartAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssessmentRunOutcome StartAssessmentRun(const Model::StartAssessmentRunRequest& request) const;

        /**
         * A Callable wrapper for StartAssessmentRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAssessmentRunRequestT = Model::StartAssessmentRunRequest>
        Model::StartAssessmentRunOutcomeCallable StartAssessmentRunCallable(const StartAssessmentRunRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::StartAssessmentRun, request);
        }

        /**
         * An Async wrapper for StartAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAssessmentRunRequestT = Model::StartAssessmentRunRequest>
        void StartAssessmentRunAsync(const StartAssessmentRunRequestT& request, const StartAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::StartAssessmentRun, request, handler, context);
        }

        /**
         * <p>Stops the assessment run that is specified by the ARN of the assessment
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/StopAssessmentRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAssessmentRunOutcome StopAssessmentRun(const Model::StopAssessmentRunRequest& request) const;

        /**
         * A Callable wrapper for StopAssessmentRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAssessmentRunRequestT = Model::StopAssessmentRunRequest>
        Model::StopAssessmentRunOutcomeCallable StopAssessmentRunCallable(const StopAssessmentRunRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::StopAssessmentRun, request);
        }

        /**
         * An Async wrapper for StopAssessmentRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAssessmentRunRequestT = Model::StopAssessmentRunRequest>
        void StopAssessmentRunAsync(const StopAssessmentRunRequestT& request, const StopAssessmentRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::StopAssessmentRun, request, handler, context);
        }

        /**
         * <p>Enables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/SubscribeToEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SubscribeToEventOutcome SubscribeToEvent(const Model::SubscribeToEventRequest& request) const;

        /**
         * A Callable wrapper for SubscribeToEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubscribeToEventRequestT = Model::SubscribeToEventRequest>
        Model::SubscribeToEventOutcomeCallable SubscribeToEventCallable(const SubscribeToEventRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::SubscribeToEvent, request);
        }

        /**
         * An Async wrapper for SubscribeToEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubscribeToEventRequestT = Model::SubscribeToEventRequest>
        void SubscribeToEventAsync(const SubscribeToEventRequestT& request, const SubscribeToEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::SubscribeToEvent, request, handler, context);
        }

        /**
         * <p>Disables the process of sending Amazon Simple Notification Service (SNS)
         * notifications about a specified event to a specified SNS topic.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UnsubscribeFromEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::UnsubscribeFromEventOutcome UnsubscribeFromEvent(const Model::UnsubscribeFromEventRequest& request) const;

        /**
         * A Callable wrapper for UnsubscribeFromEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnsubscribeFromEventRequestT = Model::UnsubscribeFromEventRequest>
        Model::UnsubscribeFromEventOutcomeCallable UnsubscribeFromEventCallable(const UnsubscribeFromEventRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::UnsubscribeFromEvent, request);
        }

        /**
         * An Async wrapper for UnsubscribeFromEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnsubscribeFromEventRequestT = Model::UnsubscribeFromEventRequest>
        void UnsubscribeFromEventAsync(const UnsubscribeFromEventRequestT& request, const UnsubscribeFromEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::UnsubscribeFromEvent, request, handler, context);
        }

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
         * A Callable wrapper for UpdateAssessmentTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAssessmentTargetRequestT = Model::UpdateAssessmentTargetRequest>
        Model::UpdateAssessmentTargetOutcomeCallable UpdateAssessmentTargetCallable(const UpdateAssessmentTargetRequestT& request) const
        {
            return SubmitCallable(&InspectorClient::UpdateAssessmentTarget, request);
        }

        /**
         * An Async wrapper for UpdateAssessmentTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAssessmentTargetRequestT = Model::UpdateAssessmentTargetRequest>
        void UpdateAssessmentTargetAsync(const UpdateAssessmentTargetRequestT& request, const UpdateAssessmentTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&InspectorClient::UpdateAssessmentTarget, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<InspectorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<InspectorClient>;
      void init(const InspectorClientConfiguration& clientConfiguration);

      InspectorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<InspectorEndpointProviderBase> m_endpointProvider;
  };

} // namespace Inspector
} // namespace Aws

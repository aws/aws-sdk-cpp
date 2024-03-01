/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/accessanalyzer/AccessAnalyzerServiceClientModel.h>

namespace Aws
{
namespace AccessAnalyzer
{
  /**
   * <p>Identity and Access Management Access Analyzer helps you to set, verify, and
   * refine your IAM policies by providing a suite of capabilities. Its features
   * include findings for external and unused access, basic and custom policy checks
   * for validating policies, and policy generation to generate fine-grained
   * policies. To start using IAM Access Analyzer to identify external or unused
   * access, you first need to create an analyzer.</p> <p> <b>External access
   * analyzers</b> help identify potential risks of accessing resources by enabling
   * you to identify any resource policies that grant access to an external
   * principal. It does this by using logic-based reasoning to analyze resource-based
   * policies in your Amazon Web Services environment. An external principal can be
   * another Amazon Web Services account, a root user, an IAM user or role, a
   * federated user, an Amazon Web Services service, or an anonymous user. You can
   * also use IAM Access Analyzer to preview public and cross-account access to your
   * resources before deploying permissions changes.</p> <p> <b>Unused access
   * analyzers</b> help identify potential identity access risks by enabling you to
   * identify unused IAM roles, unused access keys, unused console passwords, and IAM
   * principals with unused service and action-level permissions.</p> <p>Beyond
   * findings, IAM Access Analyzer provides basic and custom policy checks to
   * validate IAM policies before deploying permissions changes. You can use policy
   * generation to refine permissions by attaching a policy generated using access
   * activity logged in CloudTrail logs. </p> <p>This guide describes the IAM Access
   * Analyzer operations that you can call programmatically. For general information
   * about IAM Access Analyzer, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">Identity
   * and Access Management Access Analyzer</a> in the <b>IAM User Guide</b>.</p>
   */
  class AWS_ACCESSANALYZER_API AccessAnalyzerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AccessAnalyzerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AccessAnalyzerClientConfiguration ClientConfigurationType;
      typedef AccessAnalyzerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration = Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration(),
                             std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration = Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccessAnalyzerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration = Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccessAnalyzerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AccessAnalyzerClient();

        /**
         * <p>Retroactively applies the archive rule to existing findings that meet the
         * archive rule criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ApplyArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyArchiveRuleOutcome ApplyArchiveRule(const Model::ApplyArchiveRuleRequest& request) const;

        /**
         * A Callable wrapper for ApplyArchiveRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplyArchiveRuleRequestT = Model::ApplyArchiveRuleRequest>
        Model::ApplyArchiveRuleOutcomeCallable ApplyArchiveRuleCallable(const ApplyArchiveRuleRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ApplyArchiveRule, request);
        }

        /**
         * An Async wrapper for ApplyArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyArchiveRuleRequestT = Model::ApplyArchiveRuleRequest>
        void ApplyArchiveRuleAsync(const ApplyArchiveRuleRequestT& request, const ApplyArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ApplyArchiveRule, request, handler, context);
        }

        /**
         * <p>Cancels the requested policy generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CancelPolicyGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelPolicyGenerationOutcome CancelPolicyGeneration(const Model::CancelPolicyGenerationRequest& request) const;

        /**
         * A Callable wrapper for CancelPolicyGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelPolicyGenerationRequestT = Model::CancelPolicyGenerationRequest>
        Model::CancelPolicyGenerationOutcomeCallable CancelPolicyGenerationCallable(const CancelPolicyGenerationRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::CancelPolicyGeneration, request);
        }

        /**
         * An Async wrapper for CancelPolicyGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelPolicyGenerationRequestT = Model::CancelPolicyGenerationRequest>
        void CancelPolicyGenerationAsync(const CancelPolicyGenerationRequestT& request, const CancelPolicyGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::CancelPolicyGeneration, request, handler, context);
        }

        /**
         * <p>Checks whether the specified access isn't allowed by a policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CheckAccessNotGranted">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckAccessNotGrantedOutcome CheckAccessNotGranted(const Model::CheckAccessNotGrantedRequest& request) const;

        /**
         * A Callable wrapper for CheckAccessNotGranted that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CheckAccessNotGrantedRequestT = Model::CheckAccessNotGrantedRequest>
        Model::CheckAccessNotGrantedOutcomeCallable CheckAccessNotGrantedCallable(const CheckAccessNotGrantedRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::CheckAccessNotGranted, request);
        }

        /**
         * An Async wrapper for CheckAccessNotGranted that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckAccessNotGrantedRequestT = Model::CheckAccessNotGrantedRequest>
        void CheckAccessNotGrantedAsync(const CheckAccessNotGrantedRequestT& request, const CheckAccessNotGrantedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::CheckAccessNotGranted, request, handler, context);
        }

        /**
         * <p>Checks whether new access is allowed for an updated policy when compared to
         * the existing policy.</p> <p>You can find examples for reference policies and
         * learn how to set up and run a custom policy check for new access in the <a
         * href="https://github.com/aws-samples/iam-access-analyzer-custom-policy-check-samples">IAM
         * Access Analyzer custom policy checks samples</a> repository on GitHub. The
         * reference policies in this repository are meant to be passed to the
         * <code>existingPolicyDocument</code> request parameter.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CheckNoNewAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckNoNewAccessOutcome CheckNoNewAccess(const Model::CheckNoNewAccessRequest& request) const;

        /**
         * A Callable wrapper for CheckNoNewAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CheckNoNewAccessRequestT = Model::CheckNoNewAccessRequest>
        Model::CheckNoNewAccessOutcomeCallable CheckNoNewAccessCallable(const CheckNoNewAccessRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::CheckNoNewAccess, request);
        }

        /**
         * An Async wrapper for CheckNoNewAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckNoNewAccessRequestT = Model::CheckNoNewAccessRequest>
        void CheckNoNewAccessAsync(const CheckNoNewAccessRequestT& request, const CheckNoNewAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::CheckNoNewAccess, request, handler, context);
        }

        /**
         * <p>Creates an access preview that allows you to preview IAM Access Analyzer
         * findings for your resource before deploying resource permissions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAccessPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPreviewOutcome CreateAccessPreview(const Model::CreateAccessPreviewRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccessPreviewRequestT = Model::CreateAccessPreviewRequest>
        Model::CreateAccessPreviewOutcomeCallable CreateAccessPreviewCallable(const CreateAccessPreviewRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::CreateAccessPreview, request);
        }

        /**
         * An Async wrapper for CreateAccessPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessPreviewRequestT = Model::CreateAccessPreviewRequest>
        void CreateAccessPreviewAsync(const CreateAccessPreviewRequestT& request, const CreateAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::CreateAccessPreview, request, handler, context);
        }

        /**
         * <p>Creates an analyzer for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnalyzerOutcome CreateAnalyzer(const Model::CreateAnalyzerRequest& request) const;

        /**
         * A Callable wrapper for CreateAnalyzer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAnalyzerRequestT = Model::CreateAnalyzerRequest>
        Model::CreateAnalyzerOutcomeCallable CreateAnalyzerCallable(const CreateAnalyzerRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::CreateAnalyzer, request);
        }

        /**
         * An Async wrapper for CreateAnalyzer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAnalyzerRequestT = Model::CreateAnalyzerRequest>
        void CreateAnalyzerAsync(const CreateAnalyzerRequestT& request, const CreateAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::CreateAnalyzer, request, handler, context);
        }

        /**
         * <p>Creates an archive rule for the specified analyzer. Archive rules
         * automatically archive new findings that meet the criteria you define when you
         * create the rule.</p> <p>To learn about filter keys that you can use to create an
         * archive rule, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">IAM
         * Access Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateArchiveRuleOutcome CreateArchiveRule(const Model::CreateArchiveRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateArchiveRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateArchiveRuleRequestT = Model::CreateArchiveRuleRequest>
        Model::CreateArchiveRuleOutcomeCallable CreateArchiveRuleCallable(const CreateArchiveRuleRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::CreateArchiveRule, request);
        }

        /**
         * An Async wrapper for CreateArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateArchiveRuleRequestT = Model::CreateArchiveRuleRequest>
        void CreateArchiveRuleAsync(const CreateArchiveRuleRequestT& request, const CreateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::CreateArchiveRule, request, handler, context);
        }

        /**
         * <p>Deletes the specified analyzer. When you delete an analyzer, IAM Access
         * Analyzer is disabled for the account or organization in the current or specific
         * Region. All findings that were generated by the analyzer are deleted. You cannot
         * undo this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalyzerOutcome DeleteAnalyzer(const Model::DeleteAnalyzerRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnalyzer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAnalyzerRequestT = Model::DeleteAnalyzerRequest>
        Model::DeleteAnalyzerOutcomeCallable DeleteAnalyzerCallable(const DeleteAnalyzerRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::DeleteAnalyzer, request);
        }

        /**
         * An Async wrapper for DeleteAnalyzer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAnalyzerRequestT = Model::DeleteAnalyzerRequest>
        void DeleteAnalyzerAsync(const DeleteAnalyzerRequestT& request, const DeleteAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::DeleteAnalyzer, request, handler, context);
        }

        /**
         * <p>Deletes the specified archive rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveRuleOutcome DeleteArchiveRule(const Model::DeleteArchiveRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteArchiveRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteArchiveRuleRequestT = Model::DeleteArchiveRuleRequest>
        Model::DeleteArchiveRuleOutcomeCallable DeleteArchiveRuleCallable(const DeleteArchiveRuleRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::DeleteArchiveRule, request);
        }

        /**
         * An Async wrapper for DeleteArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteArchiveRuleRequestT = Model::DeleteArchiveRuleRequest>
        void DeleteArchiveRuleAsync(const DeleteArchiveRuleRequestT& request, const DeleteArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::DeleteArchiveRule, request, handler, context);
        }

        /**
         * <p>Retrieves information about an access preview for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAccessPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPreviewOutcome GetAccessPreview(const Model::GetAccessPreviewRequest& request) const;

        /**
         * A Callable wrapper for GetAccessPreview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessPreviewRequestT = Model::GetAccessPreviewRequest>
        Model::GetAccessPreviewOutcomeCallable GetAccessPreviewCallable(const GetAccessPreviewRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::GetAccessPreview, request);
        }

        /**
         * An Async wrapper for GetAccessPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessPreviewRequestT = Model::GetAccessPreviewRequest>
        void GetAccessPreviewAsync(const GetAccessPreviewRequestT& request, const GetAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::GetAccessPreview, request, handler, context);
        }

        /**
         * <p>Retrieves information about a resource that was analyzed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnalyzedResourceOutcome GetAnalyzedResource(const Model::GetAnalyzedResourceRequest& request) const;

        /**
         * A Callable wrapper for GetAnalyzedResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnalyzedResourceRequestT = Model::GetAnalyzedResourceRequest>
        Model::GetAnalyzedResourceOutcomeCallable GetAnalyzedResourceCallable(const GetAnalyzedResourceRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::GetAnalyzedResource, request);
        }

        /**
         * An Async wrapper for GetAnalyzedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnalyzedResourceRequestT = Model::GetAnalyzedResourceRequest>
        void GetAnalyzedResourceAsync(const GetAnalyzedResourceRequestT& request, const GetAnalyzedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::GetAnalyzedResource, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified analyzer.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnalyzerOutcome GetAnalyzer(const Model::GetAnalyzerRequest& request) const;

        /**
         * A Callable wrapper for GetAnalyzer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnalyzerRequestT = Model::GetAnalyzerRequest>
        Model::GetAnalyzerOutcomeCallable GetAnalyzerCallable(const GetAnalyzerRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::GetAnalyzer, request);
        }

        /**
         * An Async wrapper for GetAnalyzer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnalyzerRequestT = Model::GetAnalyzerRequest>
        void GetAnalyzerAsync(const GetAnalyzerRequestT& request, const GetAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::GetAnalyzer, request, handler, context);
        }

        /**
         * <p>Retrieves information about an archive rule.</p> <p>To learn about filter
         * keys that you can use to create an archive rule, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">IAM
         * Access Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveRuleOutcome GetArchiveRule(const Model::GetArchiveRuleRequest& request) const;

        /**
         * A Callable wrapper for GetArchiveRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetArchiveRuleRequestT = Model::GetArchiveRuleRequest>
        Model::GetArchiveRuleOutcomeCallable GetArchiveRuleCallable(const GetArchiveRuleRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::GetArchiveRule, request);
        }

        /**
         * An Async wrapper for GetArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetArchiveRuleRequestT = Model::GetArchiveRuleRequest>
        void GetArchiveRuleAsync(const GetArchiveRuleRequestT& request, const GetArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::GetArchiveRule, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified finding. GetFinding and
         * GetFindingV2 both use <code>access-analyzer:GetFinding</code> in the
         * <code>Action</code> element of an IAM policy statement. You must have permission
         * to perform the <code>access-analyzer:GetFinding</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFinding">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingOutcome GetFinding(const Model::GetFindingRequest& request) const;

        /**
         * A Callable wrapper for GetFinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingRequestT = Model::GetFindingRequest>
        Model::GetFindingOutcomeCallable GetFindingCallable(const GetFindingRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::GetFinding, request);
        }

        /**
         * An Async wrapper for GetFinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingRequestT = Model::GetFindingRequest>
        void GetFindingAsync(const GetFindingRequestT& request, const GetFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::GetFinding, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified finding. GetFinding and
         * GetFindingV2 both use <code>access-analyzer:GetFinding</code> in the
         * <code>Action</code> element of an IAM policy statement. You must have permission
         * to perform the <code>access-analyzer:GetFinding</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFindingV2">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingV2Outcome GetFindingV2(const Model::GetFindingV2Request& request) const;

        /**
         * A Callable wrapper for GetFindingV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFindingV2RequestT = Model::GetFindingV2Request>
        Model::GetFindingV2OutcomeCallable GetFindingV2Callable(const GetFindingV2RequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::GetFindingV2, request);
        }

        /**
         * An Async wrapper for GetFindingV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFindingV2RequestT = Model::GetFindingV2Request>
        void GetFindingV2Async(const GetFindingV2RequestT& request, const GetFindingV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::GetFindingV2, request, handler, context);
        }

        /**
         * <p>Retrieves the policy that was generated using
         * <code>StartPolicyGeneration</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetGeneratedPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeneratedPolicyOutcome GetGeneratedPolicy(const Model::GetGeneratedPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetGeneratedPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGeneratedPolicyRequestT = Model::GetGeneratedPolicyRequest>
        Model::GetGeneratedPolicyOutcomeCallable GetGeneratedPolicyCallable(const GetGeneratedPolicyRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::GetGeneratedPolicy, request);
        }

        /**
         * An Async wrapper for GetGeneratedPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGeneratedPolicyRequestT = Model::GetGeneratedPolicyRequest>
        void GetGeneratedPolicyAsync(const GetGeneratedPolicyRequestT& request, const GetGeneratedPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::GetGeneratedPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves a list of access preview findings generated by the specified access
         * preview.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviewFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPreviewFindingsOutcome ListAccessPreviewFindings(const Model::ListAccessPreviewFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPreviewFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessPreviewFindingsRequestT = Model::ListAccessPreviewFindingsRequest>
        Model::ListAccessPreviewFindingsOutcomeCallable ListAccessPreviewFindingsCallable(const ListAccessPreviewFindingsRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListAccessPreviewFindings, request);
        }

        /**
         * An Async wrapper for ListAccessPreviewFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessPreviewFindingsRequestT = Model::ListAccessPreviewFindingsRequest>
        void ListAccessPreviewFindingsAsync(const ListAccessPreviewFindingsRequestT& request, const ListAccessPreviewFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListAccessPreviewFindings, request, handler, context);
        }

        /**
         * <p>Retrieves a list of access previews for the specified analyzer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPreviewsOutcome ListAccessPreviews(const Model::ListAccessPreviewsRequest& request) const;

        /**
         * A Callable wrapper for ListAccessPreviews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessPreviewsRequestT = Model::ListAccessPreviewsRequest>
        Model::ListAccessPreviewsOutcomeCallable ListAccessPreviewsCallable(const ListAccessPreviewsRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListAccessPreviews, request);
        }

        /**
         * An Async wrapper for ListAccessPreviews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessPreviewsRequestT = Model::ListAccessPreviewsRequest>
        void ListAccessPreviewsAsync(const ListAccessPreviewsRequestT& request, const ListAccessPreviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListAccessPreviews, request, handler, context);
        }

        /**
         * <p>Retrieves a list of resources of the specified type that have been analyzed
         * by the specified external access analyzer. This action is not supported for
         * unused access analyzers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzedResourcesOutcome ListAnalyzedResources(const Model::ListAnalyzedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyzedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnalyzedResourcesRequestT = Model::ListAnalyzedResourcesRequest>
        Model::ListAnalyzedResourcesOutcomeCallable ListAnalyzedResourcesCallable(const ListAnalyzedResourcesRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListAnalyzedResources, request);
        }

        /**
         * An Async wrapper for ListAnalyzedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnalyzedResourcesRequestT = Model::ListAnalyzedResourcesRequest>
        void ListAnalyzedResourcesAsync(const ListAnalyzedResourcesRequestT& request, const ListAnalyzedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListAnalyzedResources, request, handler, context);
        }

        /**
         * <p>Retrieves a list of analyzers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzersOutcome ListAnalyzers(const Model::ListAnalyzersRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyzers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnalyzersRequestT = Model::ListAnalyzersRequest>
        Model::ListAnalyzersOutcomeCallable ListAnalyzersCallable(const ListAnalyzersRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListAnalyzers, request);
        }

        /**
         * An Async wrapper for ListAnalyzers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnalyzersRequestT = Model::ListAnalyzersRequest>
        void ListAnalyzersAsync(const ListAnalyzersRequestT& request, const ListAnalyzersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListAnalyzers, request, handler, context);
        }

        /**
         * <p>Retrieves a list of archive rules created for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListArchiveRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArchiveRulesOutcome ListArchiveRules(const Model::ListArchiveRulesRequest& request) const;

        /**
         * A Callable wrapper for ListArchiveRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArchiveRulesRequestT = Model::ListArchiveRulesRequest>
        Model::ListArchiveRulesOutcomeCallable ListArchiveRulesCallable(const ListArchiveRulesRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListArchiveRules, request);
        }

        /**
         * An Async wrapper for ListArchiveRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArchiveRulesRequestT = Model::ListArchiveRulesRequest>
        void ListArchiveRulesAsync(const ListArchiveRulesRequestT& request, const ListArchiveRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListArchiveRules, request, handler, context);
        }

        /**
         * <p>Retrieves a list of findings generated by the specified analyzer.
         * ListFindings and ListFindingsV2 both use
         * <code>access-analyzer:ListFindings</code> in the <code>Action</code> element of
         * an IAM policy statement. You must have permission to perform the
         * <code>access-analyzer:ListFindings</code> action.</p> <p>To learn about filter
         * keys that you can use to retrieve a list of findings, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">IAM
         * Access Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        Model::ListFindingsOutcomeCallable ListFindingsCallable(const ListFindingsRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListFindings, request);
        }

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsRequestT = Model::ListFindingsRequest>
        void ListFindingsAsync(const ListFindingsRequestT& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListFindings, request, handler, context);
        }

        /**
         * <p>Retrieves a list of findings generated by the specified analyzer.
         * ListFindings and ListFindingsV2 both use
         * <code>access-analyzer:ListFindings</code> in the <code>Action</code> element of
         * an IAM policy statement. You must have permission to perform the
         * <code>access-analyzer:ListFindings</code> action.</p> <p>To learn about filter
         * keys that you can use to retrieve a list of findings, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">IAM
         * Access Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindingsV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsV2Outcome ListFindingsV2(const Model::ListFindingsV2Request& request) const;

        /**
         * A Callable wrapper for ListFindingsV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFindingsV2RequestT = Model::ListFindingsV2Request>
        Model::ListFindingsV2OutcomeCallable ListFindingsV2Callable(const ListFindingsV2RequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListFindingsV2, request);
        }

        /**
         * An Async wrapper for ListFindingsV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFindingsV2RequestT = Model::ListFindingsV2Request>
        void ListFindingsV2Async(const ListFindingsV2RequestT& request, const ListFindingsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListFindingsV2, request, handler, context);
        }

        /**
         * <p>Lists all of the policy generations requested in the last seven
         * days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListPolicyGenerations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyGenerationsOutcome ListPolicyGenerations(const Model::ListPolicyGenerationsRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyGenerations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPolicyGenerationsRequestT = Model::ListPolicyGenerationsRequest>
        Model::ListPolicyGenerationsOutcomeCallable ListPolicyGenerationsCallable(const ListPolicyGenerationsRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListPolicyGenerations, request);
        }

        /**
         * An Async wrapper for ListPolicyGenerations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPolicyGenerationsRequestT = Model::ListPolicyGenerationsRequest>
        void ListPolicyGenerationsAsync(const ListPolicyGenerationsRequestT& request, const ListPolicyGenerationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListPolicyGenerations, request, handler, context);
        }

        /**
         * <p>Retrieves a list of tags applied to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts the policy generation request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartPolicyGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPolicyGenerationOutcome StartPolicyGeneration(const Model::StartPolicyGenerationRequest& request) const;

        /**
         * A Callable wrapper for StartPolicyGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPolicyGenerationRequestT = Model::StartPolicyGenerationRequest>
        Model::StartPolicyGenerationOutcomeCallable StartPolicyGenerationCallable(const StartPolicyGenerationRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::StartPolicyGeneration, request);
        }

        /**
         * An Async wrapper for StartPolicyGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPolicyGenerationRequestT = Model::StartPolicyGenerationRequest>
        void StartPolicyGenerationAsync(const StartPolicyGenerationRequestT& request, const StartPolicyGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::StartPolicyGeneration, request, handler, context);
        }

        /**
         * <p>Immediately starts a scan of the policies applied to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartResourceScan">AWS
         * API Reference</a></p>
         */
        virtual Model::StartResourceScanOutcome StartResourceScan(const Model::StartResourceScanRequest& request) const;

        /**
         * A Callable wrapper for StartResourceScan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartResourceScanRequestT = Model::StartResourceScanRequest>
        Model::StartResourceScanOutcomeCallable StartResourceScanCallable(const StartResourceScanRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::StartResourceScan, request);
        }

        /**
         * An Async wrapper for StartResourceScan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartResourceScanRequestT = Model::StartResourceScanRequest>
        void StartResourceScanAsync(const StartResourceScanRequestT& request, const StartResourceScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::StartResourceScan, request, handler, context);
        }

        /**
         * <p>Adds a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the criteria and values for the specified archive rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateArchiveRuleOutcome UpdateArchiveRule(const Model::UpdateArchiveRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateArchiveRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateArchiveRuleRequestT = Model::UpdateArchiveRuleRequest>
        Model::UpdateArchiveRuleOutcomeCallable UpdateArchiveRuleCallable(const UpdateArchiveRuleRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::UpdateArchiveRule, request);
        }

        /**
         * An Async wrapper for UpdateArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateArchiveRuleRequestT = Model::UpdateArchiveRuleRequest>
        void UpdateArchiveRuleAsync(const UpdateArchiveRuleRequestT& request, const UpdateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::UpdateArchiveRule, request, handler, context);
        }

        /**
         * <p>Updates the status for the specified findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFindingsRequestT = Model::UpdateFindingsRequest>
        Model::UpdateFindingsOutcomeCallable UpdateFindingsCallable(const UpdateFindingsRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::UpdateFindings, request);
        }

        /**
         * An Async wrapper for UpdateFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFindingsRequestT = Model::UpdateFindingsRequest>
        void UpdateFindingsAsync(const UpdateFindingsRequestT& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::UpdateFindings, request, handler, context);
        }

        /**
         * <p>Requests the validation of a policy and returns a list of findings. The
         * findings help you identify issues and provide actionable recommendations to
         * resolve the issue and enable you to author functional policies that meet
         * security best practices. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ValidatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidatePolicyOutcome ValidatePolicy(const Model::ValidatePolicyRequest& request) const;

        /**
         * A Callable wrapper for ValidatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidatePolicyRequestT = Model::ValidatePolicyRequest>
        Model::ValidatePolicyOutcomeCallable ValidatePolicyCallable(const ValidatePolicyRequestT& request) const
        {
            return SubmitCallable(&AccessAnalyzerClient::ValidatePolicy, request);
        }

        /**
         * An Async wrapper for ValidatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidatePolicyRequestT = Model::ValidatePolicyRequest>
        void ValidatePolicyAsync(const ValidatePolicyRequestT& request, const ValidatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AccessAnalyzerClient::ValidatePolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AccessAnalyzerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AccessAnalyzerClient>;
      void init(const AccessAnalyzerClientConfiguration& clientConfiguration);

      AccessAnalyzerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AccessAnalyzerEndpointProviderBase> m_endpointProvider;
  };

} // namespace AccessAnalyzer
} // namespace Aws

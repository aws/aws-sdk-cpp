/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/accessanalyzer/AccessAnalyzerServiceClientModel.h>
#include <aws/accessanalyzer/AccessAnalyzerLegacyAsyncMacros.h>

namespace Aws
{
namespace AccessAnalyzer
{
  /**
   * <p>Identity and Access Management Access Analyzer helps identify potential
   * resource-access risks by enabling you to identify any policies that grant access
   * to an external principal. It does this by using logic-based reasoning to analyze
   * resource-based policies in your Amazon Web Services environment. An external
   * principal can be another Amazon Web Services account, a root user, an IAM user
   * or role, a federated user, an Amazon Web Services service, or an anonymous user.
   * You can also use IAM Access Analyzer to preview and validate public and
   * cross-account access to your resources before deploying permissions changes.
   * This guide describes the Identity and Access Management Access Analyzer
   * operations that you can call programmatically. For general information about IAM
   * Access Analyzer, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">Identity
   * and Access Management Access Analyzer</a> in the <b>IAM User Guide</b>.</p>
   * <p>To start using IAM Access Analyzer, you first need to create an analyzer.</p>
   */
  class AWS_ACCESSANALYZER_API AccessAnalyzerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration = Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration(),
                             std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider = Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider = Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG),
                             const Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration = Aws::AccessAnalyzer::AccessAnalyzerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccessAnalyzerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider = Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Retroactively applies the archive rule to existing findings that meet the
         * archive rule criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ApplyArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyArchiveRuleOutcome ApplyArchiveRule(const Model::ApplyArchiveRuleRequest& request) const;


        /**
         * <p>Cancels the requested policy generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CancelPolicyGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelPolicyGenerationOutcome CancelPolicyGeneration(const Model::CancelPolicyGenerationRequest& request) const;


        /**
         * <p>Creates an access preview that allows you to preview IAM Access Analyzer
         * findings for your resource before deploying resource permissions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAccessPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPreviewOutcome CreateAccessPreview(const Model::CreateAccessPreviewRequest& request) const;


        /**
         * <p>Creates an analyzer for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnalyzerOutcome CreateAnalyzer(const Model::CreateAnalyzerRequest& request) const;


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
         * <p>Deletes the specified analyzer. When you delete an analyzer, IAM Access
         * Analyzer is disabled for the account or organization in the current or specific
         * Region. All findings that were generated by the analyzer are deleted. You cannot
         * undo this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalyzerOutcome DeleteAnalyzer(const Model::DeleteAnalyzerRequest& request) const;


        /**
         * <p>Deletes the specified archive rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveRuleOutcome DeleteArchiveRule(const Model::DeleteArchiveRuleRequest& request) const;


        /**
         * <p>Retrieves information about an access preview for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAccessPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessPreviewOutcome GetAccessPreview(const Model::GetAccessPreviewRequest& request) const;


        /**
         * <p>Retrieves information about a resource that was analyzed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzedResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnalyzedResourceOutcome GetAnalyzedResource(const Model::GetAnalyzedResourceRequest& request) const;


        /**
         * <p>Retrieves information about the specified analyzer.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnalyzerOutcome GetAnalyzer(const Model::GetAnalyzerRequest& request) const;


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
         * <p>Retrieves information about the specified finding.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFinding">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingOutcome GetFinding(const Model::GetFindingRequest& request) const;


        /**
         * <p>Retrieves the policy that was generated using
         * <code>StartPolicyGeneration</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetGeneratedPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeneratedPolicyOutcome GetGeneratedPolicy(const Model::GetGeneratedPolicyRequest& request) const;


        /**
         * <p>Retrieves a list of access preview findings generated by the specified access
         * preview.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviewFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPreviewFindingsOutcome ListAccessPreviewFindings(const Model::ListAccessPreviewFindingsRequest& request) const;


        /**
         * <p>Retrieves a list of access previews for the specified analyzer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPreviewsOutcome ListAccessPreviews(const Model::ListAccessPreviewsRequest& request) const;


        /**
         * <p>Retrieves a list of resources of the specified type that have been analyzed
         * by the specified analyzer..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzedResourcesOutcome ListAnalyzedResources(const Model::ListAnalyzedResourcesRequest& request) const;


        /**
         * <p>Retrieves a list of analyzers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzersOutcome ListAnalyzers(const Model::ListAnalyzersRequest& request) const;


        /**
         * <p>Retrieves a list of archive rules created for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListArchiveRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArchiveRulesOutcome ListArchiveRules(const Model::ListArchiveRulesRequest& request) const;


        /**
         * <p>Retrieves a list of findings generated by the specified analyzer.</p> <p>To
         * learn about filter keys that you can use to retrieve a list of findings, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">IAM
         * Access Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;


        /**
         * <p>Lists all of the policy generations requested in the last seven
         * days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListPolicyGenerations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyGenerationsOutcome ListPolicyGenerations(const Model::ListPolicyGenerationsRequest& request) const;


        /**
         * <p>Retrieves a list of tags applied to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Starts the policy generation request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartPolicyGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPolicyGenerationOutcome StartPolicyGeneration(const Model::StartPolicyGenerationRequest& request) const;


        /**
         * <p>Immediately starts a scan of the policies applied to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartResourceScan">AWS
         * API Reference</a></p>
         */
        virtual Model::StartResourceScanOutcome StartResourceScan(const Model::StartResourceScanRequest& request) const;


        /**
         * <p>Adds a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the criteria and values for the specified archive rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateArchiveRuleOutcome UpdateArchiveRule(const Model::UpdateArchiveRuleRequest& request) const;


        /**
         * <p>Updates the status for the specified findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;


        /**
         * <p>Requests the validation of a policy and returns a list of findings. The
         * findings help you identify issues and provide actionable recommendations to
         * resolve the issue and enable you to author functional policies that meet
         * security best practices. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ValidatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidatePolicyOutcome ValidatePolicy(const Model::ValidatePolicyRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AccessAnalyzerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AccessAnalyzerClientConfiguration& clientConfiguration);

      AccessAnalyzerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AccessAnalyzerEndpointProviderBase> m_endpointProvider;
  };

} // namespace AccessAnalyzer
} // namespace Aws

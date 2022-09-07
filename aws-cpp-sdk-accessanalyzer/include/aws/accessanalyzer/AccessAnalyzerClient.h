/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/accessanalyzer/model/CancelPolicyGenerationResult.h>
#include <aws/accessanalyzer/model/CreateAccessPreviewResult.h>
#include <aws/accessanalyzer/model/CreateAnalyzerResult.h>
#include <aws/accessanalyzer/model/GetAccessPreviewResult.h>
#include <aws/accessanalyzer/model/GetAnalyzedResourceResult.h>
#include <aws/accessanalyzer/model/GetAnalyzerResult.h>
#include <aws/accessanalyzer/model/GetArchiveRuleResult.h>
#include <aws/accessanalyzer/model/GetFindingResult.h>
#include <aws/accessanalyzer/model/GetGeneratedPolicyResult.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsResult.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsResult.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesResult.h>
#include <aws/accessanalyzer/model/ListAnalyzersResult.h>
#include <aws/accessanalyzer/model/ListArchiveRulesResult.h>
#include <aws/accessanalyzer/model/ListFindingsResult.h>
#include <aws/accessanalyzer/model/ListPolicyGenerationsResult.h>
#include <aws/accessanalyzer/model/ListTagsForResourceResult.h>
#include <aws/accessanalyzer/model/StartPolicyGenerationResult.h>
#include <aws/accessanalyzer/model/TagResourceResult.h>
#include <aws/accessanalyzer/model/UntagResourceResult.h>
#include <aws/accessanalyzer/model/ValidatePolicyResult.h>
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

namespace AccessAnalyzer
{

namespace Model
{
        class ApplyArchiveRuleRequest;
        class CancelPolicyGenerationRequest;
        class CreateAccessPreviewRequest;
        class CreateAnalyzerRequest;
        class CreateArchiveRuleRequest;
        class DeleteAnalyzerRequest;
        class DeleteArchiveRuleRequest;
        class GetAccessPreviewRequest;
        class GetAnalyzedResourceRequest;
        class GetAnalyzerRequest;
        class GetArchiveRuleRequest;
        class GetFindingRequest;
        class GetGeneratedPolicyRequest;
        class ListAccessPreviewFindingsRequest;
        class ListAccessPreviewsRequest;
        class ListAnalyzedResourcesRequest;
        class ListAnalyzersRequest;
        class ListArchiveRulesRequest;
        class ListFindingsRequest;
        class ListPolicyGenerationsRequest;
        class ListTagsForResourceRequest;
        class StartPolicyGenerationRequest;
        class StartResourceScanRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateArchiveRuleRequest;
        class UpdateFindingsRequest;
        class ValidatePolicyRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> ApplyArchiveRuleOutcome;
        typedef Aws::Utils::Outcome<CancelPolicyGenerationResult, AccessAnalyzerError> CancelPolicyGenerationOutcome;
        typedef Aws::Utils::Outcome<CreateAccessPreviewResult, AccessAnalyzerError> CreateAccessPreviewOutcome;
        typedef Aws::Utils::Outcome<CreateAnalyzerResult, AccessAnalyzerError> CreateAnalyzerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> CreateArchiveRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> DeleteAnalyzerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> DeleteArchiveRuleOutcome;
        typedef Aws::Utils::Outcome<GetAccessPreviewResult, AccessAnalyzerError> GetAccessPreviewOutcome;
        typedef Aws::Utils::Outcome<GetAnalyzedResourceResult, AccessAnalyzerError> GetAnalyzedResourceOutcome;
        typedef Aws::Utils::Outcome<GetAnalyzerResult, AccessAnalyzerError> GetAnalyzerOutcome;
        typedef Aws::Utils::Outcome<GetArchiveRuleResult, AccessAnalyzerError> GetArchiveRuleOutcome;
        typedef Aws::Utils::Outcome<GetFindingResult, AccessAnalyzerError> GetFindingOutcome;
        typedef Aws::Utils::Outcome<GetGeneratedPolicyResult, AccessAnalyzerError> GetGeneratedPolicyOutcome;
        typedef Aws::Utils::Outcome<ListAccessPreviewFindingsResult, AccessAnalyzerError> ListAccessPreviewFindingsOutcome;
        typedef Aws::Utils::Outcome<ListAccessPreviewsResult, AccessAnalyzerError> ListAccessPreviewsOutcome;
        typedef Aws::Utils::Outcome<ListAnalyzedResourcesResult, AccessAnalyzerError> ListAnalyzedResourcesOutcome;
        typedef Aws::Utils::Outcome<ListAnalyzersResult, AccessAnalyzerError> ListAnalyzersOutcome;
        typedef Aws::Utils::Outcome<ListArchiveRulesResult, AccessAnalyzerError> ListArchiveRulesOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, AccessAnalyzerError> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListPolicyGenerationsResult, AccessAnalyzerError> ListPolicyGenerationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AccessAnalyzerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartPolicyGenerationResult, AccessAnalyzerError> StartPolicyGenerationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> StartResourceScanOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AccessAnalyzerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AccessAnalyzerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> UpdateArchiveRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> UpdateFindingsOutcome;
        typedef Aws::Utils::Outcome<ValidatePolicyResult, AccessAnalyzerError> ValidatePolicyOutcome;

        typedef std::future<ApplyArchiveRuleOutcome> ApplyArchiveRuleOutcomeCallable;
        typedef std::future<CancelPolicyGenerationOutcome> CancelPolicyGenerationOutcomeCallable;
        typedef std::future<CreateAccessPreviewOutcome> CreateAccessPreviewOutcomeCallable;
        typedef std::future<CreateAnalyzerOutcome> CreateAnalyzerOutcomeCallable;
        typedef std::future<CreateArchiveRuleOutcome> CreateArchiveRuleOutcomeCallable;
        typedef std::future<DeleteAnalyzerOutcome> DeleteAnalyzerOutcomeCallable;
        typedef std::future<DeleteArchiveRuleOutcome> DeleteArchiveRuleOutcomeCallable;
        typedef std::future<GetAccessPreviewOutcome> GetAccessPreviewOutcomeCallable;
        typedef std::future<GetAnalyzedResourceOutcome> GetAnalyzedResourceOutcomeCallable;
        typedef std::future<GetAnalyzerOutcome> GetAnalyzerOutcomeCallable;
        typedef std::future<GetArchiveRuleOutcome> GetArchiveRuleOutcomeCallable;
        typedef std::future<GetFindingOutcome> GetFindingOutcomeCallable;
        typedef std::future<GetGeneratedPolicyOutcome> GetGeneratedPolicyOutcomeCallable;
        typedef std::future<ListAccessPreviewFindingsOutcome> ListAccessPreviewFindingsOutcomeCallable;
        typedef std::future<ListAccessPreviewsOutcome> ListAccessPreviewsOutcomeCallable;
        typedef std::future<ListAnalyzedResourcesOutcome> ListAnalyzedResourcesOutcomeCallable;
        typedef std::future<ListAnalyzersOutcome> ListAnalyzersOutcomeCallable;
        typedef std::future<ListArchiveRulesOutcome> ListArchiveRulesOutcomeCallable;
        typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
        typedef std::future<ListPolicyGenerationsOutcome> ListPolicyGenerationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartPolicyGenerationOutcome> StartPolicyGenerationOutcomeCallable;
        typedef std::future<StartResourceScanOutcome> StartResourceScanOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateArchiveRuleOutcome> UpdateArchiveRuleOutcomeCallable;
        typedef std::future<UpdateFindingsOutcome> UpdateFindingsOutcomeCallable;
        typedef std::future<ValidatePolicyOutcome> ValidatePolicyOutcomeCallable;
} // namespace Model

  class AccessAnalyzerClient;

    typedef std::function<void(const AccessAnalyzerClient*, const Model::ApplyArchiveRuleRequest&, const Model::ApplyArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CancelPolicyGenerationRequest&, const Model::CancelPolicyGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelPolicyGenerationResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CreateAccessPreviewRequest&, const Model::CreateAccessPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessPreviewResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CreateAnalyzerRequest&, const Model::CreateAnalyzerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAnalyzerResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::CreateArchiveRuleRequest&, const Model::CreateArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::DeleteAnalyzerRequest&, const Model::DeleteAnalyzerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAnalyzerResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::DeleteArchiveRuleRequest&, const Model::DeleteArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetAccessPreviewRequest&, const Model::GetAccessPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessPreviewResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetAnalyzedResourceRequest&, const Model::GetAnalyzedResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnalyzedResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetAnalyzerRequest&, const Model::GetAnalyzerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAnalyzerResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetArchiveRuleRequest&, const Model::GetArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetFindingRequest&, const Model::GetFindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFindingResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::GetGeneratedPolicyRequest&, const Model::GetGeneratedPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGeneratedPolicyResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAccessPreviewFindingsRequest&, const Model::ListAccessPreviewFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPreviewFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAccessPreviewsRequest&, const Model::ListAccessPreviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPreviewsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAnalyzedResourcesRequest&, const Model::ListAnalyzedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalyzedResourcesResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAnalyzersRequest&, const Model::ListAnalyzersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalyzersResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListArchiveRulesRequest&, const Model::ListArchiveRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchiveRulesResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListPolicyGenerationsRequest&, const Model::ListPolicyGenerationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyGenerationsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::StartPolicyGenerationRequest&, const Model::StartPolicyGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPolicyGenerationResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::StartResourceScanRequest&, const Model::StartResourceScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartResourceScanResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UpdateArchiveRuleRequest&, const Model::UpdateArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UpdateFindingsRequest&, const Model::UpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ValidatePolicyRequest&, const Model::ValidatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidatePolicyResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AccessAnalyzerClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AccessAnalyzerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
        virtual Model::ApplyArchiveRuleOutcomeCallable ApplyArchiveRuleCallable(const Model::ApplyArchiveRuleRequest& request) const;

        /**
         * An Async wrapper for ApplyArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyArchiveRuleAsync(const Model::ApplyArchiveRuleRequest& request, const ApplyArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the requested policy generation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CancelPolicyGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelPolicyGenerationOutcome CancelPolicyGeneration(const Model::CancelPolicyGenerationRequest& request) const;

        /**
         * A Callable wrapper for CancelPolicyGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelPolicyGenerationOutcomeCallable CancelPolicyGenerationCallable(const Model::CancelPolicyGenerationRequest& request) const;

        /**
         * An Async wrapper for CancelPolicyGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelPolicyGenerationAsync(const Model::CancelPolicyGenerationRequest& request, const CancelPolicyGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAccessPreviewOutcomeCallable CreateAccessPreviewCallable(const Model::CreateAccessPreviewRequest& request) const;

        /**
         * An Async wrapper for CreateAccessPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPreviewAsync(const Model::CreateAccessPreviewRequest& request, const CreateAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an analyzer for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnalyzerOutcome CreateAnalyzer(const Model::CreateAnalyzerRequest& request) const;

        /**
         * A Callable wrapper for CreateAnalyzer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnalyzerOutcomeCallable CreateAnalyzerCallable(const Model::CreateAnalyzerRequest& request) const;

        /**
         * An Async wrapper for CreateAnalyzer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnalyzerAsync(const Model::CreateAnalyzerRequest& request, const CreateAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateArchiveRuleOutcomeCallable CreateArchiveRuleCallable(const Model::CreateArchiveRuleRequest& request) const;

        /**
         * An Async wrapper for CreateArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateArchiveRuleAsync(const Model::CreateArchiveRuleRequest& request, const CreateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteAnalyzerOutcomeCallable DeleteAnalyzerCallable(const Model::DeleteAnalyzerRequest& request) const;

        /**
         * An Async wrapper for DeleteAnalyzer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnalyzerAsync(const Model::DeleteAnalyzerRequest& request, const DeleteAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified archive rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveRuleOutcome DeleteArchiveRule(const Model::DeleteArchiveRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteArchiveRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteArchiveRuleOutcomeCallable DeleteArchiveRuleCallable(const Model::DeleteArchiveRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteArchiveRuleAsync(const Model::DeleteArchiveRuleRequest& request, const DeleteArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAccessPreviewOutcomeCallable GetAccessPreviewCallable(const Model::GetAccessPreviewRequest& request) const;

        /**
         * An Async wrapper for GetAccessPreview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccessPreviewAsync(const Model::GetAccessPreviewRequest& request, const GetAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAnalyzedResourceOutcomeCallable GetAnalyzedResourceCallable(const Model::GetAnalyzedResourceRequest& request) const;

        /**
         * An Async wrapper for GetAnalyzedResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnalyzedResourceAsync(const Model::GetAnalyzedResourceRequest& request, const GetAnalyzedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAnalyzerOutcomeCallable GetAnalyzerCallable(const Model::GetAnalyzerRequest& request) const;

        /**
         * An Async wrapper for GetAnalyzer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnalyzerAsync(const Model::GetAnalyzerRequest& request, const GetAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetArchiveRuleOutcomeCallable GetArchiveRuleCallable(const Model::GetArchiveRuleRequest& request) const;

        /**
         * An Async wrapper for GetArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetArchiveRuleAsync(const Model::GetArchiveRuleRequest& request, const GetArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the specified finding.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFinding">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFindingOutcome GetFinding(const Model::GetFindingRequest& request) const;

        /**
         * A Callable wrapper for GetFinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingOutcomeCallable GetFindingCallable(const Model::GetFindingRequest& request) const;

        /**
         * An Async wrapper for GetFinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingAsync(const Model::GetFindingRequest& request, const GetFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetGeneratedPolicyOutcomeCallable GetGeneratedPolicyCallable(const Model::GetGeneratedPolicyRequest& request) const;

        /**
         * An Async wrapper for GetGeneratedPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGeneratedPolicyAsync(const Model::GetGeneratedPolicyRequest& request, const GetGeneratedPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAccessPreviewFindingsOutcomeCallable ListAccessPreviewFindingsCallable(const Model::ListAccessPreviewFindingsRequest& request) const;

        /**
         * An Async wrapper for ListAccessPreviewFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPreviewFindingsAsync(const Model::ListAccessPreviewFindingsRequest& request, const ListAccessPreviewFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAccessPreviewsOutcomeCallable ListAccessPreviewsCallable(const Model::ListAccessPreviewsRequest& request) const;

        /**
         * An Async wrapper for ListAccessPreviews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccessPreviewsAsync(const Model::ListAccessPreviewsRequest& request, const ListAccessPreviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of resources of the specified type that have been analyzed
         * by the specified analyzer..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzedResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzedResourcesOutcome ListAnalyzedResources(const Model::ListAnalyzedResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyzedResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnalyzedResourcesOutcomeCallable ListAnalyzedResourcesCallable(const Model::ListAnalyzedResourcesRequest& request) const;

        /**
         * An Async wrapper for ListAnalyzedResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnalyzedResourcesAsync(const Model::ListAnalyzedResourcesRequest& request, const ListAnalyzedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of analyzers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzersOutcome ListAnalyzers(const Model::ListAnalyzersRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyzers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnalyzersOutcomeCallable ListAnalyzersCallable(const Model::ListAnalyzersRequest& request) const;

        /**
         * An Async wrapper for ListAnalyzers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnalyzersAsync(const Model::ListAnalyzersRequest& request, const ListAnalyzersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListArchiveRulesOutcomeCallable ListArchiveRulesCallable(const Model::ListArchiveRulesRequest& request) const;

        /**
         * An Async wrapper for ListArchiveRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArchiveRulesAsync(const Model::ListArchiveRulesRequest& request, const ListArchiveRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * An Async wrapper for ListFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListPolicyGenerationsOutcomeCallable ListPolicyGenerationsCallable(const Model::ListPolicyGenerationsRequest& request) const;

        /**
         * An Async wrapper for ListPolicyGenerations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyGenerationsAsync(const Model::ListPolicyGenerationsRequest& request, const ListPolicyGenerationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts the policy generation request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartPolicyGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPolicyGenerationOutcome StartPolicyGeneration(const Model::StartPolicyGenerationRequest& request) const;

        /**
         * A Callable wrapper for StartPolicyGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPolicyGenerationOutcomeCallable StartPolicyGenerationCallable(const Model::StartPolicyGenerationRequest& request) const;

        /**
         * An Async wrapper for StartPolicyGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPolicyGenerationAsync(const Model::StartPolicyGenerationRequest& request, const StartPolicyGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartResourceScanOutcomeCallable StartResourceScanCallable(const Model::StartResourceScanRequest& request) const;

        /**
         * An Async wrapper for StartResourceScan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartResourceScanAsync(const Model::StartResourceScanRequest& request, const StartResourceScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateArchiveRuleOutcomeCallable UpdateArchiveRuleCallable(const Model::UpdateArchiveRuleRequest& request) const;

        /**
         * An Async wrapper for UpdateArchiveRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateArchiveRuleAsync(const Model::UpdateArchiveRuleRequest& request, const UpdateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status for the specified findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsOutcomeCallable UpdateFindingsCallable(const Model::UpdateFindingsRequest& request) const;

        /**
         * An Async wrapper for UpdateFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsAsync(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ValidatePolicyOutcomeCallable ValidatePolicyCallable(const Model::ValidatePolicyRequest& request) const;

        /**
         * An Async wrapper for ValidatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidatePolicyAsync(const Model::ValidatePolicyRequest& request, const ValidatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AccessAnalyzer
} // namespace Aws

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
#include <aws/accessanalyzer/model/CreateAccessPreviewResult.h>
#include <aws/accessanalyzer/model/CreateAnalyzerResult.h>
#include <aws/accessanalyzer/model/GetAccessPreviewResult.h>
#include <aws/accessanalyzer/model/GetAnalyzedResourceResult.h>
#include <aws/accessanalyzer/model/GetAnalyzerResult.h>
#include <aws/accessanalyzer/model/GetArchiveRuleResult.h>
#include <aws/accessanalyzer/model/GetFindingResult.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsResult.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsResult.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesResult.h>
#include <aws/accessanalyzer/model/ListAnalyzersResult.h>
#include <aws/accessanalyzer/model/ListArchiveRulesResult.h>
#include <aws/accessanalyzer/model/ListFindingsResult.h>
#include <aws/accessanalyzer/model/ListTagsForResourceResult.h>
#include <aws/accessanalyzer/model/TagResourceResult.h>
#include <aws/accessanalyzer/model/UntagResourceResult.h>
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
        class ListAccessPreviewFindingsRequest;
        class ListAccessPreviewsRequest;
        class ListAnalyzedResourcesRequest;
        class ListAnalyzersRequest;
        class ListArchiveRulesRequest;
        class ListFindingsRequest;
        class ListTagsForResourceRequest;
        class StartResourceScanRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateArchiveRuleRequest;
        class UpdateFindingsRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> ApplyArchiveRuleOutcome;
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
        typedef Aws::Utils::Outcome<ListAccessPreviewFindingsResult, AccessAnalyzerError> ListAccessPreviewFindingsOutcome;
        typedef Aws::Utils::Outcome<ListAccessPreviewsResult, AccessAnalyzerError> ListAccessPreviewsOutcome;
        typedef Aws::Utils::Outcome<ListAnalyzedResourcesResult, AccessAnalyzerError> ListAnalyzedResourcesOutcome;
        typedef Aws::Utils::Outcome<ListAnalyzersResult, AccessAnalyzerError> ListAnalyzersOutcome;
        typedef Aws::Utils::Outcome<ListArchiveRulesResult, AccessAnalyzerError> ListArchiveRulesOutcome;
        typedef Aws::Utils::Outcome<ListFindingsResult, AccessAnalyzerError> ListFindingsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AccessAnalyzerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> StartResourceScanOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AccessAnalyzerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AccessAnalyzerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> UpdateArchiveRuleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AccessAnalyzerError> UpdateFindingsOutcome;

        typedef std::future<ApplyArchiveRuleOutcome> ApplyArchiveRuleOutcomeCallable;
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
        typedef std::future<ListAccessPreviewFindingsOutcome> ListAccessPreviewFindingsOutcomeCallable;
        typedef std::future<ListAccessPreviewsOutcome> ListAccessPreviewsOutcomeCallable;
        typedef std::future<ListAnalyzedResourcesOutcome> ListAnalyzedResourcesOutcomeCallable;
        typedef std::future<ListAnalyzersOutcome> ListAnalyzersOutcomeCallable;
        typedef std::future<ListArchiveRulesOutcome> ListArchiveRulesOutcomeCallable;
        typedef std::future<ListFindingsOutcome> ListFindingsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartResourceScanOutcome> StartResourceScanOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateArchiveRuleOutcome> UpdateArchiveRuleOutcomeCallable;
        typedef std::future<UpdateFindingsOutcome> UpdateFindingsOutcomeCallable;
} // namespace Model

  class AccessAnalyzerClient;

    typedef std::function<void(const AccessAnalyzerClient*, const Model::ApplyArchiveRuleRequest&, const Model::ApplyArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyArchiveRuleResponseReceivedHandler;
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
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAccessPreviewFindingsRequest&, const Model::ListAccessPreviewFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPreviewFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAccessPreviewsRequest&, const Model::ListAccessPreviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPreviewsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAnalyzedResourcesRequest&, const Model::ListAnalyzedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalyzedResourcesResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListAnalyzersRequest&, const Model::ListAnalyzersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnalyzersResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListArchiveRulesRequest&, const Model::ListArchiveRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArchiveRulesResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListFindingsRequest&, const Model::ListFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFindingsResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::StartResourceScanRequest&, const Model::StartResourceScanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartResourceScanResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UpdateArchiveRuleRequest&, const Model::UpdateArchiveRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateArchiveRuleResponseReceivedHandler;
    typedef std::function<void(const AccessAnalyzerClient*, const Model::UpdateFindingsRequest&, const Model::UpdateFindingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFindingsResponseReceivedHandler;

  /**
   * <p>AWS IAM Access Analyzer helps identify potential resource-access risks by
   * enabling you to identify any policies that grant access to an external
   * principal. It does this by using logic-based reasoning to analyze resource-based
   * policies in your AWS environment. An external principal can be another AWS
   * account, a root user, an IAM user or role, a federated user, an AWS service, or
   * an anonymous user. You can also use Access Analyzer to preview and validate
   * public and cross-account access to your resources before deploying permissions
   * changes. This guide describes the AWS IAM Access Analyzer operations that you
   * can call programmatically. For general information about Access Analyzer, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">AWS
   * IAM Access Analyzer</a> in the <b>IAM User Guide</b>.</p> <p>To start using
   * Access Analyzer, you first need to create an analyzer.</p>
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
        AccessAnalyzerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Retroactively applies the archive rule to existing findings that meet the
         * archive rule criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ApplyArchiveRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ApplyArchiveRuleOutcomeCallable ApplyArchiveRuleCallable(const Model::ApplyArchiveRuleRequest& request) const;

        /**
         * <p>Retroactively applies the archive rule to existing findings that meet the
         * archive rule criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ApplyArchiveRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyArchiveRuleAsync(const Model::ApplyArchiveRuleRequest& request, const ApplyArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an access preview that allows you to preview Access Analyzer findings
         * for your resource before deploying resource permissions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAccessPreview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPreviewOutcome CreateAccessPreview(const Model::CreateAccessPreviewRequest& request) const;

        /**
         * <p>Creates an access preview that allows you to preview Access Analyzer findings
         * for your resource before deploying resource permissions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAccessPreview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPreviewOutcomeCallable CreateAccessPreviewCallable(const Model::CreateAccessPreviewRequest& request) const;

        /**
         * <p>Creates an access preview that allows you to preview Access Analyzer findings
         * for your resource before deploying resource permissions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAccessPreview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPreviewAsync(const Model::CreateAccessPreviewRequest& request, const CreateAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an analyzer for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnalyzerOutcome CreateAnalyzer(const Model::CreateAnalyzerRequest& request) const;

        /**
         * <p>Creates an analyzer for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAnalyzer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnalyzerOutcomeCallable CreateAnalyzerCallable(const Model::CreateAnalyzerRequest& request) const;

        /**
         * <p>Creates an analyzer for your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAnalyzer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnalyzerAsync(const Model::CreateAnalyzerRequest& request, const CreateAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an archive rule for the specified analyzer. Archive rules
         * automatically archive new findings that meet the criteria you define when you
         * create the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateArchiveRuleOutcome CreateArchiveRule(const Model::CreateArchiveRuleRequest& request) const;

        /**
         * <p>Creates an archive rule for the specified analyzer. Archive rules
         * automatically archive new findings that meet the criteria you define when you
         * create the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateArchiveRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateArchiveRuleOutcomeCallable CreateArchiveRuleCallable(const Model::CreateArchiveRuleRequest& request) const;

        /**
         * <p>Creates an archive rule for the specified analyzer. Archive rules
         * automatically archive new findings that meet the criteria you define when you
         * create the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateArchiveRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateArchiveRuleAsync(const Model::CreateArchiveRuleRequest& request, const CreateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified analyzer. When you delete an analyzer, Access Analyzer
         * is disabled for the account or organization in the current or specific Region.
         * All findings that were generated by the analyzer are deleted. You cannot undo
         * this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteAnalyzer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnalyzerOutcome DeleteAnalyzer(const Model::DeleteAnalyzerRequest& request) const;

        /**
         * <p>Deletes the specified analyzer. When you delete an analyzer, Access Analyzer
         * is disabled for the account or organization in the current or specific Region.
         * All findings that were generated by the analyzer are deleted. You cannot undo
         * this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteAnalyzer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnalyzerOutcomeCallable DeleteAnalyzerCallable(const Model::DeleteAnalyzerRequest& request) const;

        /**
         * <p>Deletes the specified analyzer. When you delete an analyzer, Access Analyzer
         * is disabled for the account or organization in the current or specific Region.
         * All findings that were generated by the analyzer are deleted. You cannot undo
         * this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteAnalyzer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnalyzerAsync(const Model::DeleteAnalyzerRequest& request, const DeleteAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified archive rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteArchiveRuleOutcome DeleteArchiveRule(const Model::DeleteArchiveRuleRequest& request) const;

        /**
         * <p>Deletes the specified archive rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteArchiveRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteArchiveRuleOutcomeCallable DeleteArchiveRuleCallable(const Model::DeleteArchiveRuleRequest& request) const;

        /**
         * <p>Deletes the specified archive rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/DeleteArchiveRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about an access preview for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAccessPreview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccessPreviewOutcomeCallable GetAccessPreviewCallable(const Model::GetAccessPreviewRequest& request) const;

        /**
         * <p>Retrieves information about an access preview for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAccessPreview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about a resource that was analyzed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzedResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnalyzedResourceOutcomeCallable GetAnalyzedResourceCallable(const Model::GetAnalyzedResourceRequest& request) const;

        /**
         * <p>Retrieves information about a resource that was analyzed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzedResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about the specified analyzer.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnalyzerOutcomeCallable GetAnalyzerCallable(const Model::GetAnalyzerRequest& request) const;

        /**
         * <p>Retrieves information about the specified analyzer.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetAnalyzer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnalyzerAsync(const Model::GetAnalyzerRequest& request, const GetAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an archive rule.</p> <p>To learn about filter
         * keys that you can use to create an archive rule, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access
         * Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetArchiveRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetArchiveRuleOutcome GetArchiveRule(const Model::GetArchiveRuleRequest& request) const;

        /**
         * <p>Retrieves information about an archive rule.</p> <p>To learn about filter
         * keys that you can use to create an archive rule, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access
         * Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetArchiveRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetArchiveRuleOutcomeCallable GetArchiveRuleCallable(const Model::GetArchiveRuleRequest& request) const;

        /**
         * <p>Retrieves information about an archive rule.</p> <p>To learn about filter
         * keys that you can use to create an archive rule, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access
         * Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetArchiveRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves information about the specified finding.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFinding">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFindingOutcomeCallable GetFindingCallable(const Model::GetFindingRequest& request) const;

        /**
         * <p>Retrieves information about the specified finding.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetFinding">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFindingAsync(const Model::GetFindingRequest& request, const GetFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of access preview findings generated by the specified access
         * preview.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviewFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessPreviewFindingsOutcome ListAccessPreviewFindings(const Model::ListAccessPreviewFindingsRequest& request) const;

        /**
         * <p>Retrieves a list of access preview findings generated by the specified access
         * preview.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviewFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPreviewFindingsOutcomeCallable ListAccessPreviewFindingsCallable(const Model::ListAccessPreviewFindingsRequest& request) const;

        /**
         * <p>Retrieves a list of access preview findings generated by the specified access
         * preview.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviewFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a list of access previews for the specified analyzer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviews">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccessPreviewsOutcomeCallable ListAccessPreviewsCallable(const Model::ListAccessPreviewsRequest& request) const;

        /**
         * <p>Retrieves a list of access previews for the specified analyzer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAccessPreviews">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a list of resources of the specified type that have been analyzed
         * by the specified analyzer..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzedResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnalyzedResourcesOutcomeCallable ListAnalyzedResourcesCallable(const Model::ListAnalyzedResourcesRequest& request) const;

        /**
         * <p>Retrieves a list of resources of the specified type that have been analyzed
         * by the specified analyzer..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzedResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnalyzedResourcesAsync(const Model::ListAnalyzedResourcesRequest& request, const ListAnalyzedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of analyzers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzersOutcome ListAnalyzers(const Model::ListAnalyzersRequest& request) const;

        /**
         * <p>Retrieves a list of analyzers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnalyzersOutcomeCallable ListAnalyzersCallable(const Model::ListAnalyzersRequest& request) const;

        /**
         * <p>Retrieves a list of analyzers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a list of archive rules created for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListArchiveRules">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListArchiveRulesOutcomeCallable ListArchiveRulesCallable(const Model::ListArchiveRulesRequest& request) const;

        /**
         * <p>Retrieves a list of archive rules created for the specified
         * analyzer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListArchiveRules">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArchiveRulesAsync(const Model::ListArchiveRulesRequest& request, const ListArchiveRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of findings generated by the specified analyzer.</p> <p>To
         * learn about filter keys that you can use to retrieve a list of findings, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access
         * Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFindingsOutcome ListFindings(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Retrieves a list of findings generated by the specified analyzer.</p> <p>To
         * learn about filter keys that you can use to retrieve a list of findings, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access
         * Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFindingsOutcomeCallable ListFindingsCallable(const Model::ListFindingsRequest& request) const;

        /**
         * <p>Retrieves a list of findings generated by the specified analyzer.</p> <p>To
         * learn about filter keys that you can use to retrieve a list of findings, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access-analyzer-reference-filter-keys.html">Access
         * Analyzer filter keys</a> in the <b>IAM User Guide</b>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFindingsAsync(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of tags applied to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves a list of tags applied to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves a list of tags applied to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Immediately starts a scan of the policies applied to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartResourceScan">AWS
         * API Reference</a></p>
         */
        virtual Model::StartResourceScanOutcome StartResourceScan(const Model::StartResourceScanRequest& request) const;

        /**
         * <p>Immediately starts a scan of the policies applied to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartResourceScan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartResourceScanOutcomeCallable StartResourceScanCallable(const Model::StartResourceScanRequest& request) const;

        /**
         * <p>Immediately starts a scan of the policies applied to the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/StartResourceScan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartResourceScanAsync(const Model::StartResourceScanRequest& request, const StartResourceScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds a tag to the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the criteria and values for the specified archive rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateArchiveRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateArchiveRuleOutcomeCallable UpdateArchiveRuleCallable(const Model::UpdateArchiveRuleRequest& request) const;

        /**
         * <p>Updates the criteria and values for the specified archive rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateArchiveRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateArchiveRuleAsync(const Model::UpdateArchiveRuleRequest& request, const UpdateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status for the specified findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFindingsOutcome UpdateFindings(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p>Updates the status for the specified findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFindingsOutcomeCallable UpdateFindingsCallable(const Model::UpdateFindingsRequest& request) const;

        /**
         * <p>Updates the status for the specified findings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateFindings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFindingsAsync(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ApplyArchiveRuleAsyncHelper(const Model::ApplyArchiveRuleRequest& request, const ApplyArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccessPreviewAsyncHelper(const Model::CreateAccessPreviewRequest& request, const CreateAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAnalyzerAsyncHelper(const Model::CreateAnalyzerRequest& request, const CreateAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateArchiveRuleAsyncHelper(const Model::CreateArchiveRuleRequest& request, const CreateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAnalyzerAsyncHelper(const Model::DeleteAnalyzerRequest& request, const DeleteAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteArchiveRuleAsyncHelper(const Model::DeleteArchiveRuleRequest& request, const DeleteArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccessPreviewAsyncHelper(const Model::GetAccessPreviewRequest& request, const GetAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnalyzedResourceAsyncHelper(const Model::GetAnalyzedResourceRequest& request, const GetAnalyzedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAnalyzerAsyncHelper(const Model::GetAnalyzerRequest& request, const GetAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetArchiveRuleAsyncHelper(const Model::GetArchiveRuleRequest& request, const GetArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFindingAsyncHelper(const Model::GetFindingRequest& request, const GetFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessPreviewFindingsAsyncHelper(const Model::ListAccessPreviewFindingsRequest& request, const ListAccessPreviewFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccessPreviewsAsyncHelper(const Model::ListAccessPreviewsRequest& request, const ListAccessPreviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnalyzedResourcesAsyncHelper(const Model::ListAnalyzedResourcesRequest& request, const ListAnalyzedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnalyzersAsyncHelper(const Model::ListAnalyzersRequest& request, const ListAnalyzersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListArchiveRulesAsyncHelper(const Model::ListArchiveRulesRequest& request, const ListArchiveRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFindingsAsyncHelper(const Model::ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartResourceScanAsyncHelper(const Model::StartResourceScanRequest& request, const StartResourceScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateArchiveRuleAsyncHelper(const Model::UpdateArchiveRuleRequest& request, const UpdateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFindingsAsyncHelper(const Model::UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AccessAnalyzer
} // namespace Aws

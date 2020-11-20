/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryResult.h>
#include <aws/codeguru-reviewer/model/CreateCodeReviewResult.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewResult.h>
#include <aws/codeguru-reviewer/model/DescribeRecommendationFeedbackResult.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationResult.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryResult.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsResult.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackResult.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsResult.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsResult.h>
#include <aws/codeguru-reviewer/model/ListTagsForResourceResult.h>
#include <aws/codeguru-reviewer/model/PutRecommendationFeedbackResult.h>
#include <aws/codeguru-reviewer/model/TagResourceResult.h>
#include <aws/codeguru-reviewer/model/UntagResourceResult.h>
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

namespace CodeGuruReviewer
{

namespace Model
{
        class AssociateRepositoryRequest;
        class CreateCodeReviewRequest;
        class DescribeCodeReviewRequest;
        class DescribeRecommendationFeedbackRequest;
        class DescribeRepositoryAssociationRequest;
        class DisassociateRepositoryRequest;
        class ListCodeReviewsRequest;
        class ListRecommendationFeedbackRequest;
        class ListRecommendationsRequest;
        class ListRepositoryAssociationsRequest;
        class ListTagsForResourceRequest;
        class PutRecommendationFeedbackRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<AssociateRepositoryResult, CodeGuruReviewerError> AssociateRepositoryOutcome;
        typedef Aws::Utils::Outcome<CreateCodeReviewResult, CodeGuruReviewerError> CreateCodeReviewOutcome;
        typedef Aws::Utils::Outcome<DescribeCodeReviewResult, CodeGuruReviewerError> DescribeCodeReviewOutcome;
        typedef Aws::Utils::Outcome<DescribeRecommendationFeedbackResult, CodeGuruReviewerError> DescribeRecommendationFeedbackOutcome;
        typedef Aws::Utils::Outcome<DescribeRepositoryAssociationResult, CodeGuruReviewerError> DescribeRepositoryAssociationOutcome;
        typedef Aws::Utils::Outcome<DisassociateRepositoryResult, CodeGuruReviewerError> DisassociateRepositoryOutcome;
        typedef Aws::Utils::Outcome<ListCodeReviewsResult, CodeGuruReviewerError> ListCodeReviewsOutcome;
        typedef Aws::Utils::Outcome<ListRecommendationFeedbackResult, CodeGuruReviewerError> ListRecommendationFeedbackOutcome;
        typedef Aws::Utils::Outcome<ListRecommendationsResult, CodeGuruReviewerError> ListRecommendationsOutcome;
        typedef Aws::Utils::Outcome<ListRepositoryAssociationsResult, CodeGuruReviewerError> ListRepositoryAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeGuruReviewerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutRecommendationFeedbackResult, CodeGuruReviewerError> PutRecommendationFeedbackOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, CodeGuruReviewerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, CodeGuruReviewerError> UntagResourceOutcome;

        typedef std::future<AssociateRepositoryOutcome> AssociateRepositoryOutcomeCallable;
        typedef std::future<CreateCodeReviewOutcome> CreateCodeReviewOutcomeCallable;
        typedef std::future<DescribeCodeReviewOutcome> DescribeCodeReviewOutcomeCallable;
        typedef std::future<DescribeRecommendationFeedbackOutcome> DescribeRecommendationFeedbackOutcomeCallable;
        typedef std::future<DescribeRepositoryAssociationOutcome> DescribeRepositoryAssociationOutcomeCallable;
        typedef std::future<DisassociateRepositoryOutcome> DisassociateRepositoryOutcomeCallable;
        typedef std::future<ListCodeReviewsOutcome> ListCodeReviewsOutcomeCallable;
        typedef std::future<ListRecommendationFeedbackOutcome> ListRecommendationFeedbackOutcomeCallable;
        typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
        typedef std::future<ListRepositoryAssociationsOutcome> ListRepositoryAssociationsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutRecommendationFeedbackOutcome> PutRecommendationFeedbackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class CodeGuruReviewerClient;

    typedef std::function<void(const CodeGuruReviewerClient*, const Model::AssociateRepositoryRequest&, const Model::AssociateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::CreateCodeReviewRequest&, const Model::CreateCodeReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCodeReviewResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::DescribeCodeReviewRequest&, const Model::DescribeCodeReviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCodeReviewResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::DescribeRecommendationFeedbackRequest&, const Model::DescribeRecommendationFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecommendationFeedbackResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::DescribeRepositoryAssociationRequest&, const Model::DescribeRepositoryAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoryAssociationResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::DisassociateRepositoryRequest&, const Model::DisassociateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::ListCodeReviewsRequest&, const Model::ListCodeReviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCodeReviewsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::ListRecommendationFeedbackRequest&, const Model::ListRecommendationFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationFeedbackResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::ListRepositoryAssociationsRequest&, const Model::ListRepositoryAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoryAssociationsResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::PutRecommendationFeedbackRequest&, const Model::PutRecommendationFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRecommendationFeedbackResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeGuruReviewerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>This section provides documentation for the Amazon CodeGuru Reviewer API
   * operations. CodeGuru Reviewer is a service that uses program analysis and
   * machine learning to detect potential defects that are difficult for developers
   * to find and recommends fixes in your Java code.</p> <p>By proactively detecting
   * and providing recommendations for addressing code defects and implementing best
   * practices, CodeGuru Reviewer improves the overall quality and maintainability of
   * your code base during the code review stage. For more information about CodeGuru
   * Reviewer, see the <i> <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/welcome.html">Amazon
   * CodeGuru Reviewer User Guide</a>.</i> </p> <p> To improve the security of your
   * CodeGuru Reviewer API calls, you can establish a private connection between your
   * VPC and CodeGuru Reviewer by creating an <i>interface VPC endpoint</i>. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/vpc-interface-endpoints.html">CodeGuru
   * Reviewer and interface VPC endpoints (AWS PrivateLink)</a> in the <i>Amazon
   * CodeGuru Reviewer User Guide</i>. </p>
   */
  class AWS_CODEGURUREVIEWER_API CodeGuruReviewerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeGuruReviewerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeGuruReviewerClient();


        /**
         * <p> Use to associate an AWS CodeCommit repository or a repostory managed by AWS
         * CodeStar Connections with Amazon CodeGuru Reviewer. When you associate a
         * repository, CodeGuru Reviewer reviews source code changes in the repository's
         * pull requests and provides automatic recommendations. You can view
         * recommendations using the CodeGuru Reviewer console. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/recommendations.html">Recommendations
         * in Amazon CodeGuru Reviewer</a> in the <i>Amazon CodeGuru Reviewer User
         * Guide.</i> </p> <p>If you associate a CodeCommit repository, it must be in the
         * same AWS Region and AWS account where its CodeGuru Reviewer code reviews are
         * configured.</p> <p>Bitbucket and GitHub Enterprise Server repositories are
         * managed by AWS CodeStar Connections to connect to CodeGuru Reviewer. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/reviewer-ug/step-one.html#select-repository-source-provider">Connect
         * to a repository source provider</a> in the <i>Amazon CodeGuru Reviewer User
         * Guide.</i> </p>  <p> You cannot use the CodeGuru Reviewer SDK or the AWS
         * CLI to associate a GitHub repository with Amazon CodeGuru Reviewer. To associate
         * a GitHub repository, use the console. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/getting-started-with-guru.html">Getting
         * started with CodeGuru Reviewer</a> in the <i>CodeGuru Reviewer User Guide.</i>
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/AssociateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRepositoryOutcome AssociateRepository(const Model::AssociateRepositoryRequest& request) const;

        /**
         * <p> Use to associate an AWS CodeCommit repository or a repostory managed by AWS
         * CodeStar Connections with Amazon CodeGuru Reviewer. When you associate a
         * repository, CodeGuru Reviewer reviews source code changes in the repository's
         * pull requests and provides automatic recommendations. You can view
         * recommendations using the CodeGuru Reviewer console. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/recommendations.html">Recommendations
         * in Amazon CodeGuru Reviewer</a> in the <i>Amazon CodeGuru Reviewer User
         * Guide.</i> </p> <p>If you associate a CodeCommit repository, it must be in the
         * same AWS Region and AWS account where its CodeGuru Reviewer code reviews are
         * configured.</p> <p>Bitbucket and GitHub Enterprise Server repositories are
         * managed by AWS CodeStar Connections to connect to CodeGuru Reviewer. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/reviewer-ug/step-one.html#select-repository-source-provider">Connect
         * to a repository source provider</a> in the <i>Amazon CodeGuru Reviewer User
         * Guide.</i> </p>  <p> You cannot use the CodeGuru Reviewer SDK or the AWS
         * CLI to associate a GitHub repository with Amazon CodeGuru Reviewer. To associate
         * a GitHub repository, use the console. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/getting-started-with-guru.html">Getting
         * started with CodeGuru Reviewer</a> in the <i>CodeGuru Reviewer User Guide.</i>
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/AssociateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateRepositoryOutcomeCallable AssociateRepositoryCallable(const Model::AssociateRepositoryRequest& request) const;

        /**
         * <p> Use to associate an AWS CodeCommit repository or a repostory managed by AWS
         * CodeStar Connections with Amazon CodeGuru Reviewer. When you associate a
         * repository, CodeGuru Reviewer reviews source code changes in the repository's
         * pull requests and provides automatic recommendations. You can view
         * recommendations using the CodeGuru Reviewer console. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/recommendations.html">Recommendations
         * in Amazon CodeGuru Reviewer</a> in the <i>Amazon CodeGuru Reviewer User
         * Guide.</i> </p> <p>If you associate a CodeCommit repository, it must be in the
         * same AWS Region and AWS account where its CodeGuru Reviewer code reviews are
         * configured.</p> <p>Bitbucket and GitHub Enterprise Server repositories are
         * managed by AWS CodeStar Connections to connect to CodeGuru Reviewer. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/reviewer-ug/step-one.html#select-repository-source-provider">Connect
         * to a repository source provider</a> in the <i>Amazon CodeGuru Reviewer User
         * Guide.</i> </p>  <p> You cannot use the CodeGuru Reviewer SDK or the AWS
         * CLI to associate a GitHub repository with Amazon CodeGuru Reviewer. To associate
         * a GitHub repository, use the console. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/getting-started-with-guru.html">Getting
         * started with CodeGuru Reviewer</a> in the <i>CodeGuru Reviewer User Guide.</i>
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/AssociateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRepositoryAsync(const Model::AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Use to create a code review with a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReviewType.html">
         * <code>CodeReviewType</code> </a> of <code>RepositoryAnalysis</code>. This type
         * of code review analyzes all code under a specified branch in an associated
         * repository. <code>PullRequest</code> code reviews are automatically triggered by
         * a pull request so cannot be created using this method. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CreateCodeReview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeReviewOutcome CreateCodeReview(const Model::CreateCodeReviewRequest& request) const;

        /**
         * <p> Use to create a code review with a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReviewType.html">
         * <code>CodeReviewType</code> </a> of <code>RepositoryAnalysis</code>. This type
         * of code review analyzes all code under a specified branch in an associated
         * repository. <code>PullRequest</code> code reviews are automatically triggered by
         * a pull request so cannot be created using this method. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CreateCodeReview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCodeReviewOutcomeCallable CreateCodeReviewCallable(const Model::CreateCodeReviewRequest& request) const;

        /**
         * <p> Use to create a code review with a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReviewType.html">
         * <code>CodeReviewType</code> </a> of <code>RepositoryAnalysis</code>. This type
         * of code review analyzes all code under a specified branch in an associated
         * repository. <code>PullRequest</code> code reviews are automatically triggered by
         * a pull request so cannot be created using this method. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CreateCodeReview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCodeReviewAsync(const Model::CreateCodeReviewRequest& request, const CreateCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the metadata associated with the code review along with its
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeCodeReview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeReviewOutcome DescribeCodeReview(const Model::DescribeCodeReviewRequest& request) const;

        /**
         * <p> Returns the metadata associated with the code review along with its
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeCodeReview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCodeReviewOutcomeCallable DescribeCodeReviewCallable(const Model::DescribeCodeReviewRequest& request) const;

        /**
         * <p> Returns the metadata associated with the code review along with its
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeCodeReview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCodeReviewAsync(const Model::DescribeCodeReviewRequest& request, const DescribeCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Describes the customer feedback for a CodeGuru Reviewer recommendation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRecommendationFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommendationFeedbackOutcome DescribeRecommendationFeedback(const Model::DescribeRecommendationFeedbackRequest& request) const;

        /**
         * <p> Describes the customer feedback for a CodeGuru Reviewer recommendation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRecommendationFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecommendationFeedbackOutcomeCallable DescribeRecommendationFeedbackCallable(const Model::DescribeRecommendationFeedbackRequest& request) const;

        /**
         * <p> Describes the customer feedback for a CodeGuru Reviewer recommendation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRecommendationFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecommendationFeedbackAsync(const Model::DescribeRecommendationFeedbackRequest& request, const DescribeRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">
         * <code>RepositoryAssociation</code> </a> object that contains information about
         * the requested repository association. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRepositoryAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoryAssociationOutcome DescribeRepositoryAssociation(const Model::DescribeRepositoryAssociationRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">
         * <code>RepositoryAssociation</code> </a> object that contains information about
         * the requested repository association. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRepositoryAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRepositoryAssociationOutcomeCallable DescribeRepositoryAssociationCallable(const Model::DescribeRepositoryAssociationRequest& request) const;

        /**
         * <p> Returns a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">
         * <code>RepositoryAssociation</code> </a> object that contains information about
         * the requested repository association. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRepositoryAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRepositoryAssociationAsync(const Model::DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association between Amazon CodeGuru Reviewer and a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DisassociateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRepositoryOutcome DisassociateRepository(const Model::DisassociateRepositoryRequest& request) const;

        /**
         * <p>Removes the association between Amazon CodeGuru Reviewer and a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DisassociateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRepositoryOutcomeCallable DisassociateRepositoryCallable(const Model::DisassociateRepositoryRequest& request) const;

        /**
         * <p>Removes the association between Amazon CodeGuru Reviewer and a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DisassociateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRepositoryAsync(const Model::DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists all the code reviews that the customer has created in the past 90
         * days. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListCodeReviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeReviewsOutcome ListCodeReviews(const Model::ListCodeReviewsRequest& request) const;

        /**
         * <p> Lists all the code reviews that the customer has created in the past 90
         * days. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListCodeReviews">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCodeReviewsOutcomeCallable ListCodeReviewsCallable(const Model::ListCodeReviewsRequest& request) const;

        /**
         * <p> Lists all the code reviews that the customer has created in the past 90
         * days. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListCodeReviews">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCodeReviewsAsync(const Model::ListCodeReviewsRequest& request, const ListCodeReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RecommendationFeedbackSummary.html">
         * <code>RecommendationFeedbackSummary</code> </a> objects that contain customer
         * recommendation feedback for all CodeGuru Reviewer users. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendationFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationFeedbackOutcome ListRecommendationFeedback(const Model::ListRecommendationFeedbackRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RecommendationFeedbackSummary.html">
         * <code>RecommendationFeedbackSummary</code> </a> objects that contain customer
         * recommendation feedback for all CodeGuru Reviewer users. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendationFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendationFeedbackOutcomeCallable ListRecommendationFeedbackCallable(const Model::ListRecommendationFeedbackRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RecommendationFeedbackSummary.html">
         * <code>RecommendationFeedbackSummary</code> </a> objects that contain customer
         * recommendation feedback for all CodeGuru Reviewer users. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendationFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendationFeedbackAsync(const Model::ListRecommendationFeedbackRequest& request, const ListRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the list of all recommendations for a completed code review.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * <p> Returns the list of all recommendations for a completed code review.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const Model::ListRecommendationsRequest& request) const;

        /**
         * <p> Returns the list of all recommendations for a completed code review.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendationsAsync(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html">
         * <code>RepositoryAssociationSummary</code> </a> objects that contain summary
         * information about a repository association. You can filter the returned list by
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-ProviderType">
         * <code>ProviderType</code> </a>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Name">
         * <code>Name</code> </a>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-State">
         * <code>State</code> </a>, and <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Owner">
         * <code>Owner</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRepositoryAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoryAssociationsOutcome ListRepositoryAssociations(const Model::ListRepositoryAssociationsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html">
         * <code>RepositoryAssociationSummary</code> </a> objects that contain summary
         * information about a repository association. You can filter the returned list by
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-ProviderType">
         * <code>ProviderType</code> </a>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Name">
         * <code>Name</code> </a>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-State">
         * <code>State</code> </a>, and <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Owner">
         * <code>Owner</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRepositoryAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoryAssociationsOutcomeCallable ListRepositoryAssociationsCallable(const Model::ListRepositoryAssociationsRequest& request) const;

        /**
         * <p> Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html">
         * <code>RepositoryAssociationSummary</code> </a> objects that contain summary
         * information about a repository association. You can filter the returned list by
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-ProviderType">
         * <code>ProviderType</code> </a>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Name">
         * <code>Name</code> </a>, <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-State">
         * <code>State</code> </a>, and <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Owner">
         * <code>Owner</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRepositoryAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoryAssociationsAsync(const Model::ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of tags associated with an associated repository
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns the list of tags associated with an associated repository
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns the list of tags associated with an associated repository
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Stores customer feedback for a CodeGuru Reviewer recommendation. When this
         * API is called again with different reactions the previous feedback is
         * overwritten. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/PutRecommendationFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecommendationFeedbackOutcome PutRecommendationFeedback(const Model::PutRecommendationFeedbackRequest& request) const;

        /**
         * <p> Stores customer feedback for a CodeGuru Reviewer recommendation. When this
         * API is called again with different reactions the previous feedback is
         * overwritten. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/PutRecommendationFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRecommendationFeedbackOutcomeCallable PutRecommendationFeedbackCallable(const Model::PutRecommendationFeedbackRequest& request) const;

        /**
         * <p> Stores customer feedback for a CodeGuru Reviewer recommendation. When this
         * API is called again with different reactions the previous feedback is
         * overwritten. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/PutRecommendationFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRecommendationFeedbackAsync(const Model::PutRecommendationFeedbackRequest& request, const PutRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to an associated repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to an associated repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to an associated repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from an associated repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an associated repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from an associated repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateRepositoryAsyncHelper(const Model::AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCodeReviewAsyncHelper(const Model::CreateCodeReviewRequest& request, const CreateCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCodeReviewAsyncHelper(const Model::DescribeCodeReviewRequest& request, const DescribeCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecommendationFeedbackAsyncHelper(const Model::DescribeRecommendationFeedbackRequest& request, const DescribeRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRepositoryAssociationAsyncHelper(const Model::DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateRepositoryAsyncHelper(const Model::DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCodeReviewsAsyncHelper(const Model::ListCodeReviewsRequest& request, const ListCodeReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecommendationFeedbackAsyncHelper(const Model::ListRecommendationFeedbackRequest& request, const ListRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecommendationsAsyncHelper(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRepositoryAssociationsAsyncHelper(const Model::ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRecommendationFeedbackAsyncHelper(const Model::PutRecommendationFeedbackRequest& request, const PutRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeGuruReviewer
} // namespace Aws

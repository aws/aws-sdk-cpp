/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerServiceClientModel.h>

namespace Aws
{
namespace CodeGuruReviewer
{
  /**
   * <p>This section provides documentation for the Amazon CodeGuru Reviewer API
   * operations. CodeGuru Reviewer is a service that uses program analysis and
   * machine learning to detect potential defects that are difficult for developers
   * to find and recommends fixes in your Java and Python code.</p> <p>By proactively
   * detecting and providing recommendations for addressing code defects and
   * implementing best practices, CodeGuru Reviewer improves the overall quality and
   * maintainability of your code base during the code review stage. For more
   * information about CodeGuru Reviewer, see the <i> <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/welcome.html">Amazon
   * CodeGuru Reviewer User Guide</a>.</i> </p> <p>To improve the security of your
   * CodeGuru Reviewer API calls, you can establish a private connection between your
   * VPC and CodeGuru Reviewer by creating an <i>interface VPC endpoint</i>. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/vpc-interface-endpoints.html">CodeGuru
   * Reviewer and interface VPC endpoints (Amazon Web Services PrivateLink)</a> in
   * the <i>Amazon CodeGuru Reviewer User Guide</i>.</p>
   */
  class AWS_CODEGURUREVIEWER_API CodeGuruReviewerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeGuruReviewerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeGuruReviewerClientConfiguration ClientConfigurationType;
      typedef CodeGuruReviewerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration = Aws::CodeGuruReviewer::CodeGuruReviewerClientConfiguration(),
                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration = Aws::CodeGuruReviewer::CodeGuruReviewerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeGuruReviewerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration = Aws::CodeGuruReviewer::CodeGuruReviewerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeGuruReviewerClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeGuruReviewerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeGuruReviewerClient();

        /**
         * <p>Use to associate an Amazon Web Services CodeCommit repository or a repository
         * managed by Amazon Web Services CodeStar Connections with Amazon CodeGuru
         * Reviewer. When you associate a repository, CodeGuru Reviewer reviews source code
         * changes in the repository's pull requests and provides automatic
         * recommendations. You can view recommendations using the CodeGuru Reviewer
         * console. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/recommendations.html">Recommendations
         * in Amazon CodeGuru Reviewer</a> in the <i>Amazon CodeGuru Reviewer User
         * Guide.</i> </p> <p>If you associate a CodeCommit or S3 repository, it must be in
         * the same Amazon Web Services Region and Amazon Web Services account where its
         * CodeGuru Reviewer code reviews are configured.</p> <p>Bitbucket and GitHub
         * Enterprise Server repositories are managed by Amazon Web Services CodeStar
         * Connections to connect to CodeGuru Reviewer. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/getting-started-associate-repository.html">Associate
         * a repository</a> in the <i>Amazon CodeGuru Reviewer User Guide.</i> </p> 
         * <p>You cannot use the CodeGuru Reviewer SDK or the Amazon Web Services CLI to
         * associate a GitHub repository with Amazon CodeGuru Reviewer. To associate a
         * GitHub repository, use the console. For more information, see <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/getting-started-with-guru.html">Getting
         * started with CodeGuru Reviewer</a> in the <i>CodeGuru Reviewer User Guide.</i>
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/AssociateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRepositoryOutcome AssociateRepository(const Model::AssociateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for AssociateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateRepositoryRequestT = Model::AssociateRepositoryRequest>
        Model::AssociateRepositoryOutcomeCallable AssociateRepositoryCallable(const AssociateRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::AssociateRepository, request);
        }

        /**
         * An Async wrapper for AssociateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateRepositoryRequestT = Model::AssociateRepositoryRequest>
        void AssociateRepositoryAsync(const AssociateRepositoryRequestT& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::AssociateRepository, request, handler, context);
        }

        /**
         * <p>Use to create a code review with a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReviewType.html">CodeReviewType</a>
         * of <code>RepositoryAnalysis</code>. This type of code review analyzes all code
         * under a specified branch in an associated repository. <code>PullRequest</code>
         * code reviews are automatically triggered by a pull request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CreateCodeReview">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCodeReviewOutcome CreateCodeReview(const Model::CreateCodeReviewRequest& request) const;

        /**
         * A Callable wrapper for CreateCodeReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCodeReviewRequestT = Model::CreateCodeReviewRequest>
        Model::CreateCodeReviewOutcomeCallable CreateCodeReviewCallable(const CreateCodeReviewRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::CreateCodeReview, request);
        }

        /**
         * An Async wrapper for CreateCodeReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCodeReviewRequestT = Model::CreateCodeReviewRequest>
        void CreateCodeReviewAsync(const CreateCodeReviewRequestT& request, const CreateCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::CreateCodeReview, request, handler, context);
        }

        /**
         * <p>Returns the metadata associated with the code review along with its
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeCodeReview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCodeReviewOutcome DescribeCodeReview(const Model::DescribeCodeReviewRequest& request) const;

        /**
         * A Callable wrapper for DescribeCodeReview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCodeReviewRequestT = Model::DescribeCodeReviewRequest>
        Model::DescribeCodeReviewOutcomeCallable DescribeCodeReviewCallable(const DescribeCodeReviewRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::DescribeCodeReview, request);
        }

        /**
         * An Async wrapper for DescribeCodeReview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCodeReviewRequestT = Model::DescribeCodeReviewRequest>
        void DescribeCodeReviewAsync(const DescribeCodeReviewRequestT& request, const DescribeCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::DescribeCodeReview, request, handler, context);
        }

        /**
         * <p>Describes the customer feedback for a CodeGuru Reviewer
         * recommendation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRecommendationFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecommendationFeedbackOutcome DescribeRecommendationFeedback(const Model::DescribeRecommendationFeedbackRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecommendationFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRecommendationFeedbackRequestT = Model::DescribeRecommendationFeedbackRequest>
        Model::DescribeRecommendationFeedbackOutcomeCallable DescribeRecommendationFeedbackCallable(const DescribeRecommendationFeedbackRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::DescribeRecommendationFeedback, request);
        }

        /**
         * An Async wrapper for DescribeRecommendationFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecommendationFeedbackRequestT = Model::DescribeRecommendationFeedbackRequest>
        void DescribeRecommendationFeedbackAsync(const DescribeRecommendationFeedbackRequestT& request, const DescribeRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::DescribeRecommendationFeedback, request, handler, context);
        }

        /**
         * <p>Returns a <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
         * object that contains information about the requested repository
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DescribeRepositoryAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRepositoryAssociationOutcome DescribeRepositoryAssociation(const Model::DescribeRepositoryAssociationRequest& request) const;

        /**
         * A Callable wrapper for DescribeRepositoryAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRepositoryAssociationRequestT = Model::DescribeRepositoryAssociationRequest>
        Model::DescribeRepositoryAssociationOutcomeCallable DescribeRepositoryAssociationCallable(const DescribeRepositoryAssociationRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::DescribeRepositoryAssociation, request);
        }

        /**
         * An Async wrapper for DescribeRepositoryAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRepositoryAssociationRequestT = Model::DescribeRepositoryAssociationRequest>
        void DescribeRepositoryAssociationAsync(const DescribeRepositoryAssociationRequestT& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::DescribeRepositoryAssociation, request, handler, context);
        }

        /**
         * <p>Removes the association between Amazon CodeGuru Reviewer and a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/DisassociateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRepositoryOutcome DisassociateRepository(const Model::DisassociateRepositoryRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRepository that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateRepositoryRequestT = Model::DisassociateRepositoryRequest>
        Model::DisassociateRepositoryOutcomeCallable DisassociateRepositoryCallable(const DisassociateRepositoryRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::DisassociateRepository, request);
        }

        /**
         * An Async wrapper for DisassociateRepository that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateRepositoryRequestT = Model::DisassociateRepositoryRequest>
        void DisassociateRepositoryAsync(const DisassociateRepositoryRequestT& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::DisassociateRepository, request, handler, context);
        }

        /**
         * <p>Lists all the code reviews that the customer has created in the past 90
         * days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListCodeReviews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCodeReviewsOutcome ListCodeReviews(const Model::ListCodeReviewsRequest& request) const;

        /**
         * A Callable wrapper for ListCodeReviews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCodeReviewsRequestT = Model::ListCodeReviewsRequest>
        Model::ListCodeReviewsOutcomeCallable ListCodeReviewsCallable(const ListCodeReviewsRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::ListCodeReviews, request);
        }

        /**
         * An Async wrapper for ListCodeReviews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCodeReviewsRequestT = Model::ListCodeReviewsRequest>
        void ListCodeReviewsAsync(const ListCodeReviewsRequestT& request, const ListCodeReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::ListCodeReviews, request, handler, context);
        }

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RecommendationFeedbackSummary.html">RecommendationFeedbackSummary</a>
         * objects that contain customer recommendation feedback for all CodeGuru Reviewer
         * users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendationFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationFeedbackOutcome ListRecommendationFeedback(const Model::ListRecommendationFeedbackRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendationFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationFeedbackRequestT = Model::ListRecommendationFeedbackRequest>
        Model::ListRecommendationFeedbackOutcomeCallable ListRecommendationFeedbackCallable(const ListRecommendationFeedbackRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::ListRecommendationFeedback, request);
        }

        /**
         * An Async wrapper for ListRecommendationFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationFeedbackRequestT = Model::ListRecommendationFeedbackRequest>
        void ListRecommendationFeedbackAsync(const ListRecommendationFeedbackRequestT& request, const ListRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::ListRecommendationFeedback, request, handler, context);
        }

        /**
         * <p>Returns the list of all recommendations for a completed code
         * review.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const ListRecommendationsRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::ListRecommendations, request);
        }

        /**
         * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        void ListRecommendationsAsync(const ListRecommendationsRequestT& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::ListRecommendations, request, handler, context);
        }

        /**
         * <p>Returns a list of <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html">RepositoryAssociationSummary</a>
         * objects that contain summary information about a repository association. You can
         * filter the returned list by <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-ProviderType">ProviderType</a>,
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Name">Name</a>,
         * <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-State">State</a>,
         * and <a
         * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociationSummary.html#reviewer-Type-RepositoryAssociationSummary-Owner">Owner</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListRepositoryAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoryAssociationsOutcome ListRepositoryAssociations(const Model::ListRepositoryAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListRepositoryAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRepositoryAssociationsRequestT = Model::ListRepositoryAssociationsRequest>
        Model::ListRepositoryAssociationsOutcomeCallable ListRepositoryAssociationsCallable(const ListRepositoryAssociationsRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::ListRepositoryAssociations, request);
        }

        /**
         * An Async wrapper for ListRepositoryAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRepositoryAssociationsRequestT = Model::ListRepositoryAssociationsRequest>
        void ListRepositoryAssociationsAsync(const ListRepositoryAssociationsRequestT& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::ListRepositoryAssociations, request, handler, context);
        }

        /**
         * <p>Returns the list of tags associated with an associated repository
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Stores customer feedback for a CodeGuru Reviewer recommendation. When this
         * API is called again with different reactions the previous feedback is
         * overwritten.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/PutRecommendationFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRecommendationFeedbackOutcome PutRecommendationFeedback(const Model::PutRecommendationFeedbackRequest& request) const;

        /**
         * A Callable wrapper for PutRecommendationFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRecommendationFeedbackRequestT = Model::PutRecommendationFeedbackRequest>
        Model::PutRecommendationFeedbackOutcomeCallable PutRecommendationFeedbackCallable(const PutRecommendationFeedbackRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::PutRecommendationFeedback, request);
        }

        /**
         * An Async wrapper for PutRecommendationFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRecommendationFeedbackRequestT = Model::PutRecommendationFeedbackRequest>
        void PutRecommendationFeedbackAsync(const PutRecommendationFeedbackRequestT& request, const PutRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::PutRecommendationFeedback, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to an associated repository.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from an associated repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeGuruReviewerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeGuruReviewerClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeGuruReviewerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeGuruReviewerClient>;
      void init(const CodeGuruReviewerClientConfiguration& clientConfiguration);

      CodeGuruReviewerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CodeGuruReviewerEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeGuruReviewer
} // namespace Aws

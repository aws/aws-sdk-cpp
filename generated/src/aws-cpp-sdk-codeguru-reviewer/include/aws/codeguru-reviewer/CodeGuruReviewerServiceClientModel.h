/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codeguru-reviewer/CodeGuruReviewerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeGuruReviewerClient header */
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
/* End of service model headers required in CodeGuruReviewerClient header */

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
    using CodeGuruReviewerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeGuruReviewerEndpointProviderBase = Aws::CodeGuruReviewer::Endpoint::CodeGuruReviewerEndpointProviderBase;
    using CodeGuruReviewerEndpointProvider = Aws::CodeGuruReviewer::Endpoint::CodeGuruReviewerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeGuruReviewerClient header */
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
      /* End of service model forward declarations required in CodeGuruReviewerClient header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeGuruReviewerClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace CodeGuruReviewer
} // namespace Aws

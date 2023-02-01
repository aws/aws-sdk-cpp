/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/finspace/FinspaceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/finspace/FinspaceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in FinspaceClient header */
#include <aws/finspace/model/CreateEnvironmentResult.h>
#include <aws/finspace/model/DeleteEnvironmentResult.h>
#include <aws/finspace/model/GetEnvironmentResult.h>
#include <aws/finspace/model/ListEnvironmentsResult.h>
#include <aws/finspace/model/ListTagsForResourceResult.h>
#include <aws/finspace/model/TagResourceResult.h>
#include <aws/finspace/model/UntagResourceResult.h>
#include <aws/finspace/model/UpdateEnvironmentResult.h>
/* End of service model headers required in FinspaceClient header */

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

  namespace finspace
  {
    using FinspaceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using FinspaceEndpointProviderBase = Aws::finspace::Endpoint::FinspaceEndpointProviderBase;
    using FinspaceEndpointProvider = Aws::finspace::Endpoint::FinspaceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in FinspaceClient header */
      class CreateEnvironmentRequest;
      class DeleteEnvironmentRequest;
      class GetEnvironmentRequest;
      class ListEnvironmentsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEnvironmentRequest;
      /* End of service model forward declarations required in FinspaceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, FinspaceError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, FinspaceError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, FinspaceError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, FinspaceError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, FinspaceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, FinspaceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, FinspaceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, FinspaceError> UpdateEnvironmentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FinspaceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FinspaceClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace finspace
} // namespace Aws

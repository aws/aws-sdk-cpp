/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dsql/DSQLErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dsql/DSQLEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DSQLClient header */
#include <aws/dsql/model/CreateClusterResult.h>
#include <aws/dsql/model/DeleteClusterResult.h>
#include <aws/dsql/model/GetClusterResult.h>
#include <aws/dsql/model/GetVpcEndpointServiceNameResult.h>
#include <aws/dsql/model/ListClustersResult.h>
#include <aws/dsql/model/ListTagsForResourceResult.h>
#include <aws/dsql/model/UpdateClusterResult.h>
#include <aws/dsql/model/ListClustersRequest.h>
#include <aws/dsql/model/CreateClusterRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DSQLClient header */

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

  namespace DSQL
  {
    using DSQLClientConfiguration = Aws::Client::GenericClientConfiguration;
    using DSQLEndpointProviderBase = Aws::DSQL::Endpoint::DSQLEndpointProviderBase;
    using DSQLEndpointProvider = Aws::DSQL::Endpoint::DSQLEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DSQLClient header */
      class CreateClusterRequest;
      class DeleteClusterRequest;
      class GetClusterRequest;
      class GetVpcEndpointServiceNameRequest;
      class ListClustersRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateClusterRequest;
      /* End of service model forward declarations required in DSQLClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateClusterResult, DSQLError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, DSQLError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<GetClusterResult, DSQLError> GetClusterOutcome;
      typedef Aws::Utils::Outcome<GetVpcEndpointServiceNameResult, DSQLError> GetVpcEndpointServiceNameOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, DSQLError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DSQLError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DSQLError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DSQLError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterResult, DSQLError> UpdateClusterOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<GetClusterOutcome> GetClusterOutcomeCallable;
      typedef std::future<GetVpcEndpointServiceNameOutcome> GetVpcEndpointServiceNameOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DSQLClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DSQLClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::GetClusterRequest&, const Model::GetClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClusterResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::GetVpcEndpointServiceNameRequest&, const Model::GetVpcEndpointServiceNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpcEndpointServiceNameResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DSQLClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DSQL
} // namespace Aws

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
#include <aws/finspace/model/CreateKxChangesetResult.h>
#include <aws/finspace/model/CreateKxClusterResult.h>
#include <aws/finspace/model/CreateKxDatabaseResult.h>
#include <aws/finspace/model/CreateKxEnvironmentResult.h>
#include <aws/finspace/model/CreateKxUserResult.h>
#include <aws/finspace/model/DeleteEnvironmentResult.h>
#include <aws/finspace/model/DeleteKxClusterResult.h>
#include <aws/finspace/model/DeleteKxDatabaseResult.h>
#include <aws/finspace/model/DeleteKxEnvironmentResult.h>
#include <aws/finspace/model/DeleteKxUserResult.h>
#include <aws/finspace/model/GetEnvironmentResult.h>
#include <aws/finspace/model/GetKxChangesetResult.h>
#include <aws/finspace/model/GetKxClusterResult.h>
#include <aws/finspace/model/GetKxConnectionStringResult.h>
#include <aws/finspace/model/GetKxDatabaseResult.h>
#include <aws/finspace/model/GetKxEnvironmentResult.h>
#include <aws/finspace/model/GetKxUserResult.h>
#include <aws/finspace/model/ListEnvironmentsResult.h>
#include <aws/finspace/model/ListKxChangesetsResult.h>
#include <aws/finspace/model/ListKxClusterNodesResult.h>
#include <aws/finspace/model/ListKxClustersResult.h>
#include <aws/finspace/model/ListKxDatabasesResult.h>
#include <aws/finspace/model/ListKxEnvironmentsResult.h>
#include <aws/finspace/model/ListKxUsersResult.h>
#include <aws/finspace/model/ListTagsForResourceResult.h>
#include <aws/finspace/model/TagResourceResult.h>
#include <aws/finspace/model/UntagResourceResult.h>
#include <aws/finspace/model/UpdateEnvironmentResult.h>
#include <aws/finspace/model/UpdateKxClusterCodeConfigurationResult.h>
#include <aws/finspace/model/UpdateKxClusterDatabasesResult.h>
#include <aws/finspace/model/UpdateKxDatabaseResult.h>
#include <aws/finspace/model/UpdateKxEnvironmentResult.h>
#include <aws/finspace/model/UpdateKxEnvironmentNetworkResult.h>
#include <aws/finspace/model/UpdateKxUserResult.h>
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
      class CreateKxChangesetRequest;
      class CreateKxClusterRequest;
      class CreateKxDatabaseRequest;
      class CreateKxEnvironmentRequest;
      class CreateKxUserRequest;
      class DeleteEnvironmentRequest;
      class DeleteKxClusterRequest;
      class DeleteKxDatabaseRequest;
      class DeleteKxEnvironmentRequest;
      class DeleteKxUserRequest;
      class GetEnvironmentRequest;
      class GetKxChangesetRequest;
      class GetKxClusterRequest;
      class GetKxConnectionStringRequest;
      class GetKxDatabaseRequest;
      class GetKxEnvironmentRequest;
      class GetKxUserRequest;
      class ListEnvironmentsRequest;
      class ListKxChangesetsRequest;
      class ListKxClusterNodesRequest;
      class ListKxClustersRequest;
      class ListKxDatabasesRequest;
      class ListKxEnvironmentsRequest;
      class ListKxUsersRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEnvironmentRequest;
      class UpdateKxClusterCodeConfigurationRequest;
      class UpdateKxClusterDatabasesRequest;
      class UpdateKxDatabaseRequest;
      class UpdateKxEnvironmentRequest;
      class UpdateKxEnvironmentNetworkRequest;
      class UpdateKxUserRequest;
      /* End of service model forward declarations required in FinspaceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, FinspaceError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateKxChangesetResult, FinspaceError> CreateKxChangesetOutcome;
      typedef Aws::Utils::Outcome<CreateKxClusterResult, FinspaceError> CreateKxClusterOutcome;
      typedef Aws::Utils::Outcome<CreateKxDatabaseResult, FinspaceError> CreateKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<CreateKxEnvironmentResult, FinspaceError> CreateKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateKxUserResult, FinspaceError> CreateKxUserOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, FinspaceError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteKxClusterResult, FinspaceError> DeleteKxClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteKxDatabaseResult, FinspaceError> DeleteKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<DeleteKxEnvironmentResult, FinspaceError> DeleteKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteKxUserResult, FinspaceError> DeleteKxUserOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, FinspaceError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetKxChangesetResult, FinspaceError> GetKxChangesetOutcome;
      typedef Aws::Utils::Outcome<GetKxClusterResult, FinspaceError> GetKxClusterOutcome;
      typedef Aws::Utils::Outcome<GetKxConnectionStringResult, FinspaceError> GetKxConnectionStringOutcome;
      typedef Aws::Utils::Outcome<GetKxDatabaseResult, FinspaceError> GetKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<GetKxEnvironmentResult, FinspaceError> GetKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetKxUserResult, FinspaceError> GetKxUserOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, FinspaceError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListKxChangesetsResult, FinspaceError> ListKxChangesetsOutcome;
      typedef Aws::Utils::Outcome<ListKxClusterNodesResult, FinspaceError> ListKxClusterNodesOutcome;
      typedef Aws::Utils::Outcome<ListKxClustersResult, FinspaceError> ListKxClustersOutcome;
      typedef Aws::Utils::Outcome<ListKxDatabasesResult, FinspaceError> ListKxDatabasesOutcome;
      typedef Aws::Utils::Outcome<ListKxEnvironmentsResult, FinspaceError> ListKxEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListKxUsersResult, FinspaceError> ListKxUsersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, FinspaceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, FinspaceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, FinspaceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, FinspaceError> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateKxClusterCodeConfigurationResult, FinspaceError> UpdateKxClusterCodeConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateKxClusterDatabasesResult, FinspaceError> UpdateKxClusterDatabasesOutcome;
      typedef Aws::Utils::Outcome<UpdateKxDatabaseResult, FinspaceError> UpdateKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<UpdateKxEnvironmentResult, FinspaceError> UpdateKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateKxEnvironmentNetworkResult, FinspaceError> UpdateKxEnvironmentNetworkOutcome;
      typedef Aws::Utils::Outcome<UpdateKxUserResult, FinspaceError> UpdateKxUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateKxChangesetOutcome> CreateKxChangesetOutcomeCallable;
      typedef std::future<CreateKxClusterOutcome> CreateKxClusterOutcomeCallable;
      typedef std::future<CreateKxDatabaseOutcome> CreateKxDatabaseOutcomeCallable;
      typedef std::future<CreateKxEnvironmentOutcome> CreateKxEnvironmentOutcomeCallable;
      typedef std::future<CreateKxUserOutcome> CreateKxUserOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteKxClusterOutcome> DeleteKxClusterOutcomeCallable;
      typedef std::future<DeleteKxDatabaseOutcome> DeleteKxDatabaseOutcomeCallable;
      typedef std::future<DeleteKxEnvironmentOutcome> DeleteKxEnvironmentOutcomeCallable;
      typedef std::future<DeleteKxUserOutcome> DeleteKxUserOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<GetKxChangesetOutcome> GetKxChangesetOutcomeCallable;
      typedef std::future<GetKxClusterOutcome> GetKxClusterOutcomeCallable;
      typedef std::future<GetKxConnectionStringOutcome> GetKxConnectionStringOutcomeCallable;
      typedef std::future<GetKxDatabaseOutcome> GetKxDatabaseOutcomeCallable;
      typedef std::future<GetKxEnvironmentOutcome> GetKxEnvironmentOutcomeCallable;
      typedef std::future<GetKxUserOutcome> GetKxUserOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListKxChangesetsOutcome> ListKxChangesetsOutcomeCallable;
      typedef std::future<ListKxClusterNodesOutcome> ListKxClusterNodesOutcomeCallable;
      typedef std::future<ListKxClustersOutcome> ListKxClustersOutcomeCallable;
      typedef std::future<ListKxDatabasesOutcome> ListKxDatabasesOutcomeCallable;
      typedef std::future<ListKxEnvironmentsOutcome> ListKxEnvironmentsOutcomeCallable;
      typedef std::future<ListKxUsersOutcome> ListKxUsersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      typedef std::future<UpdateKxClusterCodeConfigurationOutcome> UpdateKxClusterCodeConfigurationOutcomeCallable;
      typedef std::future<UpdateKxClusterDatabasesOutcome> UpdateKxClusterDatabasesOutcomeCallable;
      typedef std::future<UpdateKxDatabaseOutcome> UpdateKxDatabaseOutcomeCallable;
      typedef std::future<UpdateKxEnvironmentOutcome> UpdateKxEnvironmentOutcomeCallable;
      typedef std::future<UpdateKxEnvironmentNetworkOutcome> UpdateKxEnvironmentNetworkOutcomeCallable;
      typedef std::future<UpdateKxUserOutcome> UpdateKxUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FinspaceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FinspaceClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxChangesetRequest&, const Model::CreateKxChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxChangesetResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxClusterRequest&, const Model::CreateKxClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxClusterResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxDatabaseRequest&, const Model::CreateKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxEnvironmentRequest&, const Model::CreateKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxUserRequest&, const Model::CreateKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxUserResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxClusterRequest&, const Model::DeleteKxClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxClusterResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxDatabaseRequest&, const Model::DeleteKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxEnvironmentRequest&, const Model::DeleteKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxUserRequest&, const Model::DeleteKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxUserResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxChangesetRequest&, const Model::GetKxChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxChangesetResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxClusterRequest&, const Model::GetKxClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxClusterResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxConnectionStringRequest&, const Model::GetKxConnectionStringOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxConnectionStringResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxDatabaseRequest&, const Model::GetKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxEnvironmentRequest&, const Model::GetKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxUserRequest&, const Model::GetKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxUserResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxChangesetsRequest&, const Model::ListKxChangesetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxChangesetsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxClusterNodesRequest&, const Model::ListKxClusterNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxClusterNodesResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxClustersRequest&, const Model::ListKxClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxClustersResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxDatabasesRequest&, const Model::ListKxDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxDatabasesResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxEnvironmentsRequest&, const Model::ListKxEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxUsersRequest&, const Model::ListKxUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxUsersResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxClusterCodeConfigurationRequest&, const Model::UpdateKxClusterCodeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxClusterCodeConfigurationResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxClusterDatabasesRequest&, const Model::UpdateKxClusterDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxClusterDatabasesResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxDatabaseRequest&, const Model::UpdateKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxEnvironmentRequest&, const Model::UpdateKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxEnvironmentNetworkRequest&, const Model::UpdateKxEnvironmentNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxEnvironmentNetworkResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxUserRequest&, const Model::UpdateKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace finspace
} // namespace Aws

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
#include <aws/finspace/model/CreateKxChangesetResult.h>
#include <aws/finspace/model/CreateKxClusterResult.h>
#include <aws/finspace/model/CreateKxDatabaseResult.h>
#include <aws/finspace/model/CreateKxDataviewResult.h>
#include <aws/finspace/model/CreateKxEnvironmentResult.h>
#include <aws/finspace/model/CreateKxScalingGroupResult.h>
#include <aws/finspace/model/CreateKxUserResult.h>
#include <aws/finspace/model/CreateKxVolumeResult.h>
#include <aws/finspace/model/DeleteKxClusterResult.h>
#include <aws/finspace/model/DeleteKxDatabaseResult.h>
#include <aws/finspace/model/DeleteKxDataviewResult.h>
#include <aws/finspace/model/DeleteKxEnvironmentResult.h>
#include <aws/finspace/model/DeleteKxScalingGroupResult.h>
#include <aws/finspace/model/DeleteKxUserResult.h>
#include <aws/finspace/model/DeleteKxVolumeResult.h>
#include <aws/finspace/model/GetKxChangesetResult.h>
#include <aws/finspace/model/GetKxClusterResult.h>
#include <aws/finspace/model/GetKxConnectionStringResult.h>
#include <aws/finspace/model/GetKxDatabaseResult.h>
#include <aws/finspace/model/GetKxDataviewResult.h>
#include <aws/finspace/model/GetKxEnvironmentResult.h>
#include <aws/finspace/model/GetKxScalingGroupResult.h>
#include <aws/finspace/model/GetKxUserResult.h>
#include <aws/finspace/model/GetKxVolumeResult.h>
#include <aws/finspace/model/ListKxChangesetsResult.h>
#include <aws/finspace/model/ListKxClusterNodesResult.h>
#include <aws/finspace/model/ListKxClustersResult.h>
#include <aws/finspace/model/ListKxDatabasesResult.h>
#include <aws/finspace/model/ListKxDataviewsResult.h>
#include <aws/finspace/model/ListKxEnvironmentsResult.h>
#include <aws/finspace/model/ListKxScalingGroupsResult.h>
#include <aws/finspace/model/ListKxUsersResult.h>
#include <aws/finspace/model/ListKxVolumesResult.h>
#include <aws/finspace/model/ListTagsForResourceResult.h>
#include <aws/finspace/model/TagResourceResult.h>
#include <aws/finspace/model/UntagResourceResult.h>
#include <aws/finspace/model/UpdateKxClusterCodeConfigurationResult.h>
#include <aws/finspace/model/UpdateKxClusterDatabasesResult.h>
#include <aws/finspace/model/UpdateKxDatabaseResult.h>
#include <aws/finspace/model/UpdateKxDataviewResult.h>
#include <aws/finspace/model/UpdateKxEnvironmentResult.h>
#include <aws/finspace/model/UpdateKxEnvironmentNetworkResult.h>
#include <aws/finspace/model/UpdateKxUserResult.h>
#include <aws/finspace/model/UpdateKxVolumeResult.h>
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
      class CreateKxChangesetRequest;
      class CreateKxClusterRequest;
      class CreateKxDatabaseRequest;
      class CreateKxDataviewRequest;
      class CreateKxEnvironmentRequest;
      class CreateKxScalingGroupRequest;
      class CreateKxUserRequest;
      class CreateKxVolumeRequest;
      class DeleteKxClusterRequest;
      class DeleteKxDatabaseRequest;
      class DeleteKxDataviewRequest;
      class DeleteKxEnvironmentRequest;
      class DeleteKxScalingGroupRequest;
      class DeleteKxUserRequest;
      class DeleteKxVolumeRequest;
      class GetKxChangesetRequest;
      class GetKxClusterRequest;
      class GetKxConnectionStringRequest;
      class GetKxDatabaseRequest;
      class GetKxDataviewRequest;
      class GetKxEnvironmentRequest;
      class GetKxScalingGroupRequest;
      class GetKxUserRequest;
      class GetKxVolumeRequest;
      class ListKxChangesetsRequest;
      class ListKxClusterNodesRequest;
      class ListKxClustersRequest;
      class ListKxDatabasesRequest;
      class ListKxDataviewsRequest;
      class ListKxEnvironmentsRequest;
      class ListKxScalingGroupsRequest;
      class ListKxUsersRequest;
      class ListKxVolumesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateKxClusterCodeConfigurationRequest;
      class UpdateKxClusterDatabasesRequest;
      class UpdateKxDatabaseRequest;
      class UpdateKxDataviewRequest;
      class UpdateKxEnvironmentRequest;
      class UpdateKxEnvironmentNetworkRequest;
      class UpdateKxUserRequest;
      class UpdateKxVolumeRequest;
      /* End of service model forward declarations required in FinspaceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateKxChangesetResult, FinspaceError> CreateKxChangesetOutcome;
      typedef Aws::Utils::Outcome<CreateKxClusterResult, FinspaceError> CreateKxClusterOutcome;
      typedef Aws::Utils::Outcome<CreateKxDatabaseResult, FinspaceError> CreateKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<CreateKxDataviewResult, FinspaceError> CreateKxDataviewOutcome;
      typedef Aws::Utils::Outcome<CreateKxEnvironmentResult, FinspaceError> CreateKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateKxScalingGroupResult, FinspaceError> CreateKxScalingGroupOutcome;
      typedef Aws::Utils::Outcome<CreateKxUserResult, FinspaceError> CreateKxUserOutcome;
      typedef Aws::Utils::Outcome<CreateKxVolumeResult, FinspaceError> CreateKxVolumeOutcome;
      typedef Aws::Utils::Outcome<DeleteKxClusterResult, FinspaceError> DeleteKxClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteKxDatabaseResult, FinspaceError> DeleteKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<DeleteKxDataviewResult, FinspaceError> DeleteKxDataviewOutcome;
      typedef Aws::Utils::Outcome<DeleteKxEnvironmentResult, FinspaceError> DeleteKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteKxScalingGroupResult, FinspaceError> DeleteKxScalingGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteKxUserResult, FinspaceError> DeleteKxUserOutcome;
      typedef Aws::Utils::Outcome<DeleteKxVolumeResult, FinspaceError> DeleteKxVolumeOutcome;
      typedef Aws::Utils::Outcome<GetKxChangesetResult, FinspaceError> GetKxChangesetOutcome;
      typedef Aws::Utils::Outcome<GetKxClusterResult, FinspaceError> GetKxClusterOutcome;
      typedef Aws::Utils::Outcome<GetKxConnectionStringResult, FinspaceError> GetKxConnectionStringOutcome;
      typedef Aws::Utils::Outcome<GetKxDatabaseResult, FinspaceError> GetKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<GetKxDataviewResult, FinspaceError> GetKxDataviewOutcome;
      typedef Aws::Utils::Outcome<GetKxEnvironmentResult, FinspaceError> GetKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetKxScalingGroupResult, FinspaceError> GetKxScalingGroupOutcome;
      typedef Aws::Utils::Outcome<GetKxUserResult, FinspaceError> GetKxUserOutcome;
      typedef Aws::Utils::Outcome<GetKxVolumeResult, FinspaceError> GetKxVolumeOutcome;
      typedef Aws::Utils::Outcome<ListKxChangesetsResult, FinspaceError> ListKxChangesetsOutcome;
      typedef Aws::Utils::Outcome<ListKxClusterNodesResult, FinspaceError> ListKxClusterNodesOutcome;
      typedef Aws::Utils::Outcome<ListKxClustersResult, FinspaceError> ListKxClustersOutcome;
      typedef Aws::Utils::Outcome<ListKxDatabasesResult, FinspaceError> ListKxDatabasesOutcome;
      typedef Aws::Utils::Outcome<ListKxDataviewsResult, FinspaceError> ListKxDataviewsOutcome;
      typedef Aws::Utils::Outcome<ListKxEnvironmentsResult, FinspaceError> ListKxEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListKxScalingGroupsResult, FinspaceError> ListKxScalingGroupsOutcome;
      typedef Aws::Utils::Outcome<ListKxUsersResult, FinspaceError> ListKxUsersOutcome;
      typedef Aws::Utils::Outcome<ListKxVolumesResult, FinspaceError> ListKxVolumesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, FinspaceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, FinspaceError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, FinspaceError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateKxClusterCodeConfigurationResult, FinspaceError> UpdateKxClusterCodeConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateKxClusterDatabasesResult, FinspaceError> UpdateKxClusterDatabasesOutcome;
      typedef Aws::Utils::Outcome<UpdateKxDatabaseResult, FinspaceError> UpdateKxDatabaseOutcome;
      typedef Aws::Utils::Outcome<UpdateKxDataviewResult, FinspaceError> UpdateKxDataviewOutcome;
      typedef Aws::Utils::Outcome<UpdateKxEnvironmentResult, FinspaceError> UpdateKxEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateKxEnvironmentNetworkResult, FinspaceError> UpdateKxEnvironmentNetworkOutcome;
      typedef Aws::Utils::Outcome<UpdateKxUserResult, FinspaceError> UpdateKxUserOutcome;
      typedef Aws::Utils::Outcome<UpdateKxVolumeResult, FinspaceError> UpdateKxVolumeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateKxChangesetOutcome> CreateKxChangesetOutcomeCallable;
      typedef std::future<CreateKxClusterOutcome> CreateKxClusterOutcomeCallable;
      typedef std::future<CreateKxDatabaseOutcome> CreateKxDatabaseOutcomeCallable;
      typedef std::future<CreateKxDataviewOutcome> CreateKxDataviewOutcomeCallable;
      typedef std::future<CreateKxEnvironmentOutcome> CreateKxEnvironmentOutcomeCallable;
      typedef std::future<CreateKxScalingGroupOutcome> CreateKxScalingGroupOutcomeCallable;
      typedef std::future<CreateKxUserOutcome> CreateKxUserOutcomeCallable;
      typedef std::future<CreateKxVolumeOutcome> CreateKxVolumeOutcomeCallable;
      typedef std::future<DeleteKxClusterOutcome> DeleteKxClusterOutcomeCallable;
      typedef std::future<DeleteKxDatabaseOutcome> DeleteKxDatabaseOutcomeCallable;
      typedef std::future<DeleteKxDataviewOutcome> DeleteKxDataviewOutcomeCallable;
      typedef std::future<DeleteKxEnvironmentOutcome> DeleteKxEnvironmentOutcomeCallable;
      typedef std::future<DeleteKxScalingGroupOutcome> DeleteKxScalingGroupOutcomeCallable;
      typedef std::future<DeleteKxUserOutcome> DeleteKxUserOutcomeCallable;
      typedef std::future<DeleteKxVolumeOutcome> DeleteKxVolumeOutcomeCallable;
      typedef std::future<GetKxChangesetOutcome> GetKxChangesetOutcomeCallable;
      typedef std::future<GetKxClusterOutcome> GetKxClusterOutcomeCallable;
      typedef std::future<GetKxConnectionStringOutcome> GetKxConnectionStringOutcomeCallable;
      typedef std::future<GetKxDatabaseOutcome> GetKxDatabaseOutcomeCallable;
      typedef std::future<GetKxDataviewOutcome> GetKxDataviewOutcomeCallable;
      typedef std::future<GetKxEnvironmentOutcome> GetKxEnvironmentOutcomeCallable;
      typedef std::future<GetKxScalingGroupOutcome> GetKxScalingGroupOutcomeCallable;
      typedef std::future<GetKxUserOutcome> GetKxUserOutcomeCallable;
      typedef std::future<GetKxVolumeOutcome> GetKxVolumeOutcomeCallable;
      typedef std::future<ListKxChangesetsOutcome> ListKxChangesetsOutcomeCallable;
      typedef std::future<ListKxClusterNodesOutcome> ListKxClusterNodesOutcomeCallable;
      typedef std::future<ListKxClustersOutcome> ListKxClustersOutcomeCallable;
      typedef std::future<ListKxDatabasesOutcome> ListKxDatabasesOutcomeCallable;
      typedef std::future<ListKxDataviewsOutcome> ListKxDataviewsOutcomeCallable;
      typedef std::future<ListKxEnvironmentsOutcome> ListKxEnvironmentsOutcomeCallable;
      typedef std::future<ListKxScalingGroupsOutcome> ListKxScalingGroupsOutcomeCallable;
      typedef std::future<ListKxUsersOutcome> ListKxUsersOutcomeCallable;
      typedef std::future<ListKxVolumesOutcome> ListKxVolumesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateKxClusterCodeConfigurationOutcome> UpdateKxClusterCodeConfigurationOutcomeCallable;
      typedef std::future<UpdateKxClusterDatabasesOutcome> UpdateKxClusterDatabasesOutcomeCallable;
      typedef std::future<UpdateKxDatabaseOutcome> UpdateKxDatabaseOutcomeCallable;
      typedef std::future<UpdateKxDataviewOutcome> UpdateKxDataviewOutcomeCallable;
      typedef std::future<UpdateKxEnvironmentOutcome> UpdateKxEnvironmentOutcomeCallable;
      typedef std::future<UpdateKxEnvironmentNetworkOutcome> UpdateKxEnvironmentNetworkOutcomeCallable;
      typedef std::future<UpdateKxUserOutcome> UpdateKxUserOutcomeCallable;
      typedef std::future<UpdateKxVolumeOutcome> UpdateKxVolumeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class FinspaceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxChangesetRequest&, const Model::CreateKxChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxChangesetResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxClusterRequest&, const Model::CreateKxClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxClusterResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxDatabaseRequest&, const Model::CreateKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxDataviewRequest&, const Model::CreateKxDataviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxDataviewResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxEnvironmentRequest&, const Model::CreateKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxScalingGroupRequest&, const Model::CreateKxScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxScalingGroupResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxUserRequest&, const Model::CreateKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxUserResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::CreateKxVolumeRequest&, const Model::CreateKxVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKxVolumeResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxClusterRequest&, const Model::DeleteKxClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxClusterResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxDatabaseRequest&, const Model::DeleteKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxDataviewRequest&, const Model::DeleteKxDataviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxDataviewResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxEnvironmentRequest&, const Model::DeleteKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxScalingGroupRequest&, const Model::DeleteKxScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxScalingGroupResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxUserRequest&, const Model::DeleteKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxUserResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::DeleteKxVolumeRequest&, const Model::DeleteKxVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKxVolumeResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxChangesetRequest&, const Model::GetKxChangesetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxChangesetResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxClusterRequest&, const Model::GetKxClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxClusterResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxConnectionStringRequest&, const Model::GetKxConnectionStringOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxConnectionStringResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxDatabaseRequest&, const Model::GetKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxDataviewRequest&, const Model::GetKxDataviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxDataviewResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxEnvironmentRequest&, const Model::GetKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxScalingGroupRequest&, const Model::GetKxScalingGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxScalingGroupResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxUserRequest&, const Model::GetKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxUserResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::GetKxVolumeRequest&, const Model::GetKxVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKxVolumeResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxChangesetsRequest&, const Model::ListKxChangesetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxChangesetsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxClusterNodesRequest&, const Model::ListKxClusterNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxClusterNodesResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxClustersRequest&, const Model::ListKxClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxClustersResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxDatabasesRequest&, const Model::ListKxDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxDatabasesResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxDataviewsRequest&, const Model::ListKxDataviewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxDataviewsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxEnvironmentsRequest&, const Model::ListKxEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxScalingGroupsRequest&, const Model::ListKxScalingGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxScalingGroupsResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxUsersRequest&, const Model::ListKxUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxUsersResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListKxVolumesRequest&, const Model::ListKxVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKxVolumesResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxClusterCodeConfigurationRequest&, const Model::UpdateKxClusterCodeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxClusterCodeConfigurationResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxClusterDatabasesRequest&, const Model::UpdateKxClusterDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxClusterDatabasesResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxDatabaseRequest&, const Model::UpdateKxDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxDatabaseResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxDataviewRequest&, const Model::UpdateKxDataviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxDataviewResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxEnvironmentRequest&, const Model::UpdateKxEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxEnvironmentResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxEnvironmentNetworkRequest&, const Model::UpdateKxEnvironmentNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxEnvironmentNetworkResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxUserRequest&, const Model::UpdateKxUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxUserResponseReceivedHandler;
    typedef std::function<void(const FinspaceClient*, const Model::UpdateKxVolumeRequest&, const Model::UpdateKxVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKxVolumeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace finspace
} // namespace Aws

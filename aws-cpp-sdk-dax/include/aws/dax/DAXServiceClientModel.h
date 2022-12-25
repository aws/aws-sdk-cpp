/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/dax/DAXErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/dax/DAXEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DAXClient header */
#include <aws/dax/model/CreateClusterResult.h>
#include <aws/dax/model/CreateParameterGroupResult.h>
#include <aws/dax/model/CreateSubnetGroupResult.h>
#include <aws/dax/model/DecreaseReplicationFactorResult.h>
#include <aws/dax/model/DeleteClusterResult.h>
#include <aws/dax/model/DeleteParameterGroupResult.h>
#include <aws/dax/model/DeleteSubnetGroupResult.h>
#include <aws/dax/model/DescribeClustersResult.h>
#include <aws/dax/model/DescribeDefaultParametersResult.h>
#include <aws/dax/model/DescribeEventsResult.h>
#include <aws/dax/model/DescribeParameterGroupsResult.h>
#include <aws/dax/model/DescribeParametersResult.h>
#include <aws/dax/model/DescribeSubnetGroupsResult.h>
#include <aws/dax/model/IncreaseReplicationFactorResult.h>
#include <aws/dax/model/ListTagsResult.h>
#include <aws/dax/model/RebootNodeResult.h>
#include <aws/dax/model/TagResourceResult.h>
#include <aws/dax/model/UntagResourceResult.h>
#include <aws/dax/model/UpdateClusterResult.h>
#include <aws/dax/model/UpdateParameterGroupResult.h>
#include <aws/dax/model/UpdateSubnetGroupResult.h>
/* End of service model headers required in DAXClient header */

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

  namespace DAX
  {
    using DAXClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DAXEndpointProviderBase = Aws::DAX::Endpoint::DAXEndpointProviderBase;
    using DAXEndpointProvider = Aws::DAX::Endpoint::DAXEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DAXClient header */
      class CreateClusterRequest;
      class CreateParameterGroupRequest;
      class CreateSubnetGroupRequest;
      class DecreaseReplicationFactorRequest;
      class DeleteClusterRequest;
      class DeleteParameterGroupRequest;
      class DeleteSubnetGroupRequest;
      class DescribeClustersRequest;
      class DescribeDefaultParametersRequest;
      class DescribeEventsRequest;
      class DescribeParameterGroupsRequest;
      class DescribeParametersRequest;
      class DescribeSubnetGroupsRequest;
      class IncreaseReplicationFactorRequest;
      class ListTagsRequest;
      class RebootNodeRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateClusterRequest;
      class UpdateParameterGroupRequest;
      class UpdateSubnetGroupRequest;
      /* End of service model forward declarations required in DAXClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateClusterResult, DAXError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateParameterGroupResult, DAXError> CreateParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSubnetGroupResult, DAXError> CreateSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DecreaseReplicationFactorResult, DAXError> DecreaseReplicationFactorOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, DAXError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteParameterGroupResult, DAXError> DeleteParameterGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteSubnetGroupResult, DAXError> DeleteSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeClustersResult, DAXError> DescribeClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeDefaultParametersResult, DAXError> DescribeDefaultParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, DAXError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeParameterGroupsResult, DAXError> DescribeParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeParametersResult, DAXError> DescribeParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeSubnetGroupsResult, DAXError> DescribeSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<IncreaseReplicationFactorResult, DAXError> IncreaseReplicationFactorOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, DAXError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<RebootNodeResult, DAXError> RebootNodeOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DAXError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DAXError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterResult, DAXError> UpdateClusterOutcome;
      typedef Aws::Utils::Outcome<UpdateParameterGroupResult, DAXError> UpdateParameterGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSubnetGroupResult, DAXError> UpdateSubnetGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateParameterGroupOutcome> CreateParameterGroupOutcomeCallable;
      typedef std::future<CreateSubnetGroupOutcome> CreateSubnetGroupOutcomeCallable;
      typedef std::future<DecreaseReplicationFactorOutcome> DecreaseReplicationFactorOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteParameterGroupOutcome> DeleteParameterGroupOutcomeCallable;
      typedef std::future<DeleteSubnetGroupOutcome> DeleteSubnetGroupOutcomeCallable;
      typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
      typedef std::future<DescribeDefaultParametersOutcome> DescribeDefaultParametersOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeParameterGroupsOutcome> DescribeParameterGroupsOutcomeCallable;
      typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
      typedef std::future<DescribeSubnetGroupsOutcome> DescribeSubnetGroupsOutcomeCallable;
      typedef std::future<IncreaseReplicationFactorOutcome> IncreaseReplicationFactorOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<RebootNodeOutcome> RebootNodeOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
      typedef std::future<UpdateParameterGroupOutcome> UpdateParameterGroupOutcomeCallable;
      typedef std::future<UpdateSubnetGroupOutcome> UpdateSubnetGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DAXClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DAXClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::CreateParameterGroupRequest&, const Model::CreateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::CreateSubnetGroupRequest&, const Model::CreateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DecreaseReplicationFactorRequest&, const Model::DecreaseReplicationFactorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecreaseReplicationFactorResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DeleteParameterGroupRequest&, const Model::DeleteParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DeleteSubnetGroupRequest&, const Model::DeleteSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeDefaultParametersRequest&, const Model::DescribeDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeParameterGroupsRequest&, const Model::DescribeParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeParametersRequest&, const Model::DescribeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParametersResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::DescribeSubnetGroupsRequest&, const Model::DescribeSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::IncreaseReplicationFactorRequest&, const Model::IncreaseReplicationFactorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IncreaseReplicationFactorResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::RebootNodeRequest&, const Model::RebootNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootNodeResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UpdateParameterGroupRequest&, const Model::UpdateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const DAXClient*, const Model::UpdateSubnetGroupRequest&, const Model::UpdateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubnetGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DAX
} // namespace Aws

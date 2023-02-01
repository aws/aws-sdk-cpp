/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/docdb-elastic/DocDBElasticErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/docdb-elastic/DocDBElasticEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DocDBElasticClient header */
#include <aws/docdb-elastic/model/CreateClusterResult.h>
#include <aws/docdb-elastic/model/CreateClusterSnapshotResult.h>
#include <aws/docdb-elastic/model/DeleteClusterResult.h>
#include <aws/docdb-elastic/model/DeleteClusterSnapshotResult.h>
#include <aws/docdb-elastic/model/GetClusterResult.h>
#include <aws/docdb-elastic/model/GetClusterSnapshotResult.h>
#include <aws/docdb-elastic/model/ListClusterSnapshotsResult.h>
#include <aws/docdb-elastic/model/ListClustersResult.h>
#include <aws/docdb-elastic/model/ListTagsForResourceResult.h>
#include <aws/docdb-elastic/model/RestoreClusterFromSnapshotResult.h>
#include <aws/docdb-elastic/model/TagResourceResult.h>
#include <aws/docdb-elastic/model/UntagResourceResult.h>
#include <aws/docdb-elastic/model/UpdateClusterResult.h>
/* End of service model headers required in DocDBElasticClient header */

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

  namespace DocDBElastic
  {
    using DocDBElasticClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DocDBElasticEndpointProviderBase = Aws::DocDBElastic::Endpoint::DocDBElasticEndpointProviderBase;
    using DocDBElasticEndpointProvider = Aws::DocDBElastic::Endpoint::DocDBElasticEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DocDBElasticClient header */
      class CreateClusterRequest;
      class CreateClusterSnapshotRequest;
      class DeleteClusterRequest;
      class DeleteClusterSnapshotRequest;
      class GetClusterRequest;
      class GetClusterSnapshotRequest;
      class ListClusterSnapshotsRequest;
      class ListClustersRequest;
      class ListTagsForResourceRequest;
      class RestoreClusterFromSnapshotRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateClusterRequest;
      /* End of service model forward declarations required in DocDBElasticClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateClusterResult, DocDBElasticError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateClusterSnapshotResult, DocDBElasticError> CreateClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, DocDBElasticError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterSnapshotResult, DocDBElasticError> DeleteClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetClusterResult, DocDBElasticError> GetClusterOutcome;
      typedef Aws::Utils::Outcome<GetClusterSnapshotResult, DocDBElasticError> GetClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<ListClusterSnapshotsResult, DocDBElasticError> ListClusterSnapshotsOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, DocDBElasticError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DocDBElasticError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RestoreClusterFromSnapshotResult, DocDBElasticError> RestoreClusterFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DocDBElasticError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DocDBElasticError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterResult, DocDBElasticError> UpdateClusterOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateClusterSnapshotOutcome> CreateClusterSnapshotOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteClusterSnapshotOutcome> DeleteClusterSnapshotOutcomeCallable;
      typedef std::future<GetClusterOutcome> GetClusterOutcomeCallable;
      typedef std::future<GetClusterSnapshotOutcome> GetClusterSnapshotOutcomeCallable;
      typedef std::future<ListClusterSnapshotsOutcome> ListClusterSnapshotsOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RestoreClusterFromSnapshotOutcome> RestoreClusterFromSnapshotOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DocDBElasticClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DocDBElasticClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::CreateClusterSnapshotRequest&, const Model::CreateClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::DeleteClusterSnapshotRequest&, const Model::DeleteClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::GetClusterRequest&, const Model::GetClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClusterResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::GetClusterSnapshotRequest&, const Model::GetClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::ListClusterSnapshotsRequest&, const Model::ListClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::RestoreClusterFromSnapshotRequest&, const Model::RestoreClusterFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreClusterFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DocDBElasticClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DocDBElastic
} // namespace Aws

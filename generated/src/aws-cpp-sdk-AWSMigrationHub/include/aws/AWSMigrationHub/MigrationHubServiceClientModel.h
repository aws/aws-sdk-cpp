/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/AWSMigrationHub/MigrationHubErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/AWSMigrationHub/MigrationHubEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MigrationHubClient header */
#include <aws/AWSMigrationHub/model/AssociateCreatedArtifactResult.h>
#include <aws/AWSMigrationHub/model/AssociateDiscoveredResourceResult.h>
#include <aws/AWSMigrationHub/model/CreateProgressUpdateStreamResult.h>
#include <aws/AWSMigrationHub/model/DeleteProgressUpdateStreamResult.h>
#include <aws/AWSMigrationHub/model/DescribeApplicationStateResult.h>
#include <aws/AWSMigrationHub/model/DescribeMigrationTaskResult.h>
#include <aws/AWSMigrationHub/model/DisassociateCreatedArtifactResult.h>
#include <aws/AWSMigrationHub/model/DisassociateDiscoveredResourceResult.h>
#include <aws/AWSMigrationHub/model/ImportMigrationTaskResult.h>
#include <aws/AWSMigrationHub/model/ListApplicationStatesResult.h>
#include <aws/AWSMigrationHub/model/ListCreatedArtifactsResult.h>
#include <aws/AWSMigrationHub/model/ListDiscoveredResourcesResult.h>
#include <aws/AWSMigrationHub/model/ListMigrationTasksResult.h>
#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsResult.h>
#include <aws/AWSMigrationHub/model/NotifyApplicationStateResult.h>
#include <aws/AWSMigrationHub/model/NotifyMigrationTaskStateResult.h>
#include <aws/AWSMigrationHub/model/PutResourceAttributesResult.h>
/* End of service model headers required in MigrationHubClient header */

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

  namespace MigrationHub
  {
    using MigrationHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MigrationHubEndpointProviderBase = Aws::MigrationHub::Endpoint::MigrationHubEndpointProviderBase;
    using MigrationHubEndpointProvider = Aws::MigrationHub::Endpoint::MigrationHubEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MigrationHubClient header */
      class AssociateCreatedArtifactRequest;
      class AssociateDiscoveredResourceRequest;
      class CreateProgressUpdateStreamRequest;
      class DeleteProgressUpdateStreamRequest;
      class DescribeApplicationStateRequest;
      class DescribeMigrationTaskRequest;
      class DisassociateCreatedArtifactRequest;
      class DisassociateDiscoveredResourceRequest;
      class ImportMigrationTaskRequest;
      class ListApplicationStatesRequest;
      class ListCreatedArtifactsRequest;
      class ListDiscoveredResourcesRequest;
      class ListMigrationTasksRequest;
      class ListProgressUpdateStreamsRequest;
      class NotifyApplicationStateRequest;
      class NotifyMigrationTaskStateRequest;
      class PutResourceAttributesRequest;
      /* End of service model forward declarations required in MigrationHubClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateCreatedArtifactResult, MigrationHubError> AssociateCreatedArtifactOutcome;
      typedef Aws::Utils::Outcome<AssociateDiscoveredResourceResult, MigrationHubError> AssociateDiscoveredResourceOutcome;
      typedef Aws::Utils::Outcome<CreateProgressUpdateStreamResult, MigrationHubError> CreateProgressUpdateStreamOutcome;
      typedef Aws::Utils::Outcome<DeleteProgressUpdateStreamResult, MigrationHubError> DeleteProgressUpdateStreamOutcome;
      typedef Aws::Utils::Outcome<DescribeApplicationStateResult, MigrationHubError> DescribeApplicationStateOutcome;
      typedef Aws::Utils::Outcome<DescribeMigrationTaskResult, MigrationHubError> DescribeMigrationTaskOutcome;
      typedef Aws::Utils::Outcome<DisassociateCreatedArtifactResult, MigrationHubError> DisassociateCreatedArtifactOutcome;
      typedef Aws::Utils::Outcome<DisassociateDiscoveredResourceResult, MigrationHubError> DisassociateDiscoveredResourceOutcome;
      typedef Aws::Utils::Outcome<ImportMigrationTaskResult, MigrationHubError> ImportMigrationTaskOutcome;
      typedef Aws::Utils::Outcome<ListApplicationStatesResult, MigrationHubError> ListApplicationStatesOutcome;
      typedef Aws::Utils::Outcome<ListCreatedArtifactsResult, MigrationHubError> ListCreatedArtifactsOutcome;
      typedef Aws::Utils::Outcome<ListDiscoveredResourcesResult, MigrationHubError> ListDiscoveredResourcesOutcome;
      typedef Aws::Utils::Outcome<ListMigrationTasksResult, MigrationHubError> ListMigrationTasksOutcome;
      typedef Aws::Utils::Outcome<ListProgressUpdateStreamsResult, MigrationHubError> ListProgressUpdateStreamsOutcome;
      typedef Aws::Utils::Outcome<NotifyApplicationStateResult, MigrationHubError> NotifyApplicationStateOutcome;
      typedef Aws::Utils::Outcome<NotifyMigrationTaskStateResult, MigrationHubError> NotifyMigrationTaskStateOutcome;
      typedef Aws::Utils::Outcome<PutResourceAttributesResult, MigrationHubError> PutResourceAttributesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateCreatedArtifactOutcome> AssociateCreatedArtifactOutcomeCallable;
      typedef std::future<AssociateDiscoveredResourceOutcome> AssociateDiscoveredResourceOutcomeCallable;
      typedef std::future<CreateProgressUpdateStreamOutcome> CreateProgressUpdateStreamOutcomeCallable;
      typedef std::future<DeleteProgressUpdateStreamOutcome> DeleteProgressUpdateStreamOutcomeCallable;
      typedef std::future<DescribeApplicationStateOutcome> DescribeApplicationStateOutcomeCallable;
      typedef std::future<DescribeMigrationTaskOutcome> DescribeMigrationTaskOutcomeCallable;
      typedef std::future<DisassociateCreatedArtifactOutcome> DisassociateCreatedArtifactOutcomeCallable;
      typedef std::future<DisassociateDiscoveredResourceOutcome> DisassociateDiscoveredResourceOutcomeCallable;
      typedef std::future<ImportMigrationTaskOutcome> ImportMigrationTaskOutcomeCallable;
      typedef std::future<ListApplicationStatesOutcome> ListApplicationStatesOutcomeCallable;
      typedef std::future<ListCreatedArtifactsOutcome> ListCreatedArtifactsOutcomeCallable;
      typedef std::future<ListDiscoveredResourcesOutcome> ListDiscoveredResourcesOutcomeCallable;
      typedef std::future<ListMigrationTasksOutcome> ListMigrationTasksOutcomeCallable;
      typedef std::future<ListProgressUpdateStreamsOutcome> ListProgressUpdateStreamsOutcomeCallable;
      typedef std::future<NotifyApplicationStateOutcome> NotifyApplicationStateOutcomeCallable;
      typedef std::future<NotifyMigrationTaskStateOutcome> NotifyMigrationTaskStateOutcomeCallable;
      typedef std::future<PutResourceAttributesOutcome> PutResourceAttributesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MigrationHubClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MigrationHubClient*, const Model::AssociateCreatedArtifactRequest&, const Model::AssociateCreatedArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCreatedArtifactResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::AssociateDiscoveredResourceRequest&, const Model::AssociateDiscoveredResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDiscoveredResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::CreateProgressUpdateStreamRequest&, const Model::CreateProgressUpdateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProgressUpdateStreamResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DeleteProgressUpdateStreamRequest&, const Model::DeleteProgressUpdateStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProgressUpdateStreamResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DescribeApplicationStateRequest&, const Model::DescribeApplicationStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationStateResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DescribeMigrationTaskRequest&, const Model::DescribeMigrationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMigrationTaskResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DisassociateCreatedArtifactRequest&, const Model::DisassociateCreatedArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCreatedArtifactResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::DisassociateDiscoveredResourceRequest&, const Model::DisassociateDiscoveredResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDiscoveredResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ImportMigrationTaskRequest&, const Model::ImportMigrationTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportMigrationTaskResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListApplicationStatesRequest&, const Model::ListApplicationStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationStatesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListCreatedArtifactsRequest&, const Model::ListCreatedArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCreatedArtifactsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListDiscoveredResourcesRequest&, const Model::ListDiscoveredResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoveredResourcesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListMigrationTasksRequest&, const Model::ListMigrationTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMigrationTasksResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::ListProgressUpdateStreamsRequest&, const Model::ListProgressUpdateStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProgressUpdateStreamsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::NotifyApplicationStateRequest&, const Model::NotifyApplicationStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyApplicationStateResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::NotifyMigrationTaskStateRequest&, const Model::NotifyMigrationTaskStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyMigrationTaskStateResponseReceivedHandler;
    typedef std::function<void(const MigrationHubClient*, const Model::PutResourceAttributesRequest&, const Model::PutResourceAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourceAttributesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MigrationHub
} // namespace Aws

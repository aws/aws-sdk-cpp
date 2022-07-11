/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/model/ConvertRecoveryPointToSnapshotResult.h>
#include <aws/redshift-serverless/model/CreateEndpointAccessResult.h>
#include <aws/redshift-serverless/model/CreateNamespaceResult.h>
#include <aws/redshift-serverless/model/CreateSnapshotResult.h>
#include <aws/redshift-serverless/model/CreateUsageLimitResult.h>
#include <aws/redshift-serverless/model/CreateWorkgroupResult.h>
#include <aws/redshift-serverless/model/DeleteEndpointAccessResult.h>
#include <aws/redshift-serverless/model/DeleteNamespaceResult.h>
#include <aws/redshift-serverless/model/DeleteResourcePolicyResult.h>
#include <aws/redshift-serverless/model/DeleteSnapshotResult.h>
#include <aws/redshift-serverless/model/DeleteUsageLimitResult.h>
#include <aws/redshift-serverless/model/DeleteWorkgroupResult.h>
#include <aws/redshift-serverless/model/GetCredentialsResult.h>
#include <aws/redshift-serverless/model/GetEndpointAccessResult.h>
#include <aws/redshift-serverless/model/GetNamespaceResult.h>
#include <aws/redshift-serverless/model/GetRecoveryPointResult.h>
#include <aws/redshift-serverless/model/GetResourcePolicyResult.h>
#include <aws/redshift-serverless/model/GetSnapshotResult.h>
#include <aws/redshift-serverless/model/GetUsageLimitResult.h>
#include <aws/redshift-serverless/model/GetWorkgroupResult.h>
#include <aws/redshift-serverless/model/ListEndpointAccessResult.h>
#include <aws/redshift-serverless/model/ListNamespacesResult.h>
#include <aws/redshift-serverless/model/ListRecoveryPointsResult.h>
#include <aws/redshift-serverless/model/ListSnapshotsResult.h>
#include <aws/redshift-serverless/model/ListTagsForResourceResult.h>
#include <aws/redshift-serverless/model/ListUsageLimitsResult.h>
#include <aws/redshift-serverless/model/ListWorkgroupsResult.h>
#include <aws/redshift-serverless/model/PutResourcePolicyResult.h>
#include <aws/redshift-serverless/model/RestoreFromRecoveryPointResult.h>
#include <aws/redshift-serverless/model/RestoreFromSnapshotResult.h>
#include <aws/redshift-serverless/model/TagResourceResult.h>
#include <aws/redshift-serverless/model/UntagResourceResult.h>
#include <aws/redshift-serverless/model/UpdateEndpointAccessResult.h>
#include <aws/redshift-serverless/model/UpdateNamespaceResult.h>
#include <aws/redshift-serverless/model/UpdateSnapshotResult.h>
#include <aws/redshift-serverless/model/UpdateUsageLimitResult.h>
#include <aws/redshift-serverless/model/UpdateWorkgroupResult.h>
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

namespace RedshiftServerless
{

namespace Model
{
        class ConvertRecoveryPointToSnapshotRequest;
        class CreateEndpointAccessRequest;
        class CreateNamespaceRequest;
        class CreateSnapshotRequest;
        class CreateUsageLimitRequest;
        class CreateWorkgroupRequest;
        class DeleteEndpointAccessRequest;
        class DeleteNamespaceRequest;
        class DeleteResourcePolicyRequest;
        class DeleteSnapshotRequest;
        class DeleteUsageLimitRequest;
        class DeleteWorkgroupRequest;
        class GetCredentialsRequest;
        class GetEndpointAccessRequest;
        class GetNamespaceRequest;
        class GetRecoveryPointRequest;
        class GetResourcePolicyRequest;
        class GetSnapshotRequest;
        class GetUsageLimitRequest;
        class GetWorkgroupRequest;
        class ListEndpointAccessRequest;
        class ListNamespacesRequest;
        class ListRecoveryPointsRequest;
        class ListSnapshotsRequest;
        class ListTagsForResourceRequest;
        class ListUsageLimitsRequest;
        class ListWorkgroupsRequest;
        class PutResourcePolicyRequest;
        class RestoreFromRecoveryPointRequest;
        class RestoreFromSnapshotRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateEndpointAccessRequest;
        class UpdateNamespaceRequest;
        class UpdateSnapshotRequest;
        class UpdateUsageLimitRequest;
        class UpdateWorkgroupRequest;

        typedef Aws::Utils::Outcome<ConvertRecoveryPointToSnapshotResult, RedshiftServerlessError> ConvertRecoveryPointToSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateEndpointAccessResult, RedshiftServerlessError> CreateEndpointAccessOutcome;
        typedef Aws::Utils::Outcome<CreateNamespaceResult, RedshiftServerlessError> CreateNamespaceOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResult, RedshiftServerlessError> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateUsageLimitResult, RedshiftServerlessError> CreateUsageLimitOutcome;
        typedef Aws::Utils::Outcome<CreateWorkgroupResult, RedshiftServerlessError> CreateWorkgroupOutcome;
        typedef Aws::Utils::Outcome<DeleteEndpointAccessResult, RedshiftServerlessError> DeleteEndpointAccessOutcome;
        typedef Aws::Utils::Outcome<DeleteNamespaceResult, RedshiftServerlessError> DeleteNamespaceOutcome;
        typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, RedshiftServerlessError> DeleteResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteSnapshotResult, RedshiftServerlessError> DeleteSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteUsageLimitResult, RedshiftServerlessError> DeleteUsageLimitOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkgroupResult, RedshiftServerlessError> DeleteWorkgroupOutcome;
        typedef Aws::Utils::Outcome<GetCredentialsResult, RedshiftServerlessError> GetCredentialsOutcome;
        typedef Aws::Utils::Outcome<GetEndpointAccessResult, RedshiftServerlessError> GetEndpointAccessOutcome;
        typedef Aws::Utils::Outcome<GetNamespaceResult, RedshiftServerlessError> GetNamespaceOutcome;
        typedef Aws::Utils::Outcome<GetRecoveryPointResult, RedshiftServerlessError> GetRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<GetResourcePolicyResult, RedshiftServerlessError> GetResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<GetSnapshotResult, RedshiftServerlessError> GetSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetUsageLimitResult, RedshiftServerlessError> GetUsageLimitOutcome;
        typedef Aws::Utils::Outcome<GetWorkgroupResult, RedshiftServerlessError> GetWorkgroupOutcome;
        typedef Aws::Utils::Outcome<ListEndpointAccessResult, RedshiftServerlessError> ListEndpointAccessOutcome;
        typedef Aws::Utils::Outcome<ListNamespacesResult, RedshiftServerlessError> ListNamespacesOutcome;
        typedef Aws::Utils::Outcome<ListRecoveryPointsResult, RedshiftServerlessError> ListRecoveryPointsOutcome;
        typedef Aws::Utils::Outcome<ListSnapshotsResult, RedshiftServerlessError> ListSnapshotsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, RedshiftServerlessError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListUsageLimitsResult, RedshiftServerlessError> ListUsageLimitsOutcome;
        typedef Aws::Utils::Outcome<ListWorkgroupsResult, RedshiftServerlessError> ListWorkgroupsOutcome;
        typedef Aws::Utils::Outcome<PutResourcePolicyResult, RedshiftServerlessError> PutResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<RestoreFromRecoveryPointResult, RedshiftServerlessError> RestoreFromRecoveryPointOutcome;
        typedef Aws::Utils::Outcome<RestoreFromSnapshotResult, RedshiftServerlessError> RestoreFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, RedshiftServerlessError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, RedshiftServerlessError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateEndpointAccessResult, RedshiftServerlessError> UpdateEndpointAccessOutcome;
        typedef Aws::Utils::Outcome<UpdateNamespaceResult, RedshiftServerlessError> UpdateNamespaceOutcome;
        typedef Aws::Utils::Outcome<UpdateSnapshotResult, RedshiftServerlessError> UpdateSnapshotOutcome;
        typedef Aws::Utils::Outcome<UpdateUsageLimitResult, RedshiftServerlessError> UpdateUsageLimitOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkgroupResult, RedshiftServerlessError> UpdateWorkgroupOutcome;

        typedef std::future<ConvertRecoveryPointToSnapshotOutcome> ConvertRecoveryPointToSnapshotOutcomeCallable;
        typedef std::future<CreateEndpointAccessOutcome> CreateEndpointAccessOutcomeCallable;
        typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
        typedef std::future<CreateUsageLimitOutcome> CreateUsageLimitOutcomeCallable;
        typedef std::future<CreateWorkgroupOutcome> CreateWorkgroupOutcomeCallable;
        typedef std::future<DeleteEndpointAccessOutcome> DeleteEndpointAccessOutcomeCallable;
        typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
        typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
        typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
        typedef std::future<DeleteUsageLimitOutcome> DeleteUsageLimitOutcomeCallable;
        typedef std::future<DeleteWorkgroupOutcome> DeleteWorkgroupOutcomeCallable;
        typedef std::future<GetCredentialsOutcome> GetCredentialsOutcomeCallable;
        typedef std::future<GetEndpointAccessOutcome> GetEndpointAccessOutcomeCallable;
        typedef std::future<GetNamespaceOutcome> GetNamespaceOutcomeCallable;
        typedef std::future<GetRecoveryPointOutcome> GetRecoveryPointOutcomeCallable;
        typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
        typedef std::future<GetSnapshotOutcome> GetSnapshotOutcomeCallable;
        typedef std::future<GetUsageLimitOutcome> GetUsageLimitOutcomeCallable;
        typedef std::future<GetWorkgroupOutcome> GetWorkgroupOutcomeCallable;
        typedef std::future<ListEndpointAccessOutcome> ListEndpointAccessOutcomeCallable;
        typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
        typedef std::future<ListRecoveryPointsOutcome> ListRecoveryPointsOutcomeCallable;
        typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListUsageLimitsOutcome> ListUsageLimitsOutcomeCallable;
        typedef std::future<ListWorkgroupsOutcome> ListWorkgroupsOutcomeCallable;
        typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
        typedef std::future<RestoreFromRecoveryPointOutcome> RestoreFromRecoveryPointOutcomeCallable;
        typedef std::future<RestoreFromSnapshotOutcome> RestoreFromSnapshotOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateEndpointAccessOutcome> UpdateEndpointAccessOutcomeCallable;
        typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
        typedef std::future<UpdateSnapshotOutcome> UpdateSnapshotOutcomeCallable;
        typedef std::future<UpdateUsageLimitOutcome> UpdateUsageLimitOutcomeCallable;
        typedef std::future<UpdateWorkgroupOutcome> UpdateWorkgroupOutcomeCallable;
} // namespace Model

  class RedshiftServerlessClient;

    typedef std::function<void(const RedshiftServerlessClient*, const Model::ConvertRecoveryPointToSnapshotRequest&, const Model::ConvertRecoveryPointToSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConvertRecoveryPointToSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateEndpointAccessRequest&, const Model::CreateEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateNamespaceRequest&, const Model::CreateNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateUsageLimitRequest&, const Model::CreateUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateWorkgroupRequest&, const Model::CreateWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkgroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteEndpointAccessRequest&, const Model::DeleteEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteNamespaceRequest&, const Model::DeleteNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteUsageLimitRequest&, const Model::DeleteUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteWorkgroupRequest&, const Model::DeleteWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkgroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetCredentialsRequest&, const Model::GetCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCredentialsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetEndpointAccessRequest&, const Model::GetEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetNamespaceRequest&, const Model::GetNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetRecoveryPointRequest&, const Model::GetRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetSnapshotRequest&, const Model::GetSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetUsageLimitRequest&, const Model::GetUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetWorkgroupRequest&, const Model::GetWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkgroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListEndpointAccessRequest&, const Model::ListEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListNamespacesRequest&, const Model::ListNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamespacesResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListRecoveryPointsRequest&, const Model::ListRecoveryPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListSnapshotsRequest&, const Model::ListSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListUsageLimitsRequest&, const Model::ListUsageLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsageLimitsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListWorkgroupsRequest&, const Model::ListWorkgroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkgroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::RestoreFromRecoveryPointRequest&, const Model::RestoreFromRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::RestoreFromSnapshotRequest&, const Model::RestoreFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateEndpointAccessRequest&, const Model::UpdateEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateNamespaceRequest&, const Model::UpdateNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateSnapshotRequest&, const Model::UpdateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateUsageLimitRequest&, const Model::UpdateUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateWorkgroupRequest&, const Model::UpdateWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkgroupResponseReceivedHandler;

  /**
   * <p>This is an interface reference for Amazon Redshift Serverless. It contains
   * documentation for one of the programming or command line interfaces you can use
   * to manage Amazon Redshift Serverless. </p> <p>Amazon Redshift Serverless
   * automatically provisions data warehouse capacity and intelligently scales the
   * underlying resources based on workload demands. Amazon Redshift Serverless
   * adjusts capacity in seconds to deliver consistently high performance and
   * simplified operations for even the most demanding and volatile workloads. Amazon
   * Redshift Serverless lets you focus on using your data to acquire new insights
   * for your business and customers. </p> <p> To learn more about Amazon Redshift
   * Serverless, see <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What
   * is Amazon Redshift Serverless</a>. </p>
   */
  class AWS_REDSHIFTSERVERLESS_API RedshiftServerlessClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~RedshiftServerlessClient();


        /**
         * <p>Converts a recovery point to a snapshot. For more information about recovery
         * points and snapshots, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html">Working
         * with snapshots and recovery points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ConvertRecoveryPointToSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ConvertRecoveryPointToSnapshotOutcome ConvertRecoveryPointToSnapshot(const Model::ConvertRecoveryPointToSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ConvertRecoveryPointToSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConvertRecoveryPointToSnapshotOutcomeCallable ConvertRecoveryPointToSnapshotCallable(const Model::ConvertRecoveryPointToSnapshotRequest& request) const;

        /**
         * An Async wrapper for ConvertRecoveryPointToSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConvertRecoveryPointToSnapshotAsync(const Model::ConvertRecoveryPointToSnapshotRequest& request, const ConvertRecoveryPointToSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Redshift Serverless managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointAccessOutcome CreateEndpointAccess(const Model::CreateEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEndpointAccessOutcomeCallable CreateEndpointAccessCallable(const Model::CreateEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for CreateEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEndpointAccessAsync(const Model::CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a namespace in Amazon Redshift Serverless.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request) const;

        /**
         * An Async wrapper for CreateNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of all databases in a namespace. For more information
         * about snapshots, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html">
         * Working with snapshots and recovery points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a usage limit for a specified Amazon Redshift Serverless usage type.
         * The usage limit is identified by the returned usage limit identifier.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsageLimitOutcome CreateUsageLimit(const Model::CreateUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for CreateUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUsageLimitOutcomeCallable CreateUsageLimitCallable(const Model::CreateUsageLimitRequest& request) const;

        /**
         * An Async wrapper for CreateUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUsageLimitAsync(const Model::CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an workgroup in Amazon Redshift Serverless.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkgroupOutcome CreateWorkgroup(const Model::CreateWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkgroupOutcomeCallable CreateWorkgroupCallable(const Model::CreateWorkgroupRequest& request) const;

        /**
         * An Async wrapper for CreateWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkgroupAsync(const Model::CreateWorkgroupRequest& request, const CreateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Redshift Serverless managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointAccessOutcome DeleteEndpointAccess(const Model::DeleteEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEndpointAccessOutcomeCallable DeleteEndpointAccessCallable(const Model::DeleteEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for DeleteEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEndpointAccessAsync(const Model::DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a namespace from Amazon Redshift Serverless. Before you delete the
         * namespace, you can create a final snapshot that has all of the data within the
         * namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;

        /**
         * An Async wrapper for DeleteNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a snapshot from Amazon Redshift Serverless.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a usage limit from Amazon Redshift Serverless.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageLimitOutcome DeleteUsageLimit(const Model::DeleteUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUsageLimitOutcomeCallable DeleteUsageLimitCallable(const Model::DeleteUsageLimitRequest& request) const;

        /**
         * An Async wrapper for DeleteUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUsageLimitAsync(const Model::DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkgroupOutcome DeleteWorkgroup(const Model::DeleteWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkgroupOutcomeCallable DeleteWorkgroupCallable(const Model::DeleteWorkgroupRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkgroupAsync(const Model::DeleteWorkgroupRequest& request, const DeleteWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a database user name and temporary password with temporary
         * authorization to log in to Amazon Redshift Serverless.</p> <p>By default, the
         * temporary credentials expire in 900 seconds. You can optionally specify a
         * duration between 900 seconds (15 minutes) and 3600 seconds (60 minutes).</p>
         * <pre><code> &lt;p&gt; The Identity and Access Management (IAM) user or role that
         * runs GetCredentials must have an IAM policy attached that allows access to all
         * necessary actions and resources. &lt;/p&gt; &lt;p&gt; If the
         * &lt;code&gt;DbName&lt;/code&gt; parameter is specified, the IAM policy must
         * allow access to the resource dbname for the specified database name.&lt;/p&gt;
         * </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialsOutcome GetCredentials(const Model::GetCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCredentialsOutcomeCallable GetCredentialsCallable(const Model::GetCredentialsRequest& request) const;

        /**
         * An Async wrapper for GetCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCredentialsAsync(const Model::GetCredentialsRequest& request, const GetCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information, such as the name, about a VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointAccessOutcome GetEndpointAccess(const Model::GetEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for GetEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEndpointAccessOutcomeCallable GetEndpointAccessCallable(const Model::GetEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for GetEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEndpointAccessAsync(const Model::GetEndpointAccessRequest& request, const GetEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a namespace in Amazon Redshift
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamespaceOutcome GetNamespace(const Model::GetNamespaceRequest& request) const;

        /**
         * A Callable wrapper for GetNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNamespaceOutcomeCallable GetNamespaceCallable(const Model::GetNamespaceRequest& request) const;

        /**
         * An Async wrapper for GetNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNamespaceAsync(const Model::GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a recovery point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryPointOutcome GetRecoveryPoint(const Model::GetRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for GetRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecoveryPointOutcomeCallable GetRecoveryPointCallable(const Model::GetRecoveryPointRequest& request) const;

        /**
         * An Async wrapper for GetRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecoveryPointAsync(const Model::GetRecoveryPointRequest& request, const GetRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotOutcome GetSnapshot(const Model::GetSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnapshotOutcomeCallable GetSnapshotCallable(const Model::GetSnapshotRequest& request) const;

        /**
         * An Async wrapper for GetSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnapshotAsync(const Model::GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a usage limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageLimitOutcome GetUsageLimit(const Model::GetUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for GetUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUsageLimitOutcomeCallable GetUsageLimitCallable(const Model::GetUsageLimitRequest& request) const;

        /**
         * An Async wrapper for GetUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUsageLimitAsync(const Model::GetUsageLimitRequest& request, const GetUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkgroupOutcome GetWorkgroup(const Model::GetWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for GetWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkgroupOutcomeCallable GetWorkgroupCallable(const Model::GetWorkgroupRequest& request) const;

        /**
         * An Async wrapper for GetWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkgroupAsync(const Model::GetWorkgroupRequest& request, const GetWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of <code>EndpointAccess</code> objects and relevant
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointAccessOutcome ListEndpointAccess(const Model::ListEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for ListEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEndpointAccessOutcomeCallable ListEndpointAccessCallable(const Model::ListEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for ListEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEndpointAccessAsync(const Model::ListEndpointAccessRequest& request, const ListEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a list of specified namespaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNamespacesOutcomeCallable ListNamespacesCallable(const Model::ListNamespacesRequest& request) const;

        /**
         * An Async wrapper for ListNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of recovery points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListRecoveryPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsOutcome ListRecoveryPoints(const Model::ListRecoveryPointsRequest& request) const;

        /**
         * A Callable wrapper for ListRecoveryPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecoveryPointsOutcomeCallable ListRecoveryPointsCallable(const Model::ListRecoveryPointsRequest& request) const;

        /**
         * An Async wrapper for ListRecoveryPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecoveryPointsAsync(const Model::ListRecoveryPointsRequest& request, const ListRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotsOutcome ListSnapshots(const Model::ListSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for ListSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSnapshotsOutcomeCallable ListSnapshotsCallable(const Model::ListSnapshotsRequest& request) const;

        /**
         * An Async wrapper for ListSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSnapshotsAsync(const Model::ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags assigned to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all usage limits within Amazon Redshift Serverless.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListUsageLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsageLimitsOutcome ListUsageLimits(const Model::ListUsageLimitsRequest& request) const;

        /**
         * A Callable wrapper for ListUsageLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUsageLimitsOutcomeCallable ListUsageLimitsCallable(const Model::ListUsageLimitsRequest& request) const;

        /**
         * An Async wrapper for ListUsageLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUsageLimitsAsync(const Model::ListUsageLimitsRequest& request, const ListUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a list of specified workgroups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListWorkgroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkgroupsOutcome ListWorkgroups(const Model::ListWorkgroupsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkgroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkgroupsOutcomeCallable ListWorkgroupsCallable(const Model::ListWorkgroupsRequest& request) const;

        /**
         * An Async wrapper for ListWorkgroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkgroupsAsync(const Model::ListWorkgroupsRequest& request, const ListWorkgroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a resource policy. Currently, you can use policies to
         * share snapshots across Amazon Web Services accounts.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restore the data from a recovery point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreFromRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromRecoveryPointOutcome RestoreFromRecoveryPoint(const Model::RestoreFromRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for RestoreFromRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreFromRecoveryPointOutcomeCallable RestoreFromRecoveryPointCallable(const Model::RestoreFromRecoveryPointRequest& request) const;

        /**
         * An Async wrapper for RestoreFromRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreFromRecoveryPointAsync(const Model::RestoreFromRecoveryPointRequest& request, const RestoreFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a namespace from a snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromSnapshotOutcome RestoreFromSnapshot(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreFromSnapshotOutcomeCallable RestoreFromSnapshotCallable(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * An Async wrapper for RestoreFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreFromSnapshotAsync(const Model::RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag or set of tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon Redshift Serverless managed endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointAccessOutcome UpdateEndpointAccess(const Model::UpdateEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEndpointAccessOutcomeCallable UpdateEndpointAccessCallable(const Model::UpdateEndpointAccessRequest& request) const;

        /**
         * An Async wrapper for UpdateEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEndpointAccessAsync(const Model::UpdateEndpointAccessRequest& request, const UpdateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a namespace with the specified settings.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNamespaceOutcome UpdateNamespace(const Model::UpdateNamespaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNamespaceOutcomeCallable UpdateNamespaceCallable(const Model::UpdateNamespaceRequest& request) const;

        /**
         * An Async wrapper for UpdateNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotOutcome UpdateSnapshot(const Model::UpdateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for UpdateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSnapshotOutcomeCallable UpdateSnapshotCallable(const Model::UpdateSnapshotRequest& request) const;

        /**
         * An Async wrapper for UpdateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSnapshotAsync(const Model::UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a usage limit in Amazon Redshift Serverless. You can't update the
         * usage type or period of a usage limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsageLimitOutcome UpdateUsageLimit(const Model::UpdateUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for UpdateUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUsageLimitOutcomeCallable UpdateUsageLimitCallable(const Model::UpdateUsageLimitRequest& request) const;

        /**
         * An Async wrapper for UpdateUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUsageLimitAsync(const Model::UpdateUsageLimitRequest& request, const UpdateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a workgroup with the specified configuration settings.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkgroupOutcome UpdateWorkgroup(const Model::UpdateWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkgroupOutcomeCallable UpdateWorkgroupCallable(const Model::UpdateWorkgroupRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkgroupAsync(const Model::UpdateWorkgroupRequest& request, const UpdateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void ConvertRecoveryPointToSnapshotAsyncHelper(const Model::ConvertRecoveryPointToSnapshotRequest& request, const ConvertRecoveryPointToSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEndpointAccessAsyncHelper(const Model::CreateEndpointAccessRequest& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNamespaceAsyncHelper(const Model::CreateNamespaceRequest& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUsageLimitAsyncHelper(const Model::CreateUsageLimitRequest& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkgroupAsyncHelper(const Model::CreateWorkgroupRequest& request, const CreateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEndpointAccessAsyncHelper(const Model::DeleteEndpointAccessRequest& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNamespaceAsyncHelper(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotAsyncHelper(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUsageLimitAsyncHelper(const Model::DeleteUsageLimitRequest& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkgroupAsyncHelper(const Model::DeleteWorkgroupRequest& request, const DeleteWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCredentialsAsyncHelper(const Model::GetCredentialsRequest& request, const GetCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEndpointAccessAsyncHelper(const Model::GetEndpointAccessRequest& request, const GetEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNamespaceAsyncHelper(const Model::GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecoveryPointAsyncHelper(const Model::GetRecoveryPointRequest& request, const GetRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePolicyAsyncHelper(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSnapshotAsyncHelper(const Model::GetSnapshotRequest& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUsageLimitAsyncHelper(const Model::GetUsageLimitRequest& request, const GetUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetWorkgroupAsyncHelper(const Model::GetWorkgroupRequest& request, const GetWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEndpointAccessAsyncHelper(const Model::ListEndpointAccessRequest& request, const ListEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNamespacesAsyncHelper(const Model::ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecoveryPointsAsyncHelper(const Model::ListRecoveryPointsRequest& request, const ListRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSnapshotsAsyncHelper(const Model::ListSnapshotsRequest& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUsageLimitsAsyncHelper(const Model::ListUsageLimitsRequest& request, const ListUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkgroupsAsyncHelper(const Model::ListWorkgroupsRequest& request, const ListWorkgroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreFromRecoveryPointAsyncHelper(const Model::RestoreFromRecoveryPointRequest& request, const RestoreFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreFromSnapshotAsyncHelper(const Model::RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEndpointAccessAsyncHelper(const Model::UpdateEndpointAccessRequest& request, const UpdateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNamespaceAsyncHelper(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSnapshotAsyncHelper(const Model::UpdateSnapshotRequest& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUsageLimitAsyncHelper(const Model::UpdateUsageLimitRequest& request, const UpdateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkgroupAsyncHelper(const Model::UpdateWorkgroupRequest& request, const UpdateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace RedshiftServerless
} // namespace Aws

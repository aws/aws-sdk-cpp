/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/RedshiftServerlessServiceClientModel.h>

namespace Aws
{
namespace RedshiftServerless
{
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
  class AWS_REDSHIFTSERVERLESS_API RedshiftServerlessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RedshiftServerlessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration(),
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = Aws::MakeShared<RedshiftServerlessEndpointProvider>(ALLOCATION_TAG),
                                 const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * <pre><code> &lt;p&gt;The Identity and Access Management (IAM) user or role that
         * runs GetCredentials must have an IAM policy attached that allows access to all
         * necessary actions and resources.&lt;/p&gt; &lt;p&gt;If the
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
         * <p>Returns information about a <code>TableRestoreStatus</code>
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetTableRestoreStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableRestoreStatusOutcome GetTableRestoreStatus(const Model::GetTableRestoreStatusRequest& request) const;

        /**
         * A Callable wrapper for GetTableRestoreStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTableRestoreStatusOutcomeCallable GetTableRestoreStatusCallable(const Model::GetTableRestoreStatusRequest& request) const;

        /**
         * An Async wrapper for GetTableRestoreStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableRestoreStatusAsync(const Model::GetTableRestoreStatusRequest& request, const GetTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Returns information about an array of <code>TableRestoreStatus</code>
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListTableRestoreStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableRestoreStatusOutcome ListTableRestoreStatus(const Model::ListTableRestoreStatusRequest& request) const;

        /**
         * A Callable wrapper for ListTableRestoreStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTableRestoreStatusOutcomeCallable ListTableRestoreStatusCallable(const Model::ListTableRestoreStatusRequest& request) const;

        /**
         * An Async wrapper for ListTableRestoreStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTableRestoreStatusAsync(const Model::ListTableRestoreStatusRequest& request, const ListTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Restores a table from a snapshot to your Amazon Redshift Serverless
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreTableFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreTableFromSnapshotOutcome RestoreTableFromSnapshot(const Model::RestoreTableFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreTableFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreTableFromSnapshotOutcomeCallable RestoreTableFromSnapshotCallable(const Model::RestoreTableFromSnapshotRequest& request) const;

        /**
         * An Async wrapper for RestoreTableFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreTableFromSnapshotAsync(const Model::RestoreTableFromSnapshotRequest& request, const RestoreTableFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
      std::shared_ptr<RedshiftServerlessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RedshiftServerlessClient>;
      void init(const RedshiftServerlessClientConfiguration& clientConfiguration);

      RedshiftServerlessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RedshiftServerlessEndpointProviderBase> m_endpointProvider;
  };

} // namespace RedshiftServerless
} // namespace Aws

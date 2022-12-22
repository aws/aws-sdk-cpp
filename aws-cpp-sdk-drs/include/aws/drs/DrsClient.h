/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/DrsServiceClientModel.h>

namespace Aws
{
namespace drs
{
  /**
   * <p>AWS Elastic Disaster Recovery Service.</p>
   */
  class AWS_DRS_API DrsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DrsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::drs::DrsClientConfiguration& clientConfiguration = Aws::drs::DrsClientConfiguration(),
                  std::shared_ptr<DrsEndpointProviderBase> endpointProvider = Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<DrsEndpointProviderBase> endpointProvider = Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG),
                  const Aws::drs::DrsClientConfiguration& clientConfiguration = Aws::drs::DrsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DrsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<DrsEndpointProviderBase> endpointProvider = Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG),
                  const Aws::drs::DrsClientConfiguration& clientConfiguration = Aws::drs::DrsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DrsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DrsClient();

        /**
         * <p>Create an extended source server in the target Account based on the source
         * server in staging account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateExtendedSourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExtendedSourceServerOutcome CreateExtendedSourceServer(const Model::CreateExtendedSourceServerRequest& request) const;

        /**
         * A Callable wrapper for CreateExtendedSourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateExtendedSourceServerOutcomeCallable CreateExtendedSourceServerCallable(const Model::CreateExtendedSourceServerRequest& request) const;

        /**
         * An Async wrapper for CreateExtendedSourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExtendedSourceServerAsync(const Model::CreateExtendedSourceServerRequest& request, const CreateExtendedSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationConfigurationTemplateOutcome CreateReplicationConfigurationTemplate(const Model::CreateReplicationConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationConfigurationTemplateOutcomeCallable CreateReplicationConfigurationTemplateCallable(const Model::CreateReplicationConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationConfigurationTemplateAsync(const Model::CreateReplicationConfigurationTemplateRequest& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single Recovery Instance by ID. This deletes the Recovery Instance
         * resource from Elastic Disaster Recovery. The Recovery Instance must be
         * disconnected first in order to delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteRecoveryInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecoveryInstanceOutcome DeleteRecoveryInstance(const Model::DeleteRecoveryInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteRecoveryInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecoveryInstanceOutcomeCallable DeleteRecoveryInstanceCallable(const Model::DeleteRecoveryInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteRecoveryInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecoveryInstanceAsync(const Model::DeleteRecoveryInstanceRequest& request, const DeleteRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single Replication Configuration Template by ID</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationConfigurationTemplateOutcome DeleteReplicationConfigurationTemplate(const Model::DeleteReplicationConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationConfigurationTemplateOutcomeCallable DeleteReplicationConfigurationTemplateCallable(const Model::DeleteReplicationConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationConfigurationTemplateAsync(const Model::DeleteReplicationConfigurationTemplateRequest& request, const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single Source Server by ID. The Source Server must be disconnected
         * first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteSourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceServerOutcome DeleteSourceServer(const Model::DeleteSourceServerRequest& request) const;

        /**
         * A Callable wrapper for DeleteSourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSourceServerOutcomeCallable DeleteSourceServerCallable(const Model::DeleteSourceServerRequest& request) const;

        /**
         * An Async wrapper for DeleteSourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSourceServerAsync(const Model::DeleteSourceServerRequest& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a detailed Job log with pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobLogItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobLogItemsOutcome DescribeJobLogItems(const Model::DescribeJobLogItemsRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobLogItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobLogItemsOutcomeCallable DescribeJobLogItemsCallable(const Model::DescribeJobLogItemsRequest& request) const;

        /**
         * An Async wrapper for DescribeJobLogItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobLogItemsAsync(const Model::DescribeJobLogItemsRequest& request, const DescribeJobLogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Jobs. Use the JobsID and fromDate and toDate filters to
         * limit which jobs are returned. The response is sorted by creationDataTime -
         * latest date first. Jobs are created by the StartRecovery,
         * TerminateRecoveryInstances and StartFailbackLaunch APIs. Jobs are also created
         * by DiagnosticLaunch and TerminateDiagnosticInstances, which are APIs available
         * only to *Support* and only used in response to relevant support
         * tickets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request) const;

        /**
         * An Async wrapper for DescribeJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Recovery Instances or multiple Recovery Instances by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoveryInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecoveryInstancesOutcome DescribeRecoveryInstances(const Model::DescribeRecoveryInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecoveryInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecoveryInstancesOutcomeCallable DescribeRecoveryInstancesCallable(const Model::DescribeRecoveryInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeRecoveryInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecoveryInstancesAsync(const Model::DescribeRecoveryInstancesRequest& request, const DescribeRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Recovery Snapshots for a single Source Server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoverySnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecoverySnapshotsOutcome DescribeRecoverySnapshots(const Model::DescribeRecoverySnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecoverySnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecoverySnapshotsOutcomeCallable DescribeRecoverySnapshotsCallable(const Model::DescribeRecoverySnapshotsRequest& request) const;

        /**
         * An Async wrapper for DescribeRecoverySnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRecoverySnapshotsAsync(const Model::DescribeRecoverySnapshotsRequest& request, const DescribeRecoverySnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all ReplicationConfigurationTemplates, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeReplicationConfigurationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationConfigurationTemplatesOutcome DescribeReplicationConfigurationTemplates(const Model::DescribeReplicationConfigurationTemplatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationConfigurationTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationConfigurationTemplatesOutcomeCallable DescribeReplicationConfigurationTemplatesCallable(const Model::DescribeReplicationConfigurationTemplatesRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationConfigurationTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationConfigurationTemplatesAsync(const Model::DescribeReplicationConfigurationTemplatesRequest& request, const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Source Servers or multiple Source Servers filtered by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeSourceServers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceServersOutcome DescribeSourceServers(const Model::DescribeSourceServersRequest& request) const;

        /**
         * A Callable wrapper for DescribeSourceServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSourceServersOutcomeCallable DescribeSourceServersCallable(const Model::DescribeSourceServersRequest& request) const;

        /**
         * An Async wrapper for DescribeSourceServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSourceServersAsync(const Model::DescribeSourceServersRequest& request, const DescribeSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnect a Recovery Instance from Elastic Disaster Recovery. Data
         * replication is stopped immediately. All AWS resources created by Elastic
         * Disaster Recovery for enabling the replication of the Recovery Instance will be
         * terminated / deleted within 90 minutes. If the agent on the Recovery Instance
         * has not been prevented from communicating with the Elastic Disaster Recovery
         * service, then it will receive a command to uninstall itself (within
         * approximately 10 minutes). The following properties of the Recovery Instance
         * will be changed immediately: dataReplicationInfo.dataReplicationState will be
         * set to DISCONNECTED; The totalStorageBytes property for each of
         * dataReplicationInfo.replicatedDisks will be set to zero;
         * dataReplicationInfo.lagDuration and dataReplicationInfo.lagDuration will be
         * nullified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DisconnectRecoveryInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectRecoveryInstanceOutcome DisconnectRecoveryInstance(const Model::DisconnectRecoveryInstanceRequest& request) const;

        /**
         * A Callable wrapper for DisconnectRecoveryInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectRecoveryInstanceOutcomeCallable DisconnectRecoveryInstanceCallable(const Model::DisconnectRecoveryInstanceRequest& request) const;

        /**
         * An Async wrapper for DisconnectRecoveryInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectRecoveryInstanceAsync(const Model::DisconnectRecoveryInstanceRequest& request, const DisconnectRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects a specific Source Server from Elastic Disaster Recovery. Data
         * replication is stopped immediately. All AWS resources created by Elastic
         * Disaster Recovery for enabling the replication of the Source Server will be
         * terminated / deleted within 90 minutes. You cannot disconnect a Source Server if
         * it has a Recovery Instance. If the agent on the Source Server has not been
         * prevented from communicating with the Elastic Disaster Recovery service, then it
         * will receive a command to uninstall itself (within approximately 10 minutes).
         * The following properties of the SourceServer will be changed immediately:
         * dataReplicationInfo.dataReplicationState will be set to DISCONNECTED; The
         * totalStorageBytes property for each of dataReplicationInfo.replicatedDisks will
         * be set to zero; dataReplicationInfo.lagDuration and
         * dataReplicationInfo.lagDuration will be nullified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DisconnectSourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectSourceServerOutcome DisconnectSourceServer(const Model::DisconnectSourceServerRequest& request) const;

        /**
         * A Callable wrapper for DisconnectSourceServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectSourceServerOutcomeCallable DisconnectSourceServerCallable(const Model::DisconnectSourceServerRequest& request) const;

        /**
         * An Async wrapper for DisconnectSourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectSourceServerAsync(const Model::DisconnectSourceServerRequest& request, const DisconnectSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Failback ReplicationConfigurations, filtered by Recovery Instance
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFailbackReplicationConfigurationOutcome GetFailbackReplicationConfiguration(const Model::GetFailbackReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetFailbackReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFailbackReplicationConfigurationOutcomeCallable GetFailbackReplicationConfigurationCallable(const Model::GetFailbackReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetFailbackReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFailbackReplicationConfigurationAsync(const Model::GetFailbackReplicationConfigurationRequest& request, const GetFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a LaunchConfiguration, filtered by Source Server IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchConfigurationOutcome GetLaunchConfiguration(const Model::GetLaunchConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchConfigurationOutcomeCallable GetLaunchConfigurationCallable(const Model::GetLaunchConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchConfigurationAsync(const Model::GetLaunchConfigurationRequest& request, const GetLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a ReplicationConfiguration, filtered by Source Server ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationConfigurationOutcome GetReplicationConfiguration(const Model::GetReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationConfigurationOutcomeCallable GetReplicationConfigurationCallable(const Model::GetReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReplicationConfigurationAsync(const Model::GetReplicationConfigurationRequest& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initialize Elastic Disaster Recovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/InitializeService">AWS
         * API Reference</a></p>
         */
        virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request) const;

        /**
         * A Callable wrapper for InitializeService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitializeServiceOutcomeCallable InitializeServiceCallable(const Model::InitializeServiceRequest& request) const;

        /**
         * An Async wrapper for InitializeService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitializeServiceAsync(const Model::InitializeServiceRequest& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of source servers on a staging account that are extensible,
         * which means that: a. The source server is not already extended into this
         * Account. b. The source server on the Account we’re reading from is not an
         * extension of another source server. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListExtensibleSourceServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExtensibleSourceServersOutcome ListExtensibleSourceServers(const Model::ListExtensibleSourceServersRequest& request) const;

        /**
         * A Callable wrapper for ListExtensibleSourceServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListExtensibleSourceServersOutcomeCallable ListExtensibleSourceServersCallable(const Model::ListExtensibleSourceServersRequest& request) const;

        /**
         * An Async wrapper for ListExtensibleSourceServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExtensibleSourceServersAsync(const Model::ListExtensibleSourceServersRequest& request, const ListExtensibleSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of staging accounts for existing extended source
         * servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListStagingAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStagingAccountsOutcome ListStagingAccounts(const Model::ListStagingAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListStagingAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStagingAccountsOutcomeCallable ListStagingAccountsCallable(const Model::ListStagingAccountsRequest& request) const;

        /**
         * An Async wrapper for ListStagingAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStagingAccountsAsync(const Model::ListStagingAccountsRequest& request, const ListStagingAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tags for your Elastic Disaster Recovery resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListTagsForResource">AWS
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
         * <p>Causes the data replication initiation sequence to begin immediately upon
         * next Handshake for the specified Source Server ID, regardless of when the
         * previous initiation started. This command will work only if the Source Server is
         * stalled or is in a DISCONNECTED or STOPPED state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RetryDataReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryDataReplicationOutcome RetryDataReplication(const Model::RetryDataReplicationRequest& request) const;

        /**
         * A Callable wrapper for RetryDataReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryDataReplicationOutcomeCallable RetryDataReplicationCallable(const Model::RetryDataReplicationRequest& request) const;

        /**
         * An Async wrapper for RetryDataReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryDataReplicationAsync(const Model::RetryDataReplicationRequest& request, const RetryDataReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Start replication to origin / target region - applies only to protected
         * instances that originated in EC2. For recovery instances on target region -
         * starts replication back to origin region. For failback instances on origin
         * region - starts replication to target region to re-protect them. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ReverseReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::ReverseReplicationOutcome ReverseReplication(const Model::ReverseReplicationRequest& request) const;

        /**
         * A Callable wrapper for ReverseReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReverseReplicationOutcomeCallable ReverseReplicationCallable(const Model::ReverseReplicationRequest& request) const;

        /**
         * An Async wrapper for ReverseReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReverseReplicationAsync(const Model::ReverseReplicationRequest& request, const ReverseReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a Job for launching the machine that is being failed back to from
         * the specified Recovery Instance. This will run conversion on the failback client
         * and will reboot your machine, thus completing the failback
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartFailbackLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFailbackLaunchOutcome StartFailbackLaunch(const Model::StartFailbackLaunchRequest& request) const;

        /**
         * A Callable wrapper for StartFailbackLaunch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFailbackLaunchOutcomeCallable StartFailbackLaunchCallable(const Model::StartFailbackLaunchRequest& request) const;

        /**
         * An Async wrapper for StartFailbackLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFailbackLaunchAsync(const Model::StartFailbackLaunchRequest& request, const StartFailbackLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches Recovery Instances for the specified Source Servers. For each Source
         * Server you may choose a point in time snapshot to launch from, or use an on
         * demand snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartRecovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecoveryOutcome StartRecovery(const Model::StartRecoveryRequest& request) const;

        /**
         * A Callable wrapper for StartRecovery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRecoveryOutcomeCallable StartRecoveryCallable(const Model::StartRecoveryRequest& request) const;

        /**
         * An Async wrapper for StartRecovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRecoveryAsync(const Model::StartRecoveryRequest& request, const StartRecoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts replication for a stopped Source Server. This action would make the
         * Source Server protected again and restart billing for it.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationOutcome StartReplication(const Model::StartReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReplicationOutcomeCallable StartReplicationCallable(const Model::StartReplicationRequest& request) const;

        /**
         * An Async wrapper for StartReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReplicationAsync(const Model::StartReplicationRequest& request, const StartReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the failback process for a specified Recovery Instance. This changes
         * the Failback State of the Recovery Instance back to
         * FAILBACK_NOT_STARTED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StopFailback">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFailbackOutcome StopFailback(const Model::StopFailbackRequest& request) const;

        /**
         * A Callable wrapper for StopFailback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFailbackOutcomeCallable StopFailbackCallable(const Model::StopFailbackRequest& request) const;

        /**
         * An Async wrapper for StopFailback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFailbackAsync(const Model::StopFailbackRequest& request, const StopFailbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops replication for a Source Server. This action would make the Source
         * Server unprotected, delete its existing snapshots and stop billing for
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StopReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopReplicationOutcome StopReplication(const Model::StopReplicationRequest& request) const;

        /**
         * A Callable wrapper for StopReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopReplicationOutcomeCallable StopReplicationCallable(const Model::StopReplicationRequest& request) const;

        /**
         * An Async wrapper for StopReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopReplicationAsync(const Model::StopReplicationRequest& request, const StopReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites only the specified tags for the specified Elastic Disaster
         * Recovery resource or resources. When you specify an existing tag key, the value
         * is overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and optional value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/TagResource">AWS API
         * Reference</a></p>
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
         * <p>Initiates a Job for terminating the EC2 resources associated with the
         * specified Recovery Instances, and then will delete the Recovery Instances from
         * the Elastic Disaster Recovery service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/TerminateRecoveryInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateRecoveryInstancesOutcome TerminateRecoveryInstances(const Model::TerminateRecoveryInstancesRequest& request) const;

        /**
         * A Callable wrapper for TerminateRecoveryInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateRecoveryInstancesOutcomeCallable TerminateRecoveryInstancesCallable(const Model::TerminateRecoveryInstancesRequest& request) const;

        /**
         * An Async wrapper for TerminateRecoveryInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateRecoveryInstancesAsync(const Model::TerminateRecoveryInstancesRequest& request, const TerminateRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of tags from the specified set of Elastic Disaster
         * Recovery resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UntagResource">AWS
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
         * <p>Allows you to update the failback replication configuration of a Recovery
         * Instance by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFailbackReplicationConfigurationOutcome UpdateFailbackReplicationConfiguration(const Model::UpdateFailbackReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateFailbackReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFailbackReplicationConfigurationOutcomeCallable UpdateFailbackReplicationConfigurationCallable(const Model::UpdateFailbackReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateFailbackReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFailbackReplicationConfigurationAsync(const Model::UpdateFailbackReplicationConfigurationRequest& request, const UpdateFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a LaunchConfiguration by Source Server ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchConfigurationOutcome UpdateLaunchConfiguration(const Model::UpdateLaunchConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchConfigurationOutcomeCallable UpdateLaunchConfigurationCallable(const Model::UpdateLaunchConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLaunchConfigurationAsync(const Model::UpdateLaunchConfigurationRequest& request, const UpdateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to update a ReplicationConfiguration by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationConfigurationOutcome UpdateReplicationConfiguration(const Model::UpdateReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationConfigurationOutcomeCallable UpdateReplicationConfigurationCallable(const Model::UpdateReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReplicationConfigurationAsync(const Model::UpdateReplicationConfigurationRequest& request, const UpdateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a ReplicationConfigurationTemplate by ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationConfigurationTemplateOutcome UpdateReplicationConfigurationTemplate(const Model::UpdateReplicationConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateReplicationConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationConfigurationTemplateOutcomeCallable UpdateReplicationConfigurationTemplateCallable(const Model::UpdateReplicationConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReplicationConfigurationTemplateAsync(const Model::UpdateReplicationConfigurationTemplateRequest& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DrsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DrsClient>;
      void init(const DrsClientConfiguration& clientConfiguration);

      DrsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DrsEndpointProviderBase> m_endpointProvider;
  };

} // namespace drs
} // namespace Aws

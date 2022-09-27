/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/MgnServiceClientModel.h>

namespace Aws
{
namespace mgn
{
  /**
   * <p>The Application Migration Service service.</p>
   */
  class AWS_MGN_API MgnClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MgnClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MgnClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MgnClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MgnClient();


        /**
         * <p>Allows the user to set the SourceServer.LifeCycle.state property for specific
         * Source Server IDs to one of the following: READY_FOR_TEST or READY_FOR_CUTOVER.
         * This command only works if the Source Server is already launchable
         * (dataReplicationInfo.lagDuration is not null.)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ChangeServerLifeCycleState">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangeServerLifeCycleStateOutcome ChangeServerLifeCycleState(const Model::ChangeServerLifeCycleStateRequest& request) const;

        /**
         * A Callable wrapper for ChangeServerLifeCycleState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeServerLifeCycleStateOutcomeCallable ChangeServerLifeCycleStateCallable(const Model::ChangeServerLifeCycleStateRequest& request) const;

        /**
         * An Async wrapper for ChangeServerLifeCycleState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeServerLifeCycleStateAsync(const Model::ChangeServerLifeCycleStateRequest& request, const ChangeServerLifeCycleStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchConfigurationTemplateOutcome CreateLaunchConfigurationTemplate(const Model::CreateLaunchConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchConfigurationTemplateOutcomeCallable CreateLaunchConfigurationTemplateCallable(const Model::CreateLaunchConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLaunchConfigurationTemplateAsync(const Model::CreateLaunchConfigurationTemplateRequest& request, const CreateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateReplicationConfigurationTemplate">AWS
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
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteJob">AWS API
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
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchConfigurationTemplateOutcome DeleteLaunchConfigurationTemplate(const Model::DeleteLaunchConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchConfigurationTemplateOutcomeCallable DeleteLaunchConfigurationTemplateCallable(const Model::DeleteLaunchConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchConfigurationTemplateAsync(const Model::DeleteLaunchConfigurationTemplateRequest& request, const DeleteLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single Replication Configuration Template by ID</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteReplicationConfigurationTemplate">AWS
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
         * <p>Deletes a single source server by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteSourceServer">AWS
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
         * <p>Deletes a given vCenter client by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteVcenterClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVcenterClientOutcome DeleteVcenterClient(const Model::DeleteVcenterClientRequest& request) const;

        /**
         * A Callable wrapper for DeleteVcenterClient that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVcenterClientOutcomeCallable DeleteVcenterClientCallable(const Model::DeleteVcenterClientRequest& request) const;

        /**
         * An Async wrapper for DeleteVcenterClient that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVcenterClientAsync(const Model::DeleteVcenterClientRequest& request, const DeleteVcenterClientResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves detailed job log items with paging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeJobLogItems">AWS
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
         * <p>Returns a list of Jobs. Use the JobsID and fromDate and toData filters to
         * limit which jobs are returned. The response is sorted by creationDataTime -
         * latest date first. Jobs are normally created by the StartTest, StartCutover, and
         * TerminateTargetInstances APIs. Jobs are also created by DiagnosticLaunch and
         * TerminateDiagnosticInstances, which are APIs available only to *Support* and
         * only used in response to relevant support tickets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeJobs">AWS
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
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeLaunchConfigurationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchConfigurationTemplatesOutcome DescribeLaunchConfigurationTemplates(const Model::DescribeLaunchConfigurationTemplatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeLaunchConfigurationTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLaunchConfigurationTemplatesOutcomeCallable DescribeLaunchConfigurationTemplatesCallable(const Model::DescribeLaunchConfigurationTemplatesRequest& request) const;

        /**
         * An Async wrapper for DescribeLaunchConfigurationTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLaunchConfigurationTemplatesAsync(const Model::DescribeLaunchConfigurationTemplatesRequest& request, const DescribeLaunchConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all ReplicationConfigurationTemplates, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeReplicationConfigurationTemplates">AWS
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
         * <p>Retrieves all SourceServers or multiple SourceServers by ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeSourceServers">AWS
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
         * <p>Returns a list of the installed vCenter clients.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeVcenterClients">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVcenterClientsOutcome DescribeVcenterClients(const Model::DescribeVcenterClientsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVcenterClients that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVcenterClientsOutcomeCallable DescribeVcenterClientsCallable(const Model::DescribeVcenterClientsRequest& request) const;

        /**
         * An Async wrapper for DescribeVcenterClients that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVcenterClientsAsync(const Model::DescribeVcenterClientsRequest& request, const DescribeVcenterClientsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects specific Source Servers from Application Migration Service. Data
         * replication is stopped immediately. All AWS resources created by Application
         * Migration Service for enabling the replication of these source servers will be
         * terminated / deleted within 90 minutes. Launched Test or Cutover instances will
         * NOT be terminated. If the agent on the source server has not been prevented from
         * communicating with the Application Migration Service service, then it will
         * receive a command to uninstall itself (within approximately 10 minutes). The
         * following properties of the SourceServer will be changed immediately:
         * dataReplicationInfo.dataReplicationState will be set to DISCONNECTED; The
         * totalStorageBytes property for each of dataReplicationInfo.replicatedDisks will
         * be set to zero; dataReplicationInfo.lagDuration and
         * dataReplicationInfo.lagDuration will be nullified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DisconnectFromService">AWS
         * API Reference</a></p>
         */
        virtual Model::DisconnectFromServiceOutcome DisconnectFromService(const Model::DisconnectFromServiceRequest& request) const;

        /**
         * A Callable wrapper for DisconnectFromService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectFromServiceOutcomeCallable DisconnectFromServiceCallable(const Model::DisconnectFromServiceRequest& request) const;

        /**
         * An Async wrapper for DisconnectFromService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisconnectFromServiceAsync(const Model::DisconnectFromServiceRequest& request, const DisconnectFromServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finalizes the cutover immediately for specific Source Servers. All AWS
         * resources created by Application Migration Service for enabling the replication
         * of these source servers will be terminated / deleted within 90 minutes. Launched
         * Test or Cutover instances will NOT be terminated. The AWS Replication Agent will
         * receive a command to uninstall itself (within 10 minutes). The following
         * properties of the SourceServer will be changed immediately:
         * dataReplicationInfo.dataReplicationState will be changed to DISCONNECTED; The
         * SourceServer.lifeCycle.state will be changed to CUTOVER; The totalStorageBytes
         * property fo each of dataReplicationInfo.replicatedDisks will be set to zero;
         * dataReplicationInfo.lagDuration and dataReplicationInfo.lagDuration will be
         * nullified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/FinalizeCutover">AWS
         * API Reference</a></p>
         */
        virtual Model::FinalizeCutoverOutcome FinalizeCutover(const Model::FinalizeCutoverRequest& request) const;

        /**
         * A Callable wrapper for FinalizeCutover that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::FinalizeCutoverOutcomeCallable FinalizeCutoverCallable(const Model::FinalizeCutoverRequest& request) const;

        /**
         * An Async wrapper for FinalizeCutover that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void FinalizeCutoverAsync(const Model::FinalizeCutoverRequest& request, const FinalizeCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all LaunchConfigurations available, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetLaunchConfiguration">AWS
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
         * <p>Lists all ReplicationConfigurations, filtered by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetReplicationConfiguration">AWS
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
         * <p>Initialize Application Migration Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/InitializeService">AWS
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
         * <p>List all tags for your Application Migration Service resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListTagsForResource">AWS
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
         * <p>Archives specific Source Servers by setting the SourceServer.isArchived
         * property to true for specified SourceServers by ID. This command only works for
         * SourceServers with a lifecycle. state which equals DISCONNECTED or
         * CUTOVER.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/MarkAsArchived">AWS
         * API Reference</a></p>
         */
        virtual Model::MarkAsArchivedOutcome MarkAsArchived(const Model::MarkAsArchivedRequest& request) const;

        /**
         * A Callable wrapper for MarkAsArchived that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MarkAsArchivedOutcomeCallable MarkAsArchivedCallable(const Model::MarkAsArchivedRequest& request) const;

        /**
         * An Async wrapper for MarkAsArchived that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MarkAsArchivedAsync(const Model::MarkAsArchivedRequest& request, const MarkAsArchivedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Causes the data replication initiation sequence to begin immediately upon
         * next Handshake for specified SourceServer IDs, regardless of when the previous
         * initiation started. This command will not work if the SourceServer is not
         * stalled or is in a DISCONNECTED or STOPPED state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RetryDataReplication">AWS
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
         * <p>Launches a Cutover Instance for specific Source Servers. This command starts
         * a LAUNCH job whose initiatedBy property is StartCutover and changes the
         * SourceServer.lifeCycle.state property to CUTTING_OVER.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartCutover">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCutoverOutcome StartCutover(const Model::StartCutoverRequest& request) const;

        /**
         * A Callable wrapper for StartCutover that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartCutoverOutcomeCallable StartCutoverCallable(const Model::StartCutoverRequest& request) const;

        /**
         * An Async wrapper for StartCutover that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCutoverAsync(const Model::StartCutoverRequest& request, const StartCutoverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts replication for SNAPSHOT_SHIPPING agents.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartReplication">AWS
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
         * <p>Launches a Test Instance for specific Source Servers. This command starts a
         * LAUNCH job whose initiatedBy property is StartTest and changes the
         * SourceServer.lifeCycle.state property to TESTING.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartTest">AWS API
         * Reference</a></p>
         */
        virtual Model::StartTestOutcome StartTest(const Model::StartTestRequest& request) const;

        /**
         * A Callable wrapper for StartTest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTestOutcomeCallable StartTestCallable(const Model::StartTestRequest& request) const;

        /**
         * An Async wrapper for StartTest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTestAsync(const Model::StartTestRequest& request, const StartTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or overwrites only the specified tags for the specified Application
         * Migration Service resource or resources. When you specify an existing tag key,
         * the value is overwritten with the new value. Each resource can have a maximum of
         * 50 tags. Each tag consists of a key and optional value.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/TagResource">AWS
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
         * <p>Starts a job that terminates specific launched EC2 Test and Cutover
         * instances. This command will not work for any Source Server with a
         * lifecycle.state of TESTING, CUTTING_OVER, or CUTOVER.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/TerminateTargetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateTargetInstancesOutcome TerminateTargetInstances(const Model::TerminateTargetInstancesRequest& request) const;

        /**
         * A Callable wrapper for TerminateTargetInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateTargetInstancesOutcomeCallable TerminateTargetInstancesCallable(const Model::TerminateTargetInstancesRequest& request) const;

        /**
         * An Async wrapper for TerminateTargetInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateTargetInstancesAsync(const Model::TerminateTargetInstancesRequest& request, const TerminateTargetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of tags from the specified set of Application
         * Migration Service resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UntagResource">AWS
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
         * <p>Updates multiple LaunchConfigurations by Source Server ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateLaunchConfiguration">AWS
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
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchConfigurationTemplateOutcome UpdateLaunchConfigurationTemplate(const Model::UpdateLaunchConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchConfigurationTemplateOutcomeCallable UpdateLaunchConfigurationTemplateCallable(const Model::UpdateLaunchConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLaunchConfigurationTemplateAsync(const Model::UpdateLaunchConfigurationTemplateRequest& request, const UpdateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows you to update multiple ReplicationConfigurations by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateReplicationConfiguration">AWS
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
         * <p>Updates multiple ReplicationConfigurationTemplates by ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateReplicationConfigurationTemplate">AWS
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

        /**
         * <p>Allows you to change between the AGENT_BASED replication type and the
         * SNAPSHOT_SHIPPING replication type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateSourceServerReplicationType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceServerReplicationTypeOutcome UpdateSourceServerReplicationType(const Model::UpdateSourceServerReplicationTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateSourceServerReplicationType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSourceServerReplicationTypeOutcomeCallable UpdateSourceServerReplicationTypeCallable(const Model::UpdateSourceServerReplicationTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateSourceServerReplicationType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSourceServerReplicationTypeAsync(const Model::UpdateSourceServerReplicationTypeRequest& request, const UpdateSourceServerReplicationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace mgn
} // namespace Aws

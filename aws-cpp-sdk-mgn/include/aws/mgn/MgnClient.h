/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/MgnServiceClientModel.h>
#include <aws/mgn/MgnLegacyAsyncMacros.h>

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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MgnClient(const Aws::mgn::MgnClientConfiguration& clientConfiguration = Aws::mgn::MgnClientConfiguration(),
                  std::shared_ptr<MgnEndpointProviderBase> endpointProvider = Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MgnClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<MgnEndpointProviderBase> endpointProvider = Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG),
                  const Aws::mgn::MgnClientConfiguration& clientConfiguration = Aws::mgn::MgnClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MgnClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<MgnEndpointProviderBase> endpointProvider = Aws::MakeShared<MgnEndpointProvider>(ALLOCATION_TAG),
                  const Aws::mgn::MgnClientConfiguration& clientConfiguration = Aws::mgn::MgnClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MgnClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MgnClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MgnClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MgnClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


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
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchConfigurationTemplateOutcome CreateLaunchConfigurationTemplate(const Model::CreateLaunchConfigurationTemplateRequest& request) const;


        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/CreateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationConfigurationTemplateOutcome CreateReplicationConfigurationTemplate(const Model::CreateReplicationConfigurationTemplateRequest& request) const;


        /**
         * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;


        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchConfigurationTemplateOutcome DeleteLaunchConfigurationTemplate(const Model::DeleteLaunchConfigurationTemplateRequest& request) const;


        /**
         * <p>Deletes a single Replication Configuration Template by ID</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationConfigurationTemplateOutcome DeleteReplicationConfigurationTemplate(const Model::DeleteReplicationConfigurationTemplateRequest& request) const;


        /**
         * <p>Deletes a single source server by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteSourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceServerOutcome DeleteSourceServer(const Model::DeleteSourceServerRequest& request) const;


        /**
         * <p>Deletes a given vCenter client by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DeleteVcenterClient">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVcenterClientOutcome DeleteVcenterClient(const Model::DeleteVcenterClientRequest& request) const;


        /**
         * <p>Retrieves detailed job log items with paging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeJobLogItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobLogItemsOutcome DescribeJobLogItems(const Model::DescribeJobLogItemsRequest& request) const;


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
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeLaunchConfigurationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchConfigurationTemplatesOutcome DescribeLaunchConfigurationTemplates(const Model::DescribeLaunchConfigurationTemplatesRequest& request) const;


        /**
         * <p>Lists all ReplicationConfigurationTemplates, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeReplicationConfigurationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationConfigurationTemplatesOutcome DescribeReplicationConfigurationTemplates(const Model::DescribeReplicationConfigurationTemplatesRequest& request) const;


        /**
         * <p>Retrieves all SourceServers or multiple SourceServers by ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeSourceServers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceServersOutcome DescribeSourceServers(const Model::DescribeSourceServersRequest& request) const;


        /**
         * <p>Returns a list of the installed vCenter clients.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DescribeVcenterClients">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVcenterClientsOutcome DescribeVcenterClients(const Model::DescribeVcenterClientsRequest& request) const;


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
         * <p>Lists all LaunchConfigurations available, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchConfigurationOutcome GetLaunchConfiguration(const Model::GetLaunchConfigurationRequest& request) const;


        /**
         * <p>Lists all ReplicationConfigurations, filtered by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/GetReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationConfigurationOutcome GetReplicationConfiguration(const Model::GetReplicationConfigurationRequest& request) const;


        /**
         * <p>Initialize Application Migration Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/InitializeService">AWS
         * API Reference</a></p>
         */
        virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request) const;


        /**
         * <p>List all tags for your Application Migration Service resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Causes the data replication initiation sequence to begin immediately upon
         * next Handshake for specified SourceServer IDs, regardless of when the previous
         * initiation started. This command will not work if the SourceServer is not
         * stalled or is in a DISCONNECTED or STOPPED state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/RetryDataReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::RetryDataReplicationOutcome RetryDataReplication(const Model::RetryDataReplicationRequest& request) const;


        /**
         * <p>Launches a Cutover Instance for specific Source Servers. This command starts
         * a LAUNCH job whose initiatedBy property is StartCutover and changes the
         * SourceServer.lifeCycle.state property to CUTTING_OVER.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartCutover">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCutoverOutcome StartCutover(const Model::StartCutoverRequest& request) const;


        /**
         * <p>Starts replication for SNAPSHOT_SHIPPING agents.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReplicationOutcome StartReplication(const Model::StartReplicationRequest& request) const;


        /**
         * <p>Launches a Test Instance for specific Source Servers. This command starts a
         * LAUNCH job whose initiatedBy property is StartTest and changes the
         * SourceServer.lifeCycle.state property to TESTING.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartTest">AWS API
         * Reference</a></p>
         */
        virtual Model::StartTestOutcome StartTest(const Model::StartTestRequest& request) const;


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
         * <p>Starts a job that terminates specific launched EC2 Test and Cutover
         * instances. This command will not work for any Source Server with a
         * lifecycle.state of TESTING, CUTTING_OVER, or CUTOVER.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/TerminateTargetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateTargetInstancesOutcome TerminateTargetInstances(const Model::TerminateTargetInstancesRequest& request) const;


        /**
         * <p>Deletes the specified set of tags from the specified set of Application
         * Migration Service resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates multiple LaunchConfigurations by Source Server ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchConfigurationOutcome UpdateLaunchConfiguration(const Model::UpdateLaunchConfigurationRequest& request) const;


        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchConfigurationTemplateOutcome UpdateLaunchConfigurationTemplate(const Model::UpdateLaunchConfigurationTemplateRequest& request) const;


        /**
         * <p>Allows you to update multiple ReplicationConfigurations by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationConfigurationOutcome UpdateReplicationConfiguration(const Model::UpdateReplicationConfigurationRequest& request) const;


        /**
         * <p>Updates multiple ReplicationConfigurationTemplates by ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationConfigurationTemplateOutcome UpdateReplicationConfigurationTemplate(const Model::UpdateReplicationConfigurationTemplateRequest& request) const;


        /**
         * <p>Allows you to change between the AGENT_BASED replication type and the
         * SNAPSHOT_SHIPPING replication type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/UpdateSourceServerReplicationType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceServerReplicationTypeOutcome UpdateSourceServerReplicationType(const Model::UpdateSourceServerReplicationTypeRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MgnEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MgnClientConfiguration& clientConfiguration);

      MgnClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MgnEndpointProviderBase> m_endpointProvider;
  };

} // namespace mgn
} // namespace Aws

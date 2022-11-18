/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/DrsServiceClientModel.h>
#include <aws/drs/DrsLegacyAsyncMacros.h>

namespace Aws
{
namespace drs
{
  /**
   * <p>AWS Elastic Disaster Recovery Service.</p>
   */
  class AWS_DRS_API DrsClient : public Aws::Client::AWSJsonClient
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
         * <p>Create an extended source server in the target Account based on the source
         * server in staging account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateExtendedSourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExtendedSourceServerOutcome CreateExtendedSourceServer(const Model::CreateExtendedSourceServerRequest& request) const;


        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationConfigurationTemplateOutcome CreateReplicationConfigurationTemplate(const Model::CreateReplicationConfigurationTemplateRequest& request) const;


        /**
         * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;


        /**
         * <p>Deletes a single Recovery Instance by ID. This deletes the Recovery Instance
         * resource from Elastic Disaster Recovery. The Recovery Instance must be
         * disconnected first in order to delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteRecoveryInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecoveryInstanceOutcome DeleteRecoveryInstance(const Model::DeleteRecoveryInstanceRequest& request) const;


        /**
         * <p>Deletes a single Replication Configuration Template by ID</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationConfigurationTemplateOutcome DeleteReplicationConfigurationTemplate(const Model::DeleteReplicationConfigurationTemplateRequest& request) const;


        /**
         * <p>Deletes a single Source Server by ID. The Source Server must be disconnected
         * first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteSourceServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceServerOutcome DeleteSourceServer(const Model::DeleteSourceServerRequest& request) const;


        /**
         * <p>Retrieves a detailed Job log with pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobLogItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobLogItemsOutcome DescribeJobLogItems(const Model::DescribeJobLogItemsRequest& request) const;


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
         * <p>Lists all Recovery Instances or multiple Recovery Instances by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoveryInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecoveryInstancesOutcome DescribeRecoveryInstances(const Model::DescribeRecoveryInstancesRequest& request) const;


        /**
         * <p>Lists all Recovery Snapshots for a single Source Server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoverySnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecoverySnapshotsOutcome DescribeRecoverySnapshots(const Model::DescribeRecoverySnapshotsRequest& request) const;


        /**
         * <p>Lists all ReplicationConfigurationTemplates, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeReplicationConfigurationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationConfigurationTemplatesOutcome DescribeReplicationConfigurationTemplates(const Model::DescribeReplicationConfigurationTemplatesRequest& request) const;


        /**
         * <p>Lists all Source Servers or multiple Source Servers filtered by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeSourceServers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceServersOutcome DescribeSourceServers(const Model::DescribeSourceServersRequest& request) const;


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
         * <p>Lists all Failback ReplicationConfigurations, filtered by Recovery Instance
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFailbackReplicationConfigurationOutcome GetFailbackReplicationConfiguration(const Model::GetFailbackReplicationConfigurationRequest& request) const;


        /**
         * <p>Gets a LaunchConfiguration, filtered by Source Server IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchConfigurationOutcome GetLaunchConfiguration(const Model::GetLaunchConfigurationRequest& request) const;


        /**
         * <p>Gets a ReplicationConfiguration, filtered by Source Server ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationConfigurationOutcome GetReplicationConfiguration(const Model::GetReplicationConfigurationRequest& request) const;


        /**
         * <p>Initialize Elastic Disaster Recovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/InitializeService">AWS
         * API Reference</a></p>
         */
        virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request) const;


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
         * <p>Returns an array of staging accounts for existing extended source
         * servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListStagingAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStagingAccountsOutcome ListStagingAccounts(const Model::ListStagingAccountsRequest& request) const;


        /**
         * <p>List all tags for your Elastic Disaster Recovery resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Initiates a Job for launching the machine that is being failed back to from
         * the specified Recovery Instance. This will run conversion on the failback client
         * and will reboot your machine, thus completing the failback
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartFailbackLaunch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFailbackLaunchOutcome StartFailbackLaunch(const Model::StartFailbackLaunchRequest& request) const;


        /**
         * <p>Launches Recovery Instances for the specified Source Servers. For each Source
         * Server you may choose a point in time snapshot to launch from, or use an on
         * demand snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartRecovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecoveryOutcome StartRecovery(const Model::StartRecoveryRequest& request) const;


        /**
         * <p>Stops the failback process for a specified Recovery Instance. This changes
         * the Failback State of the Recovery Instance back to
         * FAILBACK_NOT_STARTED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StopFailback">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFailbackOutcome StopFailback(const Model::StopFailbackRequest& request) const;


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
         * <p>Initiates a Job for terminating the EC2 resources associated with the
         * specified Recovery Instances, and then will delete the Recovery Instances from
         * the Elastic Disaster Recovery service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/TerminateRecoveryInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateRecoveryInstancesOutcome TerminateRecoveryInstances(const Model::TerminateRecoveryInstancesRequest& request) const;


        /**
         * <p>Deletes the specified set of tags from the specified set of Elastic Disaster
         * Recovery resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Allows you to update the failback replication configuration of a Recovery
         * Instance by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFailbackReplicationConfigurationOutcome UpdateFailbackReplicationConfiguration(const Model::UpdateFailbackReplicationConfigurationRequest& request) const;


        /**
         * <p>Updates a LaunchConfiguration by Source Server ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchConfigurationOutcome UpdateLaunchConfiguration(const Model::UpdateLaunchConfigurationRequest& request) const;


        /**
         * <p>Allows you to update a ReplicationConfiguration by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationConfigurationOutcome UpdateReplicationConfiguration(const Model::UpdateReplicationConfigurationRequest& request) const;


        /**
         * <p>Updates a ReplicationConfigurationTemplate by ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationConfigurationTemplateOutcome UpdateReplicationConfigurationTemplate(const Model::UpdateReplicationConfigurationTemplateRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DrsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DrsClientConfiguration& clientConfiguration);

      DrsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DrsEndpointProviderBase> m_endpointProvider;
  };

} // namespace drs
} // namespace Aws

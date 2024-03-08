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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DrsClientConfiguration ClientConfigurationType;
      typedef DrsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::drs::DrsClientConfiguration& clientConfiguration = Aws::drs::DrsClientConfiguration(),
                  std::shared_ptr<DrsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<DrsEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::drs::DrsClientConfiguration& clientConfiguration = Aws::drs::DrsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DrsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<DrsEndpointProviderBase> endpointProvider = nullptr,
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
         * <p>Associate a Source Network to an existing CloudFormation Stack and modify
         * launch templates to use this network. Can be used for reverting to previously
         * deployed CloudFormation stacks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/AssociateSourceNetworkStack">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSourceNetworkStackOutcome AssociateSourceNetworkStack(const Model::AssociateSourceNetworkStackRequest& request) const;

        /**
         * A Callable wrapper for AssociateSourceNetworkStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateSourceNetworkStackRequestT = Model::AssociateSourceNetworkStackRequest>
        Model::AssociateSourceNetworkStackOutcomeCallable AssociateSourceNetworkStackCallable(const AssociateSourceNetworkStackRequestT& request) const
        {
            return SubmitCallable(&DrsClient::AssociateSourceNetworkStack, request);
        }

        /**
         * An Async wrapper for AssociateSourceNetworkStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSourceNetworkStackRequestT = Model::AssociateSourceNetworkStackRequest>
        void AssociateSourceNetworkStackAsync(const AssociateSourceNetworkStackRequestT& request, const AssociateSourceNetworkStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::AssociateSourceNetworkStack, request, handler, context);
        }

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
        template<typename CreateExtendedSourceServerRequestT = Model::CreateExtendedSourceServerRequest>
        Model::CreateExtendedSourceServerOutcomeCallable CreateExtendedSourceServerCallable(const CreateExtendedSourceServerRequestT& request) const
        {
            return SubmitCallable(&DrsClient::CreateExtendedSourceServer, request);
        }

        /**
         * An Async wrapper for CreateExtendedSourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExtendedSourceServerRequestT = Model::CreateExtendedSourceServerRequest>
        void CreateExtendedSourceServerAsync(const CreateExtendedSourceServerRequestT& request, const CreateExtendedSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::CreateExtendedSourceServer, request, handler, context);
        }

        /**
         * <p>Creates a new Launch Configuration Template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchConfigurationTemplateOutcome CreateLaunchConfigurationTemplate(const Model::CreateLaunchConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLaunchConfigurationTemplateRequestT = Model::CreateLaunchConfigurationTemplateRequest>
        Model::CreateLaunchConfigurationTemplateOutcomeCallable CreateLaunchConfigurationTemplateCallable(const CreateLaunchConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&DrsClient::CreateLaunchConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for CreateLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLaunchConfigurationTemplateRequestT = Model::CreateLaunchConfigurationTemplateRequest>
        void CreateLaunchConfigurationTemplateAsync(const CreateLaunchConfigurationTemplateRequestT& request, const CreateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::CreateLaunchConfigurationTemplate, request, handler, context);
        }

        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationConfigurationTemplateOutcome CreateReplicationConfigurationTemplate(const Model::CreateReplicationConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicationConfigurationTemplateRequestT = Model::CreateReplicationConfigurationTemplateRequest>
        Model::CreateReplicationConfigurationTemplateOutcomeCallable CreateReplicationConfigurationTemplateCallable(const CreateReplicationConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&DrsClient::CreateReplicationConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for CreateReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationConfigurationTemplateRequestT = Model::CreateReplicationConfigurationTemplateRequest>
        void CreateReplicationConfigurationTemplateAsync(const CreateReplicationConfigurationTemplateRequestT& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::CreateReplicationConfigurationTemplate, request, handler, context);
        }

        /**
         * <p>Create a new Source Network resource for a provided VPC ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateSourceNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSourceNetworkOutcome CreateSourceNetwork(const Model::CreateSourceNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateSourceNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSourceNetworkRequestT = Model::CreateSourceNetworkRequest>
        Model::CreateSourceNetworkOutcomeCallable CreateSourceNetworkCallable(const CreateSourceNetworkRequestT& request) const
        {
            return SubmitCallable(&DrsClient::CreateSourceNetwork, request);
        }

        /**
         * An Async wrapper for CreateSourceNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSourceNetworkRequestT = Model::CreateSourceNetworkRequest>
        void CreateSourceNetworkAsync(const CreateSourceNetworkRequestT& request, const CreateSourceNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::CreateSourceNetwork, request, handler, context);
        }

        /**
         * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        Model::DeleteJobOutcomeCallable DeleteJobCallable(const DeleteJobRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DeleteJob, request);
        }

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        void DeleteJobAsync(const DeleteJobRequestT& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DeleteJob, request, handler, context);
        }

        /**
         * <p>Deletes a resource launch action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteLaunchAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchActionOutcome DeleteLaunchAction(const Model::DeleteLaunchActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLaunchActionRequestT = Model::DeleteLaunchActionRequest>
        Model::DeleteLaunchActionOutcomeCallable DeleteLaunchActionCallable(const DeleteLaunchActionRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DeleteLaunchAction, request);
        }

        /**
         * An Async wrapper for DeleteLaunchAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLaunchActionRequestT = Model::DeleteLaunchActionRequest>
        void DeleteLaunchActionAsync(const DeleteLaunchActionRequestT& request, const DeleteLaunchActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DeleteLaunchAction, request, handler, context);
        }

        /**
         * <p>Deletes a single Launch Configuration Template by ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchConfigurationTemplateOutcome DeleteLaunchConfigurationTemplate(const Model::DeleteLaunchConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLaunchConfigurationTemplateRequestT = Model::DeleteLaunchConfigurationTemplateRequest>
        Model::DeleteLaunchConfigurationTemplateOutcomeCallable DeleteLaunchConfigurationTemplateCallable(const DeleteLaunchConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DeleteLaunchConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for DeleteLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLaunchConfigurationTemplateRequestT = Model::DeleteLaunchConfigurationTemplateRequest>
        void DeleteLaunchConfigurationTemplateAsync(const DeleteLaunchConfigurationTemplateRequestT& request, const DeleteLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DeleteLaunchConfigurationTemplate, request, handler, context);
        }

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
        template<typename DeleteRecoveryInstanceRequestT = Model::DeleteRecoveryInstanceRequest>
        Model::DeleteRecoveryInstanceOutcomeCallable DeleteRecoveryInstanceCallable(const DeleteRecoveryInstanceRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DeleteRecoveryInstance, request);
        }

        /**
         * An Async wrapper for DeleteRecoveryInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecoveryInstanceRequestT = Model::DeleteRecoveryInstanceRequest>
        void DeleteRecoveryInstanceAsync(const DeleteRecoveryInstanceRequestT& request, const DeleteRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DeleteRecoveryInstance, request, handler, context);
        }

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
        template<typename DeleteReplicationConfigurationTemplateRequestT = Model::DeleteReplicationConfigurationTemplateRequest>
        Model::DeleteReplicationConfigurationTemplateOutcomeCallable DeleteReplicationConfigurationTemplateCallable(const DeleteReplicationConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DeleteReplicationConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for DeleteReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationConfigurationTemplateRequestT = Model::DeleteReplicationConfigurationTemplateRequest>
        void DeleteReplicationConfigurationTemplateAsync(const DeleteReplicationConfigurationTemplateRequestT& request, const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DeleteReplicationConfigurationTemplate, request, handler, context);
        }

        /**
         * <p>Delete Source Network resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteSourceNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceNetworkOutcome DeleteSourceNetwork(const Model::DeleteSourceNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteSourceNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSourceNetworkRequestT = Model::DeleteSourceNetworkRequest>
        Model::DeleteSourceNetworkOutcomeCallable DeleteSourceNetworkCallable(const DeleteSourceNetworkRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DeleteSourceNetwork, request);
        }

        /**
         * An Async wrapper for DeleteSourceNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSourceNetworkRequestT = Model::DeleteSourceNetworkRequest>
        void DeleteSourceNetworkAsync(const DeleteSourceNetworkRequestT& request, const DeleteSourceNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DeleteSourceNetwork, request, handler, context);
        }

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
        template<typename DeleteSourceServerRequestT = Model::DeleteSourceServerRequest>
        Model::DeleteSourceServerOutcomeCallable DeleteSourceServerCallable(const DeleteSourceServerRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DeleteSourceServer, request);
        }

        /**
         * An Async wrapper for DeleteSourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSourceServerRequestT = Model::DeleteSourceServerRequest>
        void DeleteSourceServerAsync(const DeleteSourceServerRequestT& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DeleteSourceServer, request, handler, context);
        }

        /**
         * <p>Retrieves a detailed Job log with pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobLogItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobLogItemsOutcome DescribeJobLogItems(const Model::DescribeJobLogItemsRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobLogItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobLogItemsRequestT = Model::DescribeJobLogItemsRequest>
        Model::DescribeJobLogItemsOutcomeCallable DescribeJobLogItemsCallable(const DescribeJobLogItemsRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeJobLogItems, request);
        }

        /**
         * An Async wrapper for DescribeJobLogItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobLogItemsRequestT = Model::DescribeJobLogItemsRequest>
        void DescribeJobLogItemsAsync(const DescribeJobLogItemsRequestT& request, const DescribeJobLogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeJobLogItems, request, handler, context);
        }

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
        template<typename DescribeJobsRequestT = Model::DescribeJobsRequest>
        Model::DescribeJobsOutcomeCallable DescribeJobsCallable(const DescribeJobsRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeJobs, request);
        }

        /**
         * An Async wrapper for DescribeJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobsRequestT = Model::DescribeJobsRequest>
        void DescribeJobsAsync(const DescribeJobsRequestT& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeJobs, request, handler, context);
        }

        /**
         * <p>Lists all Launch Configuration Templates, filtered by Launch Configuration
         * Template IDs</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeLaunchConfigurationTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLaunchConfigurationTemplatesOutcome DescribeLaunchConfigurationTemplates(const Model::DescribeLaunchConfigurationTemplatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeLaunchConfigurationTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLaunchConfigurationTemplatesRequestT = Model::DescribeLaunchConfigurationTemplatesRequest>
        Model::DescribeLaunchConfigurationTemplatesOutcomeCallable DescribeLaunchConfigurationTemplatesCallable(const DescribeLaunchConfigurationTemplatesRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeLaunchConfigurationTemplates, request);
        }

        /**
         * An Async wrapper for DescribeLaunchConfigurationTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLaunchConfigurationTemplatesRequestT = Model::DescribeLaunchConfigurationTemplatesRequest>
        void DescribeLaunchConfigurationTemplatesAsync(const DescribeLaunchConfigurationTemplatesRequestT& request, const DescribeLaunchConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeLaunchConfigurationTemplates, request, handler, context);
        }

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
        template<typename DescribeRecoveryInstancesRequestT = Model::DescribeRecoveryInstancesRequest>
        Model::DescribeRecoveryInstancesOutcomeCallable DescribeRecoveryInstancesCallable(const DescribeRecoveryInstancesRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeRecoveryInstances, request);
        }

        /**
         * An Async wrapper for DescribeRecoveryInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecoveryInstancesRequestT = Model::DescribeRecoveryInstancesRequest>
        void DescribeRecoveryInstancesAsync(const DescribeRecoveryInstancesRequestT& request, const DescribeRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeRecoveryInstances, request, handler, context);
        }

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
        template<typename DescribeRecoverySnapshotsRequestT = Model::DescribeRecoverySnapshotsRequest>
        Model::DescribeRecoverySnapshotsOutcomeCallable DescribeRecoverySnapshotsCallable(const DescribeRecoverySnapshotsRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeRecoverySnapshots, request);
        }

        /**
         * An Async wrapper for DescribeRecoverySnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecoverySnapshotsRequestT = Model::DescribeRecoverySnapshotsRequest>
        void DescribeRecoverySnapshotsAsync(const DescribeRecoverySnapshotsRequestT& request, const DescribeRecoverySnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeRecoverySnapshots, request, handler, context);
        }

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
        template<typename DescribeReplicationConfigurationTemplatesRequestT = Model::DescribeReplicationConfigurationTemplatesRequest>
        Model::DescribeReplicationConfigurationTemplatesOutcomeCallable DescribeReplicationConfigurationTemplatesCallable(const DescribeReplicationConfigurationTemplatesRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeReplicationConfigurationTemplates, request);
        }

        /**
         * An Async wrapper for DescribeReplicationConfigurationTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationConfigurationTemplatesRequestT = Model::DescribeReplicationConfigurationTemplatesRequest>
        void DescribeReplicationConfigurationTemplatesAsync(const DescribeReplicationConfigurationTemplatesRequestT& request, const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeReplicationConfigurationTemplates, request, handler, context);
        }

        /**
         * <p>Lists all Source Networks or multiple Source Networks filtered by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeSourceNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceNetworksOutcome DescribeSourceNetworks(const Model::DescribeSourceNetworksRequest& request) const;

        /**
         * A Callable wrapper for DescribeSourceNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSourceNetworksRequestT = Model::DescribeSourceNetworksRequest>
        Model::DescribeSourceNetworksOutcomeCallable DescribeSourceNetworksCallable(const DescribeSourceNetworksRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeSourceNetworks, request);
        }

        /**
         * An Async wrapper for DescribeSourceNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSourceNetworksRequestT = Model::DescribeSourceNetworksRequest>
        void DescribeSourceNetworksAsync(const DescribeSourceNetworksRequestT& request, const DescribeSourceNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeSourceNetworks, request, handler, context);
        }

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
        template<typename DescribeSourceServersRequestT = Model::DescribeSourceServersRequest>
        Model::DescribeSourceServersOutcomeCallable DescribeSourceServersCallable(const DescribeSourceServersRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DescribeSourceServers, request);
        }

        /**
         * An Async wrapper for DescribeSourceServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSourceServersRequestT = Model::DescribeSourceServersRequest>
        void DescribeSourceServersAsync(const DescribeSourceServersRequestT& request, const DescribeSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DescribeSourceServers, request, handler, context);
        }

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
        template<typename DisconnectRecoveryInstanceRequestT = Model::DisconnectRecoveryInstanceRequest>
        Model::DisconnectRecoveryInstanceOutcomeCallable DisconnectRecoveryInstanceCallable(const DisconnectRecoveryInstanceRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DisconnectRecoveryInstance, request);
        }

        /**
         * An Async wrapper for DisconnectRecoveryInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisconnectRecoveryInstanceRequestT = Model::DisconnectRecoveryInstanceRequest>
        void DisconnectRecoveryInstanceAsync(const DisconnectRecoveryInstanceRequestT& request, const DisconnectRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DisconnectRecoveryInstance, request, handler, context);
        }

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
        template<typename DisconnectSourceServerRequestT = Model::DisconnectSourceServerRequest>
        Model::DisconnectSourceServerOutcomeCallable DisconnectSourceServerCallable(const DisconnectSourceServerRequestT& request) const
        {
            return SubmitCallable(&DrsClient::DisconnectSourceServer, request);
        }

        /**
         * An Async wrapper for DisconnectSourceServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisconnectSourceServerRequestT = Model::DisconnectSourceServerRequest>
        void DisconnectSourceServerAsync(const DisconnectSourceServerRequestT& request, const DisconnectSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::DisconnectSourceServer, request, handler, context);
        }

        /**
         * <p>Export the Source Network CloudFormation template to an S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ExportSourceNetworkCfnTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportSourceNetworkCfnTemplateOutcome ExportSourceNetworkCfnTemplate(const Model::ExportSourceNetworkCfnTemplateRequest& request) const;

        /**
         * A Callable wrapper for ExportSourceNetworkCfnTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportSourceNetworkCfnTemplateRequestT = Model::ExportSourceNetworkCfnTemplateRequest>
        Model::ExportSourceNetworkCfnTemplateOutcomeCallable ExportSourceNetworkCfnTemplateCallable(const ExportSourceNetworkCfnTemplateRequestT& request) const
        {
            return SubmitCallable(&DrsClient::ExportSourceNetworkCfnTemplate, request);
        }

        /**
         * An Async wrapper for ExportSourceNetworkCfnTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportSourceNetworkCfnTemplateRequestT = Model::ExportSourceNetworkCfnTemplateRequest>
        void ExportSourceNetworkCfnTemplateAsync(const ExportSourceNetworkCfnTemplateRequestT& request, const ExportSourceNetworkCfnTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::ExportSourceNetworkCfnTemplate, request, handler, context);
        }

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
        template<typename GetFailbackReplicationConfigurationRequestT = Model::GetFailbackReplicationConfigurationRequest>
        Model::GetFailbackReplicationConfigurationOutcomeCallable GetFailbackReplicationConfigurationCallable(const GetFailbackReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::GetFailbackReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for GetFailbackReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFailbackReplicationConfigurationRequestT = Model::GetFailbackReplicationConfigurationRequest>
        void GetFailbackReplicationConfigurationAsync(const GetFailbackReplicationConfigurationRequestT& request, const GetFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::GetFailbackReplicationConfiguration, request, handler, context);
        }

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
        template<typename GetLaunchConfigurationRequestT = Model::GetLaunchConfigurationRequest>
        Model::GetLaunchConfigurationOutcomeCallable GetLaunchConfigurationCallable(const GetLaunchConfigurationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::GetLaunchConfiguration, request);
        }

        /**
         * An Async wrapper for GetLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLaunchConfigurationRequestT = Model::GetLaunchConfigurationRequest>
        void GetLaunchConfigurationAsync(const GetLaunchConfigurationRequestT& request, const GetLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::GetLaunchConfiguration, request, handler, context);
        }

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
        template<typename GetReplicationConfigurationRequestT = Model::GetReplicationConfigurationRequest>
        Model::GetReplicationConfigurationOutcomeCallable GetReplicationConfigurationCallable(const GetReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::GetReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for GetReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReplicationConfigurationRequestT = Model::GetReplicationConfigurationRequest>
        void GetReplicationConfigurationAsync(const GetReplicationConfigurationRequestT& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::GetReplicationConfiguration, request, handler, context);
        }

        /**
         * <p>Initialize Elastic Disaster Recovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/InitializeService">AWS
         * API Reference</a></p>
         */
        virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request) const;

        /**
         * A Callable wrapper for InitializeService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InitializeServiceRequestT = Model::InitializeServiceRequest>
        Model::InitializeServiceOutcomeCallable InitializeServiceCallable(const InitializeServiceRequestT& request) const
        {
            return SubmitCallable(&DrsClient::InitializeService, request);
        }

        /**
         * An Async wrapper for InitializeService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InitializeServiceRequestT = Model::InitializeServiceRequest>
        void InitializeServiceAsync(const InitializeServiceRequestT& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::InitializeService, request, handler, context);
        }

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
        template<typename ListExtensibleSourceServersRequestT = Model::ListExtensibleSourceServersRequest>
        Model::ListExtensibleSourceServersOutcomeCallable ListExtensibleSourceServersCallable(const ListExtensibleSourceServersRequestT& request) const
        {
            return SubmitCallable(&DrsClient::ListExtensibleSourceServers, request);
        }

        /**
         * An Async wrapper for ListExtensibleSourceServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExtensibleSourceServersRequestT = Model::ListExtensibleSourceServersRequest>
        void ListExtensibleSourceServersAsync(const ListExtensibleSourceServersRequestT& request, const ListExtensibleSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::ListExtensibleSourceServers, request, handler, context);
        }

        /**
         * <p>Lists resource launch actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListLaunchActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchActionsOutcome ListLaunchActions(const Model::ListLaunchActionsRequest& request) const;

        /**
         * A Callable wrapper for ListLaunchActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLaunchActionsRequestT = Model::ListLaunchActionsRequest>
        Model::ListLaunchActionsOutcomeCallable ListLaunchActionsCallable(const ListLaunchActionsRequestT& request) const
        {
            return SubmitCallable(&DrsClient::ListLaunchActions, request);
        }

        /**
         * An Async wrapper for ListLaunchActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLaunchActionsRequestT = Model::ListLaunchActionsRequest>
        void ListLaunchActionsAsync(const ListLaunchActionsRequestT& request, const ListLaunchActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::ListLaunchActions, request, handler, context);
        }

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
        template<typename ListStagingAccountsRequestT = Model::ListStagingAccountsRequest>
        Model::ListStagingAccountsOutcomeCallable ListStagingAccountsCallable(const ListStagingAccountsRequestT& request) const
        {
            return SubmitCallable(&DrsClient::ListStagingAccounts, request);
        }

        /**
         * An Async wrapper for ListStagingAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStagingAccountsRequestT = Model::ListStagingAccountsRequest>
        void ListStagingAccountsAsync(const ListStagingAccountsRequestT& request, const ListStagingAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::ListStagingAccounts, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DrsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Puts a resource launch action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/PutLaunchAction">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLaunchActionOutcome PutLaunchAction(const Model::PutLaunchActionRequest& request) const;

        /**
         * A Callable wrapper for PutLaunchAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLaunchActionRequestT = Model::PutLaunchActionRequest>
        Model::PutLaunchActionOutcomeCallable PutLaunchActionCallable(const PutLaunchActionRequestT& request) const
        {
            return SubmitCallable(&DrsClient::PutLaunchAction, request);
        }

        /**
         * An Async wrapper for PutLaunchAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLaunchActionRequestT = Model::PutLaunchActionRequest>
        void PutLaunchActionAsync(const PutLaunchActionRequestT& request, const PutLaunchActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::PutLaunchAction, request, handler, context);
        }

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
        template<typename ReverseReplicationRequestT = Model::ReverseReplicationRequest>
        Model::ReverseReplicationOutcomeCallable ReverseReplicationCallable(const ReverseReplicationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::ReverseReplication, request);
        }

        /**
         * An Async wrapper for ReverseReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReverseReplicationRequestT = Model::ReverseReplicationRequest>
        void ReverseReplicationAsync(const ReverseReplicationRequestT& request, const ReverseReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::ReverseReplication, request, handler, context);
        }

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
        template<typename StartFailbackLaunchRequestT = Model::StartFailbackLaunchRequest>
        Model::StartFailbackLaunchOutcomeCallable StartFailbackLaunchCallable(const StartFailbackLaunchRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StartFailbackLaunch, request);
        }

        /**
         * An Async wrapper for StartFailbackLaunch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFailbackLaunchRequestT = Model::StartFailbackLaunchRequest>
        void StartFailbackLaunchAsync(const StartFailbackLaunchRequestT& request, const StartFailbackLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StartFailbackLaunch, request, handler, context);
        }

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
        template<typename StartRecoveryRequestT = Model::StartRecoveryRequest>
        Model::StartRecoveryOutcomeCallable StartRecoveryCallable(const StartRecoveryRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StartRecovery, request);
        }

        /**
         * An Async wrapper for StartRecovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRecoveryRequestT = Model::StartRecoveryRequest>
        void StartRecoveryAsync(const StartRecoveryRequestT& request, const StartRecoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StartRecovery, request, handler, context);
        }

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
        template<typename StartReplicationRequestT = Model::StartReplicationRequest>
        Model::StartReplicationOutcomeCallable StartReplicationCallable(const StartReplicationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StartReplication, request);
        }

        /**
         * An Async wrapper for StartReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartReplicationRequestT = Model::StartReplicationRequest>
        void StartReplicationAsync(const StartReplicationRequestT& request, const StartReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StartReplication, request, handler, context);
        }

        /**
         * <p>Deploy VPC for the specified Source Network and modify launch templates to
         * use this network. The VPC will be deployed using a dedicated CloudFormation
         * stack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartSourceNetworkRecovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSourceNetworkRecoveryOutcome StartSourceNetworkRecovery(const Model::StartSourceNetworkRecoveryRequest& request) const;

        /**
         * A Callable wrapper for StartSourceNetworkRecovery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSourceNetworkRecoveryRequestT = Model::StartSourceNetworkRecoveryRequest>
        Model::StartSourceNetworkRecoveryOutcomeCallable StartSourceNetworkRecoveryCallable(const StartSourceNetworkRecoveryRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StartSourceNetworkRecovery, request);
        }

        /**
         * An Async wrapper for StartSourceNetworkRecovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSourceNetworkRecoveryRequestT = Model::StartSourceNetworkRecoveryRequest>
        void StartSourceNetworkRecoveryAsync(const StartSourceNetworkRecoveryRequestT& request, const StartSourceNetworkRecoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StartSourceNetworkRecovery, request, handler, context);
        }

        /**
         * <p>Starts replication for a Source Network. This action would make the Source
         * Network protected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartSourceNetworkReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSourceNetworkReplicationOutcome StartSourceNetworkReplication(const Model::StartSourceNetworkReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartSourceNetworkReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSourceNetworkReplicationRequestT = Model::StartSourceNetworkReplicationRequest>
        Model::StartSourceNetworkReplicationOutcomeCallable StartSourceNetworkReplicationCallable(const StartSourceNetworkReplicationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StartSourceNetworkReplication, request);
        }

        /**
         * An Async wrapper for StartSourceNetworkReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSourceNetworkReplicationRequestT = Model::StartSourceNetworkReplicationRequest>
        void StartSourceNetworkReplicationAsync(const StartSourceNetworkReplicationRequestT& request, const StartSourceNetworkReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StartSourceNetworkReplication, request, handler, context);
        }

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
        template<typename StopFailbackRequestT = Model::StopFailbackRequest>
        Model::StopFailbackOutcomeCallable StopFailbackCallable(const StopFailbackRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StopFailback, request);
        }

        /**
         * An Async wrapper for StopFailback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopFailbackRequestT = Model::StopFailbackRequest>
        void StopFailbackAsync(const StopFailbackRequestT& request, const StopFailbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StopFailback, request, handler, context);
        }

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
        template<typename StopReplicationRequestT = Model::StopReplicationRequest>
        Model::StopReplicationOutcomeCallable StopReplicationCallable(const StopReplicationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StopReplication, request);
        }

        /**
         * An Async wrapper for StopReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopReplicationRequestT = Model::StopReplicationRequest>
        void StopReplicationAsync(const StopReplicationRequestT& request, const StopReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StopReplication, request, handler, context);
        }

        /**
         * <p>Stops replication for a Source Network. This action would make the Source
         * Network unprotected.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StopSourceNetworkReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSourceNetworkReplicationOutcome StopSourceNetworkReplication(const Model::StopSourceNetworkReplicationRequest& request) const;

        /**
         * A Callable wrapper for StopSourceNetworkReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSourceNetworkReplicationRequestT = Model::StopSourceNetworkReplicationRequest>
        Model::StopSourceNetworkReplicationOutcomeCallable StopSourceNetworkReplicationCallable(const StopSourceNetworkReplicationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::StopSourceNetworkReplication, request);
        }

        /**
         * An Async wrapper for StopSourceNetworkReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSourceNetworkReplicationRequestT = Model::StopSourceNetworkReplicationRequest>
        void StopSourceNetworkReplicationAsync(const StopSourceNetworkReplicationRequestT& request, const StopSourceNetworkReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::StopSourceNetworkReplication, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DrsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::TagResource, request, handler, context);
        }

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
        template<typename TerminateRecoveryInstancesRequestT = Model::TerminateRecoveryInstancesRequest>
        Model::TerminateRecoveryInstancesOutcomeCallable TerminateRecoveryInstancesCallable(const TerminateRecoveryInstancesRequestT& request) const
        {
            return SubmitCallable(&DrsClient::TerminateRecoveryInstances, request);
        }

        /**
         * An Async wrapper for TerminateRecoveryInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateRecoveryInstancesRequestT = Model::TerminateRecoveryInstancesRequest>
        void TerminateRecoveryInstancesAsync(const TerminateRecoveryInstancesRequestT& request, const TerminateRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::TerminateRecoveryInstances, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DrsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateFailbackReplicationConfigurationRequestT = Model::UpdateFailbackReplicationConfigurationRequest>
        Model::UpdateFailbackReplicationConfigurationOutcomeCallable UpdateFailbackReplicationConfigurationCallable(const UpdateFailbackReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::UpdateFailbackReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateFailbackReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFailbackReplicationConfigurationRequestT = Model::UpdateFailbackReplicationConfigurationRequest>
        void UpdateFailbackReplicationConfigurationAsync(const UpdateFailbackReplicationConfigurationRequestT& request, const UpdateFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::UpdateFailbackReplicationConfiguration, request, handler, context);
        }

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
        template<typename UpdateLaunchConfigurationRequestT = Model::UpdateLaunchConfigurationRequest>
        Model::UpdateLaunchConfigurationOutcomeCallable UpdateLaunchConfigurationCallable(const UpdateLaunchConfigurationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::UpdateLaunchConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLaunchConfigurationRequestT = Model::UpdateLaunchConfigurationRequest>
        void UpdateLaunchConfigurationAsync(const UpdateLaunchConfigurationRequestT& request, const UpdateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::UpdateLaunchConfiguration, request, handler, context);
        }

        /**
         * <p>Updates an existing Launch Configuration Template by ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateLaunchConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchConfigurationTemplateOutcome UpdateLaunchConfigurationTemplate(const Model::UpdateLaunchConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateLaunchConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLaunchConfigurationTemplateRequestT = Model::UpdateLaunchConfigurationTemplateRequest>
        Model::UpdateLaunchConfigurationTemplateOutcomeCallable UpdateLaunchConfigurationTemplateCallable(const UpdateLaunchConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&DrsClient::UpdateLaunchConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for UpdateLaunchConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLaunchConfigurationTemplateRequestT = Model::UpdateLaunchConfigurationTemplateRequest>
        void UpdateLaunchConfigurationTemplateAsync(const UpdateLaunchConfigurationTemplateRequestT& request, const UpdateLaunchConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::UpdateLaunchConfigurationTemplate, request, handler, context);
        }

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
        template<typename UpdateReplicationConfigurationRequestT = Model::UpdateReplicationConfigurationRequest>
        Model::UpdateReplicationConfigurationOutcomeCallable UpdateReplicationConfigurationCallable(const UpdateReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&DrsClient::UpdateReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReplicationConfigurationRequestT = Model::UpdateReplicationConfigurationRequest>
        void UpdateReplicationConfigurationAsync(const UpdateReplicationConfigurationRequestT& request, const UpdateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::UpdateReplicationConfiguration, request, handler, context);
        }

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
        template<typename UpdateReplicationConfigurationTemplateRequestT = Model::UpdateReplicationConfigurationTemplateRequest>
        Model::UpdateReplicationConfigurationTemplateOutcomeCallable UpdateReplicationConfigurationTemplateCallable(const UpdateReplicationConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&DrsClient::UpdateReplicationConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for UpdateReplicationConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReplicationConfigurationTemplateRequestT = Model::UpdateReplicationConfigurationTemplateRequest>
        void UpdateReplicationConfigurationTemplateAsync(const UpdateReplicationConfigurationTemplateRequestT& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DrsClient::UpdateReplicationConfigurationTemplate, request, handler, context);
        }


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

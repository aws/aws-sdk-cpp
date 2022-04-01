﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/CreateReplicationConfigurationTemplateResult.h>
#include <aws/drs/model/DeleteJobResult.h>
#include <aws/drs/model/DeleteReplicationConfigurationTemplateResult.h>
#include <aws/drs/model/DeleteSourceServerResult.h>
#include <aws/drs/model/DescribeJobLogItemsResult.h>
#include <aws/drs/model/DescribeJobsResult.h>
#include <aws/drs/model/DescribeRecoveryInstancesResult.h>
#include <aws/drs/model/DescribeRecoverySnapshotsResult.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesResult.h>
#include <aws/drs/model/DescribeSourceServersResult.h>
#include <aws/drs/model/DisconnectSourceServerResult.h>
#include <aws/drs/model/GetFailbackReplicationConfigurationResult.h>
#include <aws/drs/model/GetLaunchConfigurationResult.h>
#include <aws/drs/model/GetReplicationConfigurationResult.h>
#include <aws/drs/model/InitializeServiceResult.h>
#include <aws/drs/model/ListTagsForResourceResult.h>
#include <aws/drs/model/RetryDataReplicationResult.h>
#include <aws/drs/model/StartFailbackLaunchResult.h>
#include <aws/drs/model/StartRecoveryResult.h>
#include <aws/drs/model/TerminateRecoveryInstancesResult.h>
#include <aws/drs/model/UpdateLaunchConfigurationResult.h>
#include <aws/drs/model/UpdateReplicationConfigurationResult.h>
#include <aws/drs/model/UpdateReplicationConfigurationTemplateResult.h>
#include <aws/core/NoResult.h>
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

namespace drs
{

namespace Model
{
        class CreateReplicationConfigurationTemplateRequest;
        class DeleteJobRequest;
        class DeleteRecoveryInstanceRequest;
        class DeleteReplicationConfigurationTemplateRequest;
        class DeleteSourceServerRequest;
        class DescribeJobLogItemsRequest;
        class DescribeJobsRequest;
        class DescribeRecoveryInstancesRequest;
        class DescribeRecoverySnapshotsRequest;
        class DescribeReplicationConfigurationTemplatesRequest;
        class DescribeSourceServersRequest;
        class DisconnectRecoveryInstanceRequest;
        class DisconnectSourceServerRequest;
        class GetFailbackReplicationConfigurationRequest;
        class GetLaunchConfigurationRequest;
        class GetReplicationConfigurationRequest;
        class InitializeServiceRequest;
        class ListTagsForResourceRequest;
        class RetryDataReplicationRequest;
        class StartFailbackLaunchRequest;
        class StartRecoveryRequest;
        class StopFailbackRequest;
        class TagResourceRequest;
        class TerminateRecoveryInstancesRequest;
        class UntagResourceRequest;
        class UpdateFailbackReplicationConfigurationRequest;
        class UpdateLaunchConfigurationRequest;
        class UpdateReplicationConfigurationRequest;
        class UpdateReplicationConfigurationTemplateRequest;

        typedef Aws::Utils::Outcome<CreateReplicationConfigurationTemplateResult, DrsError> CreateReplicationConfigurationTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteJobResult, DrsError> DeleteJobOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> DeleteRecoveryInstanceOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationConfigurationTemplateResult, DrsError> DeleteReplicationConfigurationTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteSourceServerResult, DrsError> DeleteSourceServerOutcome;
        typedef Aws::Utils::Outcome<DescribeJobLogItemsResult, DrsError> DescribeJobLogItemsOutcome;
        typedef Aws::Utils::Outcome<DescribeJobsResult, DrsError> DescribeJobsOutcome;
        typedef Aws::Utils::Outcome<DescribeRecoveryInstancesResult, DrsError> DescribeRecoveryInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeRecoverySnapshotsResult, DrsError> DescribeRecoverySnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeReplicationConfigurationTemplatesResult, DrsError> DescribeReplicationConfigurationTemplatesOutcome;
        typedef Aws::Utils::Outcome<DescribeSourceServersResult, DrsError> DescribeSourceServersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> DisconnectRecoveryInstanceOutcome;
        typedef Aws::Utils::Outcome<DisconnectSourceServerResult, DrsError> DisconnectSourceServerOutcome;
        typedef Aws::Utils::Outcome<GetFailbackReplicationConfigurationResult, DrsError> GetFailbackReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetLaunchConfigurationResult, DrsError> GetLaunchConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetReplicationConfigurationResult, DrsError> GetReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<InitializeServiceResult, DrsError> InitializeServiceOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, DrsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RetryDataReplicationResult, DrsError> RetryDataReplicationOutcome;
        typedef Aws::Utils::Outcome<StartFailbackLaunchResult, DrsError> StartFailbackLaunchOutcome;
        typedef Aws::Utils::Outcome<StartRecoveryResult, DrsError> StartRecoveryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> StopFailbackOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TerminateRecoveryInstancesResult, DrsError> TerminateRecoveryInstancesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> UpdateFailbackReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateLaunchConfigurationResult, DrsError> UpdateLaunchConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateReplicationConfigurationResult, DrsError> UpdateReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateReplicationConfigurationTemplateResult, DrsError> UpdateReplicationConfigurationTemplateOutcome;

        typedef std::future<CreateReplicationConfigurationTemplateOutcome> CreateReplicationConfigurationTemplateOutcomeCallable;
        typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
        typedef std::future<DeleteRecoveryInstanceOutcome> DeleteRecoveryInstanceOutcomeCallable;
        typedef std::future<DeleteReplicationConfigurationTemplateOutcome> DeleteReplicationConfigurationTemplateOutcomeCallable;
        typedef std::future<DeleteSourceServerOutcome> DeleteSourceServerOutcomeCallable;
        typedef std::future<DescribeJobLogItemsOutcome> DescribeJobLogItemsOutcomeCallable;
        typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
        typedef std::future<DescribeRecoveryInstancesOutcome> DescribeRecoveryInstancesOutcomeCallable;
        typedef std::future<DescribeRecoverySnapshotsOutcome> DescribeRecoverySnapshotsOutcomeCallable;
        typedef std::future<DescribeReplicationConfigurationTemplatesOutcome> DescribeReplicationConfigurationTemplatesOutcomeCallable;
        typedef std::future<DescribeSourceServersOutcome> DescribeSourceServersOutcomeCallable;
        typedef std::future<DisconnectRecoveryInstanceOutcome> DisconnectRecoveryInstanceOutcomeCallable;
        typedef std::future<DisconnectSourceServerOutcome> DisconnectSourceServerOutcomeCallable;
        typedef std::future<GetFailbackReplicationConfigurationOutcome> GetFailbackReplicationConfigurationOutcomeCallable;
        typedef std::future<GetLaunchConfigurationOutcome> GetLaunchConfigurationOutcomeCallable;
        typedef std::future<GetReplicationConfigurationOutcome> GetReplicationConfigurationOutcomeCallable;
        typedef std::future<InitializeServiceOutcome> InitializeServiceOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RetryDataReplicationOutcome> RetryDataReplicationOutcomeCallable;
        typedef std::future<StartFailbackLaunchOutcome> StartFailbackLaunchOutcomeCallable;
        typedef std::future<StartRecoveryOutcome> StartRecoveryOutcomeCallable;
        typedef std::future<StopFailbackOutcome> StopFailbackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TerminateRecoveryInstancesOutcome> TerminateRecoveryInstancesOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateFailbackReplicationConfigurationOutcome> UpdateFailbackReplicationConfigurationOutcomeCallable;
        typedef std::future<UpdateLaunchConfigurationOutcome> UpdateLaunchConfigurationOutcomeCallable;
        typedef std::future<UpdateReplicationConfigurationOutcome> UpdateReplicationConfigurationOutcomeCallable;
        typedef std::future<UpdateReplicationConfigurationTemplateOutcome> UpdateReplicationConfigurationTemplateOutcomeCallable;
} // namespace Model

  class DrsClient;

    typedef std::function<void(const DrsClient*, const Model::CreateReplicationConfigurationTemplateRequest&, const Model::CreateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteRecoveryInstanceRequest&, const Model::DeleteRecoveryInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecoveryInstanceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteReplicationConfigurationTemplateRequest&, const Model::DeleteReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteSourceServerRequest&, const Model::DeleteSourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceServerResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeJobLogItemsRequest&, const Model::DescribeJobLogItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobLogItemsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeRecoveryInstancesRequest&, const Model::DescribeRecoveryInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecoveryInstancesResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeRecoverySnapshotsRequest&, const Model::DescribeRecoverySnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecoverySnapshotsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeReplicationConfigurationTemplatesRequest&, const Model::DescribeReplicationConfigurationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationConfigurationTemplatesResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeSourceServersRequest&, const Model::DescribeSourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceServersResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DisconnectRecoveryInstanceRequest&, const Model::DisconnectRecoveryInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectRecoveryInstanceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DisconnectSourceServerRequest&, const Model::DisconnectSourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectSourceServerResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::GetFailbackReplicationConfigurationRequest&, const Model::GetFailbackReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFailbackReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::GetLaunchConfigurationRequest&, const Model::GetLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::GetReplicationConfigurationRequest&, const Model::GetReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::InitializeServiceRequest&, const Model::InitializeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitializeServiceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::RetryDataReplicationRequest&, const Model::RetryDataReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryDataReplicationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StartFailbackLaunchRequest&, const Model::StartFailbackLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFailbackLaunchResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StartRecoveryRequest&, const Model::StartRecoveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRecoveryResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StopFailbackRequest&, const Model::StopFailbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFailbackResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::TerminateRecoveryInstancesRequest&, const Model::TerminateRecoveryInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateRecoveryInstancesResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateFailbackReplicationConfigurationRequest&, const Model::UpdateFailbackReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFailbackReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateLaunchConfigurationRequest&, const Model::UpdateLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateReplicationConfigurationRequest&, const Model::UpdateReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateReplicationConfigurationTemplateRequest&, const Model::UpdateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationTemplateResponseReceivedHandler;

  /**
   * <p>AWS Elastic Disaster Recovery Service.</p>
   */
  class AWS_DRS_API DrsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DrsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DrsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DrsClient();


        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationConfigurationTemplateOutcome CreateReplicationConfigurationTemplate(const Model::CreateReplicationConfigurationTemplateRequest& request) const;

        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationConfigurationTemplateOutcomeCallable CreateReplicationConfigurationTemplateCallable(const Model::CreateReplicationConfigurationTemplateRequest& request) const;

        /**
         * <p>Creates a new ReplicationConfigurationTemplate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/CreateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationConfigurationTemplateAsync(const Model::CreateReplicationConfigurationTemplateRequest& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteJob">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * <p>Deletes a single Job by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteJob">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a single Recovery Instance by ID. This deletes the Recovery Instance
         * resource from Elastic Disaster Recovery. The Recovery Instance must be
         * disconnected first in order to delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteRecoveryInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecoveryInstanceOutcomeCallable DeleteRecoveryInstanceCallable(const Model::DeleteRecoveryInstanceRequest& request) const;

        /**
         * <p>Deletes a single Recovery Instance by ID. This deletes the Recovery Instance
         * resource from Elastic Disaster Recovery. The Recovery Instance must be
         * disconnected first in order to delete it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteRecoveryInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a single Replication Configuration Template by ID</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationConfigurationTemplateOutcomeCallable DeleteReplicationConfigurationTemplateCallable(const Model::DeleteReplicationConfigurationTemplateRequest& request) const;

        /**
         * <p>Deletes a single Replication Configuration Template by ID</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a single Source Server by ID. The Source Server must be disconnected
         * first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteSourceServer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSourceServerOutcomeCallable DeleteSourceServerCallable(const Model::DeleteSourceServerRequest& request) const;

        /**
         * <p>Deletes a single Source Server by ID. The Source Server must be disconnected
         * first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DeleteSourceServer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSourceServerAsync(const Model::DeleteSourceServerRequest& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a detailed Job log with pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobLogItems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobLogItemsOutcome DescribeJobLogItems(const Model::DescribeJobLogItemsRequest& request) const;

        /**
         * <p>Retrieves a detailed Job log with pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobLogItems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobLogItemsOutcomeCallable DescribeJobLogItemsCallable(const Model::DescribeJobLogItemsRequest& request) const;

        /**
         * <p>Retrieves a detailed Job log with pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobLogItems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of Jobs. Use the JobsID and fromDate and toDate filters to
         * limit which jobs are returned. The response is sorted by creationDataTime -
         * latest date first. Jobs are created by the StartRecovery,
         * TerminateRecoveryInstances and StartFailbackLaunch APIs. Jobs are also created
         * by DiagnosticLaunch and TerminateDiagnosticInstances, which are APIs available
         * only to *Support* and only used in response to relevant support
         * tickets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all Recovery Instances or multiple Recovery Instances by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoveryInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecoveryInstancesOutcomeCallable DescribeRecoveryInstancesCallable(const Model::DescribeRecoveryInstancesRequest& request) const;

        /**
         * <p>Lists all Recovery Instances or multiple Recovery Instances by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoveryInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all Recovery Snapshots for a single Source Server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoverySnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRecoverySnapshotsOutcomeCallable DescribeRecoverySnapshotsCallable(const Model::DescribeRecoverySnapshotsRequest& request) const;

        /**
         * <p>Lists all Recovery Snapshots for a single Source Server.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeRecoverySnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all ReplicationConfigurationTemplates, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeReplicationConfigurationTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationConfigurationTemplatesOutcomeCallable DescribeReplicationConfigurationTemplatesCallable(const Model::DescribeReplicationConfigurationTemplatesRequest& request) const;

        /**
         * <p>Lists all ReplicationConfigurationTemplates, filtered by Source Server
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeReplicationConfigurationTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all Source Servers or multiple Source Servers filtered by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeSourceServers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSourceServersOutcomeCallable DescribeSourceServersCallable(const Model::DescribeSourceServersRequest& request) const;

        /**
         * <p>Lists all Source Servers or multiple Source Servers filtered by
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DescribeSourceServers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectRecoveryInstanceOutcomeCallable DisconnectRecoveryInstanceCallable(const Model::DisconnectRecoveryInstanceRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisconnectSourceServerOutcomeCallable DisconnectSourceServerCallable(const Model::DisconnectSourceServerRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists all Failback ReplicationConfigurations, filtered by Recovery Instance
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFailbackReplicationConfigurationOutcomeCallable GetFailbackReplicationConfigurationCallable(const Model::GetFailbackReplicationConfigurationRequest& request) const;

        /**
         * <p>Lists all Failback ReplicationConfigurations, filtered by Recovery Instance
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a LaunchConfiguration, filtered by Source Server IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchConfigurationOutcomeCallable GetLaunchConfigurationCallable(const Model::GetLaunchConfigurationRequest& request) const;

        /**
         * <p>Gets a LaunchConfiguration, filtered by Source Server IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a ReplicationConfiguration, filtered by Source Server ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationConfigurationOutcomeCallable GetReplicationConfigurationCallable(const Model::GetReplicationConfigurationRequest& request) const;

        /**
         * <p>Gets a ReplicationConfiguration, filtered by Source Server ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/GetReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReplicationConfigurationAsync(const Model::GetReplicationConfigurationRequest& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initialize Elastic Disaster Recovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/InitializeService">AWS
         * API Reference</a></p>
         */
        virtual Model::InitializeServiceOutcome InitializeService(const Model::InitializeServiceRequest& request) const;

        /**
         * <p>Initialize Elastic Disaster Recovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/InitializeService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InitializeServiceOutcomeCallable InitializeServiceCallable(const Model::InitializeServiceRequest& request) const;

        /**
         * <p>Initialize Elastic Disaster Recovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/InitializeService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InitializeServiceAsync(const Model::InitializeServiceRequest& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tags for your Elastic Disaster Recovery resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags for your Elastic Disaster Recovery resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags for your Elastic Disaster Recovery resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Causes the data replication initiation sequence to begin immediately upon
         * next Handshake for the specified Source Server ID, regardless of when the
         * previous initiation started. This command will work only if the Source Server is
         * stalled or is in a DISCONNECTED or STOPPED state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RetryDataReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetryDataReplicationOutcomeCallable RetryDataReplicationCallable(const Model::RetryDataReplicationRequest& request) const;

        /**
         * <p>Causes the data replication initiation sequence to begin immediately upon
         * next Handshake for the specified Source Server ID, regardless of when the
         * previous initiation started. This command will work only if the Source Server is
         * stalled or is in a DISCONNECTED or STOPPED state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RetryDataReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetryDataReplicationAsync(const Model::RetryDataReplicationRequest& request, const RetryDataReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Initiates a Job for launching the machine that is being failed back to from
         * the specified Recovery Instance. This will run conversion on the failback client
         * and will reboot your machine, thus completing the failback
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartFailbackLaunch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFailbackLaunchOutcomeCallable StartFailbackLaunchCallable(const Model::StartFailbackLaunchRequest& request) const;

        /**
         * <p>Initiates a Job for launching the machine that is being failed back to from
         * the specified Recovery Instance. This will run conversion on the failback client
         * and will reboot your machine, thus completing the failback
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartFailbackLaunch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Launches Recovery Instances for the specified Source Servers. For each Source
         * Server you may choose a point in time snapshot to launch from, or use an on
         * demand snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartRecovery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRecoveryOutcomeCallable StartRecoveryCallable(const Model::StartRecoveryRequest& request) const;

        /**
         * <p>Launches Recovery Instances for the specified Source Servers. For each Source
         * Server you may choose a point in time snapshot to launch from, or use an on
         * demand snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StartRecovery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRecoveryAsync(const Model::StartRecoveryRequest& request, const StartRecoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the failback process for a specified Recovery Instance. This changes
         * the Failback State of the Recovery Instance back to
         * FAILBACK_NOT_STARTED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StopFailback">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFailbackOutcome StopFailback(const Model::StopFailbackRequest& request) const;

        /**
         * <p>Stops the failback process for a specified Recovery Instance. This changes
         * the Failback State of the Recovery Instance back to
         * FAILBACK_NOT_STARTED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StopFailback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFailbackOutcomeCallable StopFailbackCallable(const Model::StopFailbackRequest& request) const;

        /**
         * <p>Stops the failback process for a specified Recovery Instance. This changes
         * the Failback State of the Recovery Instance back to
         * FAILBACK_NOT_STARTED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/StopFailback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFailbackAsync(const Model::StopFailbackRequest& request, const StopFailbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Adds or overwrites only the specified tags for the specified Elastic Disaster
         * Recovery resource or resources. When you specify an existing tag key, the value
         * is overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and optional value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or overwrites only the specified tags for the specified Elastic Disaster
         * Recovery resource or resources. When you specify an existing tag key, the value
         * is overwritten with the new value. Each resource can have a maximum of 50 tags.
         * Each tag consists of a key and optional value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Initiates a Job for terminating the EC2 resources associated with the
         * specified Recovery Instances, and then will delete the Recovery Instances from
         * the Elastic Disaster Recovery service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/TerminateRecoveryInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateRecoveryInstancesOutcomeCallable TerminateRecoveryInstancesCallable(const Model::TerminateRecoveryInstancesRequest& request) const;

        /**
         * <p>Initiates a Job for terminating the EC2 resources associated with the
         * specified Recovery Instances, and then will delete the Recovery Instances from
         * the Elastic Disaster Recovery service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/TerminateRecoveryInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes the specified set of tags from the specified set of Elastic Disaster
         * Recovery resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the specified set of tags from the specified set of Elastic Disaster
         * Recovery resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Allows you to update the failback replication configuration of a Recovery
         * Instance by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFailbackReplicationConfigurationOutcomeCallable UpdateFailbackReplicationConfigurationCallable(const Model::UpdateFailbackReplicationConfigurationRequest& request) const;

        /**
         * <p>Allows you to update the failback replication configuration of a Recovery
         * Instance by ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateFailbackReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a LaunchConfiguration by Source Server ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchConfigurationOutcomeCallable UpdateLaunchConfigurationCallable(const Model::UpdateLaunchConfigurationRequest& request) const;

        /**
         * <p>Updates a LaunchConfiguration by Source Server ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Allows you to update a ReplicationConfiguration by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationConfigurationOutcomeCallable UpdateReplicationConfigurationCallable(const Model::UpdateReplicationConfigurationRequest& request) const;

        /**
         * <p>Allows you to update a ReplicationConfiguration by Source Server
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a ReplicationConfigurationTemplate by ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationConfigurationTemplateOutcomeCallable UpdateReplicationConfigurationTemplateCallable(const Model::UpdateReplicationConfigurationTemplateRequest& request) const;

        /**
         * <p>Updates a ReplicationConfigurationTemplate by ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/UpdateReplicationConfigurationTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReplicationConfigurationTemplateAsync(const Model::UpdateReplicationConfigurationTemplateRequest& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateReplicationConfigurationTemplateAsyncHelper(const Model::CreateReplicationConfigurationTemplateRequest& request, const CreateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteJobAsyncHelper(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecoveryInstanceAsyncHelper(const Model::DeleteRecoveryInstanceRequest& request, const DeleteRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReplicationConfigurationTemplateAsyncHelper(const Model::DeleteReplicationConfigurationTemplateRequest& request, const DeleteReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSourceServerAsyncHelper(const Model::DeleteSourceServerRequest& request, const DeleteSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobLogItemsAsyncHelper(const Model::DescribeJobLogItemsRequest& request, const DescribeJobLogItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeJobsAsyncHelper(const Model::DescribeJobsRequest& request, const DescribeJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecoveryInstancesAsyncHelper(const Model::DescribeRecoveryInstancesRequest& request, const DescribeRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRecoverySnapshotsAsyncHelper(const Model::DescribeRecoverySnapshotsRequest& request, const DescribeRecoverySnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReplicationConfigurationTemplatesAsyncHelper(const Model::DescribeReplicationConfigurationTemplatesRequest& request, const DescribeReplicationConfigurationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSourceServersAsyncHelper(const Model::DescribeSourceServersRequest& request, const DescribeSourceServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisconnectRecoveryInstanceAsyncHelper(const Model::DisconnectRecoveryInstanceRequest& request, const DisconnectRecoveryInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisconnectSourceServerAsyncHelper(const Model::DisconnectSourceServerRequest& request, const DisconnectSourceServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFailbackReplicationConfigurationAsyncHelper(const Model::GetFailbackReplicationConfigurationRequest& request, const GetFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLaunchConfigurationAsyncHelper(const Model::GetLaunchConfigurationRequest& request, const GetLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReplicationConfigurationAsyncHelper(const Model::GetReplicationConfigurationRequest& request, const GetReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InitializeServiceAsyncHelper(const Model::InitializeServiceRequest& request, const InitializeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RetryDataReplicationAsyncHelper(const Model::RetryDataReplicationRequest& request, const RetryDataReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartFailbackLaunchAsyncHelper(const Model::StartFailbackLaunchRequest& request, const StartFailbackLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRecoveryAsyncHelper(const Model::StartRecoveryRequest& request, const StartRecoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopFailbackAsyncHelper(const Model::StopFailbackRequest& request, const StopFailbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateRecoveryInstancesAsyncHelper(const Model::TerminateRecoveryInstancesRequest& request, const TerminateRecoveryInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFailbackReplicationConfigurationAsyncHelper(const Model::UpdateFailbackReplicationConfigurationRequest& request, const UpdateFailbackReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLaunchConfigurationAsyncHelper(const Model::UpdateLaunchConfigurationRequest& request, const UpdateLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReplicationConfigurationAsyncHelper(const Model::UpdateReplicationConfigurationRequest& request, const UpdateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReplicationConfigurationTemplateAsyncHelper(const Model::UpdateReplicationConfigurationTemplateRequest& request, const UpdateReplicationConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace drs
} // namespace Aws

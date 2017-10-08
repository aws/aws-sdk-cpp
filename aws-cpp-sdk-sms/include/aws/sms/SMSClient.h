/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sms/model/CreateReplicationJobResult.h>
#include <aws/sms/model/DeleteReplicationJobResult.h>
#include <aws/sms/model/DeleteServerCatalogResult.h>
#include <aws/sms/model/DisassociateConnectorResult.h>
#include <aws/sms/model/GetConnectorsResult.h>
#include <aws/sms/model/GetReplicationJobsResult.h>
#include <aws/sms/model/GetReplicationRunsResult.h>
#include <aws/sms/model/GetServersResult.h>
#include <aws/sms/model/ImportServerCatalogResult.h>
#include <aws/sms/model/StartOnDemandReplicationRunResult.h>
#include <aws/sms/model/UpdateReplicationJobResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace SMS
{

namespace Model
{
        class CreateReplicationJobRequest;
        class DeleteReplicationJobRequest;
        class DeleteServerCatalogRequest;
        class DisassociateConnectorRequest;
        class GetConnectorsRequest;
        class GetReplicationJobsRequest;
        class GetReplicationRunsRequest;
        class GetServersRequest;
        class ImportServerCatalogRequest;
        class StartOnDemandReplicationRunRequest;
        class UpdateReplicationJobRequest;

        typedef Aws::Utils::Outcome<CreateReplicationJobResult, Aws::Client::AWSError<SMSErrors>> CreateReplicationJobOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationJobResult, Aws::Client::AWSError<SMSErrors>> DeleteReplicationJobOutcome;
        typedef Aws::Utils::Outcome<DeleteServerCatalogResult, Aws::Client::AWSError<SMSErrors>> DeleteServerCatalogOutcome;
        typedef Aws::Utils::Outcome<DisassociateConnectorResult, Aws::Client::AWSError<SMSErrors>> DisassociateConnectorOutcome;
        typedef Aws::Utils::Outcome<GetConnectorsResult, Aws::Client::AWSError<SMSErrors>> GetConnectorsOutcome;
        typedef Aws::Utils::Outcome<GetReplicationJobsResult, Aws::Client::AWSError<SMSErrors>> GetReplicationJobsOutcome;
        typedef Aws::Utils::Outcome<GetReplicationRunsResult, Aws::Client::AWSError<SMSErrors>> GetReplicationRunsOutcome;
        typedef Aws::Utils::Outcome<GetServersResult, Aws::Client::AWSError<SMSErrors>> GetServersOutcome;
        typedef Aws::Utils::Outcome<ImportServerCatalogResult, Aws::Client::AWSError<SMSErrors>> ImportServerCatalogOutcome;
        typedef Aws::Utils::Outcome<StartOnDemandReplicationRunResult, Aws::Client::AWSError<SMSErrors>> StartOnDemandReplicationRunOutcome;
        typedef Aws::Utils::Outcome<UpdateReplicationJobResult, Aws::Client::AWSError<SMSErrors>> UpdateReplicationJobOutcome;

        typedef std::future<CreateReplicationJobOutcome> CreateReplicationJobOutcomeCallable;
        typedef std::future<DeleteReplicationJobOutcome> DeleteReplicationJobOutcomeCallable;
        typedef std::future<DeleteServerCatalogOutcome> DeleteServerCatalogOutcomeCallable;
        typedef std::future<DisassociateConnectorOutcome> DisassociateConnectorOutcomeCallable;
        typedef std::future<GetConnectorsOutcome> GetConnectorsOutcomeCallable;
        typedef std::future<GetReplicationJobsOutcome> GetReplicationJobsOutcomeCallable;
        typedef std::future<GetReplicationRunsOutcome> GetReplicationRunsOutcomeCallable;
        typedef std::future<GetServersOutcome> GetServersOutcomeCallable;
        typedef std::future<ImportServerCatalogOutcome> ImportServerCatalogOutcomeCallable;
        typedef std::future<StartOnDemandReplicationRunOutcome> StartOnDemandReplicationRunOutcomeCallable;
        typedef std::future<UpdateReplicationJobOutcome> UpdateReplicationJobOutcomeCallable;
} // namespace Model

  class SMSClient;

    typedef std::function<void(const SMSClient*, const Model::CreateReplicationJobRequest&, const Model::CreateReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationJobResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteReplicationJobRequest&, const Model::DeleteReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationJobResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteServerCatalogRequest&, const Model::DeleteServerCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DisassociateConnectorRequest&, const Model::DisassociateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectorResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetConnectorsRequest&, const Model::GetConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectorsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetReplicationJobsRequest&, const Model::GetReplicationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationJobsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetReplicationRunsRequest&, const Model::GetReplicationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationRunsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetServersRequest&, const Model::GetServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServersResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::ImportServerCatalogRequest&, const Model::ImportServerCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportServerCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StartOnDemandReplicationRunRequest&, const Model::StartOnDemandReplicationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOnDemandReplicationRunResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::UpdateReplicationJobRequest&, const Model::UpdateReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationJobResponseReceivedHandler;

  /**
   * Amazon Server Migration Service automates the process of migrating servers to
   * EC2.
   */
  class AWS_SMS_API SMSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SMSClient();

        inline virtual const char* GetServiceClientName() const override { return "sms"; }


        /**
         * The CreateReplicationJob API is used to create a ReplicationJob to replicate a
         * server on AWS. Call this API to first create a ReplicationJob, which will then
         * schedule periodic ReplicationRuns to replicate your server to AWS. Each
         * ReplicationRun will result in the creation of an AWS AMI.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationJobOutcome CreateReplicationJob(const Model::CreateReplicationJobRequest& request) const;

        /**
         * The CreateReplicationJob API is used to create a ReplicationJob to replicate a
         * server on AWS. Call this API to first create a ReplicationJob, which will then
         * schedule periodic ReplicationRuns to replicate your server to AWS. Each
         * ReplicationRun will result in the creation of an AWS AMI.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationJobOutcomeCallable CreateReplicationJobCallable(const Model::CreateReplicationJobRequest& request) const;

        /**
         * The CreateReplicationJob API is used to create a ReplicationJob to replicate a
         * server on AWS. Call this API to first create a ReplicationJob, which will then
         * schedule periodic ReplicationRuns to replicate your server to AWS. Each
         * ReplicationRun will result in the creation of an AWS AMI.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationJobAsync(const Model::CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The DeleteReplicationJob API is used to delete a ReplicationJob, resulting in no
         * further ReplicationRuns. This will delete the contents of the S3 bucket used to
         * store SMS artifacts, but will not delete any AMIs created by the SMS
         * service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationJobOutcome DeleteReplicationJob(const Model::DeleteReplicationJobRequest& request) const;

        /**
         * The DeleteReplicationJob API is used to delete a ReplicationJob, resulting in no
         * further ReplicationRuns. This will delete the contents of the S3 bucket used to
         * store SMS artifacts, but will not delete any AMIs created by the SMS
         * service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationJobOutcomeCallable DeleteReplicationJobCallable(const Model::DeleteReplicationJobRequest& request) const;

        /**
         * The DeleteReplicationJob API is used to delete a ReplicationJob, resulting in no
         * further ReplicationRuns. This will delete the contents of the S3 bucket used to
         * store SMS artifacts, but will not delete any AMIs created by the SMS
         * service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationJobAsync(const Model::DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The DeleteServerCatalog API clears all servers from your server catalog. This
         * means that these servers will no longer be accessible to the Server Migration
         * Service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerCatalogOutcome DeleteServerCatalog(const Model::DeleteServerCatalogRequest& request) const;

        /**
         * The DeleteServerCatalog API clears all servers from your server catalog. This
         * means that these servers will no longer be accessible to the Server Migration
         * Service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServerCatalogOutcomeCallable DeleteServerCatalogCallable(const Model::DeleteServerCatalogRequest& request) const;

        /**
         * The DeleteServerCatalog API clears all servers from your server catalog. This
         * means that these servers will no longer be accessible to the Server Migration
         * Service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServerCatalogAsync(const Model::DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The DisassociateConnector API will disassociate a connector from the Server
         * Migration Service, rendering it unavailable to support replication
         * jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectorOutcome DisassociateConnector(const Model::DisassociateConnectorRequest& request) const;

        /**
         * The DisassociateConnector API will disassociate a connector from the Server
         * Migration Service, rendering it unavailable to support replication
         * jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConnectorOutcomeCallable DisassociateConnectorCallable(const Model::DisassociateConnectorRequest& request) const;

        /**
         * The DisassociateConnector API will disassociate a connector from the Server
         * Migration Service, rendering it unavailable to support replication
         * jobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConnectorAsync(const Model::DisassociateConnectorRequest& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The GetConnectors API returns a list of connectors that are registered with the
         * Server Migration Service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorsOutcome GetConnectors(const Model::GetConnectorsRequest& request) const;

        /**
         * The GetConnectors API returns a list of connectors that are registered with the
         * Server Migration Service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectorsOutcomeCallable GetConnectorsCallable(const Model::GetConnectorsRequest& request) const;

        /**
         * The GetConnectors API returns a list of connectors that are registered with the
         * Server Migration Service.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectorsAsync(const Model::GetConnectorsRequest& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The GetReplicationJobs API will return all of your ReplicationJobs and their
         * details. This API returns a paginated list, that may be consecutively called
         * with nextToken to retrieve all ReplicationJobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationJobsOutcome GetReplicationJobs(const Model::GetReplicationJobsRequest& request) const;

        /**
         * The GetReplicationJobs API will return all of your ReplicationJobs and their
         * details. This API returns a paginated list, that may be consecutively called
         * with nextToken to retrieve all ReplicationJobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationJobsOutcomeCallable GetReplicationJobsCallable(const Model::GetReplicationJobsRequest& request) const;

        /**
         * The GetReplicationJobs API will return all of your ReplicationJobs and their
         * details. This API returns a paginated list, that may be consecutively called
         * with nextToken to retrieve all ReplicationJobs.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReplicationJobsAsync(const Model::GetReplicationJobsRequest& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The GetReplicationRuns API will return all ReplicationRuns for a given
         * ReplicationJob. This API returns a paginated list, that may be consecutively
         * called with nextToken to retrieve all ReplicationRuns for a
         * ReplicationJob.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationRunsOutcome GetReplicationRuns(const Model::GetReplicationRunsRequest& request) const;

        /**
         * The GetReplicationRuns API will return all ReplicationRuns for a given
         * ReplicationJob. This API returns a paginated list, that may be consecutively
         * called with nextToken to retrieve all ReplicationRuns for a
         * ReplicationJob.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationRunsOutcomeCallable GetReplicationRunsCallable(const Model::GetReplicationRunsRequest& request) const;

        /**
         * The GetReplicationRuns API will return all ReplicationRuns for a given
         * ReplicationJob. This API returns a paginated list, that may be consecutively
         * called with nextToken to retrieve all ReplicationRuns for a
         * ReplicationJob.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReplicationRunsAsync(const Model::GetReplicationRunsRequest& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The GetServers API returns a list of all servers in your server catalog. For
         * this call to succeed, you must previously have called
         * ImportServerCatalog.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         */
        virtual Model::GetServersOutcome GetServers(const Model::GetServersRequest& request) const;

        /**
         * The GetServers API returns a list of all servers in your server catalog. For
         * this call to succeed, you must previously have called
         * ImportServerCatalog.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServersOutcomeCallable GetServersCallable(const Model::GetServersRequest& request) const;

        /**
         * The GetServers API returns a list of all servers in your server catalog. For
         * this call to succeed, you must previously have called
         * ImportServerCatalog.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServersAsync(const Model::GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The ImportServerCatalog API is used to gather the complete list of on-premises
         * servers on your premises. This API call requires connectors to be installed and
         * monitoring all servers you would like imported. This API call returns
         * immediately, but may take some time to retrieve all of the servers.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportServerCatalogOutcome ImportServerCatalog(const Model::ImportServerCatalogRequest& request) const;

        /**
         * The ImportServerCatalog API is used to gather the complete list of on-premises
         * servers on your premises. This API call requires connectors to be installed and
         * monitoring all servers you would like imported. This API call returns
         * immediately, but may take some time to retrieve all of the servers.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportServerCatalog">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportServerCatalogOutcomeCallable ImportServerCatalogCallable(const Model::ImportServerCatalogRequest& request) const;

        /**
         * The ImportServerCatalog API is used to gather the complete list of on-premises
         * servers on your premises. This API call requires connectors to be installed and
         * monitoring all servers you would like imported. This API call returns
         * immediately, but may take some time to retrieve all of the servers.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportServerCatalog">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportServerCatalogAsync(const Model::ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The StartOnDemandReplicationRun API is used to start a ReplicationRun on demand
         * (in addition to those that are scheduled based on your frequency). This
         * ReplicationRun will start immediately. StartOnDemandReplicationRun is subject to
         * limits on how many on demand ReplicationRuns you may call per 24-hour
         * period.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandReplicationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandReplicationRunOutcome StartOnDemandReplicationRun(const Model::StartOnDemandReplicationRunRequest& request) const;

        /**
         * The StartOnDemandReplicationRun API is used to start a ReplicationRun on demand
         * (in addition to those that are scheduled based on your frequency). This
         * ReplicationRun will start immediately. StartOnDemandReplicationRun is subject to
         * limits on how many on demand ReplicationRuns you may call per 24-hour
         * period.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandReplicationRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOnDemandReplicationRunOutcomeCallable StartOnDemandReplicationRunCallable(const Model::StartOnDemandReplicationRunRequest& request) const;

        /**
         * The StartOnDemandReplicationRun API is used to start a ReplicationRun on demand
         * (in addition to those that are scheduled based on your frequency). This
         * ReplicationRun will start immediately. StartOnDemandReplicationRun is subject to
         * limits on how many on demand ReplicationRuns you may call per 24-hour
         * period.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandReplicationRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOnDemandReplicationRunAsync(const Model::StartOnDemandReplicationRunRequest& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * The UpdateReplicationJob API is used to change the settings of your existing
         * ReplicationJob created using CreateReplicationJob. Calling this API will affect
         * the next scheduled ReplicationRun.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationJobOutcome UpdateReplicationJob(const Model::UpdateReplicationJobRequest& request) const;

        /**
         * The UpdateReplicationJob API is used to change the settings of your existing
         * ReplicationJob created using CreateReplicationJob. Calling this API will affect
         * the next scheduled ReplicationRun.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationJobOutcomeCallable UpdateReplicationJobCallable(const Model::UpdateReplicationJobRequest& request) const;

        /**
         * The UpdateReplicationJob API is used to change the settings of your existing
         * ReplicationJob created using CreateReplicationJob. Calling this API will affect
         * the next scheduled ReplicationRun.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReplicationJobAsync(const Model::UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateReplicationJobAsyncHelper(const Model::CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReplicationJobAsyncHelper(const Model::DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServerCatalogAsyncHelper(const Model::DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateConnectorAsyncHelper(const Model::DisassociateConnectorRequest& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectorsAsyncHelper(const Model::GetConnectorsRequest& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReplicationJobsAsyncHelper(const Model::GetReplicationJobsRequest& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReplicationRunsAsyncHelper(const Model::GetReplicationRunsRequest& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServersAsyncHelper(const Model::GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportServerCatalogAsyncHelper(const Model::ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartOnDemandReplicationRunAsyncHelper(const Model::StartOnDemandReplicationRunRequest& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReplicationJobAsyncHelper(const Model::UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SMS
} // namespace Aws

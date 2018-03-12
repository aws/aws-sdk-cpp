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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/discovery/model/AssociateConfigurationItemsToApplicationResult.h>
#include <aws/discovery/model/CreateApplicationResult.h>
#include <aws/discovery/model/CreateTagsResult.h>
#include <aws/discovery/model/DeleteApplicationsResult.h>
#include <aws/discovery/model/DeleteTagsResult.h>
#include <aws/discovery/model/DescribeAgentsResult.h>
#include <aws/discovery/model/DescribeConfigurationsResult.h>
#include <aws/discovery/model/DescribeExportTasksResult.h>
#include <aws/discovery/model/DescribeTagsResult.h>
#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationResult.h>
#include <aws/discovery/model/GetDiscoverySummaryResult.h>
#include <aws/discovery/model/ListConfigurationsResult.h>
#include <aws/discovery/model/ListServerNeighborsResult.h>
#include <aws/discovery/model/StartDataCollectionByAgentIdsResult.h>
#include <aws/discovery/model/StartExportTaskResult.h>
#include <aws/discovery/model/StopDataCollectionByAgentIdsResult.h>
#include <aws/discovery/model/UpdateApplicationResult.h>
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

namespace ApplicationDiscoveryService
{

namespace Model
{
        class AssociateConfigurationItemsToApplicationRequest;
        class CreateApplicationRequest;
        class CreateTagsRequest;
        class DeleteApplicationsRequest;
        class DeleteTagsRequest;
        class DescribeAgentsRequest;
        class DescribeConfigurationsRequest;
        class DescribeExportTasksRequest;
        class DescribeTagsRequest;
        class DisassociateConfigurationItemsFromApplicationRequest;
        class GetDiscoverySummaryRequest;
        class ListConfigurationsRequest;
        class ListServerNeighborsRequest;
        class StartDataCollectionByAgentIdsRequest;
        class StartExportTaskRequest;
        class StopDataCollectionByAgentIdsRequest;
        class UpdateApplicationRequest;

        typedef Aws::Utils::Outcome<AssociateConfigurationItemsToApplicationResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> AssociateConfigurationItemsToApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateTagsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> DeleteApplicationsOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeAgentsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> DescribeAgentsOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> DescribeConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribeExportTasksResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> DescribeExportTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DisassociateConfigurationItemsFromApplicationResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> DisassociateConfigurationItemsFromApplicationOutcome;
        typedef Aws::Utils::Outcome<GetDiscoverySummaryResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> GetDiscoverySummaryOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> ListConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListServerNeighborsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> ListServerNeighborsOutcome;
        typedef Aws::Utils::Outcome<StartDataCollectionByAgentIdsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> StartDataCollectionByAgentIdsOutcome;
        typedef Aws::Utils::Outcome<StartExportTaskResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> StartExportTaskOutcome;
        typedef Aws::Utils::Outcome<StopDataCollectionByAgentIdsResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> StopDataCollectionByAgentIdsOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, Aws::Client::AWSError<ApplicationDiscoveryServiceErrors>> UpdateApplicationOutcome;

        typedef std::future<AssociateConfigurationItemsToApplicationOutcome> AssociateConfigurationItemsToApplicationOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<DeleteApplicationsOutcome> DeleteApplicationsOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeAgentsOutcome> DescribeAgentsOutcomeCallable;
        typedef std::future<DescribeConfigurationsOutcome> DescribeConfigurationsOutcomeCallable;
        typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DisassociateConfigurationItemsFromApplicationOutcome> DisassociateConfigurationItemsFromApplicationOutcomeCallable;
        typedef std::future<GetDiscoverySummaryOutcome> GetDiscoverySummaryOutcomeCallable;
        typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
        typedef std::future<ListServerNeighborsOutcome> ListServerNeighborsOutcomeCallable;
        typedef std::future<StartDataCollectionByAgentIdsOutcome> StartDataCollectionByAgentIdsOutcomeCallable;
        typedef std::future<StartExportTaskOutcome> StartExportTaskOutcomeCallable;
        typedef std::future<StopDataCollectionByAgentIdsOutcome> StopDataCollectionByAgentIdsOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
} // namespace Model

  class ApplicationDiscoveryServiceClient;

    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::AssociateConfigurationItemsToApplicationRequest&, const Model::AssociateConfigurationItemsToApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConfigurationItemsToApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DeleteApplicationsRequest&, const Model::DeleteApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeAgentsRequest&, const Model::DescribeAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeConfigurationsRequest&, const Model::DescribeConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DisassociateConfigurationItemsFromApplicationRequest&, const Model::DisassociateConfigurationItemsFromApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConfigurationItemsFromApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::GetDiscoverySummaryRequest&, const Model::GetDiscoverySummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiscoverySummaryResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::ListServerNeighborsRequest&, const Model::ListServerNeighborsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServerNeighborsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartDataCollectionByAgentIdsRequest&, const Model::StartDataCollectionByAgentIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataCollectionByAgentIdsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartExportTaskRequest&, const Model::StartExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExportTaskResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StopDataCollectionByAgentIdsRequest&, const Model::StopDataCollectionByAgentIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDataCollectionByAgentIdsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;

  /**
   * <fullname>AWS Application Discovery Service</fullname> <p>AWS Application
   * Discovery Service helps you plan application migration projects by automatically
   * identifying servers, virtual machines (VMs), software, and software dependencies
   * running in your on-premises data centers. Application Discovery Service also
   * collects application performance data, which can help you assess the outcome of
   * your migration. The data collected by Application Discovery Service is securely
   * retained in an AWS-hosted and managed database in the cloud. You can export the
   * data as a CSV or XML file into your preferred visualization tool or
   * cloud-migration solution to plan your migration. For more information, see <a
   * href="http://aws.amazon.com/application-discovery/faqs/">AWS Application
   * Discovery Service FAQ</a>.</p> <p>Application Discovery Service offers two modes
   * of operation:</p> <ul> <li> <p> <b>Agentless discovery</b> mode is recommended
   * for environments that use VMware vCenter Server. This mode doesn't require you
   * to install an agent on each host. Agentless discovery gathers server information
   * regardless of the operating systems, which minimizes the time required for
   * initial on-premises infrastructure assessment. Agentless discovery doesn't
   * collect information about software and software dependencies. It also doesn't
   * work in non-VMware environments. </p> </li> <li> <p> <b>Agent-based
   * discovery</b> mode collects a richer set of data than agentless discovery by
   * using the AWS Application Discovery Agent, which you install on one or more
   * hosts in your data center. The agent captures infrastructure and application
   * information, including an inventory of installed software applications, system
   * and process performance, resource utilization, and network dependencies between
   * workloads. The information collected by agents is secured at rest and in transit
   * to the Application Discovery Service database in the cloud. </p> </li> </ul>
   * <p>We recommend that you use agent-based discovery for non-VMware environments
   * and to collect information about software and software dependencies. You can
   * also run agent-based and agentless discovery simultaneously. Use agentless
   * discovery to quickly complete the initial infrastructure assessment and then
   * install agents on select hosts.</p> <p>Application Discovery Service integrates
   * with application discovery solutions from AWS Partner Network (APN) partners.
   * Third-party application discovery tools can query Application Discovery Service
   * and write to the Application Discovery Service database using a public API. You
   * can then import the data into either a visualization tool or cloud-migration
   * solution.</p> <important> <p>Application Discovery Service doesn't gather
   * sensitive information. All data is handled according to the <a
   * href="http://aws.amazon.com/privacy/">AWS Privacy Policy</a>. You can operate
   * Application Discovery Service offline to inspect collected data before it is
   * shared with the service.</p> </important> <p>Your AWS account must be granted
   * access to Application Discovery Service, a process called <i>whitelisting</i>.
   * This is true for AWS partners and customers alike. To request access, <a
   * href="http://aws.amazon.com/application-discovery/">sign up for Application
   * Discovery Service</a>. </p> <p>This API reference provides descriptions, syntax,
   * and usage examples for each of the actions and data types for Application
   * Discovery Service. The topic for each action shows the API request parameters
   * and the response. Alternatively, you can use one of the AWS SDKs to access an
   * API that is tailored to the programming language or platform that you're using.
   * For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
   * SDKs</a>.</p> <p>This guide is intended for use with the <a
   * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">
   * <i>AWS Application Discovery Service User Guide</i> </a>.</p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API ApplicationDiscoveryServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationDiscoveryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationDiscoveryServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationDiscoveryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ApplicationDiscoveryServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "discovery"; }


        /**
         * <p>Associates one or more configuration items with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AssociateConfigurationItemsToApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConfigurationItemsToApplicationOutcome AssociateConfigurationItemsToApplication(const Model::AssociateConfigurationItemsToApplicationRequest& request) const;

        /**
         * <p>Associates one or more configuration items with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AssociateConfigurationItemsToApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateConfigurationItemsToApplicationOutcomeCallable AssociateConfigurationItemsToApplicationCallable(const Model::AssociateConfigurationItemsToApplicationRequest& request) const;

        /**
         * <p>Associates one or more configuration items with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AssociateConfigurationItemsToApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateConfigurationItemsToApplicationAsync(const Model::AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application with the given name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application with the given name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application with the given name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more tags for configuration items. Tags are metadata that help
         * you categorize IT assets. This API accepts a list of multiple configuration
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates one or more tags for configuration items. Tags are metadata that help
         * you categorize IT assets. This API accepts a list of multiple configuration
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates one or more tags for configuration items. Tags are metadata that help
         * you categorize IT assets. This API accepts a list of multiple configuration
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a list of applications and their associations with configuration
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeleteApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationsOutcome DeleteApplications(const Model::DeleteApplicationsRequest& request) const;

        /**
         * <p>Deletes a list of applications and their associations with configuration
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeleteApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationsOutcomeCallable DeleteApplicationsCallable(const Model::DeleteApplicationsRequest& request) const;

        /**
         * <p>Deletes a list of applications and their associations with configuration
         * items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeleteApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationsAsync(const Model::DeleteApplicationsRequest& request, const DeleteApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the association between configuration items and one or more tags.
         * This API accepts a list of multiple configuration items.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the association between configuration items and one or more tags.
         * This API accepts a list of multiple configuration items.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the association between configuration items and one or more tags.
         * This API accepts a list of multiple configuration items.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
         * with your user account if you did not specify an ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentsOutcome DescribeAgents(const Model::DescribeAgentsRequest& request) const;

        /**
         * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
         * with your user account if you did not specify an ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeAgents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentsOutcomeCallable DescribeAgentsCallable(const Model::DescribeAgentsRequest& request) const;

        /**
         * <p>Lists agents or the Connector by ID or lists all agents/Connectors associated
         * with your user account if you did not specify an ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeAgents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgentsAsync(const Model::DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves attributes for a list of configuration item IDs. All of the
         * supplied IDs must be for the same asset type (server, application, process, or
         * connection). Output fields are specific to the asset type selected. For example,
         * the output for a <i>server</i> configuration item includes a list of attributes
         * about the server, such as host name, operating system, and number of network
         * cards.</p> <p>For a complete list of outputs for each asset type, see <a
         * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#DescribeConfigurations">Using
         * the DescribeConfigurations Action</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationsOutcome DescribeConfigurations(const Model::DescribeConfigurationsRequest& request) const;

        /**
         * <p>Retrieves attributes for a list of configuration item IDs. All of the
         * supplied IDs must be for the same asset type (server, application, process, or
         * connection). Output fields are specific to the asset type selected. For example,
         * the output for a <i>server</i> configuration item includes a list of attributes
         * about the server, such as host name, operating system, and number of network
         * cards.</p> <p>For a complete list of outputs for each asset type, see <a
         * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#DescribeConfigurations">Using
         * the DescribeConfigurations Action</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationsOutcomeCallable DescribeConfigurationsCallable(const Model::DescribeConfigurationsRequest& request) const;

        /**
         * <p>Retrieves attributes for a list of configuration item IDs. All of the
         * supplied IDs must be for the same asset type (server, application, process, or
         * connection). Output fields are specific to the asset type selected. For example,
         * the output for a <i>server</i> configuration item includes a list of attributes
         * about the server, such as host name, operating system, and number of network
         * cards.</p> <p>For a complete list of outputs for each asset type, see <a
         * href="http://docs.aws.amazon.com/application-discovery/latest/APIReference/discovery-api-queries.html#DescribeConfigurations">Using
         * the DescribeConfigurations Action</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationsAsync(const Model::DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve status of one or more export tasks. You can retrieve the status of
         * up to 100 export tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Retrieve status of one or more export tasks. You can retrieve the status of
         * up to 100 export tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const Model::DescribeExportTasksRequest& request) const;

        /**
         * <p>Retrieve status of one or more export tasks. You can retrieve the status of
         * up to 100 export tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeExportTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportTasksAsync(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of configuration items that are tagged with a specific tag.
         * Or retrieves a list of all tags assigned to a specific configuration
         * item.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Retrieves a list of configuration items that are tagged with a specific tag.
         * Or retrieves a list of all tags assigned to a specific configuration
         * item.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Retrieves a list of configuration items that are tagged with a specific tag.
         * Or retrieves a list of all tags assigned to a specific configuration
         * item.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates one or more configuration items from an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DisassociateConfigurationItemsFromApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConfigurationItemsFromApplicationOutcome DisassociateConfigurationItemsFromApplication(const Model::DisassociateConfigurationItemsFromApplicationRequest& request) const;

        /**
         * <p>Disassociates one or more configuration items from an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DisassociateConfigurationItemsFromApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConfigurationItemsFromApplicationOutcomeCallable DisassociateConfigurationItemsFromApplicationCallable(const Model::DisassociateConfigurationItemsFromApplicationRequest& request) const;

        /**
         * <p>Disassociates one or more configuration items from an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DisassociateConfigurationItemsFromApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConfigurationItemsFromApplicationAsync(const Model::DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a short summary of discovered assets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/GetDiscoverySummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoverySummaryOutcome GetDiscoverySummary(const Model::GetDiscoverySummaryRequest& request) const;

        /**
         * <p>Retrieves a short summary of discovered assets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/GetDiscoverySummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiscoverySummaryOutcomeCallable GetDiscoverySummaryCallable(const Model::GetDiscoverySummaryRequest& request) const;

        /**
         * <p>Retrieves a short summary of discovered assets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/GetDiscoverySummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiscoverySummaryAsync(const Model::GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of configuration items according to criteria that you
         * specify in a filter. The filter criteria identifies the relationship
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;

        /**
         * <p>Retrieves a list of configuration items according to criteria that you
         * specify in a filter. The filter criteria identifies the relationship
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const Model::ListConfigurationsRequest& request) const;

        /**
         * <p>Retrieves a list of configuration items according to criteria that you
         * specify in a filter. The filter criteria identifies the relationship
         * requirements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationsAsync(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of servers that are one network hop away from a specified
         * server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListServerNeighbors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServerNeighborsOutcome ListServerNeighbors(const Model::ListServerNeighborsRequest& request) const;

        /**
         * <p>Retrieves a list of servers that are one network hop away from a specified
         * server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListServerNeighbors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServerNeighborsOutcomeCallable ListServerNeighborsCallable(const Model::ListServerNeighborsRequest& request) const;

        /**
         * <p>Retrieves a list of servers that are one network hop away from a specified
         * server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListServerNeighbors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServerNeighborsAsync(const Model::ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Instructs the specified agents or connectors to start collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataCollectionByAgentIdsOutcome StartDataCollectionByAgentIds(const Model::StartDataCollectionByAgentIdsRequest& request) const;

        /**
         * <p>Instructs the specified agents or connectors to start collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDataCollectionByAgentIdsOutcomeCallable StartDataCollectionByAgentIdsCallable(const Model::StartDataCollectionByAgentIdsRequest& request) const;

        /**
         * <p>Instructs the specified agents or connectors to start collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataCollectionByAgentIdsAsync(const Model::StartDataCollectionByAgentIdsRequest& request, const StartDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Begins the export of discovered data to an S3 bucket.</p> <p> If you specify
         * <code>agentIds</code> in a filter, the task exports up to 72 hours of detailed
         * data collected by the identified Application Discovery Agent, including network,
         * process, and performance details. A time range for exported agent data may be
         * set by using <code>startTime</code> and <code>endTime</code>. Export of detailed
         * agent data is limited to five concurrently running exports. </p> <p> If you do
         * not include an <code>agentIds</code> filter, summary data is exported that
         * includes both AWS Agentless Discovery Connector data and summary data from AWS
         * Discovery Agents. Export of summary data is limited to two exports per day.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExportTaskOutcome StartExportTask(const Model::StartExportTaskRequest& request) const;

        /**
         * <p> Begins the export of discovered data to an S3 bucket.</p> <p> If you specify
         * <code>agentIds</code> in a filter, the task exports up to 72 hours of detailed
         * data collected by the identified Application Discovery Agent, including network,
         * process, and performance details. A time range for exported agent data may be
         * set by using <code>startTime</code> and <code>endTime</code>. Export of detailed
         * agent data is limited to five concurrently running exports. </p> <p> If you do
         * not include an <code>agentIds</code> filter, summary data is exported that
         * includes both AWS Agentless Discovery Connector data and summary data from AWS
         * Discovery Agents. Export of summary data is limited to two exports per day.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartExportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExportTaskOutcomeCallable StartExportTaskCallable(const Model::StartExportTaskRequest& request) const;

        /**
         * <p> Begins the export of discovered data to an S3 bucket.</p> <p> If you specify
         * <code>agentIds</code> in a filter, the task exports up to 72 hours of detailed
         * data collected by the identified Application Discovery Agent, including network,
         * process, and performance details. A time range for exported agent data may be
         * set by using <code>startTime</code> and <code>endTime</code>. Export of detailed
         * agent data is limited to five concurrently running exports. </p> <p> If you do
         * not include an <code>agentIds</code> filter, summary data is exported that
         * includes both AWS Agentless Discovery Connector data and summary data from AWS
         * Discovery Agents. Export of summary data is limited to two exports per day.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartExportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExportTaskAsync(const Model::StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Instructs the specified agents or connectors to stop collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StopDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDataCollectionByAgentIdsOutcome StopDataCollectionByAgentIds(const Model::StopDataCollectionByAgentIdsRequest& request) const;

        /**
         * <p>Instructs the specified agents or connectors to stop collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StopDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDataCollectionByAgentIdsOutcomeCallable StopDataCollectionByAgentIdsCallable(const Model::StopDataCollectionByAgentIdsRequest& request) const;

        /**
         * <p>Instructs the specified agents or connectors to stop collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StopDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDataCollectionByAgentIdsAsync(const Model::StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates metadata about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates metadata about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AssociateConfigurationItemsToApplicationAsyncHelper(const Model::AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationsAsyncHelper(const Model::DeleteApplicationsRequest& request, const DeleteApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAgentsAsyncHelper(const Model::DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationsAsyncHelper(const Model::DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExportTasksAsyncHelper(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateConfigurationItemsFromApplicationAsyncHelper(const Model::DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiscoverySummaryAsyncHelper(const Model::GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationsAsyncHelper(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServerNeighborsAsyncHelper(const Model::ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDataCollectionByAgentIdsAsyncHelper(const Model::StartDataCollectionByAgentIdsRequest& request, const StartDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartExportTaskAsyncHelper(const Model::StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDataCollectionByAgentIdsAsyncHelper(const Model::StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationDiscoveryService
} // namespace Aws

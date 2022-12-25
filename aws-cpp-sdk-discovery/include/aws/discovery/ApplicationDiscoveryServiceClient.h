/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/discovery/ApplicationDiscoveryServiceServiceClientModel.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
  /**
   * <fullname>Amazon Web Services Application Discovery Service</fullname> <p>Amazon
   * Web Services Application Discovery Service helps you plan application migration
   * projects. It automatically identifies servers, virtual machines (VMs), and
   * network dependencies in your on-premises data centers. For more information, see
   * the <a href="http://aws.amazon.com/application-discovery/faqs/">Amazon Web
   * Services Application Discovery Service FAQ</a>. Application Discovery Service
   * offers three ways of performing discovery and collecting data about your
   * on-premises servers:</p> <ul> <li> <p> <b>Agentless discovery</b> is recommended
   * for environments that use VMware vCenter Server. This mode doesn't require you
   * to install an agent on each host. It does not work in non-VMware
   * environments.</p> <ul> <li> <p>Agentless discovery gathers server information
   * regardless of the operating systems, which minimizes the time required for
   * initial on-premises infrastructure assessment.</p> </li> <li> <p>Agentless
   * discovery doesn't collect information about network dependencies, only
   * agent-based discovery collects that information.</p> </li> </ul> </li> </ul>
   * <ul> <li> <p> <b>Agent-based discovery</b> collects a richer set of data than
   * agentless discovery by using the Amazon Web Services Application Discovery
   * Agent, which you install on one or more hosts in your data center.</p> <ul> <li>
   * <p> The agent captures infrastructure and application information, including an
   * inventory of running processes, system performance information, resource
   * utilization, and network dependencies.</p> </li> <li> <p>The information
   * collected by agents is secured at rest and in transit to the Application
   * Discovery Service database in the cloud. </p> </li> </ul> </li> </ul> <ul> <li>
   * <p> <b>Amazon Web Services Partner Network (APN) solutions</b> integrate with
   * Application Discovery Service, enabling you to import details of your
   * on-premises environment directly into Migration Hub without using the discovery
   * connector or discovery agent.</p> <ul> <li> <p>Third-party application discovery
   * tools can query Amazon Web Services Application Discovery Service, and they can
   * write to the Application Discovery Service database using the public API.</p>
   * </li> <li> <p>In this way, you can import data into Migration Hub and view it,
   * so that you can associate applications with servers and track migrations.</p>
   * </li> </ul> </li> </ul> <p> <b>Recommendations</b> </p> <p>We recommend that you
   * use agent-based discovery for non-VMware environments, and whenever you want to
   * collect information about network dependencies. You can run agent-based and
   * agentless discovery simultaneously. Use agentless discovery to complete the
   * initial infrastructure assessment quickly, and then install agents on select
   * hosts to collect additional information.</p> <p> <b>Working With This Guide</b>
   * </p> <p>This API reference provides descriptions, syntax, and usage examples for
   * each of the actions and data types for Application Discovery Service. The topic
   * for each action shows the API request parameters and the response.
   * Alternatively, you can use one of the Amazon Web Services SDKs to access an API
   * that is tailored to the programming language or platform that you're using. For
   * more information, see <a href="http://aws.amazon.com/tools/#SDKs">Amazon Web
   * Services SDKs</a>.</p>  <ul> <li> <p>Remember that you must set your
   * Migration Hub home region before you call any of these APIs.</p> </li> <li>
   * <p>You must make API calls for write actions (create, notify, associate,
   * disassociate, import, or put) while in your home region, or a
   * <code>HomeRegionNotSetException</code> error is returned.</p> </li> <li> <p>API
   * calls for read actions (list, describe, stop, and delete) are permitted outside
   * of your home region.</p> </li> <li> <p>Although it is unlikely, the Migration
   * Hub home region could change. If you call APIs outside the home region, an
   * <code>InvalidInputException</code> is returned.</p> </li> <li> <p>You must call
   * <code>GetHomeRegion</code> to obtain the latest Migration Hub home region.</p>
   * </li> </ul>  <p>This guide is intended for use with the <a
   * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">Amazon
   * Web Services Application Discovery Service User Guide</a>.</p> 
   * <p>All data is handled according to the <a
   * href="http://aws.amazon.com/privacy/">Amazon Web Services Privacy Policy</a>.
   * You can operate Application Discovery Service offline to inspect collected data
   * before it is shared with the service.</p> 
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API ApplicationDiscoveryServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ApplicationDiscoveryServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationDiscoveryServiceClient(const Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration& clientConfiguration = Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration(),
                                          std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationDiscoveryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                          std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG),
                                          const Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration& clientConfiguration = Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationDiscoveryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                          std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationDiscoveryServiceEndpointProvider>(ALLOCATION_TAG),
                                          const Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration& clientConfiguration = Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationDiscoveryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationDiscoveryServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationDiscoveryServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApplicationDiscoveryServiceClient();

        /**
         * <p>Associates one or more configuration items with an application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/AssociateConfigurationItemsToApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateConfigurationItemsToApplicationOutcome AssociateConfigurationItemsToApplication(const Model::AssociateConfigurationItemsToApplicationRequest& request) const;

        /**
         * A Callable wrapper for AssociateConfigurationItemsToApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateConfigurationItemsToApplicationOutcomeCallable AssociateConfigurationItemsToApplicationCallable(const Model::AssociateConfigurationItemsToApplicationRequest& request) const;

        /**
         * An Async wrapper for AssociateConfigurationItemsToApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateConfigurationItemsToApplicationAsync(const Model::AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes one or more import tasks, each identified by their import ID. Each
         * import task has a number of records that can identify servers or applications.
         * </p> <p>Amazon Web Services Application Discovery Service has built-in matching
         * logic that will identify when discovered servers match existing entries that
         * you've previously discovered, the information for the already-existing
         * discovered server is updated. When you delete an import task that contains
         * records that were used to match, the information in those matched records that
         * comes from the deleted records will also be deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/BatchDeleteImportData">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteImportDataOutcome BatchDeleteImportData(const Model::BatchDeleteImportDataRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteImportData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteImportDataOutcomeCallable BatchDeleteImportDataCallable(const Model::BatchDeleteImportDataRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteImportData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteImportDataAsync(const Model::BatchDeleteImportDataRequest& request, const BatchDeleteImportDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an application with the given name and description.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more tags for configuration items. Tags are metadata that help
         * you categorize IT assets. This API accepts a list of multiple configuration
         * items.</p>  <p>Do not store sensitive information (like personal
         * data) in tags.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * An Async wrapper for CreateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationsOutcomeCallable DeleteApplicationsCallable(const Model::DeleteApplicationsRequest& request) const;

        /**
         * An Async wrapper for DeleteApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists agents or connectors as specified by ID or other filters. All
         * agents/connectors associated with your user account can be listed if you call
         * <code>DescribeAgents</code> as is without passing any parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentsOutcome DescribeAgents(const Model::DescribeAgentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentsOutcomeCallable DescribeAgentsCallable(const Model::DescribeAgentsRequest& request) const;

        /**
         * An Async wrapper for DescribeAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgentsAsync(const Model::DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves attributes for a list of configuration item IDs.</p>  <p>All
         * of the supplied IDs must be for the same asset type from one of the
         * following:</p> <ul> <li> <p>server</p> </li> <li> <p>application</p> </li> <li>
         * <p>process</p> </li> <li> <p>connection</p> </li> </ul> <p>Output fields are
         * specific to the asset type specified. For example, the output for a
         * <i>server</i> configuration item includes a list of attributes about the server,
         * such as host name, operating system, number of network cards, etc.</p> <p>For a
         * complete list of outputs for each asset type, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-api-queries.html#DescribeConfigurations">Using
         * the DescribeConfigurations Action</a> in the <i>Amazon Web Services Application
         * Discovery Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationsOutcome DescribeConfigurations(const Model::DescribeConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationsOutcomeCallable DescribeConfigurationsCallable(const Model::DescribeConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DescribeConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationsAsync(const Model::DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists exports as specified by ID. All continuous exports associated with your
         * user account can be listed if you call <code>DescribeContinuousExports</code> as
         * is without passing any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeContinuousExports">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContinuousExportsOutcome DescribeContinuousExports(const Model::DescribeContinuousExportsRequest& request) const;

        /**
         * A Callable wrapper for DescribeContinuousExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContinuousExportsOutcomeCallable DescribeContinuousExportsCallable(const Model::DescribeContinuousExportsRequest& request) const;

        /**
         * An Async wrapper for DescribeContinuousExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContinuousExportsAsync(const Model::DescribeContinuousExportsRequest& request, const DescribeContinuousExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve status of one or more export tasks. You can retrieve the status of
         * up to 100 export tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeExportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const Model::DescribeExportTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeExportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportTasksAsync(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of import tasks for your account, including status
         * information, times, IDs, the Amazon S3 Object URL for the import file, and
         * more.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeImportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportTasksOutcome DescribeImportTasks(const Model::DescribeImportTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeImportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImportTasksOutcomeCallable DescribeImportTasksCallable(const Model::DescribeImportTasksRequest& request) const;

        /**
         * An Async wrapper for DescribeImportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImportTasksAsync(const Model::DescribeImportTasksRequest& request, const DescribeImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of configuration items that have tags as specified by the
         * key-value pairs, name and value, passed to the optional parameter
         * <code>filters</code>.</p> <p>There are three valid tag filter names:</p> <ul>
         * <li> <p>tagKey</p> </li> <li> <p>tagValue</p> </li> <li> <p>configurationId</p>
         * </li> </ul> <p>Also, all configuration items associated with your user account
         * that have tags can be listed if you call <code>DescribeTags</code> as is without
         * passing any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * An Async wrapper for DescribeTags that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DisassociateConfigurationItemsFromApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConfigurationItemsFromApplicationOutcomeCallable DisassociateConfigurationItemsFromApplicationCallable(const Model::DisassociateConfigurationItemsFromApplicationRequest& request) const;

        /**
         * An Async wrapper for DisassociateConfigurationItemsFromApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConfigurationItemsFromApplicationAsync(const Model::DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a short summary of discovered assets.</p> <p>This API operation
         * takes no request parameters and is called as is at the command prompt as shown
         * in the example.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/GetDiscoverySummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoverySummaryOutcome GetDiscoverySummary(const Model::GetDiscoverySummaryRequest& request) const;

        /**
         * A Callable wrapper for GetDiscoverySummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiscoverySummaryOutcomeCallable GetDiscoverySummaryCallable(const Model::GetDiscoverySummaryRequest& request) const;

        /**
         * An Async wrapper for GetDiscoverySummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiscoverySummaryAsync(const Model::GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of configuration items as specified by the value passed to
         * the required parameter <code>configurationType</code>. Optional filtering may be
         * applied to refine search results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const Model::ListConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListServerNeighbors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServerNeighborsOutcomeCallable ListServerNeighborsCallable(const Model::ListServerNeighborsRequest& request) const;

        /**
         * An Async wrapper for ListServerNeighbors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServerNeighborsAsync(const Model::ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Start the continuous flow of agent's discovered data into Amazon
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartContinuousExport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContinuousExportOutcome StartContinuousExport(const Model::StartContinuousExportRequest& request) const;

        /**
         * A Callable wrapper for StartContinuousExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartContinuousExportOutcomeCallable StartContinuousExportCallable(const Model::StartContinuousExportRequest& request) const;

        /**
         * An Async wrapper for StartContinuousExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartContinuousExportAsync(const Model::StartContinuousExportRequest& request, const StartContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Instructs the specified agents or connectors to start collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataCollectionByAgentIdsOutcome StartDataCollectionByAgentIds(const Model::StartDataCollectionByAgentIdsRequest& request) const;

        /**
         * A Callable wrapper for StartDataCollectionByAgentIds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDataCollectionByAgentIdsOutcomeCallable StartDataCollectionByAgentIdsCallable(const Model::StartDataCollectionByAgentIdsRequest& request) const;

        /**
         * An Async wrapper for StartDataCollectionByAgentIds that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * includes both Amazon Web Services Agentless Discovery Connector data and summary
         * data from Amazon Web Services Discovery Agents. Export of summary data is
         * limited to two exports per day. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExportTaskOutcome StartExportTask(const Model::StartExportTaskRequest& request) const;

        /**
         * A Callable wrapper for StartExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartExportTaskOutcomeCallable StartExportTaskCallable(const Model::StartExportTaskRequest& request) const;

        /**
         * An Async wrapper for StartExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExportTaskAsync(const Model::StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an import task, which allows you to import details of your on-premises
         * environment directly into Amazon Web Services Migration Hub without having to
         * use the Application Discovery Service (ADS) tools such as the Discovery
         * Connector or Discovery Agent. This gives you the option to perform migration
         * assessment and planning directly from your imported data, including the ability
         * to group your devices as applications and track their migration status.</p>
         * <p>To start an import request, do this:</p> <ol> <li> <p>Download the specially
         * formatted comma separated value (CSV) import template, which you can find here:
         * <a
         * href="https://s3.us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv">https://s3.us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv</a>.</p>
         * </li> <li> <p>Fill out the template with your server and application data.</p>
         * </li> <li> <p>Upload your import file to an Amazon S3 bucket, and make a note of
         * it's Object URL. Your import file must be in the CSV format.</p> </li> <li>
         * <p>Use the console or the <code>StartImportTask</code> command with the Amazon
         * Web Services CLI or one of the Amazon Web Services SDKs to import the records
         * from your file.</p> </li> </ol> <p>For more information, including step-by-step
         * procedures, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-import.html">Migration
         * Hub Import</a> in the <i>Amazon Web Services Application Discovery Service User
         * Guide</i>.</p>  <p>There are limits to the number of import tasks you can
         * create (and delete) in an Amazon Web Services account. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/ads_service_limits.html">Amazon
         * Web Services Application Discovery Service Limits</a> in the <i>Amazon Web
         * Services Application Discovery Service User Guide</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportTaskOutcome StartImportTask(const Model::StartImportTaskRequest& request) const;

        /**
         * A Callable wrapper for StartImportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImportTaskOutcomeCallable StartImportTaskCallable(const Model::StartImportTaskRequest& request) const;

        /**
         * An Async wrapper for StartImportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImportTaskAsync(const Model::StartImportTaskRequest& request, const StartImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stop the continuous flow of agent's discovered data into Amazon
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StopContinuousExport">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContinuousExportOutcome StopContinuousExport(const Model::StopContinuousExportRequest& request) const;

        /**
         * A Callable wrapper for StopContinuousExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContinuousExportOutcomeCallable StopContinuousExportCallable(const Model::StopContinuousExportRequest& request) const;

        /**
         * An Async wrapper for StopContinuousExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopContinuousExportAsync(const Model::StopContinuousExportRequest& request, const StopContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Instructs the specified agents or connectors to stop collecting
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StopDataCollectionByAgentIds">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDataCollectionByAgentIdsOutcome StopDataCollectionByAgentIds(const Model::StopDataCollectionByAgentIdsRequest& request) const;

        /**
         * A Callable wrapper for StopDataCollectionByAgentIds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDataCollectionByAgentIdsOutcomeCallable StopDataCollectionByAgentIdsCallable(const Model::StopDataCollectionByAgentIdsRequest& request) const;

        /**
         * An Async wrapper for StopDataCollectionByAgentIds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDataCollectionByAgentIdsAsync(const Model::StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ApplicationDiscoveryServiceClient>;
      void init(const ApplicationDiscoveryServiceClientConfiguration& clientConfiguration);

      ApplicationDiscoveryServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApplicationDiscoveryServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApplicationDiscoveryService
} // namespace Aws

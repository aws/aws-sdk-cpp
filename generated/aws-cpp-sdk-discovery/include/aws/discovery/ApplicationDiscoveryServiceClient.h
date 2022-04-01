/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/discovery/model/BatchDeleteImportDataResult.h>
#include <aws/discovery/model/CreateApplicationResult.h>
#include <aws/discovery/model/CreateTagsResult.h>
#include <aws/discovery/model/DeleteApplicationsResult.h>
#include <aws/discovery/model/DeleteTagsResult.h>
#include <aws/discovery/model/DescribeAgentsResult.h>
#include <aws/discovery/model/DescribeConfigurationsResult.h>
#include <aws/discovery/model/DescribeContinuousExportsResult.h>
#include <aws/discovery/model/DescribeExportTasksResult.h>
#include <aws/discovery/model/DescribeImportTasksResult.h>
#include <aws/discovery/model/DescribeTagsResult.h>
#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationResult.h>
#include <aws/discovery/model/GetDiscoverySummaryResult.h>
#include <aws/discovery/model/ListConfigurationsResult.h>
#include <aws/discovery/model/ListServerNeighborsResult.h>
#include <aws/discovery/model/StartContinuousExportResult.h>
#include <aws/discovery/model/StartDataCollectionByAgentIdsResult.h>
#include <aws/discovery/model/StartExportTaskResult.h>
#include <aws/discovery/model/StartImportTaskResult.h>
#include <aws/discovery/model/StopContinuousExportResult.h>
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
        class BatchDeleteImportDataRequest;
        class CreateApplicationRequest;
        class CreateTagsRequest;
        class DeleteApplicationsRequest;
        class DeleteTagsRequest;
        class DescribeAgentsRequest;
        class DescribeConfigurationsRequest;
        class DescribeContinuousExportsRequest;
        class DescribeExportTasksRequest;
        class DescribeImportTasksRequest;
        class DescribeTagsRequest;
        class DisassociateConfigurationItemsFromApplicationRequest;
        class GetDiscoverySummaryRequest;
        class ListConfigurationsRequest;
        class ListServerNeighborsRequest;
        class StartContinuousExportRequest;
        class StartDataCollectionByAgentIdsRequest;
        class StartExportTaskRequest;
        class StartImportTaskRequest;
        class StopContinuousExportRequest;
        class StopDataCollectionByAgentIdsRequest;
        class UpdateApplicationRequest;

        typedef Aws::Utils::Outcome<AssociateConfigurationItemsToApplicationResult, ApplicationDiscoveryServiceError> AssociateConfigurationItemsToApplicationOutcome;
        typedef Aws::Utils::Outcome<BatchDeleteImportDataResult, ApplicationDiscoveryServiceError> BatchDeleteImportDataOutcome;
        typedef Aws::Utils::Outcome<CreateApplicationResult, ApplicationDiscoveryServiceError> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateTagsResult, ApplicationDiscoveryServiceError> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationsResult, ApplicationDiscoveryServiceError> DeleteApplicationsOutcome;
        typedef Aws::Utils::Outcome<DeleteTagsResult, ApplicationDiscoveryServiceError> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeAgentsResult, ApplicationDiscoveryServiceError> DescribeAgentsOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationsResult, ApplicationDiscoveryServiceError> DescribeConfigurationsOutcome;
        typedef Aws::Utils::Outcome<DescribeContinuousExportsResult, ApplicationDiscoveryServiceError> DescribeContinuousExportsOutcome;
        typedef Aws::Utils::Outcome<DescribeExportTasksResult, ApplicationDiscoveryServiceError> DescribeExportTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeImportTasksResult, ApplicationDiscoveryServiceError> DescribeImportTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, ApplicationDiscoveryServiceError> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<DisassociateConfigurationItemsFromApplicationResult, ApplicationDiscoveryServiceError> DisassociateConfigurationItemsFromApplicationOutcome;
        typedef Aws::Utils::Outcome<GetDiscoverySummaryResult, ApplicationDiscoveryServiceError> GetDiscoverySummaryOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationsResult, ApplicationDiscoveryServiceError> ListConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListServerNeighborsResult, ApplicationDiscoveryServiceError> ListServerNeighborsOutcome;
        typedef Aws::Utils::Outcome<StartContinuousExportResult, ApplicationDiscoveryServiceError> StartContinuousExportOutcome;
        typedef Aws::Utils::Outcome<StartDataCollectionByAgentIdsResult, ApplicationDiscoveryServiceError> StartDataCollectionByAgentIdsOutcome;
        typedef Aws::Utils::Outcome<StartExportTaskResult, ApplicationDiscoveryServiceError> StartExportTaskOutcome;
        typedef Aws::Utils::Outcome<StartImportTaskResult, ApplicationDiscoveryServiceError> StartImportTaskOutcome;
        typedef Aws::Utils::Outcome<StopContinuousExportResult, ApplicationDiscoveryServiceError> StopContinuousExportOutcome;
        typedef Aws::Utils::Outcome<StopDataCollectionByAgentIdsResult, ApplicationDiscoveryServiceError> StopDataCollectionByAgentIdsOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, ApplicationDiscoveryServiceError> UpdateApplicationOutcome;

        typedef std::future<AssociateConfigurationItemsToApplicationOutcome> AssociateConfigurationItemsToApplicationOutcomeCallable;
        typedef std::future<BatchDeleteImportDataOutcome> BatchDeleteImportDataOutcomeCallable;
        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<DeleteApplicationsOutcome> DeleteApplicationsOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeAgentsOutcome> DescribeAgentsOutcomeCallable;
        typedef std::future<DescribeConfigurationsOutcome> DescribeConfigurationsOutcomeCallable;
        typedef std::future<DescribeContinuousExportsOutcome> DescribeContinuousExportsOutcomeCallable;
        typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
        typedef std::future<DescribeImportTasksOutcome> DescribeImportTasksOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<DisassociateConfigurationItemsFromApplicationOutcome> DisassociateConfigurationItemsFromApplicationOutcomeCallable;
        typedef std::future<GetDiscoverySummaryOutcome> GetDiscoverySummaryOutcomeCallable;
        typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
        typedef std::future<ListServerNeighborsOutcome> ListServerNeighborsOutcomeCallable;
        typedef std::future<StartContinuousExportOutcome> StartContinuousExportOutcomeCallable;
        typedef std::future<StartDataCollectionByAgentIdsOutcome> StartDataCollectionByAgentIdsOutcomeCallable;
        typedef std::future<StartExportTaskOutcome> StartExportTaskOutcomeCallable;
        typedef std::future<StartImportTaskOutcome> StartImportTaskOutcomeCallable;
        typedef std::future<StopContinuousExportOutcome> StopContinuousExportOutcomeCallable;
        typedef std::future<StopDataCollectionByAgentIdsOutcome> StopDataCollectionByAgentIdsOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
} // namespace Model

  class ApplicationDiscoveryServiceClient;

    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::AssociateConfigurationItemsToApplicationRequest&, const Model::AssociateConfigurationItemsToApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConfigurationItemsToApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::BatchDeleteImportDataRequest&, const Model::BatchDeleteImportDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteImportDataResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DeleteApplicationsRequest&, const Model::DeleteApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeAgentsRequest&, const Model::DescribeAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeConfigurationsRequest&, const Model::DescribeConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeContinuousExportsRequest&, const Model::DescribeContinuousExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContinuousExportsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeImportTasksRequest&, const Model::DescribeImportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportTasksResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DisassociateConfigurationItemsFromApplicationRequest&, const Model::DisassociateConfigurationItemsFromApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConfigurationItemsFromApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::GetDiscoverySummaryRequest&, const Model::GetDiscoverySummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiscoverySummaryResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::ListServerNeighborsRequest&, const Model::ListServerNeighborsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServerNeighborsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartContinuousExportRequest&, const Model::StartContinuousExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContinuousExportResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartDataCollectionByAgentIdsRequest&, const Model::StartDataCollectionByAgentIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataCollectionByAgentIdsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartExportTaskRequest&, const Model::StartExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExportTaskResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartImportTaskRequest&, const Model::StartImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportTaskResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StopContinuousExportRequest&, const Model::StopContinuousExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContinuousExportResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StopDataCollectionByAgentIdsRequest&, const Model::StopDataCollectionByAgentIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDataCollectionByAgentIdsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;

  /**
   * <fullname>AWS Application Discovery Service</fullname> <p>AWS Application
   * Discovery Service helps you plan application migration projects. It
   * automatically identifies servers, virtual machines (VMs), and network
   * dependencies in your on-premises data centers. For more information, see the <a
   * href="http://aws.amazon.com/application-discovery/faqs/">AWS Application
   * Discovery Service FAQ</a>. Application Discovery Service offers three ways of
   * performing discovery and collecting data about your on-premises servers:</p>
   * <ul> <li> <p> <b>Agentless discovery</b> is recommended for environments that
   * use VMware vCenter Server. This mode doesn't require you to install an agent on
   * each host. It does not work in non-VMware environments.</p> <ul> <li>
   * <p>Agentless discovery gathers server information regardless of the operating
   * systems, which minimizes the time required for initial on-premises
   * infrastructure assessment.</p> </li> <li> <p>Agentless discovery doesn't collect
   * information about network dependencies, only agent-based discovery collects that
   * information.</p> </li> </ul> </li> </ul> <ul> <li> <p> <b>Agent-based
   * discovery</b> collects a richer set of data than agentless discovery by using
   * the AWS Application Discovery Agent, which you install on one or more hosts in
   * your data center.</p> <ul> <li> <p> The agent captures infrastructure and
   * application information, including an inventory of running processes, system
   * performance information, resource utilization, and network dependencies.</p>
   * </li> <li> <p>The information collected by agents is secured at rest and in
   * transit to the Application Discovery Service database in the cloud. </p> </li>
   * </ul> </li> </ul> <ul> <li> <p> <b>AWS Partner Network (APN) solutions</b>
   * integrate with Application Discovery Service, enabling you to import details of
   * your on-premises environment directly into Migration Hub without using the
   * discovery connector or discovery agent.</p> <ul> <li> <p>Third-party application
   * discovery tools can query AWS Application Discovery Service, and they can write
   * to the Application Discovery Service database using the public API.</p> </li>
   * <li> <p>In this way, you can import data into Migration Hub and view it, so that
   * you can associate applications with servers and track migrations.</p> </li>
   * </ul> </li> </ul> <p> <b>Recommendations</b> </p> <p>We recommend that you use
   * agent-based discovery for non-VMware environments, and whenever you want to
   * collect information about network dependencies. You can run agent-based and
   * agentless discovery simultaneously. Use agentless discovery to complete the
   * initial infrastructure assessment quickly, and then install agents on select
   * hosts to collect additional information.</p> <p> <b>Working With This Guide</b>
   * </p> <p>This API reference provides descriptions, syntax, and usage examples for
   * each of the actions and data types for Application Discovery Service. The topic
   * for each action shows the API request parameters and the response.
   * Alternatively, you can use one of the AWS SDKs to access an API that is tailored
   * to the programming language or platform that you're using. For more information,
   * see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.</p>  <ul>
   * <li> <p>Remember that you must set your Migration Hub home region before you
   * call any of these APIs.</p> </li> <li> <p>You must make API calls for write
   * actions (create, notify, associate, disassociate, import, or put) while in your
   * home region, or a <code>HomeRegionNotSetException</code> error is returned.</p>
   * </li> <li> <p>API calls for read actions (list, describe, stop, and delete) are
   * permitted outside of your home region.</p> </li> <li> <p>Although it is
   * unlikely, the Migration Hub home region could change. If you call APIs outside
   * the home region, an <code>InvalidInputException</code> is returned.</p> </li>
   * <li> <p>You must call <code>GetHomeRegion</code> to obtain the latest Migration
   * Hub home region.</p> </li> </ul>  <p>This guide is intended for use with
   * the <a
   * href="http://docs.aws.amazon.com/application-discovery/latest/userguide/">AWS
   * Application Discovery Service User Guide</a>.</p>  <p>All data is
   * handled according to the <a href="http://aws.amazon.com/privacy/">AWS Privacy
   * Policy</a>. You can operate Application Discovery Service offline to inspect
   * collected data before it is shared with the service.</p> 
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
         * <p>Deletes one or more import tasks, each identified by their import ID. Each
         * import task has a number of records that can identify servers or applications.
         * </p> <p>AWS Application Discovery Service has built-in matching logic that will
         * identify when discovered servers match existing entries that you've previously
         * discovered, the information for the already-existing discovered server is
         * updated. When you delete an import task that contains records that were used to
         * match, the information in those matched records that comes from the deleted
         * records will also be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/BatchDeleteImportData">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteImportDataOutcome BatchDeleteImportData(const Model::BatchDeleteImportDataRequest& request) const;

        /**
         * <p>Deletes one or more import tasks, each identified by their import ID. Each
         * import task has a number of records that can identify servers or applications.
         * </p> <p>AWS Application Discovery Service has built-in matching logic that will
         * identify when discovered servers match existing entries that you've previously
         * discovered, the information for the already-existing discovered server is
         * updated. When you delete an import task that contains records that were used to
         * match, the information in those matched records that comes from the deleted
         * records will also be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/BatchDeleteImportData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteImportDataOutcomeCallable BatchDeleteImportDataCallable(const Model::BatchDeleteImportDataRequest& request) const;

        /**
         * <p>Deletes one or more import tasks, each identified by their import ID. Each
         * import task has a number of records that can identify servers or applications.
         * </p> <p>AWS Application Discovery Service has built-in matching logic that will
         * identify when discovered servers match existing entries that you've previously
         * discovered, the information for the already-existing discovered server is
         * updated. When you delete an import task that contains records that were used to
         * match, the information in those matched records that comes from the deleted
         * records will also be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/BatchDeleteImportData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists agents or connectors as specified by ID or other filters. All
         * agents/connectors associated with your user account can be listed if you call
         * <code>DescribeAgents</code> as is without passing any parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentsOutcome DescribeAgents(const Model::DescribeAgentsRequest& request) const;

        /**
         * <p>Lists agents or connectors as specified by ID or other filters. All
         * agents/connectors associated with your user account can be listed if you call
         * <code>DescribeAgents</code> as is without passing any parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeAgents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentsOutcomeCallable DescribeAgentsCallable(const Model::DescribeAgentsRequest& request) const;

        /**
         * <p>Lists agents or connectors as specified by ID or other filters. All
         * agents/connectors associated with your user account can be listed if you call
         * <code>DescribeAgents</code> as is without passing any parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeAgents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * the DescribeConfigurations Action</a> in the <i>AWS Application Discovery
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationsOutcome DescribeConfigurations(const Model::DescribeConfigurationsRequest& request) const;

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
         * the DescribeConfigurations Action</a> in the <i>AWS Application Discovery
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationsOutcomeCallable DescribeConfigurationsCallable(const Model::DescribeConfigurationsRequest& request) const;

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
         * the DescribeConfigurations Action</a> in the <i>AWS Application Discovery
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists exports as specified by ID. All continuous exports associated with your
         * user account can be listed if you call <code>DescribeContinuousExports</code> as
         * is without passing any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeContinuousExports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContinuousExportsOutcomeCallable DescribeContinuousExportsCallable(const Model::DescribeContinuousExportsRequest& request) const;

        /**
         * <p>Lists exports as specified by ID. All continuous exports associated with your
         * user account can be listed if you call <code>DescribeContinuousExports</code> as
         * is without passing any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeContinuousExports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns an array of import tasks for your account, including status
         * information, times, IDs, the Amazon S3 Object URL for the import file, and
         * more.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeImportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportTasksOutcome DescribeImportTasks(const Model::DescribeImportTasksRequest& request) const;

        /**
         * <p>Returns an array of import tasks for your account, including status
         * information, times, IDs, the Amazon S3 Object URL for the import file, and
         * more.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeImportTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImportTasksOutcomeCallable DescribeImportTasksCallable(const Model::DescribeImportTasksRequest& request) const;

        /**
         * <p>Returns an array of import tasks for your account, including status
         * information, times, IDs, the Amazon S3 Object URL for the import file, and
         * more.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeImportTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a list of configuration items that have tags as specified by the
         * key-value pairs, name and value, passed to the optional parameter
         * <code>filters</code>.</p> <p>There are three valid tag filter names:</p> <ul>
         * <li> <p>tagKey</p> </li> <li> <p>tagValue</p> </li> <li> <p>configurationId</p>
         * </li> </ul> <p>Also, all configuration items associated with your user account
         * that have tags can be listed if you call <code>DescribeTags</code> as is without
         * passing any parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

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
         * <p>Retrieves a short summary of discovered assets.</p> <p>This API operation
         * takes no request parameters and is called as is at the command prompt as shown
         * in the example.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/GetDiscoverySummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoverySummaryOutcome GetDiscoverySummary(const Model::GetDiscoverySummaryRequest& request) const;

        /**
         * <p>Retrieves a short summary of discovered assets.</p> <p>This API operation
         * takes no request parameters and is called as is at the command prompt as shown
         * in the example.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/GetDiscoverySummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiscoverySummaryOutcomeCallable GetDiscoverySummaryCallable(const Model::GetDiscoverySummaryRequest& request) const;

        /**
         * <p>Retrieves a short summary of discovered assets.</p> <p>This API operation
         * takes no request parameters and is called as is at the command prompt as shown
         * in the example.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/GetDiscoverySummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Retrieves a list of configuration items as specified by the value passed to
         * the required parameter <code>configurationType</code>. Optional filtering may be
         * applied to refine search results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/ListConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const Model::ListConfigurationsRequest& request) const;

        /**
         * <p>Retrieves a list of configuration items as specified by the value passed to
         * the required parameter <code>configurationType</code>. Optional filtering may be
         * applied to refine search results.</p><p><h3>See Also:</h3>   <a
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
         * <p>Start the continuous flow of agent's discovered data into Amazon
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartContinuousExport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContinuousExportOutcome StartContinuousExport(const Model::StartContinuousExportRequest& request) const;

        /**
         * <p>Start the continuous flow of agent's discovered data into Amazon
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartContinuousExport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartContinuousExportOutcomeCallable StartContinuousExportCallable(const Model::StartContinuousExportRequest& request) const;

        /**
         * <p>Start the continuous flow of agent's discovered data into Amazon
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartContinuousExport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Starts an import task, which allows you to import details of your on-premises
         * environment directly into AWS Migration Hub without having to use the
         * Application Discovery Service (ADS) tools such as the Discovery Connector or
         * Discovery Agent. This gives you the option to perform migration assessment and
         * planning directly from your imported data, including the ability to group your
         * devices as applications and track their migration status.</p> <p>To start an
         * import request, do this:</p> <ol> <li> <p>Download the specially formatted comma
         * separated value (CSV) import template, which you can find here: <a
         * href="https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv">https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv</a>.</p>
         * </li> <li> <p>Fill out the template with your server and application data.</p>
         * </li> <li> <p>Upload your import file to an Amazon S3 bucket, and make a note of
         * it's Object URL. Your import file must be in the CSV format.</p> </li> <li>
         * <p>Use the console or the <code>StartImportTask</code> command with the AWS CLI
         * or one of the AWS SDKs to import the records from your file.</p> </li> </ol>
         * <p>For more information, including step-by-step procedures, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-import.html">Migration
         * Hub Import</a> in the <i>AWS Application Discovery Service User Guide</i>.</p>
         *  <p>There are limits to the number of import tasks you can create (and
         * delete) in an AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/ads_service_limits.html">AWS
         * Application Discovery Service Limits</a> in the <i>AWS Application Discovery
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartImportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportTaskOutcome StartImportTask(const Model::StartImportTaskRequest& request) const;

        /**
         * <p>Starts an import task, which allows you to import details of your on-premises
         * environment directly into AWS Migration Hub without having to use the
         * Application Discovery Service (ADS) tools such as the Discovery Connector or
         * Discovery Agent. This gives you the option to perform migration assessment and
         * planning directly from your imported data, including the ability to group your
         * devices as applications and track their migration status.</p> <p>To start an
         * import request, do this:</p> <ol> <li> <p>Download the specially formatted comma
         * separated value (CSV) import template, which you can find here: <a
         * href="https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv">https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv</a>.</p>
         * </li> <li> <p>Fill out the template with your server and application data.</p>
         * </li> <li> <p>Upload your import file to an Amazon S3 bucket, and make a note of
         * it's Object URL. Your import file must be in the CSV format.</p> </li> <li>
         * <p>Use the console or the <code>StartImportTask</code> command with the AWS CLI
         * or one of the AWS SDKs to import the records from your file.</p> </li> </ol>
         * <p>For more information, including step-by-step procedures, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-import.html">Migration
         * Hub Import</a> in the <i>AWS Application Discovery Service User Guide</i>.</p>
         *  <p>There are limits to the number of import tasks you can create (and
         * delete) in an AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/ads_service_limits.html">AWS
         * Application Discovery Service Limits</a> in the <i>AWS Application Discovery
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartImportTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImportTaskOutcomeCallable StartImportTaskCallable(const Model::StartImportTaskRequest& request) const;

        /**
         * <p>Starts an import task, which allows you to import details of your on-premises
         * environment directly into AWS Migration Hub without having to use the
         * Application Discovery Service (ADS) tools such as the Discovery Connector or
         * Discovery Agent. This gives you the option to perform migration assessment and
         * planning directly from your imported data, including the ability to group your
         * devices as applications and track their migration status.</p> <p>To start an
         * import request, do this:</p> <ol> <li> <p>Download the specially formatted comma
         * separated value (CSV) import template, which you can find here: <a
         * href="https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv">https://s3-us-west-2.amazonaws.com/templates-7cffcf56-bd96-4b1c-b45b-a5b42f282e46/import_template.csv</a>.</p>
         * </li> <li> <p>Fill out the template with your server and application data.</p>
         * </li> <li> <p>Upload your import file to an Amazon S3 bucket, and make a note of
         * it's Object URL. Your import file must be in the CSV format.</p> </li> <li>
         * <p>Use the console or the <code>StartImportTask</code> command with the AWS CLI
         * or one of the AWS SDKs to import the records from your file.</p> </li> </ol>
         * <p>For more information, including step-by-step procedures, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/discovery-import.html">Migration
         * Hub Import</a> in the <i>AWS Application Discovery Service User Guide</i>.</p>
         *  <p>There are limits to the number of import tasks you can create (and
         * delete) in an AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/application-discovery/latest/userguide/ads_service_limits.html">AWS
         * Application Discovery Service Limits</a> in the <i>AWS Application Discovery
         * Service User Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StartImportTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Stop the continuous flow of agent's discovered data into Amazon
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StopContinuousExport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopContinuousExportOutcomeCallable StopContinuousExportCallable(const Model::StopContinuousExportRequest& request) const;

        /**
         * <p>Stop the continuous flow of agent's discovered data into Amazon
         * Athena.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/StopContinuousExport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateConfigurationItemsToApplicationAsyncHelper(const Model::AssociateConfigurationItemsToApplicationRequest& request, const AssociateConfigurationItemsToApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDeleteImportDataAsyncHelper(const Model::BatchDeleteImportDataRequest& request, const BatchDeleteImportDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationsAsyncHelper(const Model::DeleteApplicationsRequest& request, const DeleteApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAgentsAsyncHelper(const Model::DescribeAgentsRequest& request, const DescribeAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationsAsyncHelper(const Model::DescribeConfigurationsRequest& request, const DescribeConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContinuousExportsAsyncHelper(const Model::DescribeContinuousExportsRequest& request, const DescribeContinuousExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeExportTasksAsyncHelper(const Model::DescribeExportTasksRequest& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeImportTasksAsyncHelper(const Model::DescribeImportTasksRequest& request, const DescribeImportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateConfigurationItemsFromApplicationAsyncHelper(const Model::DisassociateConfigurationItemsFromApplicationRequest& request, const DisassociateConfigurationItemsFromApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiscoverySummaryAsyncHelper(const Model::GetDiscoverySummaryRequest& request, const GetDiscoverySummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationsAsyncHelper(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServerNeighborsAsyncHelper(const Model::ListServerNeighborsRequest& request, const ListServerNeighborsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartContinuousExportAsyncHelper(const Model::StartContinuousExportRequest& request, const StartContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDataCollectionByAgentIdsAsyncHelper(const Model::StartDataCollectionByAgentIdsRequest& request, const StartDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartExportTaskAsyncHelper(const Model::StartExportTaskRequest& request, const StartExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartImportTaskAsyncHelper(const Model::StartImportTaskRequest& request, const StartImportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopContinuousExportAsyncHelper(const Model::StopContinuousExportRequest& request, const StopContinuousExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDataCollectionByAgentIdsAsyncHelper(const Model::StopDataCollectionByAgentIdsRequest& request, const StopDataCollectionByAgentIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationDiscoveryService
} // namespace Aws

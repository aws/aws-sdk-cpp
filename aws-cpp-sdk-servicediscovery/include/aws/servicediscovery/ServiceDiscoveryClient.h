/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicediscovery/ServiceDiscoveryServiceClientModel.h>

namespace Aws
{
namespace ServiceDiscovery
{
  /**
   * <fullname>Cloud Map</fullname> <p>With Cloud Map, you can configure public DNS,
   * private DNS, or HTTP namespaces that your microservice applications run in. When
   * an instance becomes available, you can call the Cloud Map API to register the
   * instance with Cloud Map. For public or private DNS namespaces, Cloud Map
   * automatically creates DNS records and an optional health check. Clients that
   * submit public or private DNS queries, or HTTP requests, for the service receive
   * an answer that contains up to eight healthy records. </p>
   */
  class AWS_SERVICEDISCOVERY_API ServiceDiscoveryClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ServiceDiscoveryClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceDiscoveryClient(const Aws::ServiceDiscovery::ServiceDiscoveryClientConfiguration& clientConfiguration = Aws::ServiceDiscovery::ServiceDiscoveryClientConfiguration(),
                               std::shared_ptr<ServiceDiscoveryEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceDiscoveryClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ServiceDiscoveryEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ServiceDiscovery::ServiceDiscoveryClientConfiguration& clientConfiguration = Aws::ServiceDiscovery::ServiceDiscoveryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceDiscoveryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ServiceDiscoveryEndpointProviderBase> endpointProvider = Aws::MakeShared<ServiceDiscoveryEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ServiceDiscovery::ServiceDiscoveryClientConfiguration& clientConfiguration = Aws::ServiceDiscovery::ServiceDiscoveryClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceDiscoveryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceDiscoveryClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceDiscoveryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ServiceDiscoveryClient();

        /**
         * <p>Creates an HTTP namespace. Service instances registered using an HTTP
         * namespace can be discovered using a <code>DiscoverInstances</code> request but
         * can't be discovered using DNS.</p> <p>For the current quota on the number of
         * namespaces that you can create using the same Amazon Web Services account, see
         * <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">Cloud
         * Map quotas</a> in the <i>Cloud Map Developer Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/CreateHttpNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHttpNamespaceOutcome CreateHttpNamespace(const Model::CreateHttpNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateHttpNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHttpNamespaceOutcomeCallable CreateHttpNamespaceCallable(const Model::CreateHttpNamespaceRequest& request) const;

        /**
         * An Async wrapper for CreateHttpNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHttpNamespaceAsync(const Model::CreateHttpNamespaceRequest& request, const CreateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a private namespace based on DNS, which is visible only inside a
         * specified Amazon VPC. The namespace defines your service naming scheme. For
         * example, if you name your namespace <code>example.com</code> and name your
         * service <code>backend</code>, the resulting DNS name for the service is
         * <code>backend.example.com</code>. Service instances that are registered using a
         * private DNS namespace can be discovered using either a
         * <code>DiscoverInstances</code> request or using DNS. For the current quota on
         * the number of namespaces that you can create using the same Amazon Web Services
         * account, see <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">Cloud
         * Map quotas</a> in the <i>Cloud Map Developer Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/CreatePrivateDnsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrivateDnsNamespaceOutcome CreatePrivateDnsNamespace(const Model::CreatePrivateDnsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreatePrivateDnsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePrivateDnsNamespaceOutcomeCallable CreatePrivateDnsNamespaceCallable(const Model::CreatePrivateDnsNamespaceRequest& request) const;

        /**
         * An Async wrapper for CreatePrivateDnsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePrivateDnsNamespaceAsync(const Model::CreatePrivateDnsNamespaceRequest& request, const CreatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a public namespace based on DNS, which is visible on the internet.
         * The namespace defines your service naming scheme. For example, if you name your
         * namespace <code>example.com</code> and name your service <code>backend</code>,
         * the resulting DNS name for the service is <code>backend.example.com</code>. You
         * can discover instances that were registered with a public DNS namespace by using
         * either a <code>DiscoverInstances</code> request or using DNS. For the current
         * quota on the number of namespaces that you can create using the same Amazon Web
         * Services account, see <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">Cloud
         * Map quotas</a> in the <i>Cloud Map Developer Guide</i>.</p>  <p>The
         * <code>CreatePublicDnsNamespace</code> API operation is not supported in the
         * Amazon Web Services GovCloud (US) Regions.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/CreatePublicDnsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicDnsNamespaceOutcome CreatePublicDnsNamespace(const Model::CreatePublicDnsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreatePublicDnsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicDnsNamespaceOutcomeCallable CreatePublicDnsNamespaceCallable(const Model::CreatePublicDnsNamespaceRequest& request) const;

        /**
         * An Async wrapper for CreatePublicDnsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicDnsNamespaceAsync(const Model::CreatePublicDnsNamespaceRequest& request, const CreatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a service. This action defines the configuration for the following
         * entities:</p> <ul> <li> <p>For public and private DNS namespaces, one of the
         * following combinations of DNS records in Amazon Route 53:</p> <ul> <li> <p>
         * <code>A</code> </p> </li> <li> <p> <code>AAAA</code> </p> </li> <li> <p>
         * <code>A</code> and <code>AAAA</code> </p> </li> <li> <p> <code>SRV</code> </p>
         * </li> <li> <p> <code>CNAME</code> </p> </li> </ul> </li> <li> <p>Optionally, a
         * health check</p> </li> </ul> <p>After you create the service, you can submit a
         * <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_RegisterInstance.html">RegisterInstance</a>
         * request, and Cloud Map uses the values in the configuration to create the
         * specified entities.</p> <p>For the current quota on the number of instances that
         * you can register using the same namespace and using the same service, see <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">Cloud
         * Map quotas</a> in the <i>Cloud Map Developer Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/CreateService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request) const;

        /**
         * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a namespace from the current account. If the namespace still contains
         * one or more services, the request fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;

        /**
         * An Async wrapper for DeleteNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified service. If the service still contains one or more
         * registered instances, the request fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request) const;

        /**
         * An Async wrapper for DeleteService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the Amazon Route 53 DNS records and health check, if any, that Cloud
         * Map created for the specified instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DeregisterInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterInstanceOutcome DeregisterInstance(const Model::DeregisterInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterInstanceOutcomeCallable DeregisterInstanceCallable(const Model::DeregisterInstanceRequest& request) const;

        /**
         * An Async wrapper for DeregisterInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterInstanceAsync(const Model::DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Discovers registered instances for a specified namespace and service. You can
         * use <code>DiscoverInstances</code> to discover instances for any type of
         * namespace. For public and private DNS namespaces, you can also use DNS queries
         * to discover instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DiscoverInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DiscoverInstancesOutcome DiscoverInstances(const Model::DiscoverInstancesRequest& request) const;

        /**
         * A Callable wrapper for DiscoverInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DiscoverInstancesOutcomeCallable DiscoverInstancesCallable(const Model::DiscoverInstancesRequest& request) const;

        /**
         * An Async wrapper for DiscoverInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DiscoverInstancesAsync(const Model::DiscoverInstancesRequest& request, const DiscoverInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOutcome GetInstance(const Model::GetInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceOutcomeCallable GetInstanceCallable(const Model::GetInstanceRequest& request) const;

        /**
         * An Async wrapper for GetInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the current health status (<code>Healthy</code>, <code>Unhealthy</code>,
         * or <code>Unknown</code>) of one or more instances that are associated with a
         * specified service.</p>  <p>There's a brief delay between when you register
         * an instance and when the health status for the instance is available. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetInstancesHealthStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstancesHealthStatusOutcome GetInstancesHealthStatus(const Model::GetInstancesHealthStatusRequest& request) const;

        /**
         * A Callable wrapper for GetInstancesHealthStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstancesHealthStatusOutcomeCallable GetInstancesHealthStatusCallable(const Model::GetInstancesHealthStatusRequest& request) const;

        /**
         * An Async wrapper for GetInstancesHealthStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstancesHealthStatusAsync(const Model::GetInstancesHealthStatusRequest& request, const GetInstancesHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamespaceOutcome GetNamespace(const Model::GetNamespaceRequest& request) const;

        /**
         * A Callable wrapper for GetNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNamespaceOutcomeCallable GetNamespaceCallable(const Model::GetNamespaceRequest& request) const;

        /**
         * An Async wrapper for GetNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNamespaceAsync(const Model::GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about any operation that returns an operation ID in the
         * response, such as a <code>CreateService</code> request.</p>  <p>To get a
         * list of operations that match specified criteria, see <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_ListOperations.html">ListOperations</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationOutcome GetOperation(const Model::GetOperationRequest& request) const;

        /**
         * A Callable wrapper for GetOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationOutcomeCallable GetOperationCallable(const Model::GetOperationRequest& request) const;

        /**
         * An Async wrapper for GetOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOperationAsync(const Model::GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the settings for a specified service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;

        /**
         * A Callable wrapper for GetService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceOutcomeCallable GetServiceCallable(const Model::GetServiceRequest& request) const;

        /**
         * An Async wrapper for GetService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceAsync(const Model::GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists summary information about the instances that you registered by using a
         * specified service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstancesOutcomeCallable ListInstancesCallable(const Model::ListInstancesRequest& request) const;

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists summary information about the namespaces that were created by the
         * current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNamespacesOutcomeCallable ListNamespacesCallable(const Model::ListNamespacesRequest& request) const;

        /**
         * An Async wrapper for ListNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists operations that match the criteria that you specify.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOperationsOutcomeCallable ListOperationsCallable(const Model::ListOperationsRequest& request) const;

        /**
         * An Async wrapper for ListOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOperationsAsync(const Model::ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists summary information for all the services that are associated with one
         * or more specified namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicesAsync(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListTagsForResource">AWS
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
         * <p>Creates or updates one or more records and, optionally, creates a health
         * check based on the settings in a specified service. When you submit a
         * <code>RegisterInstance</code> request, the following occurs:</p> <ul> <li>
         * <p>For each DNS record that you define in the service that's specified by
         * <code>ServiceId</code>, a record is created or updated in the hosted zone that's
         * associated with the corresponding namespace.</p> </li> <li> <p>If the service
         * includes <code>HealthCheckConfig</code>, a health check is created based on the
         * settings in the health check configuration.</p> </li> <li> <p>The health check,
         * if any, is associated with each of the new or updated records.</p> </li> </ul>
         *  <p>One <code>RegisterInstance</code> request must complete before
         * you can submit another request and specify the same service ID and instance
         * ID.</p>  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
         * <p>When Cloud Map receives a DNS query for the specified DNS name, it returns
         * the applicable value:</p> <ul> <li> <p> <b>If the health check is healthy</b>:
         * returns all the records</p> </li> <li> <p> <b>If the health check is
         * unhealthy</b>: returns the applicable value for the last healthy instance</p>
         * </li> <li> <p> <b>If you didn't specify a health check configuration</b>:
         * returns all the records</p> </li> </ul> <p>For the current quota on the number
         * of instances that you can register using the same namespace and using the same
         * service, see <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/dg/cloud-map-limits.html">Cloud
         * Map quotas</a> in the <i>Cloud Map Developer Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/RegisterInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterInstanceOutcome RegisterInstance(const Model::RegisterInstanceRequest& request) const;

        /**
         * A Callable wrapper for RegisterInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterInstanceOutcomeCallable RegisterInstanceCallable(const Model::RegisterInstanceRequest& request) const;

        /**
         * An Async wrapper for RegisterInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterInstanceAsync(const Model::RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/TagResource">AWS
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
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UntagResource">AWS
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
         * <p>Updates an HTTP namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdateHttpNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHttpNamespaceOutcome UpdateHttpNamespace(const Model::UpdateHttpNamespaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateHttpNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHttpNamespaceOutcomeCallable UpdateHttpNamespaceCallable(const Model::UpdateHttpNamespaceRequest& request) const;

        /**
         * An Async wrapper for UpdateHttpNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHttpNamespaceAsync(const Model::UpdateHttpNamespaceRequest& request, const UpdateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits a request to change the health status of a custom health check to
         * healthy or unhealthy.</p> <p>You can use
         * <code>UpdateInstanceCustomHealthStatus</code> to change the status only for
         * custom health checks, which you define using
         * <code>HealthCheckCustomConfig</code> when you create a service. You can't use it
         * to change the status for Route 53 health checks, which you define using
         * <code>HealthCheckConfig</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_HealthCheckCustomConfig.html">HealthCheckCustomConfig</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdateInstanceCustomHealthStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceCustomHealthStatusOutcome UpdateInstanceCustomHealthStatus(const Model::UpdateInstanceCustomHealthStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceCustomHealthStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceCustomHealthStatusOutcomeCallable UpdateInstanceCustomHealthStatusCallable(const Model::UpdateInstanceCustomHealthStatusRequest& request) const;

        /**
         * An Async wrapper for UpdateInstanceCustomHealthStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceCustomHealthStatusAsync(const Model::UpdateInstanceCustomHealthStatusRequest& request, const UpdateInstanceCustomHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a private DNS namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdatePrivateDnsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePrivateDnsNamespaceOutcome UpdatePrivateDnsNamespace(const Model::UpdatePrivateDnsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for UpdatePrivateDnsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePrivateDnsNamespaceOutcomeCallable UpdatePrivateDnsNamespaceCallable(const Model::UpdatePrivateDnsNamespaceRequest& request) const;

        /**
         * An Async wrapper for UpdatePrivateDnsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePrivateDnsNamespaceAsync(const Model::UpdatePrivateDnsNamespaceRequest& request, const UpdatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a public DNS namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdatePublicDnsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicDnsNamespaceOutcome UpdatePublicDnsNamespace(const Model::UpdatePublicDnsNamespaceRequest& request) const;

        /**
         * A Callable wrapper for UpdatePublicDnsNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePublicDnsNamespaceOutcomeCallable UpdatePublicDnsNamespaceCallable(const Model::UpdatePublicDnsNamespaceRequest& request) const;

        /**
         * An Async wrapper for UpdatePublicDnsNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePublicDnsNamespaceAsync(const Model::UpdatePublicDnsNamespaceRequest& request, const UpdatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits a request to perform the following operations:</p> <ul> <li>
         * <p>Update the TTL setting for existing <code>DnsRecords</code>
         * configurations</p> </li> <li> <p>Add, update, or delete
         * <code>HealthCheckConfig</code> for a specified service</p>  <p>You can't
         * add, update, or delete a <code>HealthCheckCustomConfig</code> configuration.</p>
         *  </li> </ul> <p>For public and private DNS namespaces, note the
         * following:</p> <ul> <li> <p>If you omit any existing <code>DnsRecords</code> or
         * <code>HealthCheckConfig</code> configurations from an <code>UpdateService</code>
         * request, the configurations are deleted from the service.</p> </li> <li> <p>If
         * you omit an existing <code>HealthCheckCustomConfig</code> configuration from an
         * <code>UpdateService</code> request, the configuration isn't deleted from the
         * service.</p> </li> </ul> <p>When you update settings for a service, Cloud Map
         * also updates the corresponding settings in all the records and health checks
         * that were created by using the specified service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdateService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request) const;

        /**
         * An Async wrapper for UpdateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServiceDiscoveryEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ServiceDiscoveryClient>;
      void init(const ServiceDiscoveryClientConfiguration& clientConfiguration);

      ServiceDiscoveryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServiceDiscoveryEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServiceDiscovery
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicediscovery/ServiceDiscoveryServiceClientModel.h>
#include <aws/servicediscovery/ServiceDiscoveryLegacyAsyncMacros.h>

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
  class AWS_SERVICEDISCOVERY_API ServiceDiscoveryClient : public Aws::Client::AWSJsonClient
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
         * <p>Deletes a namespace from the current account. If the namespace still contains
         * one or more services, the request fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;


        /**
         * <p>Deletes a specified service. If the service still contains one or more
         * registered instances, the request fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;


        /**
         * <p>Deletes the Amazon Route 53 DNS records and health check, if any, that Cloud
         * Map created for the specified instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DeregisterInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterInstanceOutcome DeregisterInstance(const Model::DeregisterInstanceRequest& request) const;


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
         * <p>Gets information about a specified instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOutcome GetInstance(const Model::GetInstanceRequest& request) const;


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
         * <p>Gets information about a namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamespaceOutcome GetNamespace(const Model::GetNamespaceRequest& request) const;


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
         * <p>Gets the settings for a specified service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;


        /**
         * <p>Lists summary information about the instances that you registered by using a
         * specified service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;


        /**
         * <p>Lists summary information about the namespaces that were created by the
         * current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;


        /**
         * <p>Lists operations that match the criteria that you specify.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;


        /**
         * <p>Lists summary information for all the services that are associated with one
         * or more specified namespaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;


        /**
         * <p>Lists tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Adds one or more tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates an HTTP namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdateHttpNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHttpNamespaceOutcome UpdateHttpNamespace(const Model::UpdateHttpNamespaceRequest& request) const;


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
         * <p>Updates a private DNS namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdatePrivateDnsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePrivateDnsNamespaceOutcome UpdatePrivateDnsNamespace(const Model::UpdatePrivateDnsNamespaceRequest& request) const;


        /**
         * <p>Updates a public DNS namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/UpdatePublicDnsNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicDnsNamespaceOutcome UpdatePublicDnsNamespace(const Model::UpdatePublicDnsNamespaceRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServiceDiscoveryEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ServiceDiscoveryClientConfiguration& clientConfiguration);

      ServiceDiscoveryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServiceDiscoveryEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServiceDiscovery
} // namespace Aws

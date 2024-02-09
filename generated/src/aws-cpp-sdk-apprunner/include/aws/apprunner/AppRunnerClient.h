/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apprunner/AppRunnerServiceClientModel.h>

namespace Aws
{
namespace AppRunner
{
  /**
   * <fullname>App Runner</fullname> <p>App Runner is an application service that
   * provides a fast, simple, and cost-effective way to go directly from an existing
   * container image or source code to a running service in the Amazon Web Services
   * Cloud in seconds. You don't need to learn new technologies, decide which compute
   * service to use, or understand how to provision and configure Amazon Web Services
   * resources.</p> <p>App Runner connects directly to your container registry or
   * source code repository. It provides an automatic delivery pipeline with fully
   * managed operations, high performance, scalability, and security.</p> <p>For more
   * information about App Runner, see the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/dg/">App Runner Developer
   * Guide</a>. For release information, see the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/relnotes/">App Runner Release
   * Notes</a>.</p> <p> To install the Software Development Kits (SDKs), Integrated
   * Development Environment (IDE) Toolkits, and command line tools that you can use
   * to access the API, see <a href="http://aws.amazon.com/tools/">Tools for Amazon
   * Web Services</a>.</p> <p> <b>Endpoints</b> </p> <p>For a list of Region-specific
   * endpoints that App Runner supports, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/apprunner.html">App Runner
   * endpoints and quotas</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  class AWS_APPRUNNER_API AppRunnerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppRunnerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppRunnerClientConfiguration ClientConfigurationType;
      typedef AppRunnerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::AppRunner::AppRunnerClientConfiguration& clientConfiguration = Aws::AppRunner::AppRunnerClientConfiguration(),
                        std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppRunner::AppRunnerClientConfiguration& clientConfiguration = Aws::AppRunner::AppRunnerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppRunnerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppRunner::AppRunnerClientConfiguration& clientConfiguration = Aws::AppRunner::AppRunnerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppRunnerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppRunnerClient();

        /**
         * <p>Associate your own domain name with the App Runner subdomain URL of your App
         * Runner service.</p> <p>After you call <code>AssociateCustomDomain</code> and
         * receive a successful response, use the information in the <a>CustomDomain</a>
         * record that's returned to add CNAME records to your Domain Name System (DNS).
         * For each mapped domain name, add a mapping to the target App Runner subdomain
         * and one or more certificate validation records. App Runner then performs DNS
         * validation to verify that you own or control the domain name that you
         * associated. App Runner tracks domain validity in a certificate stored in <a
         * href="https://docs.aws.amazon.com/acm/latest/userguide">AWS Certificate Manager
         * (ACM)</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/AssociateCustomDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateCustomDomainOutcome AssociateCustomDomain(const Model::AssociateCustomDomainRequest& request) const;

        /**
         * A Callable wrapper for AssociateCustomDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateCustomDomainRequestT = Model::AssociateCustomDomainRequest>
        Model::AssociateCustomDomainOutcomeCallable AssociateCustomDomainCallable(const AssociateCustomDomainRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::AssociateCustomDomain, request);
        }

        /**
         * An Async wrapper for AssociateCustomDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateCustomDomainRequestT = Model::AssociateCustomDomainRequest>
        void AssociateCustomDomainAsync(const AssociateCustomDomainRequestT& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::AssociateCustomDomain, request, handler, context);
        }

        /**
         * <p>Create an App Runner automatic scaling configuration resource. App Runner
         * requires this resource when you create or update App Runner services and you
         * require non-default auto scaling settings. You can share an auto scaling
         * configuration across multiple services.</p> <p>Create multiple revisions of a
         * configuration by calling this action multiple times using the same
         * <code>AutoScalingConfigurationName</code>. The call returns incremental
         * <code>AutoScalingConfigurationRevision</code> values. When you create a service
         * and configure an auto scaling configuration resource, the service uses the
         * latest active revision of the auto scaling configuration by default. You can
         * optionally configure the service to use a specific revision.</p> <p>Configure a
         * higher <code>MinSize</code> to increase the spread of your App Runner service
         * over more Availability Zones in the Amazon Web Services Region. The tradeoff is
         * a higher minimal cost.</p> <p>Configure a lower <code>MaxSize</code> to control
         * your cost. The tradeoff is lower responsiveness during peak
         * demand.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoScalingConfigurationOutcome CreateAutoScalingConfiguration(const Model::CreateAutoScalingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateAutoScalingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAutoScalingConfigurationRequestT = Model::CreateAutoScalingConfigurationRequest>
        Model::CreateAutoScalingConfigurationOutcomeCallable CreateAutoScalingConfigurationCallable(const CreateAutoScalingConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::CreateAutoScalingConfiguration, request);
        }

        /**
         * An Async wrapper for CreateAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAutoScalingConfigurationRequestT = Model::CreateAutoScalingConfigurationRequest>
        void CreateAutoScalingConfigurationAsync(const CreateAutoScalingConfigurationRequestT& request, const CreateAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::CreateAutoScalingConfiguration, request, handler, context);
        }

        /**
         * <p>Create an App Runner connection resource. App Runner requires a connection
         * resource when you create App Runner services that access private repositories
         * from certain third-party providers. You can share a connection across multiple
         * services.</p> <p>A connection resource is needed to access GitHub and Bitbucket
         * repositories. Both require a user interface approval process through the App
         * Runner console before you can use the connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const CreateConnectionRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::CreateConnection, request);
        }

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        void CreateConnectionAsync(const CreateConnectionRequestT& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::CreateConnection, request, handler, context);
        }

        /**
         * <p>Create an App Runner observability configuration resource. App Runner
         * requires this resource when you create or update App Runner services and you
         * want to enable non-default observability features. You can share an
         * observability configuration across multiple services.</p> <p>Create multiple
         * revisions of a configuration by calling this action multiple times using the
         * same <code>ObservabilityConfigurationName</code>. The call returns incremental
         * <code>ObservabilityConfigurationRevision</code> values. When you create a
         * service and configure an observability configuration resource, the service uses
         * the latest active revision of the observability configuration by default. You
         * can optionally configure the service to use a specific revision.</p> <p>The
         * observability configuration resource is designed to configure multiple features
         * (currently one feature, tracing). This action takes optional parameters that
         * describe the configuration of these features (currently one parameter,
         * <code>TraceConfiguration</code>). If you don't specify a feature parameter, App
         * Runner doesn't enable the feature.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateObservabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateObservabilityConfigurationOutcome CreateObservabilityConfiguration(const Model::CreateObservabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateObservabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateObservabilityConfigurationRequestT = Model::CreateObservabilityConfigurationRequest>
        Model::CreateObservabilityConfigurationOutcomeCallable CreateObservabilityConfigurationCallable(const CreateObservabilityConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::CreateObservabilityConfiguration, request);
        }

        /**
         * An Async wrapper for CreateObservabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateObservabilityConfigurationRequestT = Model::CreateObservabilityConfigurationRequest>
        void CreateObservabilityConfigurationAsync(const CreateObservabilityConfigurationRequestT& request, const CreateObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::CreateObservabilityConfiguration, request, handler, context);
        }

        /**
         * <p>Create an App Runner service. After the service is created, the action also
         * automatically starts a deployment.</p> <p>This is an asynchronous operation. On
         * a successful call, you can use the returned <code>OperationId</code> and the <a
         * href="https://docs.aws.amazon.com/apprunner/latest/api/API_ListOperations.html">ListOperations</a>
         * call to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        Model::CreateServiceOutcomeCallable CreateServiceCallable(const CreateServiceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::CreateService, request);
        }

        /**
         * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        void CreateServiceAsync(const CreateServiceRequestT& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::CreateService, request, handler, context);
        }

        /**
         * <p>Create an App Runner VPC connector resource. App Runner requires this
         * resource when you want to associate your App Runner service to a custom Amazon
         * Virtual Private Cloud (Amazon VPC).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateVpcConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcConnectorOutcome CreateVpcConnector(const Model::CreateVpcConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcConnectorRequestT = Model::CreateVpcConnectorRequest>
        Model::CreateVpcConnectorOutcomeCallable CreateVpcConnectorCallable(const CreateVpcConnectorRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::CreateVpcConnector, request);
        }

        /**
         * An Async wrapper for CreateVpcConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcConnectorRequestT = Model::CreateVpcConnectorRequest>
        void CreateVpcConnectorAsync(const CreateVpcConnectorRequestT& request, const CreateVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::CreateVpcConnector, request, handler, context);
        }

        /**
         * <p>Create an App Runner VPC Ingress Connection resource. App Runner requires
         * this resource when you want to associate your App Runner service with an Amazon
         * VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateVpcIngressConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcIngressConnectionOutcome CreateVpcIngressConnection(const Model::CreateVpcIngressConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcIngressConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcIngressConnectionRequestT = Model::CreateVpcIngressConnectionRequest>
        Model::CreateVpcIngressConnectionOutcomeCallable CreateVpcIngressConnectionCallable(const CreateVpcIngressConnectionRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::CreateVpcIngressConnection, request);
        }

        /**
         * An Async wrapper for CreateVpcIngressConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcIngressConnectionRequestT = Model::CreateVpcIngressConnectionRequest>
        void CreateVpcIngressConnectionAsync(const CreateVpcIngressConnectionRequestT& request, const CreateVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::CreateVpcIngressConnection, request, handler, context);
        }

        /**
         * <p>Delete an App Runner automatic scaling configuration resource. You can delete
         * a top level auto scaling configuration, a specific revision of one, or all
         * revisions associated with the top level configuration. You can't delete the
         * default auto scaling configuration or a configuration that's used by one or more
         * App Runner services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutoScalingConfigurationOutcome DeleteAutoScalingConfiguration(const Model::DeleteAutoScalingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutoScalingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAutoScalingConfigurationRequestT = Model::DeleteAutoScalingConfigurationRequest>
        Model::DeleteAutoScalingConfigurationOutcomeCallable DeleteAutoScalingConfigurationCallable(const DeleteAutoScalingConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DeleteAutoScalingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAutoScalingConfigurationRequestT = Model::DeleteAutoScalingConfigurationRequest>
        void DeleteAutoScalingConfigurationAsync(const DeleteAutoScalingConfigurationRequestT& request, const DeleteAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DeleteAutoScalingConfiguration, request, handler, context);
        }

        /**
         * <p>Delete an App Runner connection. You must first ensure that there are no
         * running App Runner services that use this connection. If there are any, the
         * <code>DeleteConnection</code> action fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>Delete an App Runner observability configuration resource. You can delete a
         * specific revision or the latest active revision. You can't delete a
         * configuration that's used by one or more App Runner services.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteObservabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObservabilityConfigurationOutcome DeleteObservabilityConfiguration(const Model::DeleteObservabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteObservabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteObservabilityConfigurationRequestT = Model::DeleteObservabilityConfigurationRequest>
        Model::DeleteObservabilityConfigurationOutcomeCallable DeleteObservabilityConfigurationCallable(const DeleteObservabilityConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DeleteObservabilityConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteObservabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteObservabilityConfigurationRequestT = Model::DeleteObservabilityConfigurationRequest>
        void DeleteObservabilityConfigurationAsync(const DeleteObservabilityConfigurationRequestT& request, const DeleteObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DeleteObservabilityConfiguration, request, handler, context);
        }

        /**
         * <p>Delete an App Runner service.</p> <p>This is an asynchronous operation. On a
         * successful call, you can use the returned <code>OperationId</code> and the
         * <a>ListOperations</a> call to track the operation's progress.</p>  <p>Make
         * sure that you don't have any active VPCIngressConnections associated with the
         * service you want to delete. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const DeleteServiceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DeleteService, request);
        }

        /**
         * An Async wrapper for DeleteService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        void DeleteServiceAsync(const DeleteServiceRequestT& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DeleteService, request, handler, context);
        }

        /**
         * <p>Delete an App Runner VPC connector resource. You can't delete a connector
         * that's used by one or more App Runner services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteVpcConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcConnectorOutcome DeleteVpcConnector(const Model::DeleteVpcConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcConnectorRequestT = Model::DeleteVpcConnectorRequest>
        Model::DeleteVpcConnectorOutcomeCallable DeleteVpcConnectorCallable(const DeleteVpcConnectorRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DeleteVpcConnector, request);
        }

        /**
         * An Async wrapper for DeleteVpcConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcConnectorRequestT = Model::DeleteVpcConnectorRequest>
        void DeleteVpcConnectorAsync(const DeleteVpcConnectorRequestT& request, const DeleteVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DeleteVpcConnector, request, handler, context);
        }

        /**
         * <p>Delete an App Runner VPC Ingress Connection resource that's associated with
         * an App Runner service. The VPC Ingress Connection must be in one of the
         * following states to be deleted: </p> <ul> <li> <p> <code>AVAILABLE</code> </p>
         * </li> <li> <p> <code>FAILED_CREATION</code> </p> </li> <li> <p>
         * <code>FAILED_UPDATE</code> </p> </li> <li> <p> <code>FAILED_DELETION</code> </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteVpcIngressConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcIngressConnectionOutcome DeleteVpcIngressConnection(const Model::DeleteVpcIngressConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcIngressConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcIngressConnectionRequestT = Model::DeleteVpcIngressConnectionRequest>
        Model::DeleteVpcIngressConnectionOutcomeCallable DeleteVpcIngressConnectionCallable(const DeleteVpcIngressConnectionRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DeleteVpcIngressConnection, request);
        }

        /**
         * An Async wrapper for DeleteVpcIngressConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcIngressConnectionRequestT = Model::DeleteVpcIngressConnectionRequest>
        void DeleteVpcIngressConnectionAsync(const DeleteVpcIngressConnectionRequestT& request, const DeleteVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DeleteVpcIngressConnection, request, handler, context);
        }

        /**
         * <p>Return a full description of an App Runner automatic scaling configuration
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingConfigurationOutcome DescribeAutoScalingConfiguration(const Model::DescribeAutoScalingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAutoScalingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAutoScalingConfigurationRequestT = Model::DescribeAutoScalingConfigurationRequest>
        Model::DescribeAutoScalingConfigurationOutcomeCallable DescribeAutoScalingConfigurationCallable(const DescribeAutoScalingConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DescribeAutoScalingConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAutoScalingConfigurationRequestT = Model::DescribeAutoScalingConfigurationRequest>
        void DescribeAutoScalingConfigurationAsync(const DescribeAutoScalingConfigurationRequestT& request, const DescribeAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DescribeAutoScalingConfiguration, request, handler, context);
        }

        /**
         * <p>Return a description of custom domain names that are associated with an App
         * Runner service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeCustomDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomDomainsOutcome DescribeCustomDomains(const Model::DescribeCustomDomainsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCustomDomainsRequestT = Model::DescribeCustomDomainsRequest>
        Model::DescribeCustomDomainsOutcomeCallable DescribeCustomDomainsCallable(const DescribeCustomDomainsRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DescribeCustomDomains, request);
        }

        /**
         * An Async wrapper for DescribeCustomDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomDomainsRequestT = Model::DescribeCustomDomainsRequest>
        void DescribeCustomDomainsAsync(const DescribeCustomDomainsRequestT& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DescribeCustomDomains, request, handler, context);
        }

        /**
         * <p>Return a full description of an App Runner observability configuration
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeObservabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObservabilityConfigurationOutcome DescribeObservabilityConfiguration(const Model::DescribeObservabilityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeObservabilityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeObservabilityConfigurationRequestT = Model::DescribeObservabilityConfigurationRequest>
        Model::DescribeObservabilityConfigurationOutcomeCallable DescribeObservabilityConfigurationCallable(const DescribeObservabilityConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DescribeObservabilityConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeObservabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeObservabilityConfigurationRequestT = Model::DescribeObservabilityConfigurationRequest>
        void DescribeObservabilityConfigurationAsync(const DescribeObservabilityConfigurationRequestT& request, const DescribeObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DescribeObservabilityConfiguration, request, handler, context);
        }

        /**
         * <p>Return a full description of an App Runner service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeService">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceOutcome DescribeService(const Model::DescribeServiceRequest& request) const;

        /**
         * A Callable wrapper for DescribeService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceRequestT = Model::DescribeServiceRequest>
        Model::DescribeServiceOutcomeCallable DescribeServiceCallable(const DescribeServiceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DescribeService, request);
        }

        /**
         * An Async wrapper for DescribeService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceRequestT = Model::DescribeServiceRequest>
        void DescribeServiceAsync(const DescribeServiceRequestT& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DescribeService, request, handler, context);
        }

        /**
         * <p>Return a description of an App Runner VPC connector resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeVpcConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcConnectorOutcome DescribeVpcConnector(const Model::DescribeVpcConnectorRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVpcConnectorRequestT = Model::DescribeVpcConnectorRequest>
        Model::DescribeVpcConnectorOutcomeCallable DescribeVpcConnectorCallable(const DescribeVpcConnectorRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DescribeVpcConnector, request);
        }

        /**
         * An Async wrapper for DescribeVpcConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVpcConnectorRequestT = Model::DescribeVpcConnectorRequest>
        void DescribeVpcConnectorAsync(const DescribeVpcConnectorRequestT& request, const DescribeVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DescribeVpcConnector, request, handler, context);
        }

        /**
         * <p>Return a full description of an App Runner VPC Ingress Connection
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeVpcIngressConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcIngressConnectionOutcome DescribeVpcIngressConnection(const Model::DescribeVpcIngressConnectionRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcIngressConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVpcIngressConnectionRequestT = Model::DescribeVpcIngressConnectionRequest>
        Model::DescribeVpcIngressConnectionOutcomeCallable DescribeVpcIngressConnectionCallable(const DescribeVpcIngressConnectionRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DescribeVpcIngressConnection, request);
        }

        /**
         * An Async wrapper for DescribeVpcIngressConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVpcIngressConnectionRequestT = Model::DescribeVpcIngressConnectionRequest>
        void DescribeVpcIngressConnectionAsync(const DescribeVpcIngressConnectionRequestT& request, const DescribeVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DescribeVpcIngressConnection, request, handler, context);
        }

        /**
         * <p>Disassociate a custom domain name from an App Runner service.</p>
         * <p>Certificates tracking domain validity are associated with a custom domain and
         * are stored in <a href="https://docs.aws.amazon.com/acm/latest/userguide">AWS
         * Certificate Manager (ACM)</a>. These certificates aren't deleted as part of this
         * action. App Runner delays certificate deletion for 30 days after a domain is
         * disassociated from your service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DisassociateCustomDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateCustomDomainOutcome DisassociateCustomDomain(const Model::DisassociateCustomDomainRequest& request) const;

        /**
         * A Callable wrapper for DisassociateCustomDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateCustomDomainRequestT = Model::DisassociateCustomDomainRequest>
        Model::DisassociateCustomDomainOutcomeCallable DisassociateCustomDomainCallable(const DisassociateCustomDomainRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::DisassociateCustomDomain, request);
        }

        /**
         * An Async wrapper for DisassociateCustomDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateCustomDomainRequestT = Model::DisassociateCustomDomainRequest>
        void DisassociateCustomDomainAsync(const DisassociateCustomDomainRequestT& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::DisassociateCustomDomain, request, handler, context);
        }

        /**
         * <p>Returns a list of active App Runner automatic scaling configurations in your
         * Amazon Web Services account. You can query the revisions for a specific
         * configuration name or the revisions for all active configurations in your
         * account. You can optionally query only the latest revision of each requested
         * name.</p> <p>To retrieve a full description of a particular configuration
         * revision, call and provide one of the ARNs returned by
         * <code>ListAutoScalingConfigurations</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListAutoScalingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutoScalingConfigurationsOutcome ListAutoScalingConfigurations(const Model::ListAutoScalingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListAutoScalingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAutoScalingConfigurationsRequestT = Model::ListAutoScalingConfigurationsRequest>
        Model::ListAutoScalingConfigurationsOutcomeCallable ListAutoScalingConfigurationsCallable(const ListAutoScalingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListAutoScalingConfigurations, request);
        }

        /**
         * An Async wrapper for ListAutoScalingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAutoScalingConfigurationsRequestT = Model::ListAutoScalingConfigurationsRequest>
        void ListAutoScalingConfigurationsAsync(const ListAutoScalingConfigurationsRequestT& request, const ListAutoScalingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListAutoScalingConfigurations, request, handler, context);
        }

        /**
         * <p>Returns a list of App Runner connections that are associated with your Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const ListConnectionsRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListConnections, request);
        }

        /**
         * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        void ListConnectionsAsync(const ListConnectionsRequestT& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListConnections, request, handler, context);
        }

        /**
         * <p>Returns a list of active App Runner observability configurations in your
         * Amazon Web Services account. You can query the revisions for a specific
         * configuration name or the revisions for all active configurations in your
         * account. You can optionally query only the latest revision of each requested
         * name.</p> <p>To retrieve a full description of a particular configuration
         * revision, call and provide one of the ARNs returned by
         * <code>ListObservabilityConfigurations</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListObservabilityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObservabilityConfigurationsOutcome ListObservabilityConfigurations(const Model::ListObservabilityConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListObservabilityConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListObservabilityConfigurationsRequestT = Model::ListObservabilityConfigurationsRequest>
        Model::ListObservabilityConfigurationsOutcomeCallable ListObservabilityConfigurationsCallable(const ListObservabilityConfigurationsRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListObservabilityConfigurations, request);
        }

        /**
         * An Async wrapper for ListObservabilityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListObservabilityConfigurationsRequestT = Model::ListObservabilityConfigurationsRequest>
        void ListObservabilityConfigurationsAsync(const ListObservabilityConfigurationsRequestT& request, const ListObservabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListObservabilityConfigurations, request, handler, context);
        }

        /**
         * <p>Return a list of operations that occurred on an App Runner service.</p>
         * <p>The resulting list of <a>OperationSummary</a> objects is sorted in reverse
         * chronological order. The first object on the list represents the last started
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOperationsRequestT = Model::ListOperationsRequest>
        Model::ListOperationsOutcomeCallable ListOperationsCallable(const ListOperationsRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListOperations, request);
        }

        /**
         * An Async wrapper for ListOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOperationsRequestT = Model::ListOperationsRequest>
        void ListOperationsAsync(const ListOperationsRequestT& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListOperations, request, handler, context);
        }

        /**
         * <p>Returns a list of running App Runner services in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListServices, request);
        }

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        void ListServicesAsync(const ListServicesRequestT& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListServices, request, handler, context);
        }

        /**
         * <p>Returns a list of the associated App Runner services using an auto scaling
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListServicesForAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesForAutoScalingConfigurationOutcome ListServicesForAutoScalingConfiguration(const Model::ListServicesForAutoScalingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ListServicesForAutoScalingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesForAutoScalingConfigurationRequestT = Model::ListServicesForAutoScalingConfigurationRequest>
        Model::ListServicesForAutoScalingConfigurationOutcomeCallable ListServicesForAutoScalingConfigurationCallable(const ListServicesForAutoScalingConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListServicesForAutoScalingConfiguration, request);
        }

        /**
         * An Async wrapper for ListServicesForAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesForAutoScalingConfigurationRequestT = Model::ListServicesForAutoScalingConfigurationRequest>
        void ListServicesForAutoScalingConfigurationAsync(const ListServicesForAutoScalingConfigurationRequestT& request, const ListServicesForAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListServicesForAutoScalingConfiguration, request, handler, context);
        }

        /**
         * <p>List tags that are associated with for an App Runner resource. The response
         * contains a list of tag key-value pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of App Runner VPC connectors in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListVpcConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcConnectorsOutcome ListVpcConnectors(const Model::ListVpcConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListVpcConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcConnectorsRequestT = Model::ListVpcConnectorsRequest>
        Model::ListVpcConnectorsOutcomeCallable ListVpcConnectorsCallable(const ListVpcConnectorsRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListVpcConnectors, request);
        }

        /**
         * An Async wrapper for ListVpcConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcConnectorsRequestT = Model::ListVpcConnectorsRequest>
        void ListVpcConnectorsAsync(const ListVpcConnectorsRequestT& request, const ListVpcConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListVpcConnectors, request, handler, context);
        }

        /**
         * <p>Return a list of App Runner VPC Ingress Connections in your Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListVpcIngressConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcIngressConnectionsOutcome ListVpcIngressConnections(const Model::ListVpcIngressConnectionsRequest& request) const;

        /**
         * A Callable wrapper for ListVpcIngressConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcIngressConnectionsRequestT = Model::ListVpcIngressConnectionsRequest>
        Model::ListVpcIngressConnectionsOutcomeCallable ListVpcIngressConnectionsCallable(const ListVpcIngressConnectionsRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ListVpcIngressConnections, request);
        }

        /**
         * An Async wrapper for ListVpcIngressConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcIngressConnectionsRequestT = Model::ListVpcIngressConnectionsRequest>
        void ListVpcIngressConnectionsAsync(const ListVpcIngressConnectionsRequestT& request, const ListVpcIngressConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ListVpcIngressConnections, request, handler, context);
        }

        /**
         * <p>Pause an active App Runner service. App Runner reduces compute capacity for
         * the service to zero and loses state (for example, ephemeral storage is
         * removed).</p> <p>This is an asynchronous operation. On a successful call, you
         * can use the returned <code>OperationId</code> and the <a>ListOperations</a> call
         * to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/PauseService">AWS
         * API Reference</a></p>
         */
        virtual Model::PauseServiceOutcome PauseService(const Model::PauseServiceRequest& request) const;

        /**
         * A Callable wrapper for PauseService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PauseServiceRequestT = Model::PauseServiceRequest>
        Model::PauseServiceOutcomeCallable PauseServiceCallable(const PauseServiceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::PauseService, request);
        }

        /**
         * An Async wrapper for PauseService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PauseServiceRequestT = Model::PauseServiceRequest>
        void PauseServiceAsync(const PauseServiceRequestT& request, const PauseServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::PauseService, request, handler, context);
        }

        /**
         * <p>Resume an active App Runner service. App Runner provisions compute capacity
         * for the service.</p> <p>This is an asynchronous operation. On a successful call,
         * you can use the returned <code>OperationId</code> and the <a>ListOperations</a>
         * call to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ResumeService">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeServiceOutcome ResumeService(const Model::ResumeServiceRequest& request) const;

        /**
         * A Callable wrapper for ResumeService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeServiceRequestT = Model::ResumeServiceRequest>
        Model::ResumeServiceOutcomeCallable ResumeServiceCallable(const ResumeServiceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::ResumeService, request);
        }

        /**
         * An Async wrapper for ResumeService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeServiceRequestT = Model::ResumeServiceRequest>
        void ResumeServiceAsync(const ResumeServiceRequestT& request, const ResumeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::ResumeService, request, handler, context);
        }

        /**
         * <p>Initiate a manual deployment of the latest commit in a source code repository
         * or the latest image in a source image repository to an App Runner service.</p>
         * <p>For a source code repository, App Runner retrieves the commit and builds a
         * Docker image. For a source image repository, App Runner retrieves the latest
         * Docker image. In both cases, App Runner then deploys the new image to your
         * service and starts a new container instance.</p> <p>This is an asynchronous
         * operation. On a successful call, you can use the returned
         * <code>OperationId</code> and the <a>ListOperations</a> call to track the
         * operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/StartDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeploymentOutcome StartDeployment(const Model::StartDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StartDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDeploymentRequestT = Model::StartDeploymentRequest>
        Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const StartDeploymentRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::StartDeployment, request);
        }

        /**
         * An Async wrapper for StartDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDeploymentRequestT = Model::StartDeploymentRequest>
        void StartDeploymentAsync(const StartDeploymentRequestT& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::StartDeployment, request, handler, context);
        }

        /**
         * <p>Add tags to, or update the tag values of, an App Runner resource. A tag is a
         * key-value pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove tags from an App Runner resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update an auto scaling configuration to be the default. The existing default
         * auto scaling configuration will be set to non-default
         * automatically.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UpdateDefaultAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDefaultAutoScalingConfigurationOutcome UpdateDefaultAutoScalingConfiguration(const Model::UpdateDefaultAutoScalingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDefaultAutoScalingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDefaultAutoScalingConfigurationRequestT = Model::UpdateDefaultAutoScalingConfigurationRequest>
        Model::UpdateDefaultAutoScalingConfigurationOutcomeCallable UpdateDefaultAutoScalingConfigurationCallable(const UpdateDefaultAutoScalingConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::UpdateDefaultAutoScalingConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateDefaultAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDefaultAutoScalingConfigurationRequestT = Model::UpdateDefaultAutoScalingConfigurationRequest>
        void UpdateDefaultAutoScalingConfigurationAsync(const UpdateDefaultAutoScalingConfigurationRequestT& request, const UpdateDefaultAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::UpdateDefaultAutoScalingConfiguration, request, handler, context);
        }

        /**
         * <p>Update an App Runner service. You can update the source configuration and
         * instance configuration of the service. You can also update the ARN of the auto
         * scaling configuration resource that's associated with the service. However, you
         * can't change the name or the encryption configuration of the service. These can
         * be set only when you create the service.</p> <p>To update the tags applied to
         * your service, use the separate actions <a>TagResource</a> and
         * <a>UntagResource</a>.</p> <p>This is an asynchronous operation. On a successful
         * call, you can use the returned <code>OperationId</code> and the
         * <a>ListOperations</a> call to track the operation's progress.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UpdateService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceRequestT = Model::UpdateServiceRequest>
        Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const UpdateServiceRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::UpdateService, request);
        }

        /**
         * An Async wrapper for UpdateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceRequestT = Model::UpdateServiceRequest>
        void UpdateServiceAsync(const UpdateServiceRequestT& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::UpdateService, request, handler, context);
        }

        /**
         * <p>Update an existing App Runner VPC Ingress Connection resource. The VPC
         * Ingress Connection must be in one of the following states to be updated:</p>
         * <ul> <li> <p> AVAILABLE </p> </li> <li> <p> FAILED_CREATION </p> </li> <li> <p>
         * FAILED_UPDATE </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UpdateVpcIngressConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcIngressConnectionOutcome UpdateVpcIngressConnection(const Model::UpdateVpcIngressConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateVpcIngressConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVpcIngressConnectionRequestT = Model::UpdateVpcIngressConnectionRequest>
        Model::UpdateVpcIngressConnectionOutcomeCallable UpdateVpcIngressConnectionCallable(const UpdateVpcIngressConnectionRequestT& request) const
        {
            return SubmitCallable(&AppRunnerClient::UpdateVpcIngressConnection, request);
        }

        /**
         * An Async wrapper for UpdateVpcIngressConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVpcIngressConnectionRequestT = Model::UpdateVpcIngressConnectionRequest>
        void UpdateVpcIngressConnectionAsync(const UpdateVpcIngressConnectionRequestT& request, const UpdateVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppRunnerClient::UpdateVpcIngressConnection, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppRunnerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppRunnerClient>;
      void init(const AppRunnerClientConfiguration& clientConfiguration);

      AppRunnerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppRunnerEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppRunner
} // namespace Aws

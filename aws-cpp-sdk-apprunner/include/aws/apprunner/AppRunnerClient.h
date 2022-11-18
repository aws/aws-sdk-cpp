/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apprunner/AppRunnerServiceClientModel.h>
#include <aws/apprunner/AppRunnerLegacyAsyncMacros.h>

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
  class AWS_APPRUNNER_API AppRunnerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::AppRunner::AppRunnerClientConfiguration& clientConfiguration = Aws::AppRunner::AppRunnerClientConfiguration(),
                        std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider = Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider = Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::AppRunner::AppRunnerClientConfiguration& clientConfiguration = Aws::AppRunner::AppRunnerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppRunnerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider = Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Create an App Runner connection resource. App Runner requires a connection
         * resource when you create App Runner services that access private repositories
         * from certain third-party providers. You can share a connection across multiple
         * services.</p> <p>A connection resource is needed to access GitHub repositories.
         * GitHub requires a user interface approval process through the App Runner console
         * before you can use the connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;


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
         * <p>Create an App Runner VPC connector resource. App Runner requires this
         * resource when you want to associate your App Runner service to a custom Amazon
         * Virtual Private Cloud (Amazon VPC).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateVpcConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcConnectorOutcome CreateVpcConnector(const Model::CreateVpcConnectorRequest& request) const;


        /**
         * <p>Create an App Runner VPC Ingress Connection resource. App Runner requires
         * this resource when you want to associate your App Runner service with an Amazon
         * VPC endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateVpcIngressConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcIngressConnectionOutcome CreateVpcIngressConnection(const Model::CreateVpcIngressConnectionRequest& request) const;


        /**
         * <p>Delete an App Runner automatic scaling configuration resource. You can delete
         * a specific revision or the latest active revision. You can't delete a
         * configuration that's used by one or more App Runner services.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutoScalingConfigurationOutcome DeleteAutoScalingConfiguration(const Model::DeleteAutoScalingConfigurationRequest& request) const;


        /**
         * <p>Delete an App Runner connection. You must first ensure that there are no
         * running App Runner services that use this connection. If there are any, the
         * <code>DeleteConnection</code> action fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;


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
         * <p>Delete an App Runner VPC connector resource. You can't delete a connector
         * that's used by one or more App Runner services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteVpcConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcConnectorOutcome DeleteVpcConnector(const Model::DeleteVpcConnectorRequest& request) const;


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
         * <p>Return a full description of an App Runner automatic scaling configuration
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingConfigurationOutcome DescribeAutoScalingConfiguration(const Model::DescribeAutoScalingConfigurationRequest& request) const;


        /**
         * <p>Return a description of custom domain names that are associated with an App
         * Runner service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeCustomDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomDomainsOutcome DescribeCustomDomains(const Model::DescribeCustomDomainsRequest& request) const;


        /**
         * <p>Return a full description of an App Runner observability configuration
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeObservabilityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObservabilityConfigurationOutcome DescribeObservabilityConfiguration(const Model::DescribeObservabilityConfigurationRequest& request) const;


        /**
         * <p>Return a full description of an App Runner service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeService">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceOutcome DescribeService(const Model::DescribeServiceRequest& request) const;


        /**
         * <p>Return a description of an App Runner VPC connector resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeVpcConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcConnectorOutcome DescribeVpcConnector(const Model::DescribeVpcConnectorRequest& request) const;


        /**
         * <p>Return a full description of an App Runner VPC Ingress Connection
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeVpcIngressConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcIngressConnectionOutcome DescribeVpcIngressConnection(const Model::DescribeVpcIngressConnectionRequest& request) const;


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
         * <p>Returns a list of App Runner connections that are associated with your Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request) const;


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
         * <p>Return a list of operations that occurred on an App Runner service.</p>
         * <p>The resulting list of <a>OperationSummary</a> objects is sorted in reverse
         * chronological order. The first object on the list represents the last started
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;


        /**
         * <p>Returns a list of running App Runner services in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;


        /**
         * <p>List tags that are associated with for an App Runner resource. The response
         * contains a list of tag key-value pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Returns a list of App Runner VPC connectors in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListVpcConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcConnectorsOutcome ListVpcConnectors(const Model::ListVpcConnectorsRequest& request) const;


        /**
         * <p>Return a list of App Runner VPC Ingress Connections in your Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListVpcIngressConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcIngressConnectionsOutcome ListVpcIngressConnections(const Model::ListVpcIngressConnectionsRequest& request) const;


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
         * <p>Resume an active App Runner service. App Runner provisions compute capacity
         * for the service.</p> <p>This is an asynchronous operation. On a successful call,
         * you can use the returned <code>OperationId</code> and the <a>ListOperations</a>
         * call to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ResumeService">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeServiceOutcome ResumeService(const Model::ResumeServiceRequest& request) const;


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
         * <p>Add tags to, or update the tag values of, an App Runner resource. A tag is a
         * key-value pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Remove tags from an App Runner resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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
         * <p>Update an existing App Runner VPC Ingress Connection resource. The VPC
         * Ingress Connection must be in one of the following states to be updated:</p>
         * <ul> <li> <p> AVAILABLE </p> </li> <li> <p> FAILED_CREATION </p> </li> <li> <p>
         * FAILED_UPDATE </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UpdateVpcIngressConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcIngressConnectionOutcome UpdateVpcIngressConnection(const Model::UpdateVpcIngressConnectionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppRunnerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const AppRunnerClientConfiguration& clientConfiguration);

      AppRunnerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppRunnerEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppRunner
} // namespace Aws

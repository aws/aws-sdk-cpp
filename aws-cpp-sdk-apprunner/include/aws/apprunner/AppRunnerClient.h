/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apprunner/model/AssociateCustomDomainResult.h>
#include <aws/apprunner/model/CreateAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/CreateConnectionResult.h>
#include <aws/apprunner/model/CreateObservabilityConfigurationResult.h>
#include <aws/apprunner/model/CreateServiceResult.h>
#include <aws/apprunner/model/CreateVpcConnectorResult.h>
#include <aws/apprunner/model/DeleteAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/DeleteConnectionResult.h>
#include <aws/apprunner/model/DeleteObservabilityConfigurationResult.h>
#include <aws/apprunner/model/DeleteServiceResult.h>
#include <aws/apprunner/model/DeleteVpcConnectorResult.h>
#include <aws/apprunner/model/DescribeAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/DescribeCustomDomainsResult.h>
#include <aws/apprunner/model/DescribeObservabilityConfigurationResult.h>
#include <aws/apprunner/model/DescribeServiceResult.h>
#include <aws/apprunner/model/DescribeVpcConnectorResult.h>
#include <aws/apprunner/model/DisassociateCustomDomainResult.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsResult.h>
#include <aws/apprunner/model/ListConnectionsResult.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsResult.h>
#include <aws/apprunner/model/ListOperationsResult.h>
#include <aws/apprunner/model/ListServicesResult.h>
#include <aws/apprunner/model/ListTagsForResourceResult.h>
#include <aws/apprunner/model/ListVpcConnectorsResult.h>
#include <aws/apprunner/model/PauseServiceResult.h>
#include <aws/apprunner/model/ResumeServiceResult.h>
#include <aws/apprunner/model/StartDeploymentResult.h>
#include <aws/apprunner/model/TagResourceResult.h>
#include <aws/apprunner/model/UntagResourceResult.h>
#include <aws/apprunner/model/UpdateServiceResult.h>
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

namespace AppRunner
{

namespace Model
{
        class AssociateCustomDomainRequest;
        class CreateAutoScalingConfigurationRequest;
        class CreateConnectionRequest;
        class CreateObservabilityConfigurationRequest;
        class CreateServiceRequest;
        class CreateVpcConnectorRequest;
        class DeleteAutoScalingConfigurationRequest;
        class DeleteConnectionRequest;
        class DeleteObservabilityConfigurationRequest;
        class DeleteServiceRequest;
        class DeleteVpcConnectorRequest;
        class DescribeAutoScalingConfigurationRequest;
        class DescribeCustomDomainsRequest;
        class DescribeObservabilityConfigurationRequest;
        class DescribeServiceRequest;
        class DescribeVpcConnectorRequest;
        class DisassociateCustomDomainRequest;
        class ListAutoScalingConfigurationsRequest;
        class ListConnectionsRequest;
        class ListObservabilityConfigurationsRequest;
        class ListOperationsRequest;
        class ListServicesRequest;
        class ListTagsForResourceRequest;
        class ListVpcConnectorsRequest;
        class PauseServiceRequest;
        class ResumeServiceRequest;
        class StartDeploymentRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateServiceRequest;

        typedef Aws::Utils::Outcome<AssociateCustomDomainResult, AppRunnerError> AssociateCustomDomainOutcome;
        typedef Aws::Utils::Outcome<CreateAutoScalingConfigurationResult, AppRunnerError> CreateAutoScalingConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateConnectionResult, AppRunnerError> CreateConnectionOutcome;
        typedef Aws::Utils::Outcome<CreateObservabilityConfigurationResult, AppRunnerError> CreateObservabilityConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateServiceResult, AppRunnerError> CreateServiceOutcome;
        typedef Aws::Utils::Outcome<CreateVpcConnectorResult, AppRunnerError> CreateVpcConnectorOutcome;
        typedef Aws::Utils::Outcome<DeleteAutoScalingConfigurationResult, AppRunnerError> DeleteAutoScalingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionResult, AppRunnerError> DeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteObservabilityConfigurationResult, AppRunnerError> DeleteObservabilityConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceResult, AppRunnerError> DeleteServiceOutcome;
        typedef Aws::Utils::Outcome<DeleteVpcConnectorResult, AppRunnerError> DeleteVpcConnectorOutcome;
        typedef Aws::Utils::Outcome<DescribeAutoScalingConfigurationResult, AppRunnerError> DescribeAutoScalingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeCustomDomainsResult, AppRunnerError> DescribeCustomDomainsOutcome;
        typedef Aws::Utils::Outcome<DescribeObservabilityConfigurationResult, AppRunnerError> DescribeObservabilityConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceResult, AppRunnerError> DescribeServiceOutcome;
        typedef Aws::Utils::Outcome<DescribeVpcConnectorResult, AppRunnerError> DescribeVpcConnectorOutcome;
        typedef Aws::Utils::Outcome<DisassociateCustomDomainResult, AppRunnerError> DisassociateCustomDomainOutcome;
        typedef Aws::Utils::Outcome<ListAutoScalingConfigurationsResult, AppRunnerError> ListAutoScalingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListConnectionsResult, AppRunnerError> ListConnectionsOutcome;
        typedef Aws::Utils::Outcome<ListObservabilityConfigurationsResult, AppRunnerError> ListObservabilityConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListOperationsResult, AppRunnerError> ListOperationsOutcome;
        typedef Aws::Utils::Outcome<ListServicesResult, AppRunnerError> ListServicesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppRunnerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListVpcConnectorsResult, AppRunnerError> ListVpcConnectorsOutcome;
        typedef Aws::Utils::Outcome<PauseServiceResult, AppRunnerError> PauseServiceOutcome;
        typedef Aws::Utils::Outcome<ResumeServiceResult, AppRunnerError> ResumeServiceOutcome;
        typedef Aws::Utils::Outcome<StartDeploymentResult, AppRunnerError> StartDeploymentOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AppRunnerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AppRunnerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceResult, AppRunnerError> UpdateServiceOutcome;

        typedef std::future<AssociateCustomDomainOutcome> AssociateCustomDomainOutcomeCallable;
        typedef std::future<CreateAutoScalingConfigurationOutcome> CreateAutoScalingConfigurationOutcomeCallable;
        typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
        typedef std::future<CreateObservabilityConfigurationOutcome> CreateObservabilityConfigurationOutcomeCallable;
        typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
        typedef std::future<CreateVpcConnectorOutcome> CreateVpcConnectorOutcomeCallable;
        typedef std::future<DeleteAutoScalingConfigurationOutcome> DeleteAutoScalingConfigurationOutcomeCallable;
        typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
        typedef std::future<DeleteObservabilityConfigurationOutcome> DeleteObservabilityConfigurationOutcomeCallable;
        typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
        typedef std::future<DeleteVpcConnectorOutcome> DeleteVpcConnectorOutcomeCallable;
        typedef std::future<DescribeAutoScalingConfigurationOutcome> DescribeAutoScalingConfigurationOutcomeCallable;
        typedef std::future<DescribeCustomDomainsOutcome> DescribeCustomDomainsOutcomeCallable;
        typedef std::future<DescribeObservabilityConfigurationOutcome> DescribeObservabilityConfigurationOutcomeCallable;
        typedef std::future<DescribeServiceOutcome> DescribeServiceOutcomeCallable;
        typedef std::future<DescribeVpcConnectorOutcome> DescribeVpcConnectorOutcomeCallable;
        typedef std::future<DisassociateCustomDomainOutcome> DisassociateCustomDomainOutcomeCallable;
        typedef std::future<ListAutoScalingConfigurationsOutcome> ListAutoScalingConfigurationsOutcomeCallable;
        typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
        typedef std::future<ListObservabilityConfigurationsOutcome> ListObservabilityConfigurationsOutcomeCallable;
        typedef std::future<ListOperationsOutcome> ListOperationsOutcomeCallable;
        typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListVpcConnectorsOutcome> ListVpcConnectorsOutcomeCallable;
        typedef std::future<PauseServiceOutcome> PauseServiceOutcomeCallable;
        typedef std::future<ResumeServiceOutcome> ResumeServiceOutcomeCallable;
        typedef std::future<StartDeploymentOutcome> StartDeploymentOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
} // namespace Model

  class AppRunnerClient;

    typedef std::function<void(const AppRunnerClient*, const Model::AssociateCustomDomainRequest&, const Model::AssociateCustomDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateCustomDomainResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateAutoScalingConfigurationRequest&, const Model::CreateAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateConnectionRequest&, const Model::CreateConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateObservabilityConfigurationRequest&, const Model::CreateObservabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateObservabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::CreateVpcConnectorRequest&, const Model::CreateVpcConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcConnectorResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteAutoScalingConfigurationRequest&, const Model::DeleteAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteObservabilityConfigurationRequest&, const Model::DeleteObservabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObservabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteVpcConnectorRequest&, const Model::DeleteVpcConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcConnectorResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeAutoScalingConfigurationRequest&, const Model::DescribeAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeCustomDomainsRequest&, const Model::DescribeCustomDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomDomainsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeObservabilityConfigurationRequest&, const Model::DescribeObservabilityConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObservabilityConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeServiceRequest&, const Model::DescribeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeVpcConnectorRequest&, const Model::DescribeVpcConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcConnectorResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DisassociateCustomDomainRequest&, const Model::DisassociateCustomDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCustomDomainResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListAutoScalingConfigurationsRequest&, const Model::ListAutoScalingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutoScalingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListObservabilityConfigurationsRequest&, const Model::ListObservabilityConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObservabilityConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListOperationsRequest&, const Model::ListOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOperationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListVpcConnectorsRequest&, const Model::ListVpcConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcConnectorsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::PauseServiceRequest&, const Model::PauseServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PauseServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ResumeServiceRequest&, const Model::ResumeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::StartDeploymentRequest&, const Model::StartDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppRunnerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppRunnerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
        virtual Model::AssociateCustomDomainOutcomeCallable AssociateCustomDomainCallable(const Model::AssociateCustomDomainRequest& request) const;

        /**
         * An Async wrapper for AssociateCustomDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateCustomDomainAsync(const Model::AssociateCustomDomainRequest& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateAutoScalingConfigurationOutcomeCallable CreateAutoScalingConfigurationCallable(const Model::CreateAutoScalingConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAutoScalingConfigurationAsync(const Model::CreateAutoScalingConfigurationRequest& request, const CreateAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateObservabilityConfigurationOutcomeCallable CreateObservabilityConfigurationCallable(const Model::CreateObservabilityConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateObservabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateObservabilityConfigurationAsync(const Model::CreateObservabilityConfigurationRequest& request, const CreateObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request) const;

        /**
         * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateVpcConnectorOutcomeCallable CreateVpcConnectorCallable(const Model::CreateVpcConnectorRequest& request) const;

        /**
         * An Async wrapper for CreateVpcConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcConnectorAsync(const Model::CreateVpcConnectorRequest& request, const CreateVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteAutoScalingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAutoScalingConfigurationOutcomeCallable DeleteAutoScalingConfigurationCallable(const Model::DeleteAutoScalingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAutoScalingConfigurationAsync(const Model::DeleteAutoScalingConfigurationRequest& request, const DeleteAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteObservabilityConfigurationOutcomeCallable DeleteObservabilityConfigurationCallable(const Model::DeleteObservabilityConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteObservabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObservabilityConfigurationAsync(const Model::DeleteObservabilityConfigurationRequest& request, const DeleteObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an App Runner service.</p> <p>This is an asynchronous operation. On a
         * successful call, you can use the returned <code>OperationId</code> and the
         * <a>ListOperations</a> call to track the operation's progress.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteService">AWS
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
         * <p>Delete an App Runner VPC connector resource. You can't delete a connector
         * that's used by one or more App Runner services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteVpcConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcConnectorOutcome DeleteVpcConnector(const Model::DeleteVpcConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcConnectorOutcomeCallable DeleteVpcConnectorCallable(const Model::DeleteVpcConnectorRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcConnectorAsync(const Model::DeleteVpcConnectorRequest& request, const DeleteVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAutoScalingConfigurationOutcomeCallable DescribeAutoScalingConfigurationCallable(const Model::DescribeAutoScalingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeAutoScalingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAutoScalingConfigurationAsync(const Model::DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCustomDomainsOutcomeCallable DescribeCustomDomainsCallable(const Model::DescribeCustomDomainsRequest& request) const;

        /**
         * An Async wrapper for DescribeCustomDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomDomainsAsync(const Model::DescribeCustomDomainsRequest& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeObservabilityConfigurationOutcomeCallable DescribeObservabilityConfigurationCallable(const Model::DescribeObservabilityConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeObservabilityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeObservabilityConfigurationAsync(const Model::DescribeObservabilityConfigurationRequest& request, const DescribeObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeServiceOutcomeCallable DescribeServiceCallable(const Model::DescribeServiceRequest& request) const;

        /**
         * An Async wrapper for DescribeService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceAsync(const Model::DescribeServiceRequest& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeVpcConnectorOutcomeCallable DescribeVpcConnectorCallable(const Model::DescribeVpcConnectorRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcConnectorAsync(const Model::DescribeVpcConnectorRequest& request, const DescribeVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateCustomDomainOutcomeCallable DisassociateCustomDomainCallable(const Model::DisassociateCustomDomainRequest& request) const;

        /**
         * An Async wrapper for DisassociateCustomDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateCustomDomainAsync(const Model::DisassociateCustomDomainRequest& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAutoScalingConfigurationsOutcomeCallable ListAutoScalingConfigurationsCallable(const Model::ListAutoScalingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListAutoScalingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAutoScalingConfigurationsAsync(const Model::ListAutoScalingConfigurationsRequest& request, const ListAutoScalingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const Model::ListConnectionsRequest& request) const;

        /**
         * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListObservabilityConfigurationsOutcomeCallable ListObservabilityConfigurationsCallable(const Model::ListObservabilityConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListObservabilityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObservabilityConfigurationsAsync(const Model::ListObservabilityConfigurationsRequest& request, const ListObservabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListOperationsOutcomeCallable ListOperationsCallable(const Model::ListOperationsRequest& request) const;

        /**
         * An Async wrapper for ListOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOperationsAsync(const Model::ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListServicesAsync(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListVpcConnectorsOutcomeCallable ListVpcConnectorsCallable(const Model::ListVpcConnectorsRequest& request) const;

        /**
         * An Async wrapper for ListVpcConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVpcConnectorsAsync(const Model::ListVpcConnectorsRequest& request, const ListVpcConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PauseServiceOutcomeCallable PauseServiceCallable(const Model::PauseServiceRequest& request) const;

        /**
         * An Async wrapper for PauseService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PauseServiceAsync(const Model::PauseServiceRequest& request, const PauseServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ResumeServiceOutcomeCallable ResumeServiceCallable(const Model::ResumeServiceRequest& request) const;

        /**
         * An Async wrapper for ResumeService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeServiceAsync(const Model::ResumeServiceRequest& request, const ResumeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const Model::StartDeploymentRequest& request) const;

        /**
         * An Async wrapper for StartDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeploymentAsync(const Model::StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from an App Runner resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UntagResource">AWS
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
        virtual Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request) const;

        /**
         * An Async wrapper for UpdateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateCustomDomainAsyncHelper(const Model::AssociateCustomDomainRequest& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAutoScalingConfigurationAsyncHelper(const Model::CreateAutoScalingConfigurationRequest& request, const CreateAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectionAsyncHelper(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateObservabilityConfigurationAsyncHelper(const Model::CreateObservabilityConfigurationRequest& request, const CreateObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceAsyncHelper(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpcConnectorAsyncHelper(const Model::CreateVpcConnectorRequest& request, const CreateVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAutoScalingConfigurationAsyncHelper(const Model::DeleteAutoScalingConfigurationRequest& request, const DeleteAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAsyncHelper(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteObservabilityConfigurationAsyncHelper(const Model::DeleteObservabilityConfigurationRequest& request, const DeleteObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceAsyncHelper(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpcConnectorAsyncHelper(const Model::DeleteVpcConnectorRequest& request, const DeleteVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingConfigurationAsyncHelper(const Model::DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomDomainsAsyncHelper(const Model::DescribeCustomDomainsRequest& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeObservabilityConfigurationAsyncHelper(const Model::DescribeObservabilityConfigurationRequest& request, const DescribeObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceAsyncHelper(const Model::DescribeServiceRequest& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVpcConnectorAsyncHelper(const Model::DescribeVpcConnectorRequest& request, const DescribeVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateCustomDomainAsyncHelper(const Model::DisassociateCustomDomainRequest& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAutoScalingConfigurationsAsyncHelper(const Model::ListAutoScalingConfigurationsRequest& request, const ListAutoScalingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConnectionsAsyncHelper(const Model::ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObservabilityConfigurationsAsyncHelper(const Model::ListObservabilityConfigurationsRequest& request, const ListObservabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOperationsAsyncHelper(const Model::ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVpcConnectorsAsyncHelper(const Model::ListVpcConnectorsRequest& request, const ListVpcConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PauseServiceAsyncHelper(const Model::PauseServiceRequest& request, const PauseServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResumeServiceAsyncHelper(const Model::ResumeServiceRequest& request, const ResumeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDeploymentAsyncHelper(const Model::StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceAsyncHelper(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppRunner
} // namespace Aws

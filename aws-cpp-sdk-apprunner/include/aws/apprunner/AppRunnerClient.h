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
#include <aws/apprunner/model/CreateServiceResult.h>
#include <aws/apprunner/model/DeleteAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/DeleteConnectionResult.h>
#include <aws/apprunner/model/DeleteServiceResult.h>
#include <aws/apprunner/model/DescribeAutoScalingConfigurationResult.h>
#include <aws/apprunner/model/DescribeCustomDomainsResult.h>
#include <aws/apprunner/model/DescribeServiceResult.h>
#include <aws/apprunner/model/DisassociateCustomDomainResult.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsResult.h>
#include <aws/apprunner/model/ListConnectionsResult.h>
#include <aws/apprunner/model/ListOperationsResult.h>
#include <aws/apprunner/model/ListServicesResult.h>
#include <aws/apprunner/model/ListTagsForResourceResult.h>
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
        class CreateServiceRequest;
        class DeleteAutoScalingConfigurationRequest;
        class DeleteConnectionRequest;
        class DeleteServiceRequest;
        class DescribeAutoScalingConfigurationRequest;
        class DescribeCustomDomainsRequest;
        class DescribeServiceRequest;
        class DisassociateCustomDomainRequest;
        class ListAutoScalingConfigurationsRequest;
        class ListConnectionsRequest;
        class ListOperationsRequest;
        class ListServicesRequest;
        class ListTagsForResourceRequest;
        class PauseServiceRequest;
        class ResumeServiceRequest;
        class StartDeploymentRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateServiceRequest;

        typedef Aws::Utils::Outcome<AssociateCustomDomainResult, AppRunnerError> AssociateCustomDomainOutcome;
        typedef Aws::Utils::Outcome<CreateAutoScalingConfigurationResult, AppRunnerError> CreateAutoScalingConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateConnectionResult, AppRunnerError> CreateConnectionOutcome;
        typedef Aws::Utils::Outcome<CreateServiceResult, AppRunnerError> CreateServiceOutcome;
        typedef Aws::Utils::Outcome<DeleteAutoScalingConfigurationResult, AppRunnerError> DeleteAutoScalingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectionResult, AppRunnerError> DeleteConnectionOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceResult, AppRunnerError> DeleteServiceOutcome;
        typedef Aws::Utils::Outcome<DescribeAutoScalingConfigurationResult, AppRunnerError> DescribeAutoScalingConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeCustomDomainsResult, AppRunnerError> DescribeCustomDomainsOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceResult, AppRunnerError> DescribeServiceOutcome;
        typedef Aws::Utils::Outcome<DisassociateCustomDomainResult, AppRunnerError> DisassociateCustomDomainOutcome;
        typedef Aws::Utils::Outcome<ListAutoScalingConfigurationsResult, AppRunnerError> ListAutoScalingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListConnectionsResult, AppRunnerError> ListConnectionsOutcome;
        typedef Aws::Utils::Outcome<ListOperationsResult, AppRunnerError> ListOperationsOutcome;
        typedef Aws::Utils::Outcome<ListServicesResult, AppRunnerError> ListServicesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppRunnerError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PauseServiceResult, AppRunnerError> PauseServiceOutcome;
        typedef Aws::Utils::Outcome<ResumeServiceResult, AppRunnerError> ResumeServiceOutcome;
        typedef Aws::Utils::Outcome<StartDeploymentResult, AppRunnerError> StartDeploymentOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, AppRunnerError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, AppRunnerError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceResult, AppRunnerError> UpdateServiceOutcome;

        typedef std::future<AssociateCustomDomainOutcome> AssociateCustomDomainOutcomeCallable;
        typedef std::future<CreateAutoScalingConfigurationOutcome> CreateAutoScalingConfigurationOutcomeCallable;
        typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
        typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
        typedef std::future<DeleteAutoScalingConfigurationOutcome> DeleteAutoScalingConfigurationOutcomeCallable;
        typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
        typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
        typedef std::future<DescribeAutoScalingConfigurationOutcome> DescribeAutoScalingConfigurationOutcomeCallable;
        typedef std::future<DescribeCustomDomainsOutcome> DescribeCustomDomainsOutcomeCallable;
        typedef std::future<DescribeServiceOutcome> DescribeServiceOutcomeCallable;
        typedef std::future<DisassociateCustomDomainOutcome> DisassociateCustomDomainOutcomeCallable;
        typedef std::future<ListAutoScalingConfigurationsOutcome> ListAutoScalingConfigurationsOutcomeCallable;
        typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
        typedef std::future<ListOperationsOutcome> ListOperationsOutcomeCallable;
        typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
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
    typedef std::function<void(const AppRunnerClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteAutoScalingConfigurationRequest&, const Model::DeleteAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteConnectionRequest&, const Model::DeleteConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeAutoScalingConfigurationRequest&, const Model::DescribeAutoScalingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutoScalingConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeCustomDomainsRequest&, const Model::DescribeCustomDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCustomDomainsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DescribeServiceRequest&, const Model::DescribeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::DisassociateCustomDomainRequest&, const Model::DisassociateCustomDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateCustomDomainResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListAutoScalingConfigurationsRequest&, const Model::ListAutoScalingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutoScalingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectionsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListOperationsRequest&, const Model::ListOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOperationsResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const AppRunnerClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
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
        AppRunnerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateCustomDomainOutcomeCallable AssociateCustomDomainCallable(const Model::AssociateCustomDomainRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateCustomDomainAsync(const Model::AssociateCustomDomainRequest& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create an App Runner automatic scaling configuration resource. App Runner
         * requires this resource when you create App Runner services that require
         * non-default auto scaling settings. You can share an auto scaling configuration
         * across multiple services.</p> <p>Create multiple revisions of a configuration by
         * using the same <code>AutoScalingConfigurationName</code> and different
         * <code>AutoScalingConfigurationRevision</code> values. When you create a service,
         * you can set it to use the latest active revision of an auto scaling
         * configuration or a specific revision.</p> <p>Configure a higher
         * <code>MinSize</code> to increase the spread of your App Runner service over more
         * Availability Zones in the Amazon Web Services Region. The tradeoff is a higher
         * minimal cost.</p> <p>Configure a lower <code>MaxSize</code> to control your
         * cost. The tradeoff is lower responsiveness during peak demand.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAutoScalingConfigurationOutcome CreateAutoScalingConfiguration(const Model::CreateAutoScalingConfigurationRequest& request) const;

        /**
         * <p>Create an App Runner automatic scaling configuration resource. App Runner
         * requires this resource when you create App Runner services that require
         * non-default auto scaling settings. You can share an auto scaling configuration
         * across multiple services.</p> <p>Create multiple revisions of a configuration by
         * using the same <code>AutoScalingConfigurationName</code> and different
         * <code>AutoScalingConfigurationRevision</code> values. When you create a service,
         * you can set it to use the latest active revision of an auto scaling
         * configuration or a specific revision.</p> <p>Configure a higher
         * <code>MinSize</code> to increase the spread of your App Runner service over more
         * Availability Zones in the Amazon Web Services Region. The tradeoff is a higher
         * minimal cost.</p> <p>Configure a lower <code>MaxSize</code> to control your
         * cost. The tradeoff is lower responsiveness during peak demand.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateAutoScalingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAutoScalingConfigurationOutcomeCallable CreateAutoScalingConfigurationCallable(const Model::CreateAutoScalingConfigurationRequest& request) const;

        /**
         * <p>Create an App Runner automatic scaling configuration resource. App Runner
         * requires this resource when you create App Runner services that require
         * non-default auto scaling settings. You can share an auto scaling configuration
         * across multiple services.</p> <p>Create multiple revisions of a configuration by
         * using the same <code>AutoScalingConfigurationName</code> and different
         * <code>AutoScalingConfigurationRevision</code> values. When you create a service,
         * you can set it to use the latest active revision of an auto scaling
         * configuration or a specific revision.</p> <p>Configure a higher
         * <code>MinSize</code> to increase the spread of your App Runner service over more
         * Availability Zones in the Amazon Web Services Region. The tradeoff is a higher
         * minimal cost.</p> <p>Configure a lower <code>MaxSize</code> to control your
         * cost. The tradeoff is lower responsiveness during peak demand.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateAutoScalingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Create an App Runner connection resource. App Runner requires a connection
         * resource when you create App Runner services that access private repositories
         * from certain third-party providers. You can share a connection across multiple
         * services.</p> <p>A connection resource is needed to access GitHub repositories.
         * GitHub requires a user interface approval process through the App Runner console
         * before you can use the connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * <p>Create an App Runner connection resource. App Runner requires a connection
         * resource when you create App Runner services that access private repositories
         * from certain third-party providers. You can share a connection across multiple
         * services.</p> <p>A connection resource is needed to access GitHub repositories.
         * GitHub requires a user interface approval process through the App Runner console
         * before you can use the connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Create an App Runner service. After the service is created, the action also
         * automatically starts a deployment.</p> <p>This is an asynchronous operation. On
         * a successful call, you can use the returned <code>OperationId</code> and the <a
         * href="https://docs.aws.amazon.com/apprunner/latest/api/API_ListOperations.html">ListOperations</a>
         * call to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request) const;

        /**
         * <p>Create an App Runner service. After the service is created, the action also
         * automatically starts a deployment.</p> <p>This is an asynchronous operation. On
         * a successful call, you can use the returned <code>OperationId</code> and the <a
         * href="https://docs.aws.amazon.com/apprunner/latest/api/API_ListOperations.html">ListOperations</a>
         * call to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CreateService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Delete an App Runner automatic scaling configuration resource. You can delete
         * a specific revision or the latest active revision. You can't delete a
         * configuration that's used by one or more App Runner services.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteAutoScalingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAutoScalingConfigurationOutcomeCallable DeleteAutoScalingConfigurationCallable(const Model::DeleteAutoScalingConfigurationRequest& request) const;

        /**
         * <p>Delete an App Runner automatic scaling configuration resource. You can delete
         * a specific revision or the latest active revision. You can't delete a
         * configuration that's used by one or more App Runner services.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteAutoScalingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Delete an App Runner connection. You must first ensure that there are no
         * running App Runner services that use this connection. If there are any, the
         * <code>DeleteConnection</code> action fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * <p>Delete an App Runner connection. You must first ensure that there are no
         * running App Runner services that use this connection. If there are any, the
         * <code>DeleteConnection</code> action fails.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteConnection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Delete an App Runner service.</p> <p>This is an asynchronous operation. On a
         * successful call, you can use the returned <code>OperationId</code> and the
         * <a>ListOperations</a> call to track the operation's progress.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request) const;

        /**
         * <p>Delete an App Runner service.</p> <p>This is an asynchronous operation. On a
         * successful call, you can use the returned <code>OperationId</code> and the
         * <a>ListOperations</a> call to track the operation's progress.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DeleteService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return a full description of an App Runner automatic scaling configuration
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeAutoScalingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAutoScalingConfigurationOutcome DescribeAutoScalingConfiguration(const Model::DescribeAutoScalingConfigurationRequest& request) const;

        /**
         * <p>Return a full description of an App Runner automatic scaling configuration
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeAutoScalingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAutoScalingConfigurationOutcomeCallable DescribeAutoScalingConfigurationCallable(const Model::DescribeAutoScalingConfigurationRequest& request) const;

        /**
         * <p>Return a full description of an App Runner automatic scaling configuration
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeAutoScalingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Return a description of custom domain names that are associated with an App
         * Runner service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeCustomDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomDomainsOutcomeCallable DescribeCustomDomainsCallable(const Model::DescribeCustomDomainsRequest& request) const;

        /**
         * <p>Return a description of custom domain names that are associated with an App
         * Runner service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeCustomDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomDomainsAsync(const Model::DescribeCustomDomainsRequest& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Return a full description of an App Runner service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeService">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceOutcome DescribeService(const Model::DescribeServiceRequest& request) const;

        /**
         * <p>Return a full description of an App Runner service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceOutcomeCallable DescribeServiceCallable(const Model::DescribeServiceRequest& request) const;

        /**
         * <p>Return a full description of an App Runner service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DescribeService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceAsync(const Model::DescribeServiceRequest& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Disassociate a custom domain name from an App Runner service.</p>
         * <p>Certificates tracking domain validity are associated with a custom domain and
         * are stored in <a href="https://docs.aws.amazon.com/acm/latest/userguide">AWS
         * Certificate Manager (ACM)</a>. These certificates aren't deleted as part of this
         * action. App Runner delays certificate deletion for 30 days after a domain is
         * disassociated from your service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DisassociateCustomDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateCustomDomainOutcomeCallable DisassociateCustomDomainCallable(const Model::DisassociateCustomDomainRequest& request) const;

        /**
         * <p>Disassociate a custom domain name from an App Runner service.</p>
         * <p>Certificates tracking domain validity are associated with a custom domain and
         * are stored in <a href="https://docs.aws.amazon.com/acm/latest/userguide">AWS
         * Certificate Manager (ACM)</a>. These certificates aren't deleted as part of this
         * action. App Runner delays certificate deletion for 30 days after a domain is
         * disassociated from your service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/DisassociateCustomDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateCustomDomainAsync(const Model::DisassociateCustomDomainRequest& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of App Runner automatic scaling configurations in your Amazon
         * Web Services account. You can query the revisions for a specific configuration
         * name or the revisions for all configurations in your account. You can optionally
         * query only the latest revision of each requested name.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListAutoScalingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutoScalingConfigurationsOutcome ListAutoScalingConfigurations(const Model::ListAutoScalingConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of App Runner automatic scaling configurations in your Amazon
         * Web Services account. You can query the revisions for a specific configuration
         * name or the revisions for all configurations in your account. You can optionally
         * query only the latest revision of each requested name.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListAutoScalingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAutoScalingConfigurationsOutcomeCallable ListAutoScalingConfigurationsCallable(const Model::ListAutoScalingConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of App Runner automatic scaling configurations in your Amazon
         * Web Services account. You can query the revisions for a specific configuration
         * name or the revisions for all configurations in your account. You can optionally
         * query only the latest revision of each requested name.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListAutoScalingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of App Runner connections that are associated with your Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListConnections">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const Model::ListConnectionsRequest& request) const;

        /**
         * <p>Returns a list of App Runner connections that are associated with your Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListConnections">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Return a list of operations that occurred on an App Runner service.</p>
         * <p>The resulting list of <a>OperationSummary</a> objects is sorted in reverse
         * chronological order. The first object on the list represents the last started
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListOperations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOperationsOutcomeCallable ListOperationsCallable(const Model::ListOperationsRequest& request) const;

        /**
         * <p>Return a list of operations that occurred on an App Runner service.</p>
         * <p>The resulting list of <a>OperationSummary</a> objects is sorted in reverse
         * chronological order. The first object on the list represents the last started
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListOperations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of running App Runner services in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListServicesOutcomeCallable ListServicesCallable(const Model::ListServicesRequest& request) const;

        /**
         * <p>Returns a list of running App Runner services in your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListServices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>List tags that are associated with for an App Runner resource. The response
         * contains a list of tag key-value pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List tags that are associated with for an App Runner resource. The response
         * contains a list of tag key-value pairs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Pause an active App Runner service. App Runner reduces compute capacity for
         * the service to zero and loses state (for example, ephemeral storage is
         * removed).</p> <p>This is an asynchronous operation. On a successful call, you
         * can use the returned <code>OperationId</code> and the <a>ListOperations</a> call
         * to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/PauseService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PauseServiceOutcomeCallable PauseServiceCallable(const Model::PauseServiceRequest& request) const;

        /**
         * <p>Pause an active App Runner service. App Runner reduces compute capacity for
         * the service to zero and loses state (for example, ephemeral storage is
         * removed).</p> <p>This is an asynchronous operation. On a successful call, you
         * can use the returned <code>OperationId</code> and the <a>ListOperations</a> call
         * to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/PauseService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Resume an active App Runner service. App Runner provisions compute capacity
         * for the service.</p> <p>This is an asynchronous operation. On a successful call,
         * you can use the returned <code>OperationId</code> and the <a>ListOperations</a>
         * call to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ResumeService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeServiceOutcomeCallable ResumeServiceCallable(const Model::ResumeServiceRequest& request) const;

        /**
         * <p>Resume an active App Runner service. App Runner provisions compute capacity
         * for the service.</p> <p>This is an asynchronous operation. On a successful call,
         * you can use the returned <code>OperationId</code> and the <a>ListOperations</a>
         * call to track the operation's progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ResumeService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const Model::StartDeploymentRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Add tags to, or update the tag values of, an App Runner resource. A tag is a
         * key-value pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add tags to, or update the tag values of, an App Runner resource. A tag is a
         * key-value pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from an App Runner resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags from an App Runner resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove tags from an App Runner resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateCustomDomainAsyncHelper(const Model::AssociateCustomDomainRequest& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAutoScalingConfigurationAsyncHelper(const Model::CreateAutoScalingConfigurationRequest& request, const CreateAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectionAsyncHelper(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceAsyncHelper(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAutoScalingConfigurationAsyncHelper(const Model::DeleteAutoScalingConfigurationRequest& request, const DeleteAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectionAsyncHelper(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceAsyncHelper(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAutoScalingConfigurationAsyncHelper(const Model::DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCustomDomainsAsyncHelper(const Model::DescribeCustomDomainsRequest& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceAsyncHelper(const Model::DescribeServiceRequest& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateCustomDomainAsyncHelper(const Model::DisassociateCustomDomainRequest& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAutoScalingConfigurationsAsyncHelper(const Model::ListAutoScalingConfigurationsRequest& request, const ListAutoScalingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConnectionsAsyncHelper(const Model::ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOperationsAsyncHelper(const Model::ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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

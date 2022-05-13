/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migration-hub-refactor-spaces/model/CreateApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/CreateServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/DeleteServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetApplicationResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetEnvironmentResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetRouteResult.h>
#include <aws/migration-hub-refactor-spaces/model/GetServiceResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListApplicationsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentsResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListRoutesResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListServicesResult.h>
#include <aws/migration-hub-refactor-spaces/model/ListTagsForResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/PutResourcePolicyResult.h>
#include <aws/migration-hub-refactor-spaces/model/TagResourceResult.h>
#include <aws/migration-hub-refactor-spaces/model/UntagResourceResult.h>
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

namespace MigrationHubRefactorSpaces
{

namespace Model
{
        class CreateApplicationRequest;
        class CreateEnvironmentRequest;
        class CreateRouteRequest;
        class CreateServiceRequest;
        class DeleteApplicationRequest;
        class DeleteEnvironmentRequest;
        class DeleteResourcePolicyRequest;
        class DeleteRouteRequest;
        class DeleteServiceRequest;
        class GetApplicationRequest;
        class GetEnvironmentRequest;
        class GetResourcePolicyRequest;
        class GetRouteRequest;
        class GetServiceRequest;
        class ListApplicationsRequest;
        class ListEnvironmentVpcsRequest;
        class ListEnvironmentsRequest;
        class ListRoutesRequest;
        class ListServicesRequest;
        class ListTagsForResourceRequest;
        class PutResourcePolicyRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CreateApplicationResult, MigrationHubRefactorSpacesError> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateEnvironmentResult, MigrationHubRefactorSpacesError> CreateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<CreateRouteResult, MigrationHubRefactorSpacesError> CreateRouteOutcome;
        typedef Aws::Utils::Outcome<CreateServiceResult, MigrationHubRefactorSpacesError> CreateServiceOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, MigrationHubRefactorSpacesError> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteEnvironmentResult, MigrationHubRefactorSpacesError> DeleteEnvironmentOutcome;
        typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, MigrationHubRefactorSpacesError> DeleteResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteRouteResult, MigrationHubRefactorSpacesError> DeleteRouteOutcome;
        typedef Aws::Utils::Outcome<DeleteServiceResult, MigrationHubRefactorSpacesError> DeleteServiceOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, MigrationHubRefactorSpacesError> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetEnvironmentResult, MigrationHubRefactorSpacesError> GetEnvironmentOutcome;
        typedef Aws::Utils::Outcome<GetResourcePolicyResult, MigrationHubRefactorSpacesError> GetResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<GetRouteResult, MigrationHubRefactorSpacesError> GetRouteOutcome;
        typedef Aws::Utils::Outcome<GetServiceResult, MigrationHubRefactorSpacesError> GetServiceOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, MigrationHubRefactorSpacesError> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListEnvironmentVpcsResult, MigrationHubRefactorSpacesError> ListEnvironmentVpcsOutcome;
        typedef Aws::Utils::Outcome<ListEnvironmentsResult, MigrationHubRefactorSpacesError> ListEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<ListRoutesResult, MigrationHubRefactorSpacesError> ListRoutesOutcome;
        typedef Aws::Utils::Outcome<ListServicesResult, MigrationHubRefactorSpacesError> ListServicesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, MigrationHubRefactorSpacesError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PutResourcePolicyResult, MigrationHubRefactorSpacesError> PutResourcePolicyOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, MigrationHubRefactorSpacesError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, MigrationHubRefactorSpacesError> UntagResourceOutcome;

        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
        typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
        typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
        typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
        typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
        typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
        typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
        typedef std::future<GetRouteOutcome> GetRouteOutcomeCallable;
        typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListEnvironmentVpcsOutcome> ListEnvironmentVpcsOutcomeCallable;
        typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
        typedef std::future<ListRoutesOutcome> ListRoutesOutcomeCallable;
        typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class MigrationHubRefactorSpacesClient;

    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetRouteRequest&, const Model::GetRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRouteResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListEnvironmentVpcsRequest&, const Model::ListEnvironmentVpcsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentVpcsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListRoutesRequest&, const Model::ListRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MigrationHubRefactorSpacesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p><fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname></p>
   * <pre><code> &lt;p&gt;This API reference provides descriptions, syntax, and other
   * details about each of the actions and data types for Amazon Web Services
   * Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows
   * the API request parameters and the response. Alternatively, you can use one of
   * the Amazon Web Services SDKs to access an API that is tailored to the
   * programming language or platform that you're using. For more information, see
   * &lt;a href=&quot;https://aws.amazon.com/tools/#SDKs&quot;&gt;Amazon Web Services
   * SDKs&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;To share Refactor Spaces environments with
   * other Amazon Web Services accounts or with Organizations and their OUs, use
   * Resource Access Manager's &lt;code&gt;CreateResourceShare&lt;/code&gt; API. See
   * &lt;a
   * href=&quot;https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html&quot;&gt;CreateResourceShare&lt;/a&gt;
   * in the &lt;i&gt;Amazon Web Services RAM API Reference&lt;/i&gt;.&lt;/p&gt;
   * </code></pre>
   */
  class AWS_MIGRATIONHUBREFACTORSPACES_API MigrationHubRefactorSpacesClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubRefactorSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~MigrationHubRefactorSpacesClient();


        /**
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces application. The
         * account that owns the environment also owns the applications created inside the
         * environment, regardless of the account that creates the application. Refactor
         * Spaces provisions an Amazon API Gateway, API Gateway VPC link, and Network Load
         * Balancer for the application proxy inside your account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateApplication">AWS
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
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces environment. The
         * caller owns the environment resource, and all Refactor Spaces applications,
         * services, and routes created within the environment. They are referred to as the
         * <i>environment owner</i>. The environment owner has cross-account visibility and
         * control of Refactor Spaces resources that are added to the environment by other
         * accounts that the environment is shared with. When creating an environment,
         * Refactor Spaces provisions a transit gateway in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces route. The
         * account owner of the service resource is always the environment owner,
         * regardless of which account creates the route. Routes target a service in the
         * application. If an application does not have any routes, then the first route
         * must be created as a <code>DEFAULT</code> <code>RouteType</code>.</p> <p>When
         * you create a route, Refactor Spaces configures the Amazon API Gateway to send
         * traffic to the target service as follows:</p> <ul> <li> <p>If the service has a
         * URL endpoint, and the endpoint resolves to a private IP address, Refactor Spaces
         * routes traffic using the API Gateway VPC link. </p> </li> <li> <p>If the service
         * has a URL endpoint, and the endpoint resolves to a public IP address, Refactor
         * Spaces routes traffic over the public internet.</p> </li> <li> <p>If the service
         * has an Lambda function endpoint, then Refactor Spaces configures the Lambda
         * function's resource policy to allow the application's API Gateway to invoke the
         * function.</p> </li> </ul> <p>A one-time health check is performed on the service
         * when the route is created. If the health check fails, the route transitions to
         * <code>FAILED</code>, and no traffic is sent to the service.</p> <p>For Lambda
         * functions, the Lambda function state is checked. If the function is not active,
         * the function configuration is updated so that Lambda resources are provisioned.
         * If the Lambda state is <code>Failed</code>, then the route creation fails. For
         * more information, see the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/API_GetFunctionConfiguration.html#SSS-GetFunctionConfiguration-response-State">GetFunctionConfiguration's
         * State response parameter</a> in the <i>Lambda Developer Guide</i>.</p> <p>For
         * public URLs, a connection is opened to the public endpoint. If the URL is not
         * reachable, the health check fails. For private URLs, a target group is created
         * and the target group health check is run.</p> <p>The
         * <code>HealthCheckProtocol</code>, <code>HealthCheckPort</code>, and
         * <code>HealthCheckPath</code> are the same protocol, port, and path specified in
         * the URL or health URL, if used. All other settings use the default values, as
         * described in <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/target-group-health-checks.html">Health
         * checks for your target groups</a>. The health check is considered successful if
         * at least one target within the target group transitions to a healthy state.</p>
         * <p>Services can have HTTP or HTTPS URL endpoints. For HTTPS URLs,
         * publicly-signed certificates are supported. Private Certificate Authorities
         * (CAs) are permitted only if the CA's domain is publicly
         * resolvable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * An Async wrapper for CreateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces service. The
         * account owner of the service is always the environment owner, regardless of
         * which account in the environment creates the service. Services have either a URL
         * endpoint in a virtual private cloud (VPC), or a Lambda function endpoint.</p>
         *  <p>If an Amazon Web Services resource is launched in a service VPC,
         * and you want it to be accessible to all of an environment’s services with VPCs
         * and routes, apply the <code>RefactorSpacesSecurityGroup</code> to the resource.
         * Alternatively, to add more cross-account constraints, apply your own security
         * group.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateService">AWS
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
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces application.
         * Before you can delete an application, you must first delete any services or
         * routes within the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces environment.
         * Before you can delete an environment, you must first delete any applications and
         * services within the environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the resource policy set for the environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces
         * route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request) const;

        /**
         * An Async wrapper for DeleteRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteService">AWS
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
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const Model::GetEnvironmentRequest& request) const;

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentAsync(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the resource-based permission policy that is set for the given
         * environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteOutcome GetRoute(const Model::GetRouteRequest& request) const;

        /**
         * A Callable wrapper for GetRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRouteOutcomeCallable GetRouteCallable(const Model::GetRouteRequest& request) const;

        /**
         * An Async wrapper for GetRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRouteAsync(const Model::GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetService">AWS
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
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces applications
         * within an environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all Amazon Web Services Migration Hub Refactor Spaces service virtual
         * private clouds (VPCs) that are part of the environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListEnvironmentVpcs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentVpcsOutcome ListEnvironmentVpcs(const Model::ListEnvironmentVpcsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentVpcs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentVpcsOutcomeCallable ListEnvironmentVpcsCallable(const Model::ListEnvironmentVpcsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironmentVpcs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentVpcsAsync(const Model::ListEnvironmentVpcsRequest& request, const ListEnvironmentVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists Amazon Web Services Migration Hub Refactor Spaces environments owned by
         * a caller account or shared with the caller account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces routes within
         * an application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutesOutcome ListRoutes(const Model::ListRoutesRequest& request) const;

        /**
         * A Callable wrapper for ListRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutesOutcomeCallable ListRoutesCallable(const Model::ListRoutesRequest& request) const;

        /**
         * An Async wrapper for ListRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutesAsync(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces services
         * within an application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListServices">AWS
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
         * <p>Lists the tags of a resource. The caller account must be the same as the
         * resource’s <code>OwnerAccountId</code>. Listing tags in other accounts is not
         * supported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListTagsForResource">AWS
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
         * <p>Attaches a resource-based permission policy to the Amazon Web Services
         * Migration Hub Refactor Spaces environment. The policy must contain the same
         * actions and condition statements as the
         * <code>arn:aws:ram::aws:permission/AWSRAMDefaultPermissionRefactorSpacesEnvironment</code>
         * permission in Resource Access Manager. The policy must not contain new lines or
         * blank lines. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the tags of a given resource. Tags are metadata which can be used to
         * manage a resource. To tag a resource, the caller account must be the same as the
         * resource’s <code>OwnerAccountId</code>. Tagging resources in other accounts is
         * not supported.</p>  <p>Amazon Web Services Migration Hub Refactor Spaces
         * does not propagate tags to orchestrated resources, such as an environment’s
         * transit gateway.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/TagResource">AWS
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
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource. To untag a resource, the caller account must
         * be the same as the resource’s <code>OwnerAccountId</code>. Untagging resources
         * across accounts is not supported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UntagResource">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEnvironmentAsyncHelper(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteAsyncHelper(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateServiceAsyncHelper(const Model::CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEnvironmentAsyncHelper(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourcePolicyAsyncHelper(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteAsyncHelper(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServiceAsyncHelper(const Model::DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationAsyncHelper(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEnvironmentAsyncHelper(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourcePolicyAsyncHelper(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRouteAsyncHelper(const Model::GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceAsyncHelper(const Model::GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEnvironmentVpcsAsyncHelper(const Model::ListEnvironmentVpcsRequest& request, const ListEnvironmentVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEnvironmentsAsyncHelper(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutesAsyncHelper(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListServicesAsyncHelper(const Model::ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutResourcePolicyAsyncHelper(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace MigrationHubRefactorSpaces
} // namespace Aws

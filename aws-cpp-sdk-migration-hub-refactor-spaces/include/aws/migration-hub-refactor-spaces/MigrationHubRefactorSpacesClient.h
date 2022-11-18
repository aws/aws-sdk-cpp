/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesServiceClientModel.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesLegacyAsyncMacros.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration = Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration(),
                                         std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                                         std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG),
                                         const Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration = Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubRefactorSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubRefactorSpacesEndpointProvider>(ALLOCATION_TAG),
                                         const Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration = Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubRefactorSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubRefactorSpacesClient();


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
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces route. The
         * account owner of the service resource is always the environment owner,
         * regardless of which account creates the route. Routes target a service in the
         * application. If an application does not have any routes, then the first route
         * must be created as a <code>DEFAULT</code> <code>RouteType</code>.</p> <p>When
         * created, the default route defaults to an active state so state is not a
         * required input. However, like all other state values the state of the default
         * route can be updated after creation, but only when all other routes are also
         * inactive. Conversely, no route can be active without the default route also
         * being active.</p> <p>When you create a route, Refactor Spaces configures the
         * Amazon API Gateway to send traffic to the target service as follows:</p> <ul>
         * <li> <p>If the service has a URL endpoint, and the endpoint resolves to a
         * private IP address, Refactor Spaces routes traffic using the API Gateway VPC
         * link. </p> </li> <li> <p>If the service has a URL endpoint, and the endpoint
         * resolves to a public IP address, Refactor Spaces routes traffic over the public
         * internet.</p> </li> <li> <p>If the service has an Lambda function endpoint, then
         * Refactor Spaces configures the Lambda function's resource policy to allow the
         * application's API Gateway to invoke the function.</p> </li> </ul> <p>A one-time
         * health check is performed on the service when either the route is updated from
         * inactive to active, or when it is created with an active state. If the health
         * check fails, the route transitions the route state to <code>FAILED</code>, an
         * error code of <code>SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE</code> is provided,
         * and no traffic is sent to the service.</p> <p>For Lambda functions, the Lambda
         * function state is checked. If the function is not active, the function
         * configuration is updated so that Lambda resources are provisioned. If the Lambda
         * state is <code>Failed</code>, then the route creation fails. For more
         * information, see the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/API_GetFunctionConfiguration.html#SSS-GetFunctionConfiguration-response-State">GetFunctionConfiguration's
         * State response parameter</a> in the <i>Lambda Developer Guide</i>.</p> <p>For
         * Lambda endpoints, a check is performed to determine that a Lambda function with
         * the specified ARN exists. If it does not exist, the health check fails. For
         * public URLs, a connection is opened to the public endpoint. If the URL is not
         * reachable, the health check fails. </p> <p>For private URLS, a target group is
         * created on the Elastic Load Balancing and the target group health check is run.
         * The <code>HealthCheckProtocol</code>, <code>HealthCheckPort</code>, and
         * <code>HealthCheckPath</code> are the same protocol, port, and path specified in
         * the URL or health URL, if used. All other settings use the default values, as
         * described in <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/target-group-health-checks.html">Health
         * checks for your target groups</a>. The health check is considered successful if
         * at least one target within the target group transitions to a healthy state.</p>
         * <p>Services can have HTTP or HTTPS URL endpoints. For HTTPS URLs,
         * publicly-signed certificates are supported. Private Certificate Authorities
         * (CAs) are permitted only if the CA's domain is also publicly
         * resolvable.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;


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
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces application.
         * Before you can delete an application, you must first delete any services or
         * routes within the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;


        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces environment.
         * Before you can delete an environment, you must first delete any applications and
         * services within the environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;


        /**
         * <p>Deletes the resource policy set for the environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces
         * route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;


        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;


        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;


        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;


        /**
         * <p>Gets the resource-based permission policy that is set for the given
         * environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;


        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteOutcome GetRoute(const Model::GetRouteRequest& request) const;


        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;


        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces applications
         * within an environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;


        /**
         * <p>Lists all Amazon Web Services Migration Hub Refactor Spaces service virtual
         * private clouds (VPCs) that are part of the environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListEnvironmentVpcs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentVpcsOutcome ListEnvironmentVpcs(const Model::ListEnvironmentVpcsRequest& request) const;


        /**
         * <p>Lists Amazon Web Services Migration Hub Refactor Spaces environments owned by
         * a caller account or shared with the caller account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;


        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces routes within
         * an application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutesOutcome ListRoutes(const Model::ListRoutesRequest& request) const;


        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces services
         * within an application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;


        /**
         * <p>Lists the tags of a resource. The caller account must be the same as the
         * resource’s <code>OwnerAccountId</code>. Listing tags in other accounts is not
         * supported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource. To untag a resource, the caller account must
         * be the same as the resource’s <code>OwnerAccountId</code>. Untagging resources
         * across accounts is not supported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p> Updates an Amazon Web Services Migration Hub Refactor Spaces route.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MigrationHubRefactorSpacesClientConfiguration& clientConfiguration);

      MigrationHubRefactorSpacesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubRefactorSpaces
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appconfig/model/CreateApplicationResult.h>
#include <aws/appconfig/model/CreateConfigurationProfileResult.h>
#include <aws/appconfig/model/CreateDeploymentStrategyResult.h>
#include <aws/appconfig/model/CreateEnvironmentResult.h>
#include <aws/appconfig/model/CreateHostedConfigurationVersionResult.h>
#include <aws/appconfig/model/GetApplicationResult.h>
#include <aws/appconfig/model/GetConfigurationProfileResult.h>
#include <aws/appconfig/model/GetDeploymentResult.h>
#include <aws/appconfig/model/GetDeploymentStrategyResult.h>
#include <aws/appconfig/model/GetEnvironmentResult.h>
#include <aws/appconfig/model/GetHostedConfigurationVersionResult.h>
#include <aws/appconfig/model/ListApplicationsResult.h>
#include <aws/appconfig/model/ListConfigurationProfilesResult.h>
#include <aws/appconfig/model/ListDeploymentStrategiesResult.h>
#include <aws/appconfig/model/ListDeploymentsResult.h>
#include <aws/appconfig/model/ListEnvironmentsResult.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsResult.h>
#include <aws/appconfig/model/ListTagsForResourceResult.h>
#include <aws/appconfig/model/StartDeploymentResult.h>
#include <aws/appconfig/model/StopDeploymentResult.h>
#include <aws/appconfig/model/UpdateApplicationResult.h>
#include <aws/appconfig/model/UpdateConfigurationProfileResult.h>
#include <aws/appconfig/model/UpdateDeploymentStrategyResult.h>
#include <aws/appconfig/model/UpdateEnvironmentResult.h>
#include <aws/core/NoResult.h>
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

namespace AppConfig
{

namespace Model
{
        class CreateApplicationRequest;
        class CreateConfigurationProfileRequest;
        class CreateDeploymentStrategyRequest;
        class CreateEnvironmentRequest;
        class CreateHostedConfigurationVersionRequest;
        class DeleteApplicationRequest;
        class DeleteConfigurationProfileRequest;
        class DeleteDeploymentStrategyRequest;
        class DeleteEnvironmentRequest;
        class DeleteHostedConfigurationVersionRequest;
        class GetApplicationRequest;
        class GetConfigurationProfileRequest;
        class GetDeploymentRequest;
        class GetDeploymentStrategyRequest;
        class GetEnvironmentRequest;
        class GetHostedConfigurationVersionRequest;
        class ListApplicationsRequest;
        class ListConfigurationProfilesRequest;
        class ListDeploymentStrategiesRequest;
        class ListDeploymentsRequest;
        class ListEnvironmentsRequest;
        class ListHostedConfigurationVersionsRequest;
        class ListTagsForResourceRequest;
        class StartDeploymentRequest;
        class StopDeploymentRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationRequest;
        class UpdateConfigurationProfileRequest;
        class UpdateDeploymentStrategyRequest;
        class UpdateEnvironmentRequest;
        class ValidateConfigurationRequest;

        typedef Aws::Utils::Outcome<CreateApplicationResult, AppConfigError> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationProfileResult, AppConfigError> CreateConfigurationProfileOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentStrategyResult, AppConfigError> CreateDeploymentStrategyOutcome;
        typedef Aws::Utils::Outcome<CreateEnvironmentResult, AppConfigError> CreateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<CreateHostedConfigurationVersionResult, AppConfigError> CreateHostedConfigurationVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteConfigurationProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteDeploymentStrategyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteEnvironmentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteHostedConfigurationVersionOutcome;
        typedef Aws::Utils::Outcome<GetApplicationResult, AppConfigError> GetApplicationOutcome;
        typedef Aws::Utils::Outcome<GetConfigurationProfileResult, AppConfigError> GetConfigurationProfileOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentResult, AppConfigError> GetDeploymentOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentStrategyResult, AppConfigError> GetDeploymentStrategyOutcome;
        typedef Aws::Utils::Outcome<GetEnvironmentResult, AppConfigError> GetEnvironmentOutcome;
        typedef Aws::Utils::Outcome<GetHostedConfigurationVersionResult, AppConfigError> GetHostedConfigurationVersionOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, AppConfigError> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationProfilesResult, AppConfigError> ListConfigurationProfilesOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentStrategiesResult, AppConfigError> ListDeploymentStrategiesOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentsResult, AppConfigError> ListDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListEnvironmentsResult, AppConfigError> ListEnvironmentsOutcome;
        typedef Aws::Utils::Outcome<ListHostedConfigurationVersionsResult, AppConfigError> ListHostedConfigurationVersionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppConfigError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<StartDeploymentResult, AppConfigError> StartDeploymentOutcome;
        typedef Aws::Utils::Outcome<StopDeploymentResult, AppConfigError> StopDeploymentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, AppConfigError> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigurationProfileResult, AppConfigError> UpdateConfigurationProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateDeploymentStrategyResult, AppConfigError> UpdateDeploymentStrategyOutcome;
        typedef Aws::Utils::Outcome<UpdateEnvironmentResult, AppConfigError> UpdateEnvironmentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> ValidateConfigurationOutcome;

        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateConfigurationProfileOutcome> CreateConfigurationProfileOutcomeCallable;
        typedef std::future<CreateDeploymentStrategyOutcome> CreateDeploymentStrategyOutcomeCallable;
        typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
        typedef std::future<CreateHostedConfigurationVersionOutcome> CreateHostedConfigurationVersionOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteConfigurationProfileOutcome> DeleteConfigurationProfileOutcomeCallable;
        typedef std::future<DeleteDeploymentStrategyOutcome> DeleteDeploymentStrategyOutcomeCallable;
        typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
        typedef std::future<DeleteHostedConfigurationVersionOutcome> DeleteHostedConfigurationVersionOutcomeCallable;
        typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
        typedef std::future<GetConfigurationProfileOutcome> GetConfigurationProfileOutcomeCallable;
        typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
        typedef std::future<GetDeploymentStrategyOutcome> GetDeploymentStrategyOutcomeCallable;
        typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
        typedef std::future<GetHostedConfigurationVersionOutcome> GetHostedConfigurationVersionOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListConfigurationProfilesOutcome> ListConfigurationProfilesOutcomeCallable;
        typedef std::future<ListDeploymentStrategiesOutcome> ListDeploymentStrategiesOutcomeCallable;
        typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
        typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
        typedef std::future<ListHostedConfigurationVersionsOutcome> ListHostedConfigurationVersionsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<StartDeploymentOutcome> StartDeploymentOutcomeCallable;
        typedef std::future<StopDeploymentOutcome> StopDeploymentOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateConfigurationProfileOutcome> UpdateConfigurationProfileOutcomeCallable;
        typedef std::future<UpdateDeploymentStrategyOutcome> UpdateDeploymentStrategyOutcomeCallable;
        typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
        typedef std::future<ValidateConfigurationOutcome> ValidateConfigurationOutcomeCallable;
} // namespace Model

  class AppConfigClient;

    typedef std::function<void(const AppConfigClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateConfigurationProfileRequest&, const Model::CreateConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateDeploymentStrategyRequest&, const Model::CreateDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateHostedConfigurationVersionRequest&, Model::CreateHostedConfigurationVersionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHostedConfigurationVersionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteConfigurationProfileRequest&, const Model::DeleteConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteDeploymentStrategyRequest&, const Model::DeleteDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteHostedConfigurationVersionRequest&, const Model::DeleteHostedConfigurationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostedConfigurationVersionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetConfigurationProfileRequest&, const Model::GetConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetDeploymentStrategyRequest&, const Model::GetDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetHostedConfigurationVersionRequest&, Model::GetHostedConfigurationVersionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostedConfigurationVersionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListConfigurationProfilesRequest&, const Model::ListConfigurationProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationProfilesResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListDeploymentStrategiesRequest&, const Model::ListDeploymentStrategiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentStrategiesResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListHostedConfigurationVersionsRequest&, const Model::ListHostedConfigurationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostedConfigurationVersionsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::StartDeploymentRequest&, const Model::StartDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::StopDeploymentRequest&, const Model::StopDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateConfigurationProfileRequest&, const Model::UpdateConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateDeploymentStrategyRequest&, const Model::UpdateDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ValidateConfigurationRequest&, const Model::ValidateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateConfigurationResponseReceivedHandler;

  /**
   * <p>Use AppConfig, a capability of Amazon Web Services Systems Manager, to
   * create, manage, and quickly deploy application configurations. AppConfig
   * supports controlled deployments to applications of any size and includes
   * built-in validation checks and monitoring. You can use AppConfig with
   * applications hosted on Amazon EC2 instances, Lambda, containers, mobile
   * applications, or IoT devices.</p> <p>To prevent errors when deploying
   * application configurations, especially for production systems where a simple
   * typo could cause an unexpected outage, AppConfig includes validators. A
   * validator provides a syntactic or semantic check to ensure that the
   * configuration you want to deploy works as intended. To validate your application
   * configuration data, you provide a schema or an Amazon Web Services Lambda
   * function that runs against the configuration. The configuration deployment or
   * update can only proceed when the configuration data is valid.</p> <p>During a
   * configuration deployment, AppConfig monitors the application to ensure that the
   * deployment is successful. If the system encounters an error, AppConfig rolls
   * back the change to minimize impact for your application users. You can configure
   * a deployment strategy for each application or environment that includes
   * deployment criteria, including velocity, bake time, and alarms to monitor.
   * Similar to error monitoring, if a deployment triggers an alarm, AppConfig
   * automatically rolls back to the previous version. </p> <p>AppConfig supports
   * multiple use cases. Here are some examples:</p> <ul> <li> <p> <b>Feature
   * flags</b>: Use AppConfig to turn on new features that require a timely
   * deployment, such as a product launch or announcement. </p> </li> <li> <p>
   * <b>Application tuning</b>: Use AppConfig to carefully introduce changes to your
   * application that can only be tested with production traffic.</p> </li> <li> <p>
   * <b>Allow list</b>: Use AppConfig to allow premium subscribers to access paid
   * content. </p> </li> <li> <p> <b>Operational issues</b>: Use AppConfig to reduce
   * stress on your application when a dependency or other external factor impacts
   * the system.</p> </li> </ul> <p>This reference is intended to be used with the <a
   * href="http://docs.aws.amazon.com/appconfig/latest/userguide/what-is-appconfig.html">AppConfig
   * User Guide</a>.</p>
   */
  class AWS_APPCONFIG_API AppConfigClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppConfigClient();


        /**
         * <p>Creates an application. An application in AppConfig is a logical unit of code
         * that provides capabilities for your customers. For example, an application can
         * be a microservice that runs on Amazon EC2 instances, a mobile application
         * installed by your users, a serverless application using Amazon API Gateway and
         * Lambda, or any system you run on behalf of others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application. An application in AppConfig is a logical unit of code
         * that provides capabilities for your customers. For example, an application can
         * be a microservice that runs on Amazon EC2 instances, a mobile application
         * installed by your users, a serverless application using Amazon API Gateway and
         * Lambda, or any system you run on behalf of others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Creates an application. An application in AppConfig is a logical unit of code
         * that provides capabilities for your customers. For example, an application can
         * be a microservice that runs on Amazon EC2 instances, a mobile application
         * installed by your users, a serverless application using Amazon API Gateway and
         * Lambda, or any system you run on behalf of others.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration profile, which is information that enables AppConfig
         * to access the configuration source. Valid configuration sources include the
         * AppConfig hosted configuration store, Amazon Web Services Systems Manager (SSM)
         * documents, SSM Parameter Store parameters, Amazon S3 objects, or any <a
         * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/integrations-action-type.html#integrations-source">integration
         * source action</a> supported by CodePipeline. A configuration profile includes
         * the following information:</p> <ul> <li> <p>The URI location of the
         * configuration data.</p> </li> <li> <p>The Identity and Access Management (IAM)
         * role that provides access to the configuration data.</p> </li> <li> <p>A
         * validator for the configuration data. Available validators include either a JSON
         * Schema or an Amazon Web Services Lambda function.</p> </li> </ul> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-creating-configuration-and-profile.html">Create
         * a Configuration and a Configuration Profile</a> in the <i>AppConfig User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateConfigurationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationProfileOutcome CreateConfigurationProfile(const Model::CreateConfigurationProfileRequest& request) const;

        /**
         * <p>Creates a configuration profile, which is information that enables AppConfig
         * to access the configuration source. Valid configuration sources include the
         * AppConfig hosted configuration store, Amazon Web Services Systems Manager (SSM)
         * documents, SSM Parameter Store parameters, Amazon S3 objects, or any <a
         * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/integrations-action-type.html#integrations-source">integration
         * source action</a> supported by CodePipeline. A configuration profile includes
         * the following information:</p> <ul> <li> <p>The URI location of the
         * configuration data.</p> </li> <li> <p>The Identity and Access Management (IAM)
         * role that provides access to the configuration data.</p> </li> <li> <p>A
         * validator for the configuration data. Available validators include either a JSON
         * Schema or an Amazon Web Services Lambda function.</p> </li> </ul> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-creating-configuration-and-profile.html">Create
         * a Configuration and a Configuration Profile</a> in the <i>AppConfig User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationProfileOutcomeCallable CreateConfigurationProfileCallable(const Model::CreateConfigurationProfileRequest& request) const;

        /**
         * <p>Creates a configuration profile, which is information that enables AppConfig
         * to access the configuration source. Valid configuration sources include the
         * AppConfig hosted configuration store, Amazon Web Services Systems Manager (SSM)
         * documents, SSM Parameter Store parameters, Amazon S3 objects, or any <a
         * href="http://docs.aws.amazon.com/codepipeline/latest/userguide/integrations-action-type.html#integrations-source">integration
         * source action</a> supported by CodePipeline. A configuration profile includes
         * the following information:</p> <ul> <li> <p>The URI location of the
         * configuration data.</p> </li> <li> <p>The Identity and Access Management (IAM)
         * role that provides access to the configuration data.</p> </li> <li> <p>A
         * validator for the configuration data. Available validators include either a JSON
         * Schema or an Amazon Web Services Lambda function.</p> </li> </ul> <p>For more
         * information, see <a
         * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-creating-configuration-and-profile.html">Create
         * a Configuration and a Configuration Profile</a> in the <i>AppConfig User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationProfileAsync(const Model::CreateConfigurationProfileRequest& request, const CreateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a deployment strategy that defines important criteria for rolling out
         * your configuration to the designated targets. A deployment strategy includes the
         * overall duration required, a percentage of targets to receive the deployment
         * during each interval, an algorithm that defines how percentage grows, and bake
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateDeploymentStrategy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentStrategyOutcome CreateDeploymentStrategy(const Model::CreateDeploymentStrategyRequest& request) const;

        /**
         * <p>Creates a deployment strategy that defines important criteria for rolling out
         * your configuration to the designated targets. A deployment strategy includes the
         * overall duration required, a percentage of targets to receive the deployment
         * during each interval, an algorithm that defines how percentage grows, and bake
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentStrategyOutcomeCallable CreateDeploymentStrategyCallable(const Model::CreateDeploymentStrategyRequest& request) const;

        /**
         * <p>Creates a deployment strategy that defines important criteria for rolling out
         * your configuration to the designated targets. A deployment strategy includes the
         * overall duration required, a percentage of targets to receive the deployment
         * during each interval, an algorithm that defines how percentage grows, and bake
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentStrategyAsync(const Model::CreateDeploymentStrategyRequest& request, const CreateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an environment. For each application, you define one or more
         * environments. An environment is a logical deployment group of AppConfig targets,
         * such as applications in a <code>Beta</code> or <code>Production</code>
         * environment. You can also define environments for application subcomponents such
         * as the <code>Web</code>, <code>Mobile</code> and <code>Back-end</code>
         * components for your application. You can configure Amazon CloudWatch alarms for
         * each environment. The system monitors alarms during a configuration deployment.
         * If an alarm is triggered, the system rolls back the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * <p>Creates an environment. For each application, you define one or more
         * environments. An environment is a logical deployment group of AppConfig targets,
         * such as applications in a <code>Beta</code> or <code>Production</code>
         * environment. You can also define environments for application subcomponents such
         * as the <code>Web</code>, <code>Mobile</code> and <code>Back-end</code>
         * components for your application. You can configure Amazon CloudWatch alarms for
         * each environment. The system monitors alarms during a configuration deployment.
         * If an alarm is triggered, the system rolls back the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * <p>Creates an environment. For each application, you define one or more
         * environments. An environment is a logical deployment group of AppConfig targets,
         * such as applications in a <code>Beta</code> or <code>Production</code>
         * environment. You can also define environments for application subcomponents such
         * as the <code>Web</code>, <code>Mobile</code> and <code>Back-end</code>
         * components for your application. You can configure Amazon CloudWatch alarms for
         * each environment. The system monitors alarms during a configuration deployment.
         * If an alarm is triggered, the system rolls back the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new configuration in the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateHostedConfigurationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHostedConfigurationVersionOutcome CreateHostedConfigurationVersion(const Model::CreateHostedConfigurationVersionRequest& request) const;

        /**
         * <p>Creates a new configuration in the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateHostedConfigurationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHostedConfigurationVersionOutcomeCallable CreateHostedConfigurationVersionCallable(const Model::CreateHostedConfigurationVersionRequest& request) const;

        /**
         * <p>Creates a new configuration in the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateHostedConfigurationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHostedConfigurationVersionAsync(const Model::CreateHostedConfigurationVersionRequest& request, const CreateHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an application. Deleting an application does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application. Deleting an application does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Deletes an application. Deleting an application does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configuration profile. Deleting a configuration profile does not
         * delete a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteConfigurationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationProfileOutcome DeleteConfigurationProfile(const Model::DeleteConfigurationProfileRequest& request) const;

        /**
         * <p>Deletes a configuration profile. Deleting a configuration profile does not
         * delete a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationProfileOutcomeCallable DeleteConfigurationProfileCallable(const Model::DeleteConfigurationProfileRequest& request) const;

        /**
         * <p>Deletes a configuration profile. Deleting a configuration profile does not
         * delete a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationProfileAsync(const Model::DeleteConfigurationProfileRequest& request, const DeleteConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a deployment strategy. Deleting a deployment strategy does not delete
         * a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteDeploymentStrategy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentStrategyOutcome DeleteDeploymentStrategy(const Model::DeleteDeploymentStrategyRequest& request) const;

        /**
         * <p>Deletes a deployment strategy. Deleting a deployment strategy does not delete
         * a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentStrategyOutcomeCallable DeleteDeploymentStrategyCallable(const Model::DeleteDeploymentStrategyRequest& request) const;

        /**
         * <p>Deletes a deployment strategy. Deleting a deployment strategy does not delete
         * a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentStrategyAsync(const Model::DeleteDeploymentStrategyRequest& request, const DeleteDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an environment. Deleting an environment does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * <p>Deletes an environment. Deleting an environment does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * <p>Deletes an environment. Deleting an environment does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a version of a configuration from the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteHostedConfigurationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHostedConfigurationVersionOutcome DeleteHostedConfigurationVersion(const Model::DeleteHostedConfigurationVersionRequest& request) const;

        /**
         * <p>Deletes a version of a configuration from the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteHostedConfigurationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHostedConfigurationVersionOutcomeCallable DeleteHostedConfigurationVersionCallable(const Model::DeleteHostedConfigurationVersionRequest& request) const;

        /**
         * <p>Deletes a version of a configuration from the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteHostedConfigurationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHostedConfigurationVersionAsync(const Model::DeleteHostedConfigurationVersionRequest& request, const DeleteHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApplicationOutcomeCallable GetApplicationCallable(const Model::GetApplicationRequest& request) const;

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a configuration profile.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetConfigurationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationProfileOutcome GetConfigurationProfile(const Model::GetConfigurationProfileRequest& request) const;

        /**
         * <p>Retrieves information about a configuration profile.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigurationProfileOutcomeCallable GetConfigurationProfileCallable(const Model::GetConfigurationProfileRequest& request) const;

        /**
         * <p>Retrieves information about a configuration profile.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigurationProfileAsync(const Model::GetConfigurationProfileRequest& request, const GetConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a configuration deployment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Retrieves information about a configuration deployment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Retrieves information about a configuration deployment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a deployment strategy. A deployment strategy
         * defines important criteria for rolling out your configuration to the designated
         * targets. A deployment strategy includes the overall duration required, a
         * percentage of targets to receive the deployment during each interval, an
         * algorithm that defines how percentage grows, and bake time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetDeploymentStrategy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentStrategyOutcome GetDeploymentStrategy(const Model::GetDeploymentStrategyRequest& request) const;

        /**
         * <p>Retrieves information about a deployment strategy. A deployment strategy
         * defines important criteria for rolling out your configuration to the designated
         * targets. A deployment strategy includes the overall duration required, a
         * percentage of targets to receive the deployment during each interval, an
         * algorithm that defines how percentage grows, and bake time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentStrategyOutcomeCallable GetDeploymentStrategyCallable(const Model::GetDeploymentStrategyRequest& request) const;

        /**
         * <p>Retrieves information about a deployment strategy. A deployment strategy
         * defines important criteria for rolling out your configuration to the designated
         * targets. A deployment strategy includes the overall duration required, a
         * percentage of targets to receive the deployment during each interval, an
         * algorithm that defines how percentage grows, and bake time.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentStrategyAsync(const Model::GetDeploymentStrategyRequest& request, const GetDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about an environment. An environment is a logical
         * deployment group of AppConfig applications, such as applications in a
         * <code>Production</code> environment or in an <code>EU_Region</code> environment.
         * Each configuration deployment targets an environment. You can enable one or more
         * Amazon CloudWatch alarms for an environment. If an alarm is triggered during a
         * deployment, AppConfig roles back the configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * <p>Retrieves information about an environment. An environment is a logical
         * deployment group of AppConfig applications, such as applications in a
         * <code>Production</code> environment or in an <code>EU_Region</code> environment.
         * Each configuration deployment targets an environment. You can enable one or more
         * Amazon CloudWatch alarms for an environment. If an alarm is triggered during a
         * deployment, AppConfig roles back the configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const Model::GetEnvironmentRequest& request) const;

        /**
         * <p>Retrieves information about an environment. An environment is a logical
         * deployment group of AppConfig applications, such as applications in a
         * <code>Production</code> environment or in an <code>EU_Region</code> environment.
         * Each configuration deployment targets an environment. You can enable one or more
         * Amazon CloudWatch alarms for an environment. If an alarm is triggered during a
         * deployment, AppConfig roles back the configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEnvironmentAsync(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specific configuration version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetHostedConfigurationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostedConfigurationVersionOutcome GetHostedConfigurationVersion(const Model::GetHostedConfigurationVersionRequest& request) const;

        /**
         * <p>Retrieves information about a specific configuration version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetHostedConfigurationVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedConfigurationVersionOutcomeCallable GetHostedConfigurationVersionCallable(const Model::GetHostedConfigurationVersionRequest& request) const;

        /**
         * <p>Retrieves information about a specific configuration version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetHostedConfigurationVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedConfigurationVersionAsync(const Model::GetHostedConfigurationVersionRequest& request, const GetHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all applications in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists all applications in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists all applications in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the configuration profiles for an application.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListConfigurationProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationProfilesOutcome ListConfigurationProfiles(const Model::ListConfigurationProfilesRequest& request) const;

        /**
         * <p>Lists the configuration profiles for an application.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListConfigurationProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationProfilesOutcomeCallable ListConfigurationProfilesCallable(const Model::ListConfigurationProfilesRequest& request) const;

        /**
         * <p>Lists the configuration profiles for an application.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListConfigurationProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationProfilesAsync(const Model::ListConfigurationProfilesRequest& request, const ListConfigurationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists deployment strategies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeploymentStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentStrategiesOutcome ListDeploymentStrategies(const Model::ListDeploymentStrategiesRequest& request) const;

        /**
         * <p>Lists deployment strategies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeploymentStrategies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentStrategiesOutcomeCallable ListDeploymentStrategiesCallable(const Model::ListDeploymentStrategiesRequest& request) const;

        /**
         * <p>Lists deployment strategies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeploymentStrategies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentStrategiesAsync(const Model::ListDeploymentStrategiesRequest& request, const ListDeploymentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the deployments for an environment in descending deployment number
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Lists the deployments for an environment in descending deployment number
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * <p>Lists the deployments for an environment in descending deployment number
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the environments for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * <p>Lists the environments for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListEnvironments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;

        /**
         * <p>Lists the environments for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListEnvironments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists configurations stored in the AppConfig hosted configuration store by
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListHostedConfigurationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostedConfigurationVersionsOutcome ListHostedConfigurationVersions(const Model::ListHostedConfigurationVersionsRequest& request) const;

        /**
         * <p>Lists configurations stored in the AppConfig hosted configuration store by
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListHostedConfigurationVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedConfigurationVersionsOutcomeCallable ListHostedConfigurationVersionsCallable(const Model::ListHostedConfigurationVersionsRequest& request) const;

        /**
         * <p>Lists configurations stored in the AppConfig hosted configuration store by
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListHostedConfigurationVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedConfigurationVersionsAsync(const Model::ListHostedConfigurationVersionsRequest& request, const ListHostedConfigurationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieves the list of key-value tags assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StartDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeploymentOutcome StartDeployment(const Model::StartDeploymentRequest& request) const;

        /**
         * <p>Starts a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StartDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const Model::StartDeploymentRequest& request) const;

        /**
         * <p>Starts a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StartDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDeploymentAsync(const Model::StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a deployment. This API action works only on deployments that have a
         * status of <code>DEPLOYING</code>. This action moves the deployment to a status
         * of <code>ROLLED_BACK</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StopDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

        /**
         * <p>Stops a deployment. This API action works only on deployments that have a
         * status of <code>DEPLOYING</code>. This action moves the deployment to a status
         * of <code>ROLLED_BACK</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StopDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const Model::StopDeploymentRequest& request) const;

        /**
         * <p>Stops a deployment. This API action works only on deployments that have a
         * status of <code>DEPLOYING</code>. This action moves the deployment to a status
         * of <code>ROLLED_BACK</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StopDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopDeploymentAsync(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns metadata to an AppConfig resource. Tags help organize and categorize
         * your AppConfig resources. Each tag consists of a key and an optional value, both
         * of which you define. You can specify a maximum of 50 tags for a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns metadata to an AppConfig resource. Tags help organize and categorize
         * your AppConfig resources. Each tag consists of a key and an optional value, both
         * of which you define. You can specify a maximum of 50 tags for a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns metadata to an AppConfig resource. Tags help organize and categorize
         * your AppConfig resources. Each tag consists of a key and an optional value, both
         * of which you define. You can specify a maximum of 50 tags for a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a tag key and value from an AppConfig resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes a tag key and value from an AppConfig resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes a tag key and value from an AppConfig resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a configuration profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateConfigurationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationProfileOutcome UpdateConfigurationProfile(const Model::UpdateConfigurationProfileRequest& request) const;

        /**
         * <p>Updates a configuration profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationProfileOutcomeCallable UpdateConfigurationProfileCallable(const Model::UpdateConfigurationProfileRequest& request) const;

        /**
         * <p>Updates a configuration profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateConfigurationProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationProfileAsync(const Model::UpdateConfigurationProfileRequest& request, const UpdateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a deployment strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateDeploymentStrategy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentStrategyOutcome UpdateDeploymentStrategy(const Model::UpdateDeploymentStrategyRequest& request) const;

        /**
         * <p>Updates a deployment strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeploymentStrategyOutcomeCallable UpdateDeploymentStrategyCallable(const Model::UpdateDeploymentStrategyRequest& request) const;

        /**
         * <p>Updates a deployment strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateDeploymentStrategy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeploymentStrategyAsync(const Model::UpdateDeploymentStrategyRequest& request, const UpdateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * <p>Updates an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateEnvironment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * <p>Updates an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateEnvironment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses the validators in a configuration profile to validate a
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ValidateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateConfigurationOutcome ValidateConfiguration(const Model::ValidateConfigurationRequest& request) const;

        /**
         * <p>Uses the validators in a configuration profile to validate a
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ValidateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateConfigurationOutcomeCallable ValidateConfigurationCallable(const Model::ValidateConfigurationRequest& request) const;

        /**
         * <p>Uses the validators in a configuration profile to validate a
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ValidateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateConfigurationAsync(const Model::ValidateConfigurationRequest& request, const ValidateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationProfileAsyncHelper(const Model::CreateConfigurationProfileRequest& request, const CreateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentStrategyAsyncHelper(const Model::CreateDeploymentStrategyRequest& request, const CreateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEnvironmentAsyncHelper(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateHostedConfigurationVersionAsyncHelper(const Model::CreateHostedConfigurationVersionRequest& request, const CreateHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationProfileAsyncHelper(const Model::DeleteConfigurationProfileRequest& request, const DeleteConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeploymentStrategyAsyncHelper(const Model::DeleteDeploymentStrategyRequest& request, const DeleteDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEnvironmentAsyncHelper(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteHostedConfigurationVersionAsyncHelper(const Model::DeleteHostedConfigurationVersionRequest& request, const DeleteHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApplicationAsyncHelper(const Model::GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConfigurationProfileAsyncHelper(const Model::GetConfigurationProfileRequest& request, const GetConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentAsyncHelper(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentStrategyAsyncHelper(const Model::GetDeploymentStrategyRequest& request, const GetDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEnvironmentAsyncHelper(const Model::GetEnvironmentRequest& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHostedConfigurationVersionAsyncHelper(const Model::GetHostedConfigurationVersionRequest& request, const GetHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationProfilesAsyncHelper(const Model::ListConfigurationProfilesRequest& request, const ListConfigurationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentStrategiesAsyncHelper(const Model::ListDeploymentStrategiesRequest& request, const ListDeploymentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentsAsyncHelper(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEnvironmentsAsyncHelper(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHostedConfigurationVersionsAsyncHelper(const Model::ListHostedConfigurationVersionsRequest& request, const ListHostedConfigurationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartDeploymentAsyncHelper(const Model::StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopDeploymentAsyncHelper(const Model::StopDeploymentRequest& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationProfileAsyncHelper(const Model::UpdateConfigurationProfileRequest& request, const UpdateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeploymentStrategyAsyncHelper(const Model::UpdateDeploymentStrategyRequest& request, const UpdateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEnvironmentAsyncHelper(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ValidateConfigurationAsyncHelper(const Model::ValidateConfigurationRequest& request, const ValidateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppConfig
} // namespace Aws

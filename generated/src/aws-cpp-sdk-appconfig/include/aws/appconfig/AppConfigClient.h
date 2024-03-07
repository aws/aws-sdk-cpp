/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appconfig/AppConfigServiceClientModel.h>

namespace Aws
{
namespace AppConfig
{
  /**
   * <p>AppConfig feature flags and dynamic configurations help software builders
   * quickly and securely adjust application behavior in production environments
   * without full code deployments. AppConfig speeds up software release frequency,
   * improves application resiliency, and helps you address emergent issues more
   * quickly. With feature flags, you can gradually release new capabilities to users
   * and measure the impact of those changes before fully deploying the new
   * capabilities to all users. With operational flags and dynamic configurations,
   * you can update block lists, allow lists, throttling limits, logging verbosity,
   * and perform other operational tuning to quickly respond to issues in production
   * environments.</p>  <p>AppConfig is a capability of Amazon Web Services
   * Systems Manager.</p>  <p>Despite the fact that application configuration
   * content can vary greatly from application to application, AppConfig supports the
   * following use cases, which cover a broad spectrum of customer needs:</p> <ul>
   * <li> <p> <b>Feature flags and toggles</b> - Safely release new capabilities to
   * your customers in a controlled environment. Instantly roll back changes if you
   * experience a problem.</p> </li> <li> <p> <b>Application tuning</b> - Carefully
   * introduce application changes while testing the impact of those changes with
   * users in production environments.</p> </li> <li> <p> <b>Allow list or block
   * list</b> - Control access to premium features or instantly block specific users
   * without deploying new code. </p> </li> <li> <p> <b>Centralized configuration
   * storage</b> - Keep your configuration data organized and consistent across all
   * of your workloads. You can use AppConfig to deploy configuration data stored in
   * the AppConfig hosted configuration store, Secrets Manager, Systems Manager,
   * Parameter Store, or Amazon S3.</p> </li> </ul> <p> <b>How AppConfig works</b>
   * </p> <p>This section provides a high-level description of how AppConfig works
   * and how you get started.</p> <dl> <dt>1. Identify configuration values in code
   * you want to manage in the cloud</dt> <dd> <p>Before you start creating AppConfig
   * artifacts, we recommend you identify configuration data in your code that you
   * want to dynamically manage using AppConfig. Good examples include feature flags
   * or toggles, allow and block lists, logging verbosity, service limits, and
   * throttling rules, to name a few.</p> <p>If your configuration data already
   * exists in the cloud, you can take advantage of AppConfig validation, deployment,
   * and extension features to further streamline configuration data management.</p>
   * </dd> <dt>2. Create an application namespace</dt> <dd> <p>To create a namespace,
   * you create an AppConfig artifact called an application. An application is simply
   * an organizational construct like a folder.</p> </dd> <dt>3. Create
   * environments</dt> <dd> <p>For each AppConfig application, you define one or more
   * environments. An environment is a logical grouping of targets, such as
   * applications in a <code>Beta</code> or <code>Production</code> environment,
   * Lambda functions, or containers. You can also define environments for
   * application subcomponents, such as the <code>Web</code>, <code>Mobile</code>,
   * and <code>Back-end</code>.</p> <p>You can configure Amazon CloudWatch alarms for
   * each environment. The system monitors alarms during a configuration deployment.
   * If an alarm is triggered, the system rolls back the configuration.</p> </dd>
   * <dt>4. Create a configuration profile</dt> <dd> <p>A configuration profile
   * includes, among other things, a URI that enables AppConfig to locate your
   * configuration data in its stored location and a profile type. AppConfig supports
   * two configuration profile types: feature flags and freeform configurations.
   * Feature flag configuration profiles store their data in the AppConfig hosted
   * configuration store and the URI is simply <code>hosted</code>. For freeform
   * configuration profiles, you can store your data in the AppConfig hosted
   * configuration store or any Amazon Web Services service that integrates with
   * AppConfig, as described in <a
   * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-free-form-configurations-creating.html">Creating
   * a free form configuration profile</a> in the the <i>AppConfig User
   * Guide</i>.</p> <p>A configuration profile can also include optional validators
   * to ensure your configuration data is syntactically and semantically correct.
   * AppConfig performs a check using the validators when you start a deployment. If
   * any errors are detected, the deployment rolls back to the previous configuration
   * data.</p> </dd> <dt>5. Deploy configuration data</dt> <dd> <p>When you create a
   * new deployment, you specify the following:</p> <ul> <li> <p>An application
   * ID</p> </li> <li> <p>A configuration profile ID</p> </li> <li> <p>A
   * configuration version</p> </li> <li> <p>An environment ID where you want to
   * deploy the configuration data</p> </li> <li> <p>A deployment strategy ID that
   * defines how fast you want the changes to take effect</p> </li> </ul> <p>When you
   * call the <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_StartDeployment.html">StartDeployment</a>
   * API action, AppConfig performs the following tasks:</p> <ol> <li> <p>Retrieves
   * the configuration data from the underlying data store by using the location URI
   * in the configuration profile.</p> </li> <li> <p>Verifies the configuration data
   * is syntactically and semantically correct by using the validators you specified
   * when you created your configuration profile.</p> </li> <li> <p>Caches a copy of
   * the data so it is ready to be retrieved by your application. This cached copy is
   * called the <i>deployed data</i>.</p> </li> </ol> </dd> <dt>6. Retrieve the
   * configuration</dt> <dd> <p>You can configure AppConfig Agent as a local host and
   * have the agent poll AppConfig for configuration updates. The agent calls the <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_StartConfigurationSession.html">StartConfigurationSession</a>
   * and <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
   * API actions and caches your configuration data locally. To retrieve the data,
   * your application makes an HTTP call to the localhost server. AppConfig Agent
   * supports several use cases, as described in <a
   * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-simplified-methods.html">Simplified
   * retrieval methods</a> in the the <i>AppConfig User Guide</i>.</p> <p>If
   * AppConfig Agent isn't supported for your use case, you can configure your
   * application to poll AppConfig for configuration updates by directly calling the
   * <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_StartConfigurationSession.html">StartConfigurationSession</a>
   * and <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
   * API actions. </p> </dd> </dl> <p>This reference is intended to be used with the
   * <a
   * href="http://docs.aws.amazon.com/appconfig/latest/userguide/what-is-appconfig.html">AppConfig
   * User Guide</a>.</p>
   */
  class AWS_APPCONFIG_API AppConfigClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AppConfigClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AppConfigClientConfiguration ClientConfigurationType;
      typedef AppConfigEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigClient(const Aws::AppConfig::AppConfigClientConfiguration& clientConfiguration = Aws::AppConfig::AppConfigClientConfiguration(),
                        std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppConfig::AppConfigClientConfiguration& clientConfiguration = Aws::AppConfig::AppConfigClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<AppConfigEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::AppConfig::AppConfigClientConfiguration& clientConfiguration = Aws::AppConfig::AppConfigClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppConfigClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AppConfigClient();

        /**
         * <p>Creates an application. In AppConfig, an application is simply an
         * organizational construct like a folder. This organizational construct has a
         * relationship with some unit of executable code. For example, you could create an
         * application called MyMobileApp to organize and manage configuration data for a
         * mobile application installed by your users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates a configuration profile, which is information that enables AppConfig
         * to access the configuration source. Valid configuration sources include the
         * following:</p> <ul> <li> <p>Configuration data in YAML, JSON, and other formats
         * stored in the AppConfig hosted configuration store</p> </li> <li>
         * <p>Configuration data stored as objects in an Amazon Simple Storage Service
         * (Amazon S3) bucket</p> </li> <li> <p>Pipelines stored in CodePipeline</p> </li>
         * <li> <p>Secrets stored in Secrets Manager</p> </li> <li> <p>Standard and secure
         * string parameters stored in Amazon Web Services Systems Manager Parameter
         * Store</p> </li> <li> <p>Configuration data in SSM documents stored in the
         * Systems Manager document store</p> </li> </ul> <p>A configuration profile
         * includes the following information:</p> <ul> <li> <p>The URI location of the
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
         * A Callable wrapper for CreateConfigurationProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationProfileRequestT = Model::CreateConfigurationProfileRequest>
        Model::CreateConfigurationProfileOutcomeCallable CreateConfigurationProfileCallable(const CreateConfigurationProfileRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::CreateConfigurationProfile, request);
        }

        /**
         * An Async wrapper for CreateConfigurationProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationProfileRequestT = Model::CreateConfigurationProfileRequest>
        void CreateConfigurationProfileAsync(const CreateConfigurationProfileRequestT& request, const CreateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::CreateConfigurationProfile, request, handler, context);
        }

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
         * A Callable wrapper for CreateDeploymentStrategy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDeploymentStrategyRequestT = Model::CreateDeploymentStrategyRequest>
        Model::CreateDeploymentStrategyOutcomeCallable CreateDeploymentStrategyCallable(const CreateDeploymentStrategyRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::CreateDeploymentStrategy, request);
        }

        /**
         * An Async wrapper for CreateDeploymentStrategy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDeploymentStrategyRequestT = Model::CreateDeploymentStrategyRequest>
        void CreateDeploymentStrategyAsync(const CreateDeploymentStrategyRequestT& request, const CreateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::CreateDeploymentStrategy, request, handler, context);
        }

        /**
         * <p>Creates an environment. For each application, you define one or more
         * environments. An environment is a deployment group of AppConfig targets, such as
         * applications in a <code>Beta</code> or <code>Production</code> environment. You
         * can also define environments for application subcomponents such as the
         * <code>Web</code>, <code>Mobile</code> and <code>Back-end</code> components for
         * your application. You can configure Amazon CloudWatch alarms for each
         * environment. The system monitors alarms during a configuration deployment. If an
         * alarm is triggered, the system rolls back the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::CreateEnvironment, request, handler, context);
        }

        /**
         * <p>Creates an AppConfig extension. An extension augments your ability to inject
         * logic or behavior at different points during the AppConfig workflow of creating
         * or deploying a configuration.</p> <p>You can create your own extensions or use
         * the Amazon Web Services authored extensions provided by AppConfig. For an
         * AppConfig extension that uses Lambda, you must create a Lambda function to
         * perform any computation and processing defined in the extension. If you plan to
         * create custom versions of the Amazon Web Services authored notification
         * extensions, you only need to specify an Amazon Resource Name (ARN) in the
         * <code>Uri</code> field for the new extension version.</p> <ul> <li> <p>For a
         * custom EventBridge notification extension, enter the ARN of the EventBridge
         * default events in the <code>Uri</code> field.</p> </li> <li> <p>For a custom
         * Amazon SNS notification extension, enter the ARN of an Amazon SNS topic in the
         * <code>Uri</code> field.</p> </li> <li> <p>For a custom Amazon SQS notification
         * extension, enter the ARN of an Amazon SQS message queue in the <code>Uri</code>
         * field. </p> </li> </ul> <p>For more information about extensions, see <a
         * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
         * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExtensionOutcome CreateExtension(const Model::CreateExtensionRequest& request) const;

        /**
         * A Callable wrapper for CreateExtension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExtensionRequestT = Model::CreateExtensionRequest>
        Model::CreateExtensionOutcomeCallable CreateExtensionCallable(const CreateExtensionRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::CreateExtension, request);
        }

        /**
         * An Async wrapper for CreateExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExtensionRequestT = Model::CreateExtensionRequest>
        void CreateExtensionAsync(const CreateExtensionRequestT& request, const CreateExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::CreateExtension, request, handler, context);
        }

        /**
         * <p>When you create an extension or configure an Amazon Web Services authored
         * extension, you associate the extension with an AppConfig application,
         * environment, or configuration profile. For example, you can choose to run the
         * <code>AppConfig deployment events to Amazon SNS</code> Amazon Web Services
         * authored extension and receive notifications on an Amazon SNS topic anytime a
         * configuration deployment is started for a specific application. Defining which
         * extension to associate with an AppConfig resource is called an <i>extension
         * association</i>. An extension association is a specified relationship between an
         * extension and an AppConfig resource, such as an application or a configuration
         * profile. For more information about extensions and associations, see <a
         * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
         * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateExtensionAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExtensionAssociationOutcome CreateExtensionAssociation(const Model::CreateExtensionAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateExtensionAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExtensionAssociationRequestT = Model::CreateExtensionAssociationRequest>
        Model::CreateExtensionAssociationOutcomeCallable CreateExtensionAssociationCallable(const CreateExtensionAssociationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::CreateExtensionAssociation, request);
        }

        /**
         * An Async wrapper for CreateExtensionAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExtensionAssociationRequestT = Model::CreateExtensionAssociationRequest>
        void CreateExtensionAssociationAsync(const CreateExtensionAssociationRequestT& request, const CreateExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::CreateExtensionAssociation, request, handler, context);
        }

        /**
         * <p>Creates a new configuration in the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/CreateHostedConfigurationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHostedConfigurationVersionOutcome CreateHostedConfigurationVersion(const Model::CreateHostedConfigurationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateHostedConfigurationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHostedConfigurationVersionRequestT = Model::CreateHostedConfigurationVersionRequest>
        Model::CreateHostedConfigurationVersionOutcomeCallable CreateHostedConfigurationVersionCallable(const CreateHostedConfigurationVersionRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::CreateHostedConfigurationVersion, request);
        }

        /**
         * An Async wrapper for CreateHostedConfigurationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHostedConfigurationVersionRequestT = Model::CreateHostedConfigurationVersionRequest>
        void CreateHostedConfigurationVersionAsync(const CreateHostedConfigurationVersionRequestT& request, const CreateHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::CreateHostedConfigurationVersion, request, handler, context);
        }

        /**
         * <p>Deletes an application. Deleting an application does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes a configuration profile. Deleting a configuration profile does not
         * delete a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteConfigurationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationProfileOutcome DeleteConfigurationProfile(const Model::DeleteConfigurationProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationProfileRequestT = Model::DeleteConfigurationProfileRequest>
        Model::DeleteConfigurationProfileOutcomeCallable DeleteConfigurationProfileCallable(const DeleteConfigurationProfileRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::DeleteConfigurationProfile, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationProfileRequestT = Model::DeleteConfigurationProfileRequest>
        void DeleteConfigurationProfileAsync(const DeleteConfigurationProfileRequestT& request, const DeleteConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::DeleteConfigurationProfile, request, handler, context);
        }

        /**
         * <p>Deletes a deployment strategy. Deleting a deployment strategy does not delete
         * a configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteDeploymentStrategy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentStrategyOutcome DeleteDeploymentStrategy(const Model::DeleteDeploymentStrategyRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeploymentStrategy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeploymentStrategyRequestT = Model::DeleteDeploymentStrategyRequest>
        Model::DeleteDeploymentStrategyOutcomeCallable DeleteDeploymentStrategyCallable(const DeleteDeploymentStrategyRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::DeleteDeploymentStrategy, request);
        }

        /**
         * An Async wrapper for DeleteDeploymentStrategy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeploymentStrategyRequestT = Model::DeleteDeploymentStrategyRequest>
        void DeleteDeploymentStrategyAsync(const DeleteDeploymentStrategyRequestT& request, const DeleteDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::DeleteDeploymentStrategy, request, handler, context);
        }

        /**
         * <p>Deletes an environment. Deleting an environment does not delete a
         * configuration from a host.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::DeleteEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes an AppConfig extension. You must delete all associations to an
         * extension before you delete the extension.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExtensionOutcome DeleteExtension(const Model::DeleteExtensionRequest& request) const;

        /**
         * A Callable wrapper for DeleteExtension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExtensionRequestT = Model::DeleteExtensionRequest>
        Model::DeleteExtensionOutcomeCallable DeleteExtensionCallable(const DeleteExtensionRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::DeleteExtension, request);
        }

        /**
         * An Async wrapper for DeleteExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExtensionRequestT = Model::DeleteExtensionRequest>
        void DeleteExtensionAsync(const DeleteExtensionRequestT& request, const DeleteExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::DeleteExtension, request, handler, context);
        }

        /**
         * <p>Deletes an extension association. This action doesn't delete extensions
         * defined in the association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteExtensionAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExtensionAssociationOutcome DeleteExtensionAssociation(const Model::DeleteExtensionAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteExtensionAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExtensionAssociationRequestT = Model::DeleteExtensionAssociationRequest>
        Model::DeleteExtensionAssociationOutcomeCallable DeleteExtensionAssociationCallable(const DeleteExtensionAssociationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::DeleteExtensionAssociation, request);
        }

        /**
         * An Async wrapper for DeleteExtensionAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExtensionAssociationRequestT = Model::DeleteExtensionAssociationRequest>
        void DeleteExtensionAssociationAsync(const DeleteExtensionAssociationRequestT& request, const DeleteExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::DeleteExtensionAssociation, request, handler, context);
        }

        /**
         * <p>Deletes a version of a configuration from the AppConfig hosted configuration
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeleteHostedConfigurationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHostedConfigurationVersionOutcome DeleteHostedConfigurationVersion(const Model::DeleteHostedConfigurationVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteHostedConfigurationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHostedConfigurationVersionRequestT = Model::DeleteHostedConfigurationVersionRequest>
        Model::DeleteHostedConfigurationVersionOutcomeCallable DeleteHostedConfigurationVersionCallable(const DeleteHostedConfigurationVersionRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::DeleteHostedConfigurationVersion, request);
        }

        /**
         * An Async wrapper for DeleteHostedConfigurationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHostedConfigurationVersionRequestT = Model::DeleteHostedConfigurationVersionRequest>
        void DeleteHostedConfigurationVersionAsync(const DeleteHostedConfigurationVersionRequestT& request, const DeleteHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::DeleteHostedConfigurationVersion, request, handler, context);
        }

        /**
         * <p>Retrieves information about an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Retrieves information about a configuration profile.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetConfigurationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigurationProfileOutcome GetConfigurationProfile(const Model::GetConfigurationProfileRequest& request) const;

        /**
         * A Callable wrapper for GetConfigurationProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConfigurationProfileRequestT = Model::GetConfigurationProfileRequest>
        Model::GetConfigurationProfileOutcomeCallable GetConfigurationProfileCallable(const GetConfigurationProfileRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetConfigurationProfile, request);
        }

        /**
         * An Async wrapper for GetConfigurationProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConfigurationProfileRequestT = Model::GetConfigurationProfileRequest>
        void GetConfigurationProfileAsync(const GetConfigurationProfileRequestT& request, const GetConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetConfigurationProfile, request, handler, context);
        }

        /**
         * <p>Retrieves information about a configuration deployment.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetDeployment, request);
        }

        /**
         * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentRequestT = Model::GetDeploymentRequest>
        void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetDeployment, request, handler, context);
        }

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
         * A Callable wrapper for GetDeploymentStrategy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentStrategyRequestT = Model::GetDeploymentStrategyRequest>
        Model::GetDeploymentStrategyOutcomeCallable GetDeploymentStrategyCallable(const GetDeploymentStrategyRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetDeploymentStrategy, request);
        }

        /**
         * An Async wrapper for GetDeploymentStrategy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentStrategyRequestT = Model::GetDeploymentStrategyRequest>
        void GetDeploymentStrategyAsync(const GetDeploymentStrategyRequestT& request, const GetDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetDeploymentStrategy, request, handler, context);
        }

        /**
         * <p>Retrieves information about an environment. An environment is a deployment
         * group of AppConfig applications, such as applications in a
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
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetEnvironment, request, handler, context);
        }

        /**
         * <p>Returns information about an AppConfig extension.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExtensionOutcome GetExtension(const Model::GetExtensionRequest& request) const;

        /**
         * A Callable wrapper for GetExtension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExtensionRequestT = Model::GetExtensionRequest>
        Model::GetExtensionOutcomeCallable GetExtensionCallable(const GetExtensionRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetExtension, request);
        }

        /**
         * An Async wrapper for GetExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExtensionRequestT = Model::GetExtensionRequest>
        void GetExtensionAsync(const GetExtensionRequestT& request, const GetExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetExtension, request, handler, context);
        }

        /**
         * <p>Returns information about an AppConfig extension association. For more
         * information about extensions and associations, see <a
         * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
         * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetExtensionAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExtensionAssociationOutcome GetExtensionAssociation(const Model::GetExtensionAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetExtensionAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExtensionAssociationRequestT = Model::GetExtensionAssociationRequest>
        Model::GetExtensionAssociationOutcomeCallable GetExtensionAssociationCallable(const GetExtensionAssociationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetExtensionAssociation, request);
        }

        /**
         * An Async wrapper for GetExtensionAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExtensionAssociationRequestT = Model::GetExtensionAssociationRequest>
        void GetExtensionAssociationAsync(const GetExtensionAssociationRequestT& request, const GetExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetExtensionAssociation, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specific configuration version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/GetHostedConfigurationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostedConfigurationVersionOutcome GetHostedConfigurationVersion(const Model::GetHostedConfigurationVersionRequest& request) const;

        /**
         * A Callable wrapper for GetHostedConfigurationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetHostedConfigurationVersionRequestT = Model::GetHostedConfigurationVersionRequest>
        Model::GetHostedConfigurationVersionOutcomeCallable GetHostedConfigurationVersionCallable(const GetHostedConfigurationVersionRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::GetHostedConfigurationVersion, request);
        }

        /**
         * An Async wrapper for GetHostedConfigurationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHostedConfigurationVersionRequestT = Model::GetHostedConfigurationVersionRequest>
        void GetHostedConfigurationVersionAsync(const GetHostedConfigurationVersionRequestT& request, const GetHostedConfigurationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::GetHostedConfigurationVersion, request, handler, context);
        }

        /**
         * <p>Lists all applications in your Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists the configuration profiles for an application.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListConfigurationProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationProfilesOutcome ListConfigurationProfiles(const Model::ListConfigurationProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationProfilesRequestT = Model::ListConfigurationProfilesRequest>
        Model::ListConfigurationProfilesOutcomeCallable ListConfigurationProfilesCallable(const ListConfigurationProfilesRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListConfigurationProfiles, request);
        }

        /**
         * An Async wrapper for ListConfigurationProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationProfilesRequestT = Model::ListConfigurationProfilesRequest>
        void ListConfigurationProfilesAsync(const ListConfigurationProfilesRequestT& request, const ListConfigurationProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListConfigurationProfiles, request, handler, context);
        }

        /**
         * <p>Lists deployment strategies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeploymentStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentStrategiesOutcome ListDeploymentStrategies(const Model::ListDeploymentStrategiesRequest& request) const;

        /**
         * A Callable wrapper for ListDeploymentStrategies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentStrategiesRequestT = Model::ListDeploymentStrategiesRequest>
        Model::ListDeploymentStrategiesOutcomeCallable ListDeploymentStrategiesCallable(const ListDeploymentStrategiesRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListDeploymentStrategies, request);
        }

        /**
         * An Async wrapper for ListDeploymentStrategies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentStrategiesRequestT = Model::ListDeploymentStrategiesRequest>
        void ListDeploymentStrategiesAsync(const ListDeploymentStrategiesRequestT& request, const ListDeploymentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListDeploymentStrategies, request, handler, context);
        }

        /**
         * <p>Lists the deployments for an environment in descending deployment number
         * order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const ListDeploymentsRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListDeployments, request);
        }

        /**
         * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
        void ListDeploymentsAsync(const ListDeploymentsRequestT& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListDeployments, request, handler, context);
        }

        /**
         * <p>Lists the environments for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Lists all AppConfig extension associations in the account. For more
         * information about extensions and associations, see <a
         * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
         * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListExtensionAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExtensionAssociationsOutcome ListExtensionAssociations(const Model::ListExtensionAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListExtensionAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExtensionAssociationsRequestT = Model::ListExtensionAssociationsRequest>
        Model::ListExtensionAssociationsOutcomeCallable ListExtensionAssociationsCallable(const ListExtensionAssociationsRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListExtensionAssociations, request);
        }

        /**
         * An Async wrapper for ListExtensionAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExtensionAssociationsRequestT = Model::ListExtensionAssociationsRequest>
        void ListExtensionAssociationsAsync(const ListExtensionAssociationsRequestT& request, const ListExtensionAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListExtensionAssociations, request, handler, context);
        }

        /**
         * <p>Lists all custom and Amazon Web Services authored AppConfig extensions in the
         * account. For more information about extensions, see <a
         * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
         * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListExtensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExtensionsOutcome ListExtensions(const Model::ListExtensionsRequest& request) const;

        /**
         * A Callable wrapper for ListExtensions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExtensionsRequestT = Model::ListExtensionsRequest>
        Model::ListExtensionsOutcomeCallable ListExtensionsCallable(const ListExtensionsRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListExtensions, request);
        }

        /**
         * An Async wrapper for ListExtensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExtensionsRequestT = Model::ListExtensionsRequest>
        void ListExtensionsAsync(const ListExtensionsRequestT& request, const ListExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListExtensions, request, handler, context);
        }

        /**
         * <p>Lists configurations stored in the AppConfig hosted configuration store by
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListHostedConfigurationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostedConfigurationVersionsOutcome ListHostedConfigurationVersions(const Model::ListHostedConfigurationVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListHostedConfigurationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHostedConfigurationVersionsRequestT = Model::ListHostedConfigurationVersionsRequest>
        Model::ListHostedConfigurationVersionsOutcomeCallable ListHostedConfigurationVersionsCallable(const ListHostedConfigurationVersionsRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListHostedConfigurationVersions, request);
        }

        /**
         * An Async wrapper for ListHostedConfigurationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHostedConfigurationVersionsRequestT = Model::ListHostedConfigurationVersionsRequest>
        void ListHostedConfigurationVersionsAsync(const ListHostedConfigurationVersionsRequestT& request, const ListHostedConfigurationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListHostedConfigurationVersions, request, handler, context);
        }

        /**
         * <p>Retrieves the list of key-value tags assigned to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts a deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StartDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeploymentOutcome StartDeployment(const Model::StartDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StartDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDeploymentRequestT = Model::StartDeploymentRequest>
        Model::StartDeploymentOutcomeCallable StartDeploymentCallable(const StartDeploymentRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::StartDeployment, request);
        }

        /**
         * An Async wrapper for StartDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDeploymentRequestT = Model::StartDeploymentRequest>
        void StartDeploymentAsync(const StartDeploymentRequestT& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::StartDeployment, request, handler, context);
        }

        /**
         * <p>Stops a deployment. This API action works only on deployments that have a
         * status of <code>DEPLOYING</code>. This action moves the deployment to a status
         * of <code>ROLLED_BACK</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/StopDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDeploymentOutcome StopDeployment(const Model::StopDeploymentRequest& request) const;

        /**
         * A Callable wrapper for StopDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDeploymentRequestT = Model::StopDeploymentRequest>
        Model::StopDeploymentOutcomeCallable StopDeploymentCallable(const StopDeploymentRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::StopDeployment, request);
        }

        /**
         * An Async wrapper for StopDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDeploymentRequestT = Model::StopDeploymentRequest>
        void StopDeploymentAsync(const StopDeploymentRequestT& request, const StopDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::StopDeployment, request, handler, context);
        }

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
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes a tag key and value from an AppConfig resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Updates a configuration profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateConfigurationProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationProfileOutcome UpdateConfigurationProfile(const Model::UpdateConfigurationProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationProfileRequestT = Model::UpdateConfigurationProfileRequest>
        Model::UpdateConfigurationProfileOutcomeCallable UpdateConfigurationProfileCallable(const UpdateConfigurationProfileRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::UpdateConfigurationProfile, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationProfileRequestT = Model::UpdateConfigurationProfileRequest>
        void UpdateConfigurationProfileAsync(const UpdateConfigurationProfileRequestT& request, const UpdateConfigurationProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::UpdateConfigurationProfile, request, handler, context);
        }

        /**
         * <p>Updates a deployment strategy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateDeploymentStrategy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentStrategyOutcome UpdateDeploymentStrategy(const Model::UpdateDeploymentStrategyRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeploymentStrategy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeploymentStrategyRequestT = Model::UpdateDeploymentStrategyRequest>
        Model::UpdateDeploymentStrategyOutcomeCallable UpdateDeploymentStrategyCallable(const UpdateDeploymentStrategyRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::UpdateDeploymentStrategy, request);
        }

        /**
         * An Async wrapper for UpdateDeploymentStrategy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeploymentStrategyRequestT = Model::UpdateDeploymentStrategyRequest>
        void UpdateDeploymentStrategyAsync(const UpdateDeploymentStrategyRequestT& request, const UpdateDeploymentStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::UpdateDeploymentStrategy, request, handler, context);
        }

        /**
         * <p>Updates an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::UpdateEnvironment, request, handler, context);
        }

        /**
         * <p>Updates an AppConfig extension. For more information about extensions, see <a
         * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
         * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateExtension">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExtensionOutcome UpdateExtension(const Model::UpdateExtensionRequest& request) const;

        /**
         * A Callable wrapper for UpdateExtension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExtensionRequestT = Model::UpdateExtensionRequest>
        Model::UpdateExtensionOutcomeCallable UpdateExtensionCallable(const UpdateExtensionRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::UpdateExtension, request);
        }

        /**
         * An Async wrapper for UpdateExtension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExtensionRequestT = Model::UpdateExtensionRequest>
        void UpdateExtensionAsync(const UpdateExtensionRequestT& request, const UpdateExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::UpdateExtension, request, handler, context);
        }

        /**
         * <p>Updates an association. For more information about extensions and
         * associations, see <a
         * href="https://docs.aws.amazon.com/appconfig/latest/userguide/working-with-appconfig-extensions.html">Extending
         * workflows</a> in the <i>AppConfig User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/UpdateExtensionAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExtensionAssociationOutcome UpdateExtensionAssociation(const Model::UpdateExtensionAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateExtensionAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExtensionAssociationRequestT = Model::UpdateExtensionAssociationRequest>
        Model::UpdateExtensionAssociationOutcomeCallable UpdateExtensionAssociationCallable(const UpdateExtensionAssociationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::UpdateExtensionAssociation, request);
        }

        /**
         * An Async wrapper for UpdateExtensionAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExtensionAssociationRequestT = Model::UpdateExtensionAssociationRequest>
        void UpdateExtensionAssociationAsync(const UpdateExtensionAssociationRequestT& request, const UpdateExtensionAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::UpdateExtensionAssociation, request, handler, context);
        }

        /**
         * <p>Uses the validators in a configuration profile to validate a
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/ValidateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateConfigurationOutcome ValidateConfiguration(const Model::ValidateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ValidateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateConfigurationRequestT = Model::ValidateConfigurationRequest>
        Model::ValidateConfigurationOutcomeCallable ValidateConfigurationCallable(const ValidateConfigurationRequestT& request) const
        {
            return SubmitCallable(&AppConfigClient::ValidateConfiguration, request);
        }

        /**
         * An Async wrapper for ValidateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateConfigurationRequestT = Model::ValidateConfigurationRequest>
        void ValidateConfigurationAsync(const ValidateConfigurationRequestT& request, const ValidateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AppConfigClient::ValidateConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AppConfigEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AppConfigClient>;
      void init(const AppConfigClientConfiguration& clientConfiguration);

      AppConfigClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AppConfigEndpointProviderBase> m_endpointProvider;
  };

} // namespace AppConfig
} // namespace Aws

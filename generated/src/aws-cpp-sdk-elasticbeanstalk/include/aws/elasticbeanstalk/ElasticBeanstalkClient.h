/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkServiceClientModel.h>

namespace Aws
{
namespace ElasticBeanstalk
{
  /**
   * <fullname>AWS Elastic Beanstalk</fullname> <p>AWS Elastic Beanstalk makes it
   * easy for you to create, deploy, and manage scalable, fault-tolerant applications
   * running on the Amazon Web Services cloud.</p> <p>For more information about this
   * product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
   * Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk
   * WSDL is <a
   * href="https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
   * To install the Software Development Kits (SDKs), Integrated Development
   * Environment (IDE) Toolkits, and command line tools that enable you to access the
   * API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
   * Services</a>.</p> <p> <b>Endpoints</b> </p> <p>For a list of region-specific
   * endpoints that AWS Elastic Beanstalk supports, go to <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions
   * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p>
   */
  class AWS_ELASTICBEANSTALK_API ElasticBeanstalkClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<ElasticBeanstalkClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ElasticBeanstalkClientConfiguration ClientConfigurationType;
      typedef ElasticBeanstalkEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration = Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration(),
                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration = Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticBeanstalkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration = Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticBeanstalkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ElasticBeanstalkClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Cancels in-progress environment configuration update or application version
         * deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/AbortEnvironmentUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortEnvironmentUpdateOutcome AbortEnvironmentUpdate(const Model::AbortEnvironmentUpdateRequest& request) const;

        /**
         * A Callable wrapper for AbortEnvironmentUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AbortEnvironmentUpdateRequestT = Model::AbortEnvironmentUpdateRequest>
        Model::AbortEnvironmentUpdateOutcomeCallable AbortEnvironmentUpdateCallable(const AbortEnvironmentUpdateRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::AbortEnvironmentUpdate, request);
        }

        /**
         * An Async wrapper for AbortEnvironmentUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AbortEnvironmentUpdateRequestT = Model::AbortEnvironmentUpdateRequest>
        void AbortEnvironmentUpdateAsync(const AbortEnvironmentUpdateRequestT& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::AbortEnvironmentUpdate, request, handler, context);
        }

        /**
         * <p>Applies a scheduled managed action immediately. A managed action can be
         * applied only if its status is <code>Scheduled</code>. Get the status and action
         * ID of a managed action with
         * <a>DescribeEnvironmentManagedActions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplyEnvironmentManagedAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyEnvironmentManagedActionOutcome ApplyEnvironmentManagedAction(const Model::ApplyEnvironmentManagedActionRequest& request) const;

        /**
         * A Callable wrapper for ApplyEnvironmentManagedAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplyEnvironmentManagedActionRequestT = Model::ApplyEnvironmentManagedActionRequest>
        Model::ApplyEnvironmentManagedActionOutcomeCallable ApplyEnvironmentManagedActionCallable(const ApplyEnvironmentManagedActionRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::ApplyEnvironmentManagedAction, request);
        }

        /**
         * An Async wrapper for ApplyEnvironmentManagedAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyEnvironmentManagedActionRequestT = Model::ApplyEnvironmentManagedActionRequest>
        void ApplyEnvironmentManagedActionAsync(const ApplyEnvironmentManagedActionRequestT& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::ApplyEnvironmentManagedAction, request, handler, context);
        }

        /**
         * <p>Add or change the operations role used by an environment. After this call is
         * made, Elastic Beanstalk uses the associated operations role for permissions to
         * downstream services during subsequent calls acting on this environment. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/iam-operationsrole.html">Operations
         * roles</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/AssociateEnvironmentOperationsRole">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateEnvironmentOperationsRoleOutcome AssociateEnvironmentOperationsRole(const Model::AssociateEnvironmentOperationsRoleRequest& request) const;

        /**
         * A Callable wrapper for AssociateEnvironmentOperationsRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateEnvironmentOperationsRoleRequestT = Model::AssociateEnvironmentOperationsRoleRequest>
        Model::AssociateEnvironmentOperationsRoleOutcomeCallable AssociateEnvironmentOperationsRoleCallable(const AssociateEnvironmentOperationsRoleRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::AssociateEnvironmentOperationsRole, request);
        }

        /**
         * An Async wrapper for AssociateEnvironmentOperationsRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateEnvironmentOperationsRoleRequestT = Model::AssociateEnvironmentOperationsRoleRequest>
        void AssociateEnvironmentOperationsRoleAsync(const AssociateEnvironmentOperationsRoleRequestT& request, const AssociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::AssociateEnvironmentOperationsRole, request, handler, context);
        }

        /**
         * <p>Checks if the specified CNAME is available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CheckDNSAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDNSAvailabilityOutcome CheckDNSAvailability(const Model::CheckDNSAvailabilityRequest& request) const;

        /**
         * A Callable wrapper for CheckDNSAvailability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CheckDNSAvailabilityRequestT = Model::CheckDNSAvailabilityRequest>
        Model::CheckDNSAvailabilityOutcomeCallable CheckDNSAvailabilityCallable(const CheckDNSAvailabilityRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::CheckDNSAvailability, request);
        }

        /**
         * An Async wrapper for CheckDNSAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckDNSAvailabilityRequestT = Model::CheckDNSAvailabilityRequest>
        void CheckDNSAvailabilityAsync(const CheckDNSAvailabilityRequestT& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::CheckDNSAvailability, request, handler, context);
        }

        /**
         * <p>Create or update a group of environments that each run a separate component
         * of a single application. Takes a list of version labels that specify application
         * source bundles for each of the environments to create or update. The name of
         * each environment and other required information must be included in the source
         * bundles in an environment manifest named <code>env.yaml</code>. See <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-mgmt-compose.html">Compose
         * Environments</a> for details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ComposeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ComposeEnvironmentsOutcome ComposeEnvironments(const Model::ComposeEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ComposeEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ComposeEnvironmentsRequestT = Model::ComposeEnvironmentsRequest>
        Model::ComposeEnvironmentsOutcomeCallable ComposeEnvironmentsCallable(const ComposeEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::ComposeEnvironments, request);
        }

        /**
         * An Async wrapper for ComposeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ComposeEnvironmentsRequestT = Model::ComposeEnvironmentsRequest>
        void ComposeEnvironmentsAsync(const ComposeEnvironmentsRequestT& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::ComposeEnvironments, request, handler, context);
        }

        /**
         * <p>Creates an application that has one configuration template named
         * <code>default</code> and no application versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates an application version for the specified application. You can create
         * an application version from a source bundle in Amazon S3, a commit in AWS
         * CodeCommit, or the output of an AWS CodeBuild build as follows:</p> <p>Specify a
         * commit in an AWS CodeCommit repository with
         * <code>SourceBuildInformation</code>.</p> <p>Specify a build in an AWS CodeBuild
         * with <code>SourceBuildInformation</code> and
         * <code>BuildConfiguration</code>.</p> <p>Specify a source bundle in S3 with
         * <code>SourceBundle</code> </p> <p>Omit both <code>SourceBuildInformation</code>
         * and <code>SourceBundle</code> to use the default sample application.</p> 
         * <p>After you create an application version with a specified Amazon S3 bucket and
         * key location, you can't change that Amazon S3 location. If you change the Amazon
         * S3 location, you receive an exception when you attempt to launch an environment
         * from the application version.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationVersionRequestT = Model::CreateApplicationVersionRequest>
        Model::CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const CreateApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::CreateApplicationVersion, request);
        }

        /**
         * An Async wrapper for CreateApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationVersionRequestT = Model::CreateApplicationVersionRequest>
        void CreateApplicationVersionAsync(const CreateApplicationVersionRequestT& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::CreateApplicationVersion, request, handler, context);
        }

        /**
         * <p>Creates an AWS Elastic Beanstalk configuration template, associated with a
         * specific Elastic Beanstalk application. You define application configuration
         * settings in a configuration template. You can then use the configuration
         * template to deploy different versions of the application with the same
         * configuration settings.</p> <p>Templates aren't associated with any environment.
         * The <code>EnvironmentName</code> response element is always
         * <code>null</code>.</p> <p>Related Topics</p> <ul> <li> <p>
         * <a>DescribeConfigurationOptions</a> </p> </li> <li> <p>
         * <a>DescribeConfigurationSettings</a> </p> </li> <li> <p>
         * <a>ListAvailableSolutionStacks</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationTemplateOutcome CreateConfigurationTemplate(const Model::CreateConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationTemplateRequestT = Model::CreateConfigurationTemplateRequest>
        Model::CreateConfigurationTemplateOutcomeCallable CreateConfigurationTemplateCallable(const CreateConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::CreateConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for CreateConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationTemplateRequestT = Model::CreateConfigurationTemplateRequest>
        void CreateConfigurationTemplateAsync(const CreateConfigurationTemplateRequestT& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::CreateConfigurationTemplate, request, handler, context);
        }

        /**
         * <p>Launches an AWS Elastic Beanstalk environment for the specified application
         * using the specified configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::CreateEnvironment, request, handler, context);
        }

        /**
         * <p>Create a new version of your custom platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreatePlatformVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformVersionOutcome CreatePlatformVersion(const Model::CreatePlatformVersionRequest& request) const;

        /**
         * A Callable wrapper for CreatePlatformVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePlatformVersionRequestT = Model::CreatePlatformVersionRequest>
        Model::CreatePlatformVersionOutcomeCallable CreatePlatformVersionCallable(const CreatePlatformVersionRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::CreatePlatformVersion, request);
        }

        /**
         * An Async wrapper for CreatePlatformVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePlatformVersionRequestT = Model::CreatePlatformVersionRequest>
        void CreatePlatformVersionAsync(const CreatePlatformVersionRequestT& request, const CreatePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::CreatePlatformVersion, request, handler, context);
        }

        /**
         * <p>Creates a bucket in Amazon S3 to store application versions, logs, and other
         * files used by Elastic Beanstalk environments. The Elastic Beanstalk console and
         * EB CLI call this API the first time you create an environment in a region. If
         * the storage location already exists, <code>CreateStorageLocation</code> still
         * returns the bucket name but does not create a new bucket.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateStorageLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStorageLocationOutcome CreateStorageLocation(const Model::CreateStorageLocationRequest& request) const;

        /**
         * A Callable wrapper for CreateStorageLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStorageLocationRequestT = Model::CreateStorageLocationRequest>
        Model::CreateStorageLocationOutcomeCallable CreateStorageLocationCallable(const CreateStorageLocationRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::CreateStorageLocation, request);
        }

        /**
         * An Async wrapper for CreateStorageLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStorageLocationRequestT = Model::CreateStorageLocationRequest>
        void CreateStorageLocationAsync(const CreateStorageLocationRequestT& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::CreateStorageLocation, request, handler, context);
        }

        /**
         * <p>Deletes the specified application along with all associated versions and
         * configurations. The application versions will not be deleted from your Amazon S3
         * bucket.</p>  <p>You cannot delete an application that has a running
         * environment.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes the specified version from the specified application.</p> 
         * <p>You cannot delete an application version that is associated with a running
         * environment.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationVersionOutcome DeleteApplicationVersion(const Model::DeleteApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationVersionRequestT = Model::DeleteApplicationVersionRequest>
        Model::DeleteApplicationVersionOutcomeCallable DeleteApplicationVersionCallable(const DeleteApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DeleteApplicationVersion, request);
        }

        /**
         * An Async wrapper for DeleteApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationVersionRequestT = Model::DeleteApplicationVersionRequest>
        void DeleteApplicationVersionAsync(const DeleteApplicationVersionRequestT& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DeleteApplicationVersion, request, handler, context);
        }

        /**
         * <p>Deletes the specified configuration template.</p>  <p>When you launch
         * an environment using a configuration template, the environment gets a copy of
         * the template. You can delete or modify the environment's copy of the template
         * without affecting the running environment.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationTemplateOutcome DeleteConfigurationTemplate(const Model::DeleteConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationTemplateRequestT = Model::DeleteConfigurationTemplateRequest>
        Model::DeleteConfigurationTemplateOutcomeCallable DeleteConfigurationTemplateCallable(const DeleteConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DeleteConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationTemplateRequestT = Model::DeleteConfigurationTemplateRequest>
        void DeleteConfigurationTemplateAsync(const DeleteConfigurationTemplateRequestT& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DeleteConfigurationTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the draft configuration associated with the running environment.</p>
         * <p>Updating a running environment with any configuration changes creates a draft
         * configuration set. You can get the draft configuration using
         * <a>DescribeConfigurationSettings</a> while the update is in progress or if the
         * update fails. The <code>DeploymentStatus</code> for the draft configuration
         * indicates whether the deployment is in process or has failed. The draft
         * configuration remains in existence until it is deleted with this
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeleteEnvironmentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentConfigurationOutcome DeleteEnvironmentConfiguration(const Model::DeleteEnvironmentConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentConfigurationRequestT = Model::DeleteEnvironmentConfigurationRequest>
        Model::DeleteEnvironmentConfigurationOutcomeCallable DeleteEnvironmentConfigurationCallable(const DeleteEnvironmentConfigurationRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DeleteEnvironmentConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteEnvironmentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentConfigurationRequestT = Model::DeleteEnvironmentConfigurationRequest>
        void DeleteEnvironmentConfigurationAsync(const DeleteEnvironmentConfigurationRequestT& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DeleteEnvironmentConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified version of a custom platform.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DeletePlatformVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlatformVersionOutcome DeletePlatformVersion(const Model::DeletePlatformVersionRequest& request) const;

        /**
         * A Callable wrapper for DeletePlatformVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePlatformVersionRequestT = Model::DeletePlatformVersionRequest>
        Model::DeletePlatformVersionOutcomeCallable DeletePlatformVersionCallable(const DeletePlatformVersionRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DeletePlatformVersion, request);
        }

        /**
         * An Async wrapper for DeletePlatformVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePlatformVersionRequestT = Model::DeletePlatformVersionRequest>
        void DeletePlatformVersionAsync(const DeletePlatformVersionRequestT& request, const DeletePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DeletePlatformVersion, request, handler, context);
        }

        /**
         * <p>Returns attributes related to AWS Elastic Beanstalk that are associated with
         * the calling AWS account.</p> <p>The result currently has one set of
         * attributes—resource quotas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeAccountAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const DescribeAccountAttributesRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeAccountAttributes, request);
        }

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountAttributesRequestT = Model::DescribeAccountAttributesRequest>
        void DescribeAccountAttributesAsync(const DescribeAccountAttributesRequestT& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeAccountAttributes, request, handler, context);
        }

        /**
         * <p>Retrieve a list of application versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationVersionsOutcome DescribeApplicationVersions(const Model::DescribeApplicationVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationVersionsRequestT = Model::DescribeApplicationVersionsRequest>
        Model::DescribeApplicationVersionsOutcomeCallable DescribeApplicationVersionsCallable(const DescribeApplicationVersionsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeApplicationVersions, request);
        }

        /**
         * An Async wrapper for DescribeApplicationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationVersionsRequestT = Model::DescribeApplicationVersionsRequest>
        void DescribeApplicationVersionsAsync(const DescribeApplicationVersionsRequestT& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeApplicationVersions, request, handler, context);
        }

        /**
         * <p>Returns the descriptions of existing applications.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationsRequestT = Model::DescribeApplicationsRequest>
        Model::DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const DescribeApplicationsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeApplications, request);
        }

        /**
         * An Async wrapper for DescribeApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationsRequestT = Model::DescribeApplicationsRequest>
        void DescribeApplicationsAsync(const DescribeApplicationsRequestT& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeApplications, request, handler, context);
        }

        /**
         * <p>Describes the configuration options that are used in a particular
         * configuration template or environment, or that a specified solution stack
         * defines. The description includes the values the options, their default values,
         * and an indication of the required action on a running environment if an option
         * value is changed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOptionsOutcome DescribeConfigurationOptions(const Model::DescribeConfigurationOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationOptionsRequestT = Model::DescribeConfigurationOptionsRequest>
        Model::DescribeConfigurationOptionsOutcomeCallable DescribeConfigurationOptionsCallable(const DescribeConfigurationOptionsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeConfigurationOptions, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationOptionsRequestT = Model::DescribeConfigurationOptionsRequest>
        void DescribeConfigurationOptionsAsync(const DescribeConfigurationOptionsRequestT& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeConfigurationOptions, request, handler, context);
        }

        /**
         * <p>Returns a description of the settings for the specified configuration set,
         * that is, either a configuration template or the configuration set associated
         * with a running environment.</p> <p>When describing the settings for the
         * configuration set associated with a running environment, it is possible to
         * receive two sets of setting descriptions. One is the deployed configuration set,
         * and the other is a draft configuration of an environment that is either in the
         * process of deployment or that failed to deploy.</p> <p>Related Topics</p> <ul>
         * <li> <p> <a>DeleteEnvironmentConfiguration</a> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeConfigurationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationSettingsOutcome DescribeConfigurationSettings(const Model::DescribeConfigurationSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationSettingsRequestT = Model::DescribeConfigurationSettingsRequest>
        Model::DescribeConfigurationSettingsOutcomeCallable DescribeConfigurationSettingsCallable(const DescribeConfigurationSettingsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeConfigurationSettings, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationSettingsRequestT = Model::DescribeConfigurationSettingsRequest>
        void DescribeConfigurationSettingsAsync(const DescribeConfigurationSettingsRequestT& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeConfigurationSettings, request, handler, context);
        }

        /**
         * <p>Returns information about the overall health of the specified environment.
         * The <b>DescribeEnvironmentHealth</b> operation is only available with AWS
         * Elastic Beanstalk Enhanced Health.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentHealthOutcome DescribeEnvironmentHealth(const Model::DescribeEnvironmentHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironmentHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentHealthRequestT = Model::DescribeEnvironmentHealthRequest>
        Model::DescribeEnvironmentHealthOutcomeCallable DescribeEnvironmentHealthCallable(const DescribeEnvironmentHealthRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentHealth, request);
        }

        /**
         * An Async wrapper for DescribeEnvironmentHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentHealthRequestT = Model::DescribeEnvironmentHealthRequest>
        void DescribeEnvironmentHealthAsync(const DescribeEnvironmentHealthRequestT& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentHealth, request, handler, context);
        }

        /**
         * <p>Lists an environment's completed and failed managed actions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentManagedActionHistoryOutcome DescribeEnvironmentManagedActionHistory(const Model::DescribeEnvironmentManagedActionHistoryRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironmentManagedActionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentManagedActionHistoryRequestT = Model::DescribeEnvironmentManagedActionHistoryRequest>
        Model::DescribeEnvironmentManagedActionHistoryOutcomeCallable DescribeEnvironmentManagedActionHistoryCallable(const DescribeEnvironmentManagedActionHistoryRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistory, request);
        }

        /**
         * An Async wrapper for DescribeEnvironmentManagedActionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentManagedActionHistoryRequestT = Model::DescribeEnvironmentManagedActionHistoryRequest>
        void DescribeEnvironmentManagedActionHistoryAsync(const DescribeEnvironmentManagedActionHistoryRequestT& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentManagedActionHistory, request, handler, context);
        }

        /**
         * <p>Lists an environment's upcoming and in-progress managed
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentManagedActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentManagedActionsOutcome DescribeEnvironmentManagedActions(const Model::DescribeEnvironmentManagedActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironmentManagedActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentManagedActionsRequestT = Model::DescribeEnvironmentManagedActionsRequest>
        Model::DescribeEnvironmentManagedActionsOutcomeCallable DescribeEnvironmentManagedActionsCallable(const DescribeEnvironmentManagedActionsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentManagedActions, request);
        }

        /**
         * An Async wrapper for DescribeEnvironmentManagedActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentManagedActionsRequestT = Model::DescribeEnvironmentManagedActionsRequest>
        void DescribeEnvironmentManagedActionsAsync(const DescribeEnvironmentManagedActionsRequestT& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentManagedActions, request, handler, context);
        }

        /**
         * <p>Returns AWS resources for this environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentResources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentResourcesOutcome DescribeEnvironmentResources(const Model::DescribeEnvironmentResourcesRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironmentResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentResourcesRequestT = Model::DescribeEnvironmentResourcesRequest>
        Model::DescribeEnvironmentResourcesOutcomeCallable DescribeEnvironmentResourcesCallable(const DescribeEnvironmentResourcesRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironmentResources, request);
        }

        /**
         * An Async wrapper for DescribeEnvironmentResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentResourcesRequestT = Model::DescribeEnvironmentResourcesRequest>
        void DescribeEnvironmentResourcesAsync(const DescribeEnvironmentResourcesRequestT& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironmentResources, request, handler, context);
        }

        /**
         * <p>Returns descriptions for existing environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEnvironmentsRequestT = Model::DescribeEnvironmentsRequest>
        Model::DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const DescribeEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeEnvironments, request);
        }

        /**
         * An Async wrapper for DescribeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEnvironmentsRequestT = Model::DescribeEnvironmentsRequest>
        void DescribeEnvironmentsAsync(const DescribeEnvironmentsRequestT& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeEnvironments, request, handler, context);
        }

        /**
         * <p>Returns list of event descriptions matching criteria up to the last 6
         * weeks.</p>  <p>This action returns the most recent 1,000 events from the
         * specified <code>NextToken</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const DescribeEventsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeEvents, request);
        }

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        void DescribeEventsAsync(const DescribeEventsRequestT& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeEvents, request, handler, context);
        }

        /**
         * <p>Retrieves detailed information about the health of instances in your AWS
         * Elastic Beanstalk. This operation requires <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced.html">enhanced
         * health reporting</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeInstancesHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesHealthOutcome DescribeInstancesHealth(const Model::DescribeInstancesHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstancesHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstancesHealthRequestT = Model::DescribeInstancesHealthRequest>
        Model::DescribeInstancesHealthOutcomeCallable DescribeInstancesHealthCallable(const DescribeInstancesHealthRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribeInstancesHealth, request);
        }

        /**
         * An Async wrapper for DescribeInstancesHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstancesHealthRequestT = Model::DescribeInstancesHealthRequest>
        void DescribeInstancesHealthAsync(const DescribeInstancesHealthRequestT& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribeInstancesHealth, request, handler, context);
        }

        /**
         * <p>Describes a platform version. Provides full details. Compare to
         * <a>ListPlatformVersions</a>, which provides summary information about a list of
         * platform versions.</p> <p>For definitions of platform version and other
         * platform-related terms, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/platforms-glossary.html">AWS
         * Elastic Beanstalk Platforms Glossary</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribePlatformVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlatformVersionOutcome DescribePlatformVersion(const Model::DescribePlatformVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribePlatformVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePlatformVersionRequestT = Model::DescribePlatformVersionRequest>
        Model::DescribePlatformVersionOutcomeCallable DescribePlatformVersionCallable(const DescribePlatformVersionRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DescribePlatformVersion, request);
        }

        /**
         * An Async wrapper for DescribePlatformVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePlatformVersionRequestT = Model::DescribePlatformVersionRequest>
        void DescribePlatformVersionAsync(const DescribePlatformVersionRequestT& request, const DescribePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DescribePlatformVersion, request, handler, context);
        }

        /**
         * <p>Disassociate the operations role from an environment. After this call is
         * made, Elastic Beanstalk uses the caller's permissions for permissions to
         * downstream services during subsequent calls acting on this environment. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/iam-operationsrole.html">Operations
         * roles</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DisassociateEnvironmentOperationsRole">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateEnvironmentOperationsRoleOutcome DisassociateEnvironmentOperationsRole(const Model::DisassociateEnvironmentOperationsRoleRequest& request) const;

        /**
         * A Callable wrapper for DisassociateEnvironmentOperationsRole that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateEnvironmentOperationsRoleRequestT = Model::DisassociateEnvironmentOperationsRoleRequest>
        Model::DisassociateEnvironmentOperationsRoleOutcomeCallable DisassociateEnvironmentOperationsRoleCallable(const DisassociateEnvironmentOperationsRoleRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::DisassociateEnvironmentOperationsRole, request);
        }

        /**
         * An Async wrapper for DisassociateEnvironmentOperationsRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateEnvironmentOperationsRoleRequestT = Model::DisassociateEnvironmentOperationsRoleRequest>
        void DisassociateEnvironmentOperationsRoleAsync(const DisassociateEnvironmentOperationsRoleRequestT& request, const DisassociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::DisassociateEnvironmentOperationsRole, request, handler, context);
        }

        /**
         * <p>Returns a list of the available solution stack names, with the public version
         * first and then in reverse chronological order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListAvailableSolutionStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableSolutionStacksOutcome ListAvailableSolutionStacks(const Model::ListAvailableSolutionStacksRequest& request) const;

        /**
         * A Callable wrapper for ListAvailableSolutionStacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailableSolutionStacksRequestT = Model::ListAvailableSolutionStacksRequest>
        Model::ListAvailableSolutionStacksOutcomeCallable ListAvailableSolutionStacksCallable(const ListAvailableSolutionStacksRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::ListAvailableSolutionStacks, request);
        }

        /**
         * An Async wrapper for ListAvailableSolutionStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailableSolutionStacksRequestT = Model::ListAvailableSolutionStacksRequest>
        void ListAvailableSolutionStacksAsync(const ListAvailableSolutionStacksRequestT& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::ListAvailableSolutionStacks, request, handler, context);
        }

        /**
         * <p>Lists the platform branches available for your account in an AWS Region.
         * Provides summary information about each platform branch.</p> <p>For definitions
         * of platform branch and other platform-related terms, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/platforms-glossary.html">AWS
         * Elastic Beanstalk Platforms Glossary</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListPlatformBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlatformBranchesOutcome ListPlatformBranches(const Model::ListPlatformBranchesRequest& request) const;

        /**
         * A Callable wrapper for ListPlatformBranches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPlatformBranchesRequestT = Model::ListPlatformBranchesRequest>
        Model::ListPlatformBranchesOutcomeCallable ListPlatformBranchesCallable(const ListPlatformBranchesRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::ListPlatformBranches, request);
        }

        /**
         * An Async wrapper for ListPlatformBranches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPlatformBranchesRequestT = Model::ListPlatformBranchesRequest>
        void ListPlatformBranchesAsync(const ListPlatformBranchesRequestT& request, const ListPlatformBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::ListPlatformBranches, request, handler, context);
        }

        /**
         * <p>Lists the platform versions available for your account in an AWS Region.
         * Provides summary information about each platform version. Compare to
         * <a>DescribePlatformVersion</a>, which provides full details about a single
         * platform version.</p> <p>For definitions of platform version and other
         * platform-related terms, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/platforms-glossary.html">AWS
         * Elastic Beanstalk Platforms Glossary</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListPlatformVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlatformVersionsOutcome ListPlatformVersions(const Model::ListPlatformVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPlatformVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPlatformVersionsRequestT = Model::ListPlatformVersionsRequest>
        Model::ListPlatformVersionsOutcomeCallable ListPlatformVersionsCallable(const ListPlatformVersionsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::ListPlatformVersions, request);
        }

        /**
         * An Async wrapper for ListPlatformVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPlatformVersionsRequestT = Model::ListPlatformVersionsRequest>
        void ListPlatformVersionsAsync(const ListPlatformVersionsRequestT& request, const ListPlatformVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::ListPlatformVersions, request, handler, context);
        }

        /**
         * <p>Return the tags applied to an AWS Elastic Beanstalk resource. The response
         * contains a list of tag key-value pairs.</p> <p>Elastic Beanstalk supports
         * tagging of all of its resources. For details about resource tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/applications-tagging-resources.html">Tagging
         * Application Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Deletes and recreates all of the AWS resources (for example: the Auto Scaling
         * group, load balancer, etc.) for a specified environment and forces a
         * restart.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RebuildEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::RebuildEnvironmentOutcome RebuildEnvironment(const Model::RebuildEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for RebuildEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebuildEnvironmentRequestT = Model::RebuildEnvironmentRequest>
        Model::RebuildEnvironmentOutcomeCallable RebuildEnvironmentCallable(const RebuildEnvironmentRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::RebuildEnvironment, request);
        }

        /**
         * An Async wrapper for RebuildEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebuildEnvironmentRequestT = Model::RebuildEnvironmentRequest>
        void RebuildEnvironmentAsync(const RebuildEnvironmentRequestT& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::RebuildEnvironment, request, handler, context);
        }

        /**
         * <p>Initiates a request to compile the specified type of information of the
         * deployed environment.</p> <p> Setting the <code>InfoType</code> to
         * <code>tail</code> compiles the last lines from the application server log files
         * of every Amazon EC2 instance in your environment. </p> <p> Setting the
         * <code>InfoType</code> to <code>bundle</code> compresses the application server
         * log files for every Amazon EC2 instance into a <code>.zip</code> file. Legacy
         * and .NET containers do not support bundle logs. </p> <p> Use
         * <a>RetrieveEnvironmentInfo</a> to obtain the set of logs. </p> <p>Related
         * Topics</p> <ul> <li> <p> <a>RetrieveEnvironmentInfo</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RequestEnvironmentInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestEnvironmentInfoOutcome RequestEnvironmentInfo(const Model::RequestEnvironmentInfoRequest& request) const;

        /**
         * A Callable wrapper for RequestEnvironmentInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RequestEnvironmentInfoRequestT = Model::RequestEnvironmentInfoRequest>
        Model::RequestEnvironmentInfoOutcomeCallable RequestEnvironmentInfoCallable(const RequestEnvironmentInfoRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::RequestEnvironmentInfo, request);
        }

        /**
         * An Async wrapper for RequestEnvironmentInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RequestEnvironmentInfoRequestT = Model::RequestEnvironmentInfoRequest>
        void RequestEnvironmentInfoAsync(const RequestEnvironmentInfoRequestT& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::RequestEnvironmentInfo, request, handler, context);
        }

        /**
         * <p>Causes the environment to restart the application container server running on
         * each Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RestartAppServer">AWS
         * API Reference</a></p>
         */
        virtual Model::RestartAppServerOutcome RestartAppServer(const Model::RestartAppServerRequest& request) const;

        /**
         * A Callable wrapper for RestartAppServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestartAppServerRequestT = Model::RestartAppServerRequest>
        Model::RestartAppServerOutcomeCallable RestartAppServerCallable(const RestartAppServerRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::RestartAppServer, request);
        }

        /**
         * An Async wrapper for RestartAppServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestartAppServerRequestT = Model::RestartAppServerRequest>
        void RestartAppServerAsync(const RestartAppServerRequestT& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::RestartAppServer, request, handler, context);
        }

        /**
         * <p>Retrieves the compiled information from a <a>RequestEnvironmentInfo</a>
         * request.</p> <p>Related Topics</p> <ul> <li> <p> <a>RequestEnvironmentInfo</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/RetrieveEnvironmentInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveEnvironmentInfoOutcome RetrieveEnvironmentInfo(const Model::RetrieveEnvironmentInfoRequest& request) const;

        /**
         * A Callable wrapper for RetrieveEnvironmentInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RetrieveEnvironmentInfoRequestT = Model::RetrieveEnvironmentInfoRequest>
        Model::RetrieveEnvironmentInfoOutcomeCallable RetrieveEnvironmentInfoCallable(const RetrieveEnvironmentInfoRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::RetrieveEnvironmentInfo, request);
        }

        /**
         * An Async wrapper for RetrieveEnvironmentInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RetrieveEnvironmentInfoRequestT = Model::RetrieveEnvironmentInfoRequest>
        void RetrieveEnvironmentInfoAsync(const RetrieveEnvironmentInfoRequestT& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::RetrieveEnvironmentInfo, request, handler, context);
        }

        /**
         * <p>Swaps the CNAMEs of two environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SwapEnvironmentCNAMEs">AWS
         * API Reference</a></p>
         */
        virtual Model::SwapEnvironmentCNAMEsOutcome SwapEnvironmentCNAMEs(const Model::SwapEnvironmentCNAMEsRequest& request) const;

        /**
         * A Callable wrapper for SwapEnvironmentCNAMEs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SwapEnvironmentCNAMEsRequestT = Model::SwapEnvironmentCNAMEsRequest>
        Model::SwapEnvironmentCNAMEsOutcomeCallable SwapEnvironmentCNAMEsCallable(const SwapEnvironmentCNAMEsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::SwapEnvironmentCNAMEs, request);
        }

        /**
         * An Async wrapper for SwapEnvironmentCNAMEs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SwapEnvironmentCNAMEsRequestT = Model::SwapEnvironmentCNAMEsRequest>
        void SwapEnvironmentCNAMEsAsync(const SwapEnvironmentCNAMEsRequestT& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::SwapEnvironmentCNAMEs, request, handler, context);
        }

        /**
         * <p>Terminates the specified environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/TerminateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateEnvironmentOutcome TerminateEnvironment(const Model::TerminateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for TerminateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateEnvironmentRequestT = Model::TerminateEnvironmentRequest>
        Model::TerminateEnvironmentOutcomeCallable TerminateEnvironmentCallable(const TerminateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::TerminateEnvironment, request);
        }

        /**
         * An Async wrapper for TerminateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateEnvironmentRequestT = Model::TerminateEnvironmentRequest>
        void TerminateEnvironmentAsync(const TerminateEnvironmentRequestT& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::TerminateEnvironment, request, handler, context);
        }

        /**
         * <p>Updates the specified application to have the specified properties.</p>
         *  <p>If a property (for example, <code>description</code>) is not provided,
         * the value remains unchanged. To clear these properties, specify an empty
         * string.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p>Modifies lifecycle settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationResourceLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationResourceLifecycleOutcome UpdateApplicationResourceLifecycle(const Model::UpdateApplicationResourceLifecycleRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationResourceLifecycle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationResourceLifecycleRequestT = Model::UpdateApplicationResourceLifecycleRequest>
        Model::UpdateApplicationResourceLifecycleOutcomeCallable UpdateApplicationResourceLifecycleCallable(const UpdateApplicationResourceLifecycleRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::UpdateApplicationResourceLifecycle, request);
        }

        /**
         * An Async wrapper for UpdateApplicationResourceLifecycle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationResourceLifecycleRequestT = Model::UpdateApplicationResourceLifecycleRequest>
        void UpdateApplicationResourceLifecycleAsync(const UpdateApplicationResourceLifecycleRequestT& request, const UpdateApplicationResourceLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::UpdateApplicationResourceLifecycle, request, handler, context);
        }

        /**
         * <p>Updates the specified application version to have the specified
         * properties.</p>  <p>If a property (for example, <code>description</code>)
         * is not provided, the value remains unchanged. To clear properties, specify an
         * empty string.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationVersionOutcome UpdateApplicationVersion(const Model::UpdateApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationVersionRequestT = Model::UpdateApplicationVersionRequest>
        Model::UpdateApplicationVersionOutcomeCallable UpdateApplicationVersionCallable(const UpdateApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::UpdateApplicationVersion, request);
        }

        /**
         * An Async wrapper for UpdateApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationVersionRequestT = Model::UpdateApplicationVersionRequest>
        void UpdateApplicationVersionAsync(const UpdateApplicationVersionRequestT& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::UpdateApplicationVersion, request, handler, context);
        }

        /**
         * <p>Updates the specified configuration template to have the specified properties
         * or configuration option values.</p>  <p>If a property (for example,
         * <code>ApplicationName</code>) is not provided, its value remains unchanged. To
         * clear such properties, specify an empty string.</p>  <p>Related
         * Topics</p> <ul> <li> <p> <a>DescribeConfigurationOptions</a> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateConfigurationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationTemplateOutcome UpdateConfigurationTemplate(const Model::UpdateConfigurationTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfigurationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationTemplateRequestT = Model::UpdateConfigurationTemplateRequest>
        Model::UpdateConfigurationTemplateOutcomeCallable UpdateConfigurationTemplateCallable(const UpdateConfigurationTemplateRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::UpdateConfigurationTemplate, request);
        }

        /**
         * An Async wrapper for UpdateConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationTemplateRequestT = Model::UpdateConfigurationTemplateRequest>
        void UpdateConfigurationTemplateAsync(const UpdateConfigurationTemplateRequestT& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::UpdateConfigurationTemplate, request, handler, context);
        }

        /**
         * <p>Updates the environment description, deploys a new application version,
         * updates the configuration settings to an entirely new configuration template, or
         * updates select configuration option values in the running environment.</p> <p>
         * Attempting to update both the release and configuration is not allowed and AWS
         * Elastic Beanstalk returns an <code>InvalidParameterCombination</code> error.
         * </p> <p> When updating the configuration settings to a new template or
         * individual settings, a draft configuration is created and
         * <a>DescribeConfigurationSettings</a> for this environment returns two setting
         * descriptions with different <code>DeploymentStatus</code> values. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::UpdateEnvironment, request, handler, context);
        }

        /**
         * <p>Update the list of tags applied to an AWS Elastic Beanstalk resource. Two
         * lists can be passed: <code>TagsToAdd</code> for tags to add or update, and
         * <code>TagsToRemove</code>.</p> <p>Elastic Beanstalk supports tagging of all of
         * its resources. For details about resource tagging, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/applications-tagging-resources.html">Tagging
         * Application Resources</a>.</p> <p>If you create a custom IAM user policy to
         * control permission to this operation, specify one of the following two virtual
         * actions (or both) instead of the API operation name:</p> <dl>
         * <dt>elasticbeanstalk:AddTags</dt> <dd> <p>Controls permission to call
         * <code>UpdateTagsForResource</code> and pass a list of tags to add in the
         * <code>TagsToAdd</code> parameter.</p> </dd> <dt>elasticbeanstalk:RemoveTags</dt>
         * <dd> <p>Controls permission to call <code>UpdateTagsForResource</code> and pass
         * a list of tag keys to remove in the <code>TagsToRemove</code> parameter.</p>
         * </dd> </dl> <p>For details about creating a custom user policy, see <a
         * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/AWSHowTo.iam.managed-policies.html#AWSHowTo.iam.policies">Creating
         * a Custom User Policy</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagsForResourceOutcome UpdateTagsForResource(const Model::UpdateTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTagsForResourceRequestT = Model::UpdateTagsForResourceRequest>
        Model::UpdateTagsForResourceOutcomeCallable UpdateTagsForResourceCallable(const UpdateTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::UpdateTagsForResource, request);
        }

        /**
         * An Async wrapper for UpdateTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTagsForResourceRequestT = Model::UpdateTagsForResourceRequest>
        void UpdateTagsForResourceAsync(const UpdateTagsForResourceRequestT& request, const UpdateTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::UpdateTagsForResource, request, handler, context);
        }

        /**
         * <p>Takes a set of configuration settings and either a configuration template or
         * environment, and determines whether those values are valid.</p> <p>This action
         * returns a list of messages indicating any errors or warnings associated with the
         * selection of option values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ValidateConfigurationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateConfigurationSettingsOutcome ValidateConfigurationSettings(const Model::ValidateConfigurationSettingsRequest& request) const;

        /**
         * A Callable wrapper for ValidateConfigurationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateConfigurationSettingsRequestT = Model::ValidateConfigurationSettingsRequest>
        Model::ValidateConfigurationSettingsOutcomeCallable ValidateConfigurationSettingsCallable(const ValidateConfigurationSettingsRequestT& request) const
        {
            return SubmitCallable(&ElasticBeanstalkClient::ValidateConfigurationSettings, request);
        }

        /**
         * An Async wrapper for ValidateConfigurationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateConfigurationSettingsRequestT = Model::ValidateConfigurationSettingsRequest>
        void ValidateConfigurationSettingsAsync(const ValidateConfigurationSettingsRequestT& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ElasticBeanstalkClient::ValidateConfigurationSettings, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<ElasticBeanstalkEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<ElasticBeanstalkClient>;
        void init(const ElasticBeanstalkClientConfiguration& clientConfiguration);

        ElasticBeanstalkClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<ElasticBeanstalkEndpointProviderBase> m_endpointProvider;
  };

} // namespace ElasticBeanstalk
} // namespace Aws

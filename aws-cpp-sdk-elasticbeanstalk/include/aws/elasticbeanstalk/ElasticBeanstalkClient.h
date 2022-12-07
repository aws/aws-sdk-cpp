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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration = Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration(),
                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticBeanstalkEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ElasticBeanstalkClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticBeanstalkEndpointProvider>(ALLOCATION_TAG),
                               const Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration& clientConfiguration = Aws::ElasticBeanstalk::ElasticBeanstalkClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ElasticBeanstalkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ElasticBeanstalkEndpointProviderBase> endpointProvider = Aws::MakeShared<ElasticBeanstalkEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::AbortEnvironmentUpdateOutcomeCallable AbortEnvironmentUpdateCallable(const Model::AbortEnvironmentUpdateRequest& request) const;

        /**
         * An Async wrapper for AbortEnvironmentUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AbortEnvironmentUpdateAsync(const Model::AbortEnvironmentUpdateRequest& request, const AbortEnvironmentUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ApplyEnvironmentManagedActionOutcomeCallable ApplyEnvironmentManagedActionCallable(const Model::ApplyEnvironmentManagedActionRequest& request) const;

        /**
         * An Async wrapper for ApplyEnvironmentManagedAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ApplyEnvironmentManagedActionAsync(const Model::ApplyEnvironmentManagedActionRequest& request, const ApplyEnvironmentManagedActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::AssociateEnvironmentOperationsRoleOutcomeCallable AssociateEnvironmentOperationsRoleCallable(const Model::AssociateEnvironmentOperationsRoleRequest& request) const;

        /**
         * An Async wrapper for AssociateEnvironmentOperationsRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateEnvironmentOperationsRoleAsync(const Model::AssociateEnvironmentOperationsRoleRequest& request, const AssociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Checks if the specified CNAME is available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CheckDNSAvailability">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckDNSAvailabilityOutcome CheckDNSAvailability(const Model::CheckDNSAvailabilityRequest& request) const;

        /**
         * A Callable wrapper for CheckDNSAvailability that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CheckDNSAvailabilityOutcomeCallable CheckDNSAvailabilityCallable(const Model::CheckDNSAvailabilityRequest& request) const;

        /**
         * An Async wrapper for CheckDNSAvailability that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckDNSAvailabilityAsync(const Model::CheckDNSAvailabilityRequest& request, const CheckDNSAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ComposeEnvironmentsOutcomeCallable ComposeEnvironmentsCallable(const Model::ComposeEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for ComposeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ComposeEnvironmentsAsync(const Model::ComposeEnvironmentsRequest& request, const ComposeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * An Async wrapper for CreateApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationVersionAsync(const Model::CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateConfigurationTemplateOutcomeCallable CreateConfigurationTemplateCallable(const Model::CreateConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationTemplateAsync(const Model::CreateConfigurationTemplateRequest& request, const CreateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new version of your custom platform.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreatePlatformVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlatformVersionOutcome CreatePlatformVersion(const Model::CreatePlatformVersionRequest& request) const;

        /**
         * A Callable wrapper for CreatePlatformVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlatformVersionOutcomeCallable CreatePlatformVersionCallable(const Model::CreatePlatformVersionRequest& request) const;

        /**
         * An Async wrapper for CreatePlatformVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlatformVersionAsync(const Model::CreatePlatformVersionRequest& request, const CreatePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateStorageLocationOutcomeCallable CreateStorageLocationCallable(const Model::CreateStorageLocationRequest& request) const;

        /**
         * An Async wrapper for CreateStorageLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStorageLocationAsync(const Model::CreateStorageLocationRequest& request, const CreateStorageLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteApplicationVersionOutcomeCallable DeleteApplicationVersionCallable(const Model::DeleteApplicationVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationVersionAsync(const Model::DeleteApplicationVersionRequest& request, const DeleteApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteConfigurationTemplateOutcomeCallable DeleteConfigurationTemplateCallable(const Model::DeleteConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationTemplateAsync(const Model::DeleteConfigurationTemplateRequest& request, const DeleteConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteEnvironmentConfigurationOutcomeCallable DeleteEnvironmentConfigurationCallable(const Model::DeleteEnvironmentConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteEnvironmentConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEnvironmentConfigurationAsync(const Model::DeleteEnvironmentConfigurationRequest& request, const DeleteEnvironmentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeletePlatformVersionOutcomeCallable DeletePlatformVersionCallable(const Model::DeletePlatformVersionRequest& request) const;

        /**
         * An Async wrapper for DeletePlatformVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlatformVersionAsync(const Model::DeletePlatformVersionRequest& request, const DeletePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of application versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationVersionsOutcome DescribeApplicationVersions(const Model::DescribeApplicationVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationVersionsOutcomeCallable DescribeApplicationVersionsCallable(const Model::DescribeApplicationVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeApplicationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationVersionsAsync(const Model::DescribeApplicationVersionsRequest& request, const DescribeApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request) const;

        /**
         * An Async wrapper for DescribeApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConfigurationOptionsOutcomeCallable DescribeConfigurationOptionsCallable(const Model::DescribeConfigurationOptionsRequest& request) const;

        /**
         * An Async wrapper for DescribeConfigurationOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationOptionsAsync(const Model::DescribeConfigurationOptionsRequest& request, const DescribeConfigurationOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeConfigurationSettingsOutcomeCallable DescribeConfigurationSettingsCallable(const Model::DescribeConfigurationSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeConfigurationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationSettingsAsync(const Model::DescribeConfigurationSettingsRequest& request, const DescribeConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEnvironmentHealthOutcomeCallable DescribeEnvironmentHealthCallable(const Model::DescribeEnvironmentHealthRequest& request) const;

        /**
         * An Async wrapper for DescribeEnvironmentHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentHealthAsync(const Model::DescribeEnvironmentHealthRequest& request, const DescribeEnvironmentHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEnvironmentManagedActionHistoryOutcomeCallable DescribeEnvironmentManagedActionHistoryCallable(const Model::DescribeEnvironmentManagedActionHistoryRequest& request) const;

        /**
         * An Async wrapper for DescribeEnvironmentManagedActionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentManagedActionHistoryAsync(const Model::DescribeEnvironmentManagedActionHistoryRequest& request, const DescribeEnvironmentManagedActionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEnvironmentManagedActionsOutcomeCallable DescribeEnvironmentManagedActionsCallable(const Model::DescribeEnvironmentManagedActionsRequest& request) const;

        /**
         * An Async wrapper for DescribeEnvironmentManagedActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentManagedActionsAsync(const Model::DescribeEnvironmentManagedActionsRequest& request, const DescribeEnvironmentManagedActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns AWS resources for this environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentResources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentResourcesOutcome DescribeEnvironmentResources(const Model::DescribeEnvironmentResourcesRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironmentResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentResourcesOutcomeCallable DescribeEnvironmentResourcesCallable(const Model::DescribeEnvironmentResourcesRequest& request) const;

        /**
         * An Async wrapper for DescribeEnvironmentResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentResourcesAsync(const Model::DescribeEnvironmentResourcesRequest& request, const DescribeEnvironmentResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns descriptions for existing environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request) const;

        /**
         * An Async wrapper for DescribeEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeInstancesHealthOutcomeCallable DescribeInstancesHealthCallable(const Model::DescribeInstancesHealthRequest& request) const;

        /**
         * An Async wrapper for DescribeInstancesHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesHealthAsync(const Model::DescribeInstancesHealthRequest& request, const DescribeInstancesHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribePlatformVersionOutcomeCallable DescribePlatformVersionCallable(const Model::DescribePlatformVersionRequest& request) const;

        /**
         * An Async wrapper for DescribePlatformVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlatformVersionAsync(const Model::DescribePlatformVersionRequest& request, const DescribePlatformVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DisassociateEnvironmentOperationsRoleOutcomeCallable DisassociateEnvironmentOperationsRoleCallable(const Model::DisassociateEnvironmentOperationsRoleRequest& request) const;

        /**
         * An Async wrapper for DisassociateEnvironmentOperationsRole that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateEnvironmentOperationsRoleAsync(const Model::DisassociateEnvironmentOperationsRoleRequest& request, const DisassociateEnvironmentOperationsRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAvailableSolutionStacksOutcomeCallable ListAvailableSolutionStacksCallable(const Model::ListAvailableSolutionStacksRequest& request) const;

        /**
         * An Async wrapper for ListAvailableSolutionStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAvailableSolutionStacksAsync(const Model::ListAvailableSolutionStacksRequest& request, const ListAvailableSolutionStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListPlatformBranchesOutcomeCallable ListPlatformBranchesCallable(const Model::ListPlatformBranchesRequest& request) const;

        /**
         * An Async wrapper for ListPlatformBranches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlatformBranchesAsync(const Model::ListPlatformBranchesRequest& request, const ListPlatformBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListPlatformVersionsOutcomeCallable ListPlatformVersionsCallable(const Model::ListPlatformVersionsRequest& request) const;

        /**
         * An Async wrapper for ListPlatformVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlatformVersionsAsync(const Model::ListPlatformVersionsRequest& request, const ListPlatformVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RebuildEnvironmentOutcomeCallable RebuildEnvironmentCallable(const Model::RebuildEnvironmentRequest& request) const;

        /**
         * An Async wrapper for RebuildEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebuildEnvironmentAsync(const Model::RebuildEnvironmentRequest& request, const RebuildEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RequestEnvironmentInfoOutcomeCallable RequestEnvironmentInfoCallable(const Model::RequestEnvironmentInfoRequest& request) const;

        /**
         * An Async wrapper for RequestEnvironmentInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestEnvironmentInfoAsync(const Model::RequestEnvironmentInfoRequest& request, const RequestEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RestartAppServerOutcomeCallable RestartAppServerCallable(const Model::RestartAppServerRequest& request) const;

        /**
         * An Async wrapper for RestartAppServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestartAppServerAsync(const Model::RestartAppServerRequest& request, const RestartAppServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RetrieveEnvironmentInfoOutcomeCallable RetrieveEnvironmentInfoCallable(const Model::RetrieveEnvironmentInfoRequest& request) const;

        /**
         * An Async wrapper for RetrieveEnvironmentInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveEnvironmentInfoAsync(const Model::RetrieveEnvironmentInfoRequest& request, const RetrieveEnvironmentInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Swaps the CNAMEs of two environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SwapEnvironmentCNAMEs">AWS
         * API Reference</a></p>
         */
        virtual Model::SwapEnvironmentCNAMEsOutcome SwapEnvironmentCNAMEs(const Model::SwapEnvironmentCNAMEsRequest& request) const;

        /**
         * A Callable wrapper for SwapEnvironmentCNAMEs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SwapEnvironmentCNAMEsOutcomeCallable SwapEnvironmentCNAMEsCallable(const Model::SwapEnvironmentCNAMEsRequest& request) const;

        /**
         * An Async wrapper for SwapEnvironmentCNAMEs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SwapEnvironmentCNAMEsAsync(const Model::SwapEnvironmentCNAMEsRequest& request, const SwapEnvironmentCNAMEsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the specified environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/TerminateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateEnvironmentOutcome TerminateEnvironment(const Model::TerminateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for TerminateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateEnvironmentOutcomeCallable TerminateEnvironmentCallable(const Model::TerminateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for TerminateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateEnvironmentAsync(const Model::TerminateEnvironmentRequest& request, const TerminateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies lifecycle settings for an application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateApplicationResourceLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationResourceLifecycleOutcome UpdateApplicationResourceLifecycle(const Model::UpdateApplicationResourceLifecycleRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationResourceLifecycle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationResourceLifecycleOutcomeCallable UpdateApplicationResourceLifecycleCallable(const Model::UpdateApplicationResourceLifecycleRequest& request) const;

        /**
         * An Async wrapper for UpdateApplicationResourceLifecycle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationResourceLifecycleAsync(const Model::UpdateApplicationResourceLifecycleRequest& request, const UpdateApplicationResourceLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateApplicationVersionOutcomeCallable UpdateApplicationVersionCallable(const Model::UpdateApplicationVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationVersionAsync(const Model::UpdateApplicationVersionRequest& request, const UpdateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateConfigurationTemplateOutcomeCallable UpdateConfigurationTemplateCallable(const Model::UpdateConfigurationTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateConfigurationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationTemplateAsync(const Model::UpdateConfigurationTemplateRequest& request, const UpdateConfigurationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateTagsForResourceOutcomeCallable UpdateTagsForResourceCallable(const Model::UpdateTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for UpdateTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTagsForResourceAsync(const Model::UpdateTagsForResourceRequest& request, const UpdateTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ValidateConfigurationSettingsOutcomeCallable ValidateConfigurationSettingsCallable(const Model::ValidateConfigurationSettingsRequest& request) const;

        /**
         * An Async wrapper for ValidateConfigurationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateConfigurationSettingsAsync(const Model::ValidateConfigurationSettingsRequest& request, const ValidateConfigurationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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

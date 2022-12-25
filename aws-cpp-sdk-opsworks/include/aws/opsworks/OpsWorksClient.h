/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opsworks/OpsWorksServiceClientModel.h>

namespace Aws
{
namespace OpsWorks
{
  /**
   * <fullname>AWS OpsWorks</fullname> <p>Welcome to the <i>AWS OpsWorks Stacks API
   * Reference</i>. This guide provides descriptions, syntax, and usage examples for
   * AWS OpsWorks Stacks actions and data types, including common parameters and
   * error codes. </p> <p>AWS OpsWorks Stacks is an application management service
   * that provides an integrated experience for overseeing the complete application
   * lifecycle. For information about this product, go to the <a
   * href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page. </p> <p>
   * <b>SDKs and CLI</b> </p> <p>The most common way to use the AWS OpsWorks Stacks
   * API is by using the AWS Command Line Interface (CLI) or by using one of the AWS
   * SDKs to implement applications in your preferred language. For more information,
   * see:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS
   * CLI</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS
   * SDK for Java</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS
   * SDK for .NET</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS
   * SDK for PHP 2</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/sdkforruby/api/">AWS SDK for Ruby</a> </p>
   * </li> <li> <p> <a
   * href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for
   * Node.js</a> </p> </li> <li> <p> <a
   * href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for
   * Python(Boto)</a> </p> </li> </ul> <p> <b>Endpoints</b> </p> <p>AWS OpsWorks
   * Stacks supports the following endpoints, all HTTPS. You must connect to one of
   * the following endpoints. Stacks can only be accessed or managed within the
   * endpoint in which they are created.</p> <ul> <li>
   * <p>opsworks.us-east-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.us-east-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.us-west-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.us-west-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.ca-central-1.amazonaws.com (API only; not available in the AWS
   * console)</p> </li> <li> <p>opsworks.eu-west-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.eu-west-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.eu-west-3.amazonaws.com</p> </li> <li>
   * <p>opsworks.eu-central-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-northeast-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-northeast-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-south-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-southeast-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-southeast-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.sa-east-1.amazonaws.com</p> </li> </ul> <p> <b>Chef Versions</b>
   * </p> <p>When you call <a>CreateStack</a>, <a>CloneStack</a>, or
   * <a>UpdateStack</a> we recommend you use the <code>ConfigurationManager</code>
   * parameter to specify the Chef version. The recommended and default value for
   * Linux stacks is currently 12. Windows stacks use Chef 12.2. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef
   * Versions</a>.</p>  <p>You can specify Chef 12, 11.10, or 11.4 for your
   * Linux stack. We recommend migrating your existing Linux stacks to Chef 12 as
   * soon as possible.</p> 
   */
  class AWS_OPSWORKS_API OpsWorksClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OpsWorksClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksClient(const Aws::OpsWorks::OpsWorksClientConfiguration& clientConfiguration = Aws::OpsWorks::OpsWorksClientConfiguration(),
                       std::shared_ptr<OpsWorksEndpointProviderBase> endpointProvider = Aws::MakeShared<OpsWorksEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<OpsWorksEndpointProviderBase> endpointProvider = Aws::MakeShared<OpsWorksEndpointProvider>(ALLOCATION_TAG),
                       const Aws::OpsWorks::OpsWorksClientConfiguration& clientConfiguration = Aws::OpsWorks::OpsWorksClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpsWorksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<OpsWorksEndpointProviderBase> endpointProvider = Aws::MakeShared<OpsWorksEndpointProvider>(ALLOCATION_TAG),
                       const Aws::OpsWorks::OpsWorksClientConfiguration& clientConfiguration = Aws::OpsWorks::OpsWorksClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpsWorksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OpsWorksClient();

        /**
         * <p>Assign a registered instance to a layer.</p> <ul> <li> <p>You can assign
         * registered on-premises instances to any layer type.</p> </li> <li> <p>You can
         * assign registered Amazon EC2 instances only to custom layers.</p> </li> <li>
         * <p>You cannot use this action with instances that were created with AWS OpsWorks
         * Stacks.</p> </li> </ul> <p> <b>Required Permissions</b>: To use this action, an
         * AWS Identity and Access Management (IAM) user must have a Manage permissions
         * level for the stack or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignInstanceOutcome AssignInstance(const Model::AssignInstanceRequest& request) const;

        /**
         * A Callable wrapper for AssignInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignInstanceOutcomeCallable AssignInstanceCallable(const Model::AssignInstanceRequest& request) const;

        /**
         * An Async wrapper for AssignInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignInstanceAsync(const Model::AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one of the stack's registered Amazon EBS volumes to a specified
         * instance. The volume must first be registered with the stack by calling
         * <a>RegisterVolume</a>. After you register the volume, you must call
         * <a>UpdateVolume</a> to specify a mount point before calling
         * <code>AssignVolume</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignVolumeOutcome AssignVolume(const Model::AssignVolumeRequest& request) const;

        /**
         * A Callable wrapper for AssignVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignVolumeOutcomeCallable AssignVolumeCallable(const Model::AssignVolumeRequest& request) const;

        /**
         * An Async wrapper for AssignVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignVolumeAsync(const Model::AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates one of the stack's registered Elastic IP addresses with a
         * specified instance. The address must first be registered with the stack by
         * calling <a>RegisterElasticIp</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssociateElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateElasticIpOutcome AssociateElasticIp(const Model::AssociateElasticIpRequest& request) const;

        /**
         * A Callable wrapper for AssociateElasticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateElasticIpOutcomeCallable AssociateElasticIpCallable(const Model::AssociateElasticIpRequest& request) const;

        /**
         * An Async wrapper for AssociateElasticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateElasticIpAsync(const Model::AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an Elastic Load Balancing load balancer to a specified layer. AWS
         * OpsWorks Stacks does not support Application Load Balancer. You can only use
         * Classic Load Balancer with AWS OpsWorks Stacks. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers-elb.html">Elastic
         * Load Balancing</a>.</p>  <p>You must create the Elastic Load Balancing
         * instance separately, by using the Elastic Load Balancing console, API, or CLI.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html">
         * Elastic Load Balancing Developer Guide</a>.</p>  <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AttachElasticLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachElasticLoadBalancerOutcome AttachElasticLoadBalancer(const Model::AttachElasticLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for AttachElasticLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachElasticLoadBalancerOutcomeCallable AttachElasticLoadBalancerCallable(const Model::AttachElasticLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for AttachElasticLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachElasticLoadBalancerAsync(const Model::AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a clone of a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone
         * a Stack</a>. By default, all parameters are set to the values used by the parent
         * stack.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user must
         * have an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloneStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CloneStackOutcome CloneStack(const Model::CloneStackRequest& request) const;

        /**
         * A Callable wrapper for CloneStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloneStackOutcomeCallable CloneStackCallable(const Model::CloneStackRequest& request) const;

        /**
         * An Async wrapper for CloneStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloneStackAsync(const Model::CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an app for a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating
         * Apps</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs deployment or stack commands. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying
         * Apps</a> and <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run
         * Stack Commands</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Deploy or Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an instance in a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding
         * an Instance to a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a layer. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How
         * to Create a Layer</a>.</p>  <p>You should use <b>CreateLayer</b> for
         * noncustom layer types such as PHP App Server only if the stack does not have an
         * existing layer of that type. A stack can have at most one instance of each
         * noncustom layer; if you attempt to create a second instance, <b>CreateLayer</b>
         * fails. A stack can have an arbitrary number of custom layers, so you can call
         * <b>CreateLayer</b> as many times as you like for that layer type.</p> 
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLayerOutcome CreateLayer(const Model::CreateLayerRequest& request) const;

        /**
         * A Callable wrapper for CreateLayer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLayerOutcomeCallable CreateLayerCallable(const Model::CreateLayerRequest& request) const;

        /**
         * An Async wrapper for CreateLayer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLayerAsync(const Model::CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create
         * a New Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have an attached policy that explicitly grants permissions. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

        /**
         * A Callable wrapper for CreateStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

        /**
         * An Async wrapper for CreateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const Model::CreateUserProfileRequest& request) const;

        /**
         * An Async wrapper for CreateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserProfileAsync(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified instance, which terminates the associated Amazon EC2
         * instance. You must stop an instance before you can delete it.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting
         * Instances</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified layer. You must first stop and then delete all associated
         * instances or unassign registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How
         * to Delete a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this action,
         * an IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLayerOutcome DeleteLayer(const Model::DeleteLayerRequest& request) const;

        /**
         * A Callable wrapper for DeleteLayer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLayerOutcomeCallable DeleteLayerCallable(const Model::DeleteLayerRequest& request) const;

        /**
         * An Async wrapper for DeleteLayer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLayerAsync(const Model::DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified stack. You must first delete all instances, layers, and
         * apps or deregister registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut
         * Down a Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteStack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

        /**
         * A Callable wrapper for DeleteStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

        /**
         * An Async wrapper for DeleteStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserProfileOutcome DeleteUserProfile(const Model::DeleteUserProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const Model::DeleteUserProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserProfileAsync(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a specified Amazon ECS cluster from a stack. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html#workinglayers-ecscluster-delete">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterEcsCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterEcsClusterOutcome DeregisterEcsCluster(const Model::DeregisterEcsClusterRequest& request) const;

        /**
         * A Callable wrapper for DeregisterEcsCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterEcsClusterOutcomeCallable DeregisterEcsClusterCallable(const Model::DeregisterEcsClusterRequest& request) const;

        /**
         * An Async wrapper for DeregisterEcsCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterEcsClusterAsync(const Model::DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a specified Elastic IP address. The address can then be
         * registered by another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterElasticIpOutcome DeregisterElasticIp(const Model::DeregisterElasticIpRequest& request) const;

        /**
         * A Callable wrapper for DeregisterElasticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterElasticIpOutcomeCallable DeregisterElasticIpCallable(const Model::DeregisterElasticIpRequest& request) const;

        /**
         * An Async wrapper for DeregisterElasticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterElasticIpAsync(const Model::DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregister a registered Amazon EC2 or on-premises instance. This action
         * removes the instance from the stack and returns it to your control. This action
         * cannot be used with instances that were created with AWS OpsWorks Stacks.</p>
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterInstanceOutcome DeregisterInstance(const Model::DeregisterInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterInstanceOutcomeCallable DeregisterInstanceCallable(const Model::DeregisterInstanceRequest& request) const;

        /**
         * An Async wrapper for DeregisterInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterInstanceAsync(const Model::DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterRdsDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterRdsDbInstanceOutcome DeregisterRdsDbInstance(const Model::DeregisterRdsDbInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterRdsDbInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterRdsDbInstanceOutcomeCallable DeregisterRdsDbInstanceCallable(const Model::DeregisterRdsDbInstanceRequest& request) const;

        /**
         * An Async wrapper for DeregisterRdsDbInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterRdsDbInstanceAsync(const Model::DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an Amazon EBS volume. The volume can then be registered by
         * another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterVolumeOutcome DeregisterVolume(const Model::DeregisterVolumeRequest& request) const;

        /**
         * A Callable wrapper for DeregisterVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterVolumeOutcomeCallable DeregisterVolumeCallable(const Model::DeregisterVolumeRequest& request) const;

        /**
         * An Async wrapper for DeregisterVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterVolumeAsync(const Model::DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available AWS OpsWorks Stacks agent versions. You must specify
         * a stack ID or a configuration manager. <code>DescribeAgentVersions</code>
         * returns a list of available agent versions for the specified stack or
         * configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAgentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentVersionsOutcome DescribeAgentVersions(const Model::DescribeAgentVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAgentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentVersionsOutcomeCallable DescribeAgentVersionsCallable(const Model::DescribeAgentVersionsRequest& request) const;

        /**
         * An Async wrapper for DescribeAgentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgentVersionsAsync(const Model::DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a specified set of apps.</p>  <p>This call
         * accepts only one resource-identifying parameter.</p>  <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeApps">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppsOutcome DescribeApps(const Model::DescribeAppsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppsOutcomeCallable DescribeAppsCallable(const Model::DescribeAppsRequest& request) const;

        /**
         * An Async wrapper for DescribeApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the results of specified commands.</p>  <p>This call accepts
         * only one resource-identifying parameter.</p>  <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeCommands">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCommandsOutcome DescribeCommands(const Model::DescribeCommandsRequest& request) const;

        /**
         * A Callable wrapper for DescribeCommands that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCommandsOutcomeCallable DescribeCommandsCallable(const Model::DescribeCommandsRequest& request) const;

        /**
         * An Async wrapper for DescribeCommands that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCommandsAsync(const Model::DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a specified set of deployments.</p>  <p>This
         * call accepts only one resource-identifying parameter.</p>  <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeploymentsOutcome DescribeDeployments(const Model::DescribeDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeploymentsOutcomeCallable DescribeDeploymentsCallable(const Model::DescribeDeploymentsRequest& request) const;

        /**
         * An Async wrapper for DescribeDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeploymentsAsync(const Model::DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon ECS clusters that are registered with a stack. If you
         * specify only a stack ID, you can use the <code>MaxResults</code> and
         * <code>NextToken</code> parameters to paginate the response. However, AWS
         * OpsWorks Stacks currently supports only one cluster per layer, so the result set
         * has a maximum of one element.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Show, Deploy, or Manage permissions level for
         * the stack or an attached policy that explicitly grants permission. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeEcsClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEcsClustersOutcome DescribeEcsClusters(const Model::DescribeEcsClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEcsClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEcsClustersOutcomeCallable DescribeEcsClustersCallable(const Model::DescribeEcsClustersRequest& request) const;

        /**
         * An Async wrapper for DescribeEcsClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEcsClustersAsync(const Model::DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP addresses</a>.</p>  <p>This call accepts only one resource-identifying
         * parameter.</p>  <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticIps">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticIpsOutcome DescribeElasticIps(const Model::DescribeElasticIpsRequest& request) const;

        /**
         * A Callable wrapper for DescribeElasticIps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticIpsOutcomeCallable DescribeElasticIpsCallable(const Model::DescribeElasticIpsRequest& request) const;

        /**
         * An Async wrapper for DescribeElasticIps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticIpsAsync(const Model::DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a stack's Elastic Load Balancing instances.</p>  <p>This call
         * accepts only one resource-identifying parameter.</p>  <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticLoadBalancersOutcome DescribeElasticLoadBalancers(const Model::DescribeElasticLoadBalancersRequest& request) const;

        /**
         * A Callable wrapper for DescribeElasticLoadBalancers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticLoadBalancersOutcomeCallable DescribeElasticLoadBalancersCallable(const Model::DescribeElasticLoadBalancersRequest& request) const;

        /**
         * An Async wrapper for DescribeElasticLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticLoadBalancersAsync(const Model::DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a set of instances.</p>  <p>This call accepts
         * only one resource-identifying parameter.</p>  <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of one or more layers in a specified stack.</p> 
         * <p>This call accepts only one resource-identifying parameter.</p>  <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLayers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLayersOutcome DescribeLayers(const Model::DescribeLayersRequest& request) const;

        /**
         * A Callable wrapper for DescribeLayers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLayersOutcomeCallable DescribeLayersCallable(const Model::DescribeLayersRequest& request) const;

        /**
         * An Async wrapper for DescribeLayers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLayersAsync(const Model::DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes load-based auto scaling configurations for specified layers.</p>
         *  <p>You must specify at least one of the parameters.</p>  <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBasedAutoScalingOutcome DescribeLoadBasedAutoScaling(const Model::DescribeLoadBasedAutoScalingRequest& request) const;

        /**
         * A Callable wrapper for DescribeLoadBasedAutoScaling that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBasedAutoScalingOutcomeCallable DescribeLoadBasedAutoScalingCallable(const Model::DescribeLoadBasedAutoScalingRequest& request) const;

        /**
         * An Async wrapper for DescribeLoadBasedAutoScaling that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBasedAutoScalingAsync(const Model::DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a user's SSH information.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have self-management enabled or an attached
         * policy that explicitly grants permissions. For more information about user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeMyUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMyUserProfileOutcome DescribeMyUserProfile() const;

        /**
         * A Callable wrapper for DescribeMyUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMyUserProfileOutcomeCallable DescribeMyUserProfileCallable() const;

        /**
         * An Async wrapper for DescribeMyUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMyUserProfileAsync(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the operating systems that are supported by AWS OpsWorks
         * Stacks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeOperatingSystems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOperatingSystemsOutcome DescribeOperatingSystems() const;

        /**
         * A Callable wrapper for DescribeOperatingSystems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOperatingSystemsOutcomeCallable DescribeOperatingSystemsCallable() const;

        /**
         * An Async wrapper for DescribeOperatingSystems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOperatingSystemsAsync(const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the permissions for a specified stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionsOutcome DescribePermissions(const Model::DescribePermissionsRequest& request) const;

        /**
         * A Callable wrapper for DescribePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePermissionsOutcomeCallable DescribePermissionsCallable(const Model::DescribePermissionsRequest& request) const;

        /**
         * An Async wrapper for DescribePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePermissionsAsync(const Model::DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an instance's RAID arrays.</p>  <p>This call accepts only one
         * resource-identifying parameter.</p>  <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Show, Deploy, or Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRaidArrays">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRaidArraysOutcome DescribeRaidArrays(const Model::DescribeRaidArraysRequest& request) const;

        /**
         * A Callable wrapper for DescribeRaidArrays that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRaidArraysOutcomeCallable DescribeRaidArraysCallable(const Model::DescribeRaidArraysRequest& request) const;

        /**
         * An Async wrapper for DescribeRaidArrays that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRaidArraysAsync(const Model::DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon RDS instances.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Show, Deploy, or Manage permissions level
         * for the stack, or an attached policy that explicitly grants permissions. For
         * more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRdsDbInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRdsDbInstancesOutcome DescribeRdsDbInstances(const Model::DescribeRdsDbInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeRdsDbInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRdsDbInstancesOutcomeCallable DescribeRdsDbInstancesCallable(const Model::DescribeRdsDbInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeRdsDbInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRdsDbInstancesAsync(const Model::DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes AWS OpsWorks Stacks service errors.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeServiceErrors">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceErrorsOutcome DescribeServiceErrors(const Model::DescribeServiceErrorsRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceErrors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceErrorsOutcomeCallable DescribeServiceErrorsCallable(const Model::DescribeServiceErrorsRequest& request) const;

        /**
         * An Async wrapper for DescribeServiceErrors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceErrorsAsync(const Model::DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a stack's provisioning parameters.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackProvisioningParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackProvisioningParametersOutcome DescribeStackProvisioningParameters(const Model::DescribeStackProvisioningParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackProvisioningParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackProvisioningParametersOutcomeCallable DescribeStackProvisioningParametersCallable(const Model::DescribeStackProvisioningParametersRequest& request) const;

        /**
         * An Async wrapper for DescribeStackProvisioningParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackProvisioningParametersAsync(const Model::DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the number of layers and apps in a specified stack, and the number
         * of instances in each state, such as <code>running_setup</code> or
         * <code>online</code>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackSummaryOutcome DescribeStackSummary(const Model::DescribeStackSummaryRequest& request) const;

        /**
         * A Callable wrapper for DescribeStackSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackSummaryOutcomeCallable DescribeStackSummaryCallable(const Model::DescribeStackSummaryRequest& request) const;

        /**
         * An Async wrapper for DescribeStackSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackSummaryAsync(const Model::DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of one or more stacks.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

        /**
         * A Callable wrapper for DescribeStacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

        /**
         * An Async wrapper for DescribeStacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes time-based auto scaling configurations for specified instances.</p>
         *  <p>You must specify at least one of the parameters.</p>  <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTimeBasedAutoScalingOutcome DescribeTimeBasedAutoScaling(const Model::DescribeTimeBasedAutoScalingRequest& request) const;

        /**
         * A Callable wrapper for DescribeTimeBasedAutoScaling that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTimeBasedAutoScalingOutcomeCallable DescribeTimeBasedAutoScalingCallable(const Model::DescribeTimeBasedAutoScalingRequest& request) const;

        /**
         * An Async wrapper for DescribeTimeBasedAutoScaling that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTimeBasedAutoScalingAsync(const Model::DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe specified users.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeUserProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserProfilesOutcome DescribeUserProfiles(const Model::DescribeUserProfilesRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserProfilesOutcomeCallable DescribeUserProfilesCallable(const Model::DescribeUserProfilesRequest& request) const;

        /**
         * An Async wrapper for DescribeUserProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserProfilesAsync(const Model::DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an instance's Amazon EBS volumes.</p>  <p>This call accepts
         * only one resource-identifying parameter.</p>  <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumesOutcome DescribeVolumes(const Model::DescribeVolumesRequest& request) const;

        /**
         * A Callable wrapper for DescribeVolumes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumesOutcomeCallable DescribeVolumesCallable(const Model::DescribeVolumesRequest& request) const;

        /**
         * An Async wrapper for DescribeVolumes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumesAsync(const Model::DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a specified Elastic Load Balancing instance from its layer.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage
         * permissions level for the stack, or an attached policy that explicitly grants
         * permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DetachElasticLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachElasticLoadBalancerOutcome DetachElasticLoadBalancer(const Model::DetachElasticLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for DetachElasticLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachElasticLoadBalancerOutcomeCallable DetachElasticLoadBalancerCallable(const Model::DetachElasticLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for DetachElasticLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachElasticLoadBalancerAsync(const Model::DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Elastic IP address from its instance. The address remains
         * registered with the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DisassociateElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateElasticIpOutcome DisassociateElasticIp(const Model::DisassociateElasticIpRequest& request) const;

        /**
         * A Callable wrapper for DisassociateElasticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateElasticIpOutcomeCallable DisassociateElasticIpCallable(const Model::DisassociateElasticIpRequest& request) const;

        /**
         * An Async wrapper for DisassociateElasticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateElasticIpAsync(const Model::DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a generated host name for the specified layer, based on the current host
         * name theme.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GetHostnameSuggestion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostnameSuggestionOutcome GetHostnameSuggestion(const Model::GetHostnameSuggestionRequest& request) const;

        /**
         * A Callable wrapper for GetHostnameSuggestion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostnameSuggestionOutcomeCallable GetHostnameSuggestionCallable(const Model::GetHostnameSuggestionRequest& request) const;

        /**
         * An Async wrapper for GetHostnameSuggestion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostnameSuggestionAsync(const Model::GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>This action can be used only with Windows stacks.</p> 
         * <p>Grants RDP access to a Windows instance for a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GrantAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantAccessOutcome GrantAccess(const Model::GrantAccessRequest& request) const;

        /**
         * A Callable wrapper for GrantAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GrantAccessOutcomeCallable GrantAccessCallable(const Model::GrantAccessRequest& request) const;

        /**
         * An Async wrapper for GrantAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GrantAccessAsync(const Model::GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags that are applied to the specified stack or
         * layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RebootInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstanceOutcome RebootInstance(const Model::RebootInstanceRequest& request) const;

        /**
         * A Callable wrapper for RebootInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootInstanceOutcomeCallable RebootInstanceCallable(const Model::RebootInstanceRequest& request) const;

        /**
         * An Async wrapper for RebootInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a specified Amazon ECS cluster with a stack. You can register only
         * one cluster with a stack. A cluster can be registered with only one stack. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">
         * Managing User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterEcsCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterEcsClusterOutcome RegisterEcsCluster(const Model::RegisterEcsClusterRequest& request) const;

        /**
         * A Callable wrapper for RegisterEcsCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterEcsClusterOutcomeCallable RegisterEcsClusterCallable(const Model::RegisterEcsClusterRequest& request) const;

        /**
         * An Async wrapper for RegisterEcsCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterEcsClusterAsync(const Model::RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Elastic IP address with a specified stack. An address can be
         * registered with only one stack at a time. If the address is already registered,
         * you must first deregister it by calling <a>DeregisterElasticIp</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterElasticIpOutcome RegisterElasticIp(const Model::RegisterElasticIpRequest& request) const;

        /**
         * A Callable wrapper for RegisterElasticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterElasticIpOutcomeCallable RegisterElasticIpCallable(const Model::RegisterElasticIpRequest& request) const;

        /**
         * An Async wrapper for RegisterElasticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterElasticIpAsync(const Model::RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers instances that were created outside of AWS OpsWorks Stacks with a
         * specified stack.</p>  <p>We do not recommend using this action to register
         * instances. The complete registration operation includes two tasks: installing
         * the AWS OpsWorks Stacks agent on the instance, and registering the instance with
         * the stack. <code>RegisterInstance</code> handles only the second step. You
         * should instead use the AWS CLI <code>register</code> command, which performs the
         * entire registration operation. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register.html">
         * Registering an Instance with an AWS OpsWorks Stacks Stack</a>.</p> 
         * <p>Registered instances have the same requirements as instances that are created
         * by using the <a>CreateInstance</a> API. For example, registered instances must
         * be running a supported Linux-based operating system, and they must have a
         * supported instance type. For more information about requirements for instances
         * that you want to register, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register-registering-preparer.html">
         * Preparing the Instance</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterInstanceOutcome RegisterInstance(const Model::RegisterInstanceRequest& request) const;

        /**
         * A Callable wrapper for RegisterInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterInstanceOutcomeCallable RegisterInstanceCallable(const Model::RegisterInstanceRequest& request) const;

        /**
         * An Async wrapper for RegisterInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterInstanceAsync(const Model::RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Amazon RDS instance with a stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterRdsDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterRdsDbInstanceOutcome RegisterRdsDbInstance(const Model::RegisterRdsDbInstanceRequest& request) const;

        /**
         * A Callable wrapper for RegisterRdsDbInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterRdsDbInstanceOutcomeCallable RegisterRdsDbInstanceCallable(const Model::RegisterRdsDbInstanceRequest& request) const;

        /**
         * An Async wrapper for RegisterRdsDbInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterRdsDbInstanceAsync(const Model::RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Amazon EBS volume with a specified stack. A volume can be
         * registered with only one stack at a time. If the volume is already registered,
         * you must first deregister it by calling <a>DeregisterVolume</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterVolumeOutcome RegisterVolume(const Model::RegisterVolumeRequest& request) const;

        /**
         * A Callable wrapper for RegisterVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterVolumeOutcomeCallable RegisterVolumeCallable(const Model::RegisterVolumeRequest& request) const;

        /**
         * An Async wrapper for RegisterVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterVolumeAsync(const Model::RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the load-based auto scaling configuration for a specified layer. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p>  <p>To use
         * load-based auto scaling, you must create a set of load-based auto scaling
         * instances. Load-based auto scaling operates only on the instances from that set,
         * so you must ensure that you have created enough instances to handle the maximum
         * anticipated load.</p>  <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLoadBasedAutoScalingOutcome SetLoadBasedAutoScaling(const Model::SetLoadBasedAutoScalingRequest& request) const;

        /**
         * A Callable wrapper for SetLoadBasedAutoScaling that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoadBasedAutoScalingOutcomeCallable SetLoadBasedAutoScalingCallable(const Model::SetLoadBasedAutoScalingRequest& request) const;

        /**
         * An Async wrapper for SetLoadBasedAutoScaling that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoadBasedAutoScalingAsync(const Model::SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies a user's permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security
         * and Permissions</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::SetPermissionOutcome SetPermission(const Model::SetPermissionRequest& request) const;

        /**
         * A Callable wrapper for SetPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetPermissionOutcomeCallable SetPermissionCallable(const Model::SetPermissionRequest& request) const;

        /**
         * An Async wrapper for SetPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetPermissionAsync(const Model::SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the time-based auto scaling configuration for a specified instance.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTimeBasedAutoScalingOutcome SetTimeBasedAutoScaling(const Model::SetTimeBasedAutoScalingRequest& request) const;

        /**
         * A Callable wrapper for SetTimeBasedAutoScaling that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTimeBasedAutoScalingOutcomeCallable SetTimeBasedAutoScalingCallable(const Model::SetTimeBasedAutoScalingRequest& request) const;

        /**
         * An Async wrapper for SetTimeBasedAutoScaling that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTimeBasedAutoScalingAsync(const Model::SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOutcome StartInstance(const Model::StartInstanceRequest& request) const;

        /**
         * A Callable wrapper for StartInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstanceOutcomeCallable StartInstanceCallable(const Model::StartInstanceRequest& request) const;

        /**
         * An Async wrapper for StartInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a stack's instances.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartStack">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStackOutcome StartStack(const Model::StartStackRequest& request) const;

        /**
         * A Callable wrapper for StartStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartStackOutcomeCallable StartStackCallable(const Model::StartStackRequest& request) const;

        /**
         * An Async wrapper for StartStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartStackAsync(const Model::StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specified instance. When you stop a standard instance, the data
         * disappears and must be reinstalled when you restart the instance. You can stop
         * an Amazon EBS-backed instance without losing data. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstanceOutcome StopInstance(const Model::StopInstanceRequest& request) const;

        /**
         * A Callable wrapper for StopInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInstanceOutcomeCallable StopInstanceCallable(const Model::StopInstanceRequest& request) const;

        /**
         * An Async wrapper for StopInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopStack">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStackOutcome StopStack(const Model::StopStackRequest& request) const;

        /**
         * A Callable wrapper for StopStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStackOutcomeCallable StopStackCallable(const Model::StopStackRequest& request) const;

        /**
         * An Async wrapper for StopStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStackAsync(const Model::StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Apply cost-allocation tags to a specified stack or layer in AWS OpsWorks
         * Stacks. For more information about how tagging works, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/tagging.html">Tags</a>
         * in the AWS OpsWorks User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/TagResource">AWS
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
         * <p>Unassigns a registered instance from all layers that are using the instance.
         * The instance remains in the stack as an unassigned instance, and can be assigned
         * to another layer as needed. You cannot use this action with instances that were
         * created with AWS OpsWorks Stacks.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignInstanceOutcome UnassignInstance(const Model::UnassignInstanceRequest& request) const;

        /**
         * A Callable wrapper for UnassignInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignInstanceOutcomeCallable UnassignInstanceCallable(const Model::UnassignInstanceRequest& request) const;

        /**
         * An Async wrapper for UnassignInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignInstanceAsync(const Model::UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unassigns an assigned Amazon EBS volume. The volume remains registered with
         * the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignVolumeOutcome UnassignVolume(const Model::UnassignVolumeRequest& request) const;

        /**
         * A Callable wrapper for UnassignVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignVolumeOutcomeCallable UnassignVolumeCallable(const Model::UnassignVolumeRequest& request) const;

        /**
         * An Async wrapper for UnassignVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignVolumeAsync(const Model::UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a specified stack or layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UntagResource">AWS
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
         * <p>Updates a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Deploy or Manage permissions level for the
         * stack, or an attached policy that explicitly grants permissions. For more
         * information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

        /**
         * An Async wrapper for UpdateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a registered Elastic IP address's name. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateElasticIpOutcome UpdateElasticIp(const Model::UpdateElasticIpRequest& request) const;

        /**
         * A Callable wrapper for UpdateElasticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateElasticIpOutcomeCallable UpdateElasticIpCallable(const Model::UpdateElasticIpRequest& request) const;

        /**
         * An Async wrapper for UpdateElasticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateElasticIpAsync(const Model::UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceOutcomeCallable UpdateInstanceCallable(const Model::UpdateInstanceRequest& request) const;

        /**
         * An Async wrapper for UpdateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified layer.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLayerOutcome UpdateLayer(const Model::UpdateLayerRequest& request) const;

        /**
         * A Callable wrapper for UpdateLayer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLayerOutcomeCallable UpdateLayerCallable(const Model::UpdateLayerRequest& request) const;

        /**
         * An Async wrapper for UpdateLayer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLayerAsync(const Model::UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user's SSH public key.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have self-management enabled or an attached policy
         * that explicitly grants permissions. For more information about user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateMyUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMyUserProfileOutcome UpdateMyUserProfile(const Model::UpdateMyUserProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateMyUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMyUserProfileOutcomeCallable UpdateMyUserProfileCallable(const Model::UpdateMyUserProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateMyUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMyUserProfileAsync(const Model::UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateRdsDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRdsDbInstanceOutcome UpdateRdsDbInstance(const Model::UpdateRdsDbInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateRdsDbInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRdsDbInstanceOutcomeCallable UpdateRdsDbInstanceCallable(const Model::UpdateRdsDbInstanceRequest& request) const;

        /**
         * An Async wrapper for UpdateRdsDbInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRdsDbInstanceAsync(const Model::UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

        /**
         * A Callable wrapper for UpdateStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

        /**
         * An Async wrapper for UpdateStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified user profile.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const Model::UpdateUserProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateUserProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserProfileAsync(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon EBS volume's name or mount point. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVolumeOutcome UpdateVolume(const Model::UpdateVolumeRequest& request) const;

        /**
         * A Callable wrapper for UpdateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVolumeOutcomeCallable UpdateVolumeCallable(const Model::UpdateVolumeRequest& request) const;

        /**
         * An Async wrapper for UpdateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVolumeAsync(const Model::UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpsWorksEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OpsWorksClient>;
      void init(const OpsWorksClientConfiguration& clientConfiguration);

      OpsWorksClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpsWorksEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpsWorks
} // namespace Aws

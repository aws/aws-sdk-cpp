/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opsworks/OpsWorksServiceClientModel.h>
#include <aws/opsworks/OpsWorksLegacyAsyncMacros.h>

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
  class AWS_OPSWORKS_API OpsWorksClient : public Aws::Client::AWSJsonClient
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
         * <p>Describes the available AWS OpsWorks Stacks agent versions. You must specify
         * a stack ID or a configuration manager. <code>DescribeAgentVersions</code>
         * returns a list of available agent versions for the specified stack or
         * configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAgentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentVersionsOutcome DescribeAgentVersions(const Model::DescribeAgentVersionsRequest& request) const;


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
         *  <p>This action can be used only with Windows stacks.</p> 
         * <p>Grants RDP access to a Windows instance for a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GrantAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantAccessOutcome GrantAccess(const Model::GrantAccessRequest& request) const;


        /**
         * <p>Returns a list of tags that are applied to the specified stack or
         * layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;


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
         * <p>Apply cost-allocation tags to a specified stack or layer in AWS OpsWorks
         * Stacks. For more information about how tagging works, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/tagging.html">Tags</a>
         * in the AWS OpsWorks User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


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
         * <p>Removes tags from a specified stack or layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OpsWorksEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const OpsWorksClientConfiguration& clientConfiguration);

      OpsWorksClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OpsWorksEndpointProviderBase> m_endpointProvider;
  };

} // namespace OpsWorks
} // namespace Aws

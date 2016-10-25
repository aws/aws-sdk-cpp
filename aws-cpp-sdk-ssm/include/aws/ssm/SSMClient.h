/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/AddTagsToResourceResult.h>
#include <aws/ssm/model/CancelCommandResult.h>
#include <aws/ssm/model/CreateActivationResult.h>
#include <aws/ssm/model/CreateAssociationResult.h>
#include <aws/ssm/model/CreateAssociationBatchResult.h>
#include <aws/ssm/model/CreateDocumentResult.h>
#include <aws/ssm/model/DeleteActivationResult.h>
#include <aws/ssm/model/DeleteAssociationResult.h>
#include <aws/ssm/model/DeleteDocumentResult.h>
#include <aws/ssm/model/DeregisterManagedInstanceResult.h>
#include <aws/ssm/model/DescribeActivationsResult.h>
#include <aws/ssm/model/DescribeAssociationResult.h>
#include <aws/ssm/model/DescribeDocumentResult.h>
#include <aws/ssm/model/DescribeDocumentPermissionResult.h>
#include <aws/ssm/model/DescribeInstanceInformationResult.h>
#include <aws/ssm/model/GetDocumentResult.h>
#include <aws/ssm/model/ListAssociationsResult.h>
#include <aws/ssm/model/ListCommandInvocationsResult.h>
#include <aws/ssm/model/ListCommandsResult.h>
#include <aws/ssm/model/ListDocumentsResult.h>
#include <aws/ssm/model/ListTagsForResourceResult.h>
#include <aws/ssm/model/ModifyDocumentPermissionResult.h>
#include <aws/ssm/model/RemoveTagsFromResourceResult.h>
#include <aws/ssm/model/SendCommandResult.h>
#include <aws/ssm/model/UpdateAssociationStatusResult.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace SSM
{

namespace Model
{
        class AddTagsToResourceRequest;
        class CancelCommandRequest;
        class CreateActivationRequest;
        class CreateAssociationRequest;
        class CreateAssociationBatchRequest;
        class CreateDocumentRequest;
        class DeleteActivationRequest;
        class DeleteAssociationRequest;
        class DeleteDocumentRequest;
        class DeregisterManagedInstanceRequest;
        class DescribeActivationsRequest;
        class DescribeAssociationRequest;
        class DescribeDocumentRequest;
        class DescribeDocumentPermissionRequest;
        class DescribeInstanceInformationRequest;
        class GetDocumentRequest;
        class ListAssociationsRequest;
        class ListCommandInvocationsRequest;
        class ListCommandsRequest;
        class ListDocumentsRequest;
        class ListTagsForResourceRequest;
        class ModifyDocumentPermissionRequest;
        class RemoveTagsFromResourceRequest;
        class SendCommandRequest;
        class UpdateAssociationStatusRequest;
        class UpdateManagedInstanceRoleRequest;

        typedef Aws::Utils::Outcome<AddTagsToResourceResult, Aws::Client::AWSError<SSMErrors>> AddTagsToResourceOutcome;
        typedef Aws::Utils::Outcome<CancelCommandResult, Aws::Client::AWSError<SSMErrors>> CancelCommandOutcome;
        typedef Aws::Utils::Outcome<CreateActivationResult, Aws::Client::AWSError<SSMErrors>> CreateActivationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationResult, Aws::Client::AWSError<SSMErrors>> CreateAssociationOutcome;
        typedef Aws::Utils::Outcome<CreateAssociationBatchResult, Aws::Client::AWSError<SSMErrors>> CreateAssociationBatchOutcome;
        typedef Aws::Utils::Outcome<CreateDocumentResult, Aws::Client::AWSError<SSMErrors>> CreateDocumentOutcome;
        typedef Aws::Utils::Outcome<DeleteActivationResult, Aws::Client::AWSError<SSMErrors>> DeleteActivationOutcome;
        typedef Aws::Utils::Outcome<DeleteAssociationResult, Aws::Client::AWSError<SSMErrors>> DeleteAssociationOutcome;
        typedef Aws::Utils::Outcome<DeleteDocumentResult, Aws::Client::AWSError<SSMErrors>> DeleteDocumentOutcome;
        typedef Aws::Utils::Outcome<DeregisterManagedInstanceResult, Aws::Client::AWSError<SSMErrors>> DeregisterManagedInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeActivationsResult, Aws::Client::AWSError<SSMErrors>> DescribeActivationsOutcome;
        typedef Aws::Utils::Outcome<DescribeAssociationResult, Aws::Client::AWSError<SSMErrors>> DescribeAssociationOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentResult, Aws::Client::AWSError<SSMErrors>> DescribeDocumentOutcome;
        typedef Aws::Utils::Outcome<DescribeDocumentPermissionResult, Aws::Client::AWSError<SSMErrors>> DescribeDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<DescribeInstanceInformationResult, Aws::Client::AWSError<SSMErrors>> DescribeInstanceInformationOutcome;
        typedef Aws::Utils::Outcome<GetDocumentResult, Aws::Client::AWSError<SSMErrors>> GetDocumentOutcome;
        typedef Aws::Utils::Outcome<ListAssociationsResult, Aws::Client::AWSError<SSMErrors>> ListAssociationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandInvocationsResult, Aws::Client::AWSError<SSMErrors>> ListCommandInvocationsOutcome;
        typedef Aws::Utils::Outcome<ListCommandsResult, Aws::Client::AWSError<SSMErrors>> ListCommandsOutcome;
        typedef Aws::Utils::Outcome<ListDocumentsResult, Aws::Client::AWSError<SSMErrors>> ListDocumentsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<SSMErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ModifyDocumentPermissionResult, Aws::Client::AWSError<SSMErrors>> ModifyDocumentPermissionOutcome;
        typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, Aws::Client::AWSError<SSMErrors>> RemoveTagsFromResourceOutcome;
        typedef Aws::Utils::Outcome<SendCommandResult, Aws::Client::AWSError<SSMErrors>> SendCommandOutcome;
        typedef Aws::Utils::Outcome<UpdateAssociationStatusResult, Aws::Client::AWSError<SSMErrors>> UpdateAssociationStatusOutcome;
        typedef Aws::Utils::Outcome<UpdateManagedInstanceRoleResult, Aws::Client::AWSError<SSMErrors>> UpdateManagedInstanceRoleOutcome;

        typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
        typedef std::future<CancelCommandOutcome> CancelCommandOutcomeCallable;
        typedef std::future<CreateActivationOutcome> CreateActivationOutcomeCallable;
        typedef std::future<CreateAssociationOutcome> CreateAssociationOutcomeCallable;
        typedef std::future<CreateAssociationBatchOutcome> CreateAssociationBatchOutcomeCallable;
        typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
        typedef std::future<DeleteActivationOutcome> DeleteActivationOutcomeCallable;
        typedef std::future<DeleteAssociationOutcome> DeleteAssociationOutcomeCallable;
        typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
        typedef std::future<DeregisterManagedInstanceOutcome> DeregisterManagedInstanceOutcomeCallable;
        typedef std::future<DescribeActivationsOutcome> DescribeActivationsOutcomeCallable;
        typedef std::future<DescribeAssociationOutcome> DescribeAssociationOutcomeCallable;
        typedef std::future<DescribeDocumentOutcome> DescribeDocumentOutcomeCallable;
        typedef std::future<DescribeDocumentPermissionOutcome> DescribeDocumentPermissionOutcomeCallable;
        typedef std::future<DescribeInstanceInformationOutcome> DescribeInstanceInformationOutcomeCallable;
        typedef std::future<GetDocumentOutcome> GetDocumentOutcomeCallable;
        typedef std::future<ListAssociationsOutcome> ListAssociationsOutcomeCallable;
        typedef std::future<ListCommandInvocationsOutcome> ListCommandInvocationsOutcomeCallable;
        typedef std::future<ListCommandsOutcome> ListCommandsOutcomeCallable;
        typedef std::future<ListDocumentsOutcome> ListDocumentsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ModifyDocumentPermissionOutcome> ModifyDocumentPermissionOutcomeCallable;
        typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
        typedef std::future<SendCommandOutcome> SendCommandOutcomeCallable;
        typedef std::future<UpdateAssociationStatusOutcome> UpdateAssociationStatusOutcomeCallable;
        typedef std::future<UpdateManagedInstanceRoleOutcome> UpdateManagedInstanceRoleOutcomeCallable;
} // namespace Model

  class SSMClient;

    typedef std::function<void(const SSMClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelCommandRequest&, const Model::CancelCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateActivationRequest&, const Model::CreateActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationRequest&, const Model::CreateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationBatchRequest&, const Model::CreateAssociationBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationBatchResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateDocumentRequest&, const Model::CreateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteActivationRequest&, const Model::DeleteActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteAssociationRequest&, const Model::DeleteAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteDocumentRequest&, const Model::DeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterManagedInstanceRequest&, const Model::DeregisterManagedInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterManagedInstanceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeActivationsRequest&, const Model::DescribeActivationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationRequest&, const Model::DescribeAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentRequest&, const Model::DescribeDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentPermissionRequest&, const Model::DescribeDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstanceInformationRequest&, const Model::DescribeInstanceInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceInformationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDocumentRequest&, const Model::GetDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListAssociationsRequest&, const Model::ListAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandInvocationsRequest&, const Model::ListCommandInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandInvocationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandsRequest&, const Model::ListCommandsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentsRequest&, const Model::ListDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ModifyDocumentPermissionRequest&, const Model::ModifyDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::SendCommandRequest&, const Model::SendCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationStatusRequest&, const Model::UpdateAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateManagedInstanceRoleRequest&, const Model::UpdateManagedInstanceRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateManagedInstanceRoleResponseReceivedHandler;

  /**
   * <p>Amazon EC2 Simple Systems Manager (SSM) enables you to remotely manage the
   * configuration of your Amazon EC2 instances, virtual machines (VMs), or servers
   * in your on-premises environment or in an environment provided by other cloud
   * providers using scripts, commands, or the Amazon EC2 console. SSM includes an
   * on-demand solution called <i>Amazon EC2 Run Command</i> and a lightweight
   * instance configuration solution called <i>SSM Config</i>. </p> <p>This
   * references is intended to be used with the EC2 Run Command User Guide for <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/execute-remote-commands.html">Linux</a>
   * or <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/execute-remote-commands.html">Windows</a>.</p>
   * <note> <p>You must register your on-premises servers and VMs through an
   * activation process before you can configure them using Run Command. Registered
   * servers and VMs are called <i>managed instances</i>. For more information, see
   * <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting
   * Up Run Command On Managed Instances (On-Premises Servers and VMs) on Linux</a>
   * or <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting
   * Up Run Command On Managed Instances (On-Premises Servers and VMs) on
   * Windows</a>.</p> </note> <p> <b>Run Command</b> </p> <p>Run Command provides an
   * on-demand experience for executing commands. You can use pre-defined SSM
   * documents to perform the actions listed later in this section, or you can create
   * your own documents. With these documents, you can remotely configure your
   * instances by sending commands using the <b>Commands</b> page in the <a
   * href="http://console.aws.amazon.com/ec2/">Amazon EC2 console</a>, <a
   * href="http://docs.aws.amazon.com/powershell/latest/reference/items/Amazon_Simple_Systems_Management_cmdlets.html">AWS
   * Tools for Windows PowerShell</a>, the <a
   * href="http://docs.aws.amazon.com/cli/latest/reference/ssm/index.html">AWS
   * CLI</a>, or AWS SDKs.</p> <p>Run Command reports the status of the command
   * execution for each instance targeted by a command. You can also audit the
   * command execution to understand who executed commands, when, and what changes
   * were made. By switching between different SSM documents, you can quickly
   * configure your instances with different types of commands. To get started with
   * Run Command, verify that your environment meets the prerequisites for remotely
   * running commands on EC2 instances (<a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/remote-commands-prereq.html">Linux</a>
   * or <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/remote-commands-prereq.html">Windows</a>).
   * </p> <p/> <p> <b>SSM Config</b> </p> <p>SSM Config is a lightweight instance
   * configuration solution. SSM Config is currently only available for Windows
   * instances. With SSM Config, you can specify a setup configuration for your
   * instances. SSM Config is similar to EC2 User Data, which is another way of
   * running one-time scripts or applying settings during instance launch. SSM Config
   * is an extension of this capability. Using SSM documents, you can specify which
   * actions the system should perform on your instances, including which
   * applications to install, which AWS Directory Service directory to join, which
   * Microsoft PowerShell modules to install, etc. If an instance is missing one or
   * more of these configurations, the system makes those changes. By default, the
   * system checks every five minutes to see if there is a new configuration to apply
   * as defined in a new SSM document. If so, the system updates the instances
   * accordingly. In this way, you can remotely maintain a consistent configuration
   * baseline on your instances. SSM Config is available using the AWS CLI or the AWS
   * Tools for Windows PowerShell. For more information, see <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-configuration-manage.html">Managing
   * Windows Instance Configuration</a>.</p> <p>SSM Config and Run Command include
   * the following pre-defined documents.</p> <p> <b>Linux</b> </p> <ul> <li> <p>
   * <b>AWS-RunShellScript</b> to run shell scripts</p> </li> <li> <p>
   * <b>AWS-UpdateSSMAgent</b> to update the Amazon SSM agent</p> </li> </ul> <p/>
   * <p> <b>Windows</b> </p> <ul> <li> <p> <b>AWS-JoinDirectoryServiceDomain</b> to
   * join an AWS Directory</p> </li> <li> <p> <b>AWS-RunPowerShellScript</b> to run
   * PowerShell commands or scripts</p> </li> <li> <p> <b>AWS-UpdateEC2Config</b> to
   * update the EC2Config service</p> </li> <li> <p>
   * <b>AWS-ConfigureWindowsUpdate</b> to configure Windows Update settings</p> </li>
   * <li> <p> <b>AWS-InstallApplication</b> to install, repair, or uninstall software
   * using an MSI package</p> </li> <li> <p> <b>AWS-InstallPowerShellModule</b> to
   * install PowerShell modules </p> </li> <li> <p> <b>AWS-ConfigureCloudWatch</b> to
   * configure Amazon CloudWatch Logs to monitor applications and systems</p> </li>
   * <li> <p> <b>AWS-ListWindowsInventory</b> to collect information about an EC2
   * instance running in Windows.</p> </li> <li> <p> <b>AWS-FindWindowsUpdates</b> to
   * scan an instance and determines which updates are missing.</p> </li> <li> <p>
   * <b>AWS-InstallMissingWindowsUpdates</b> to install missing updates on your EC2
   * instance.</p> </li> <li> <p> <b>AWS-InstallSpecificWindowsUpdates</b> to install
   * one or more specific updates.</p> </li> </ul> <important> <p>The commands or
   * scripts specified in SSM documents run with administrative privilege on your
   * instances because the Amazon SSM agent runs as root on Linux and the EC2Config
   * service runs in the Local System account on Windows. If a user has permission to
   * execute any of the pre-defined SSM documents (any document that begins with
   * AWS-*) then that user also has administrator access to the instance. Delegate
   * access to Run Command and SSM Config judiciously. This becomes extremely
   * important if you create your own SSM documents. Amazon Web Services does not
   * provide guidance about how to create secure SSM documents. You create SSM
   * documents and delegate access to Run Command at your own risk. As a security
   * best practice, we recommend that you assign access to "AWS-*" documents,
   * especially the AWS-RunShellScript document on Linux and the
   * AWS-RunPowerShellScript document on Windows, to trusted administrators only. You
   * can create SSM documents for specific tasks and delegate access to
   * non-administrators.</p> </important> <p>For information about creating and
   * sharing SSM documents, see the following topics in the SSM User Guide: </p> <ul>
   * <li> <p> <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-ssm-doc.html">Creating
   * SSM Documents</a> and <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ssm-sharing.html">Sharing
   * SSM Documents</a> (Linux)</p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/create-ssm-doc.html">Creating
   * SSM Documents</a> and <a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ssm-sharing.html">Sharing
   * SSM Documents</a> (Windows)</p> </li> </ul>
   */
  class AWS_SSM_API SSMClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~SSMClient();

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you assign to your managed instances. Tags enable you to
         * categorize your managed instances in different ways, for example, by purpose,
         * owner, or environment. Each tag consists of a key and an optional value, both of
         * which you define. For example, you could define a set of tags for your account's
         * managed instances that helps you track each instance's owner and stack level.
         * For example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test. Each resource can have a maximum of
         * 10 tags. </p> <p> We recommend that you devise a set of tag keys that meets your
         * needs for each resource type. Using a consistent set of tag keys makes it easier
         * for you to manage your resources. You can search and filter the resources based
         * on the tags you add. Tags don't have any semantic meaning to Amazon EC2 and are
         * interpreted strictly as a string of characters. </p> <p>For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the Amazon EC2 User Guide. </p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you assign to your managed instances. Tags enable you to
         * categorize your managed instances in different ways, for example, by purpose,
         * owner, or environment. Each tag consists of a key and an optional value, both of
         * which you define. For example, you could define a set of tags for your account's
         * managed instances that helps you track each instance's owner and stack level.
         * For example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test. Each resource can have a maximum of
         * 10 tags. </p> <p> We recommend that you devise a set of tag keys that meets your
         * needs for each resource type. Using a consistent set of tag keys makes it easier
         * for you to manage your resources. You can search and filter the resources based
         * on the tags you add. Tags don't have any semantic meaning to Amazon EC2 and are
         * interpreted strictly as a string of characters. </p> <p>For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the Amazon EC2 User Guide. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * <p>Adds or overwrites one or more tags for the specified resource. Tags are
         * metadata that you assign to your managed instances. Tags enable you to
         * categorize your managed instances in different ways, for example, by purpose,
         * owner, or environment. Each tag consists of a key and an optional value, both of
         * which you define. For example, you could define a set of tags for your account's
         * managed instances that helps you track each instance's owner and stack level.
         * For example: Key=Owner and Value=DbAdmin, SysAdmin, or Dev. Or Key=Stack and
         * Value=Production, Pre-Production, or Test. Each resource can have a maximum of
         * 10 tags. </p> <p> We recommend that you devise a set of tag keys that meets your
         * needs for each resource type. Using a consistent set of tag keys makes it easier
         * for you to manage your resources. You can search and filter the resources based
         * on the tags you add. Tags don't have any semantic meaning to Amazon EC2 and are
         * interpreted strictly as a string of characters. </p> <p>For more information
         * about tags, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Using_Tags.html">Tagging
         * Your Amazon EC2 Resources</a> in the Amazon EC2 User Guide. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p>
         */
        virtual Model::CancelCommandOutcome CancelCommand(const Model::CancelCommandRequest& request) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCommandOutcomeCallable CancelCommandCallable(const Model::CancelCommandRequest& request) const;

        /**
         * <p>Attempts to cancel the command specified by the Command ID. There is no
         * guarantee that the command will be terminated and the underlying process
         * stopped.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCommandAsync(const Model::CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting
         * Up Managed Instances (Linux)</a> or <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting
         * Up Managed Instances (Windows)</a> in the Amazon EC2 User Guide. </p>
         */
        virtual Model::CreateActivationOutcome CreateActivation(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting
         * Up Managed Instances (Linux)</a> or <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting
         * Up Managed Instances (Windows)</a> in the Amazon EC2 User Guide. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateActivationOutcomeCallable CreateActivationCallable(const Model::CreateActivationRequest& request) const;

        /**
         * <p>Registers your on-premises server or virtual machine with Amazon EC2 so that
         * you can manage these resources using Run Command. An on-premises server or
         * virtual machine that has been registered with EC2 is called a managed instance.
         * For more information about activations, see <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/managed-instances.html">Setting
         * Up Managed Instances (Linux)</a> or <a
         * href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/managed-instances.html">Setting
         * Up Managed Instances (Windows)</a> in the Amazon EC2 User Guide. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateActivationAsync(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified SSM document with the specified instance.</p>
         * <p>When you associate an SSM document with an instance, the configuration agent
         * on the instance (SSM agent for Linux and EC2Config service for Windows)
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system throws the AssociationAlreadyExists exception.</p>
         */
        virtual Model::CreateAssociationOutcome CreateAssociation(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instance.</p>
         * <p>When you associate an SSM document with an instance, the configuration agent
         * on the instance (SSM agent for Linux and EC2Config service for Windows)
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system throws the AssociationAlreadyExists exception.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationOutcomeCallable CreateAssociationCallable(const Model::CreateAssociationRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instance.</p>
         * <p>When you associate an SSM document with an instance, the configuration agent
         * on the instance (SSM agent for Linux and EC2Config service for Windows)
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system throws the AssociationAlreadyExists exception.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationAsync(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified SSM document with the specified instances.</p>
         * <p>When you associate an SSM document with an instance, the configuration agent
         * on the instance (SSM agent for Linux and EC2Config service for Windows)
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system throws the AssociationAlreadyExists exception.</p>
         */
        virtual Model::CreateAssociationBatchOutcome CreateAssociationBatch(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instances.</p>
         * <p>When you associate an SSM document with an instance, the configuration agent
         * on the instance (SSM agent for Linux and EC2Config service for Windows)
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system throws the AssociationAlreadyExists exception.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAssociationBatchOutcomeCallable CreateAssociationBatchCallable(const Model::CreateAssociationBatchRequest& request) const;

        /**
         * <p>Associates the specified SSM document with the specified instances.</p>
         * <p>When you associate an SSM document with an instance, the configuration agent
         * on the instance (SSM agent for Linux and EC2Config service for Windows)
         * processes the document and configures the instance as specified.</p> <p>If you
         * associate a document with an instance that already has an associated document,
         * the system throws the AssociationAlreadyExists exception.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAssociationBatchAsync(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SSM document.</p> <p>After you create an SSM document, you can use
         * CreateAssociation to associate it with one or more running instances.</p>
         */
        virtual Model::CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates an SSM document.</p> <p>After you create an SSM document, you can use
         * CreateAssociation to associate it with one or more running instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request) const;

        /**
         * <p>Creates an SSM document.</p> <p>After you create an SSM document, you can use
         * CreateAssociation to associate it with one or more running instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p>
         */
        virtual Model::DeleteActivationOutcome DeleteActivation(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteActivationOutcomeCallable DeleteActivationCallable(const Model::DeleteActivationRequest& request) const;

        /**
         * <p>Deletes an activation. You are not required to delete an activation. If you
         * delete an activation, you can no longer use it to register additional managed
         * instances. Deleting an activation does not de-register managed instances. You
         * must manually de-register managed instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteActivationAsync(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified SSM document from the specified instance.</p>
         * <p>When you disassociate an SSM document from an instance, it does not change
         * the configuration of the instance. To change the configuration state of an
         * instance after you disassociate a document, you must create a new document with
         * the desired configuration and associate it with the instance.</p>
         */
        virtual Model::DeleteAssociationOutcome DeleteAssociation(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified SSM document from the specified instance.</p>
         * <p>When you disassociate an SSM document from an instance, it does not change
         * the configuration of the instance. To change the configuration state of an
         * instance after you disassociate a document, you must create a new document with
         * the desired configuration and associate it with the instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAssociationOutcomeCallable DeleteAssociationCallable(const Model::DeleteAssociationRequest& request) const;

        /**
         * <p>Disassociates the specified SSM document from the specified instance.</p>
         * <p>When you disassociate an SSM document from an instance, it does not change
         * the configuration of the instance. To change the configuration state of an
         * instance after you disassociate a document, you must create a new document with
         * the desired configuration and associate it with the instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAssociationAsync(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the SSM document and all instance associations to the document.</p>
         * <p>Before you delete the SSM document, we recommend that you use
         * DeleteAssociation to disassociate all instances that are associated with the
         * document.</p>
         */
        virtual Model::DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the SSM document and all instance associations to the document.</p>
         * <p>Before you delete the SSM document, we recommend that you use
         * DeleteAssociation to disassociate all instances that are associated with the
         * document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request) const;

        /**
         * <p>Deletes the SSM document and all instance associations to the document.</p>
         * <p>Before you delete the SSM document, we recommend that you use
         * DeleteAssociation to disassociate all instances that are associated with the
         * document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don’t plan to use Run
         * Command on the server, we suggest uninstalling the SSM agent first.</p>
         */
        virtual Model::DeregisterManagedInstanceOutcome DeregisterManagedInstance(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don’t plan to use Run
         * Command on the server, we suggest uninstalling the SSM agent first.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterManagedInstanceOutcomeCallable DeregisterManagedInstanceCallable(const Model::DeregisterManagedInstanceRequest& request) const;

        /**
         * <p>Removes the server or virtual machine from the list of registered servers.
         * You can reregister the instance again at any time. If you don’t plan to use Run
         * Command on the server, we suggest uninstalling the SSM agent first.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterManagedInstanceAsync(const Model::DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this registration.</p>
         */
        virtual Model::DescribeActivationsOutcome DescribeActivations(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this registration.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActivationsOutcomeCallable DescribeActivationsCallable(const Model::DescribeActivationsRequest& request) const;

        /**
         * <p>Details about the activation, including: the date and time the activation was
         * created, the expiration date, the IAM role assigned to the instances in the
         * activation, and the number of instances activated by this registration.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActivationsAsync(const Model::DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the associations for the specified SSM document or instance.</p>
         */
        virtual Model::DescribeAssociationOutcome DescribeAssociation(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the associations for the specified SSM document or instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAssociationOutcomeCallable DescribeAssociationCallable(const Model::DescribeAssociationRequest& request) const;

        /**
         * <p>Describes the associations for the specified SSM document or instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAssociationAsync(const Model::DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified SSM document.</p>
         */
        virtual Model::DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified SSM document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentOutcomeCallable DescribeDocumentCallable(const Model::DescribeDocumentRequest& request) const;

        /**
         * <p>Describes the specified SSM document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentAsync(const Model::DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the permissions for an SSM document. If you created the document,
         * you are the owner. If a document is shared, it can either be shared privately
         * (by specifying a user’s AWS account ID) or publicly (<i>All</i>). </p>
         */
        virtual Model::DescribeDocumentPermissionOutcome DescribeDocumentPermission(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for an SSM document. If you created the document,
         * you are the owner. If a document is shared, it can either be shared privately
         * (by specifying a user’s AWS account ID) or publicly (<i>All</i>). </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDocumentPermissionOutcomeCallable DescribeDocumentPermissionCallable(const Model::DescribeDocumentPermissionRequest& request) const;

        /**
         * <p>Describes the permissions for an SSM document. If you created the document,
         * you are the owner. If a document is shared, it can either be shared privately
         * (by specifying a user’s AWS account ID) or publicly (<i>All</i>). </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDocumentPermissionAsync(const Model::DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p>
         */
        virtual Model::DescribeInstanceInformationOutcome DescribeInstanceInformation(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstanceInformationOutcomeCallable DescribeInstanceInformationCallable(const Model::DescribeInstanceInformationRequest& request) const;

        /**
         * <p>Describes one or more of your instances. You can use this to get information
         * about instances like the operating system platform, the SSM agent version
         * (Linux), status etc. If you specify one or more instance IDs, it returns
         * information for those instances. If you do not specify instance IDs, it returns
         * information for all your instances. If you specify an instance ID that is not
         * valid or an instance that you do not own, you receive an error. </p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstanceInformationAsync(const Model::DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the contents of the specified SSM document.</p>
         */
        virtual Model::GetDocumentOutcome GetDocument(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified SSM document.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDocumentOutcomeCallable GetDocumentCallable(const Model::GetDocumentRequest& request) const;

        /**
         * <p>Gets the contents of the specified SSM document.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDocumentAsync(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the associations for the specified SSM document or instance.</p>
         */
        virtual Model::ListAssociationsOutcome ListAssociations(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Lists the associations for the specified SSM document or instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAssociationsOutcomeCallable ListAssociationsCallable(const Model::ListAssociationsRequest& request) const;

        /**
         * <p>Lists the associations for the specified SSM document or instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAssociationsAsync(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user executes SendCommand against three instances, then a
         * command invocation is created for each requested instance ID.
         * ListCommandInvocations provide status about command execution.</p>
         */
        virtual Model::ListCommandInvocationsOutcome ListCommandInvocations(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user executes SendCommand against three instances, then a
         * command invocation is created for each requested instance ID.
         * ListCommandInvocations provide status about command execution.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandInvocationsOutcomeCallable ListCommandInvocationsCallable(const Model::ListCommandInvocationsRequest& request) const;

        /**
         * <p>An invocation is copy of a command sent to a specific instance. A command can
         * apply to one or more instances. A command invocation applies to one instance.
         * For example, if a user executes SendCommand against three instances, then a
         * command invocation is created for each requested instance ID.
         * ListCommandInvocations provide status about command execution.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandInvocationsAsync(const Model::ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p>
         */
        virtual Model::ListCommandsOutcome ListCommands(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCommandsOutcomeCallable ListCommandsCallable(const Model::ListCommandsRequest& request) const;

        /**
         * <p>Lists the commands requested by users of the AWS account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCommandsAsync(const Model::ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your SSM documents.</p>
         */
        virtual Model::ListDocumentsOutcome ListDocuments(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Describes one or more of your SSM documents.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDocumentsOutcomeCallable ListDocumentsCallable(const Model::ListDocumentsRequest& request) const;

        /**
         * <p>Describes one or more of your SSM documents.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDocumentsAsync(const Model::ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of the tags assigned to the specified resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Share a document publicly or privately. If you share a document privately,
         * you must specify the AWS user account IDs for those people who can use the
         * document. If you share a document publicly, you must specify <i>All</i> as the
         * account ID.</p>
         */
        virtual Model::ModifyDocumentPermissionOutcome ModifyDocumentPermission(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Share a document publicly or privately. If you share a document privately,
         * you must specify the AWS user account IDs for those people who can use the
         * document. If you share a document publicly, you must specify <i>All</i> as the
         * account ID.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyDocumentPermissionOutcomeCallable ModifyDocumentPermissionCallable(const Model::ModifyDocumentPermissionRequest& request) const;

        /**
         * <p>Share a document publicly or privately. If you share a document privately,
         * you must specify the AWS user account IDs for those people who can use the
         * document. If you share a document publicly, you must specify <i>All</i> as the
         * account ID.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyDocumentPermissionAsync(const Model::ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes all tags from the specified resource.</p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes all tags from the specified resource.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * <p>Removes all tags from the specified resource.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Executes commands on one or more remote instances.</p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request) const;

        /**
         * <p>Executes commands on one or more remote instances.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendCommandOutcomeCallable SendCommandCallable(const Model::SendCommandRequest& request) const;

        /**
         * <p>Executes commands on one or more remote instances.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendCommandAsync(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the SSM document associated with the specified
         * instance.</p>
         */
        virtual Model::UpdateAssociationStatusOutcome UpdateAssociationStatus(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the SSM document associated with the specified
         * instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAssociationStatusOutcomeCallable UpdateAssociationStatusCallable(const Model::UpdateAssociationStatusRequest& request) const;

        /**
         * <p>Updates the status of the SSM document associated with the specified
         * instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAssociationStatusAsync(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p>
         */
        virtual Model::UpdateManagedInstanceRoleOutcome UpdateManagedInstanceRole(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateManagedInstanceRoleOutcomeCallable UpdateManagedInstanceRoleCallable(const Model::UpdateManagedInstanceRoleRequest& request) const;

        /**
         * <p>Assigns or changes an Amazon Identity and Access Management (IAM) role to the
         * managed instance.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateManagedInstanceRoleAsync(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddTagsToResourceAsyncHelper(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelCommandAsyncHelper(const Model::CancelCommandRequest& request, const CancelCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateActivationAsyncHelper(const Model::CreateActivationRequest& request, const CreateActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationAsyncHelper(const Model::CreateAssociationRequest& request, const CreateAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAssociationBatchAsyncHelper(const Model::CreateAssociationBatchRequest& request, const CreateAssociationBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDocumentAsyncHelper(const Model::CreateDocumentRequest& request, const CreateDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteActivationAsyncHelper(const Model::DeleteActivationRequest& request, const DeleteActivationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAssociationAsyncHelper(const Model::DeleteAssociationRequest& request, const DeleteAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDocumentAsyncHelper(const Model::DeleteDocumentRequest& request, const DeleteDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterManagedInstanceAsyncHelper(const Model::DeregisterManagedInstanceRequest& request, const DeregisterManagedInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActivationsAsyncHelper(const Model::DescribeActivationsRequest& request, const DescribeActivationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAssociationAsyncHelper(const Model::DescribeAssociationRequest& request, const DescribeAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentAsyncHelper(const Model::DescribeDocumentRequest& request, const DescribeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDocumentPermissionAsyncHelper(const Model::DescribeDocumentPermissionRequest& request, const DescribeDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstanceInformationAsyncHelper(const Model::DescribeInstanceInformationRequest& request, const DescribeInstanceInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDocumentAsyncHelper(const Model::GetDocumentRequest& request, const GetDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAssociationsAsyncHelper(const Model::ListAssociationsRequest& request, const ListAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCommandInvocationsAsyncHelper(const Model::ListCommandInvocationsRequest& request, const ListCommandInvocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCommandsAsyncHelper(const Model::ListCommandsRequest& request, const ListCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDocumentsAsyncHelper(const Model::ListDocumentsRequest& request, const ListDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyDocumentPermissionAsyncHelper(const Model::ModifyDocumentPermissionRequest& request, const ModifyDocumentPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveTagsFromResourceAsyncHelper(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendCommandAsyncHelper(const Model::SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAssociationStatusAsyncHelper(const Model::UpdateAssociationStatusRequest& request, const UpdateAssociationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateManagedInstanceRoleAsyncHelper(const Model::UpdateManagedInstanceRoleRequest& request, const UpdateManagedInstanceRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace SSM
} // namespace Aws

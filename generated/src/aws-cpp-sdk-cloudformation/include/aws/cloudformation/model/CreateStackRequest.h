/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/RollbackConfiguration.h>
#include <aws/cloudformation/model/OnFailure.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for <a>CreateStack</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateStackInput">AWS
   * API Reference</a></p>
   */
  class CreateStackRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API CreateStackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStack"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name that's associated with the stack. The name must be unique in the
     * Region in which you are creating the stack.</p>  <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetical character and can't be longer than 128 characters.</p>
     * 
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline CreateStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline CreateStackRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline CreateStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes.</p> <p>Conditional: You must specify either the
     * <code>TemplateBody</code> or the <code>TemplateURL</code> parameter, but not
     * both.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }
    inline CreateStackRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline CreateStackRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline CreateStackRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. The location for an Amazon S3 bucket must start with
     * <code>https://</code>.</p> <p>Conditional: You must specify either the
     * <code>TemplateBody</code> or the <code>TemplateURL</code> parameter, but not
     * both.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }
    inline CreateStackRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}
    inline CreateStackRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}
    inline CreateStackRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CreateStackRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}
    inline CreateStackRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline CreateStackRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline CreateStackRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to disable rollback of the stack if stack creation
     * failed. You can specify either <code>DisableRollback</code> or
     * <code>OnFailure</code>, but not both.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetDisableRollback() const{ return m_disableRollback; }
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }
    inline CreateStackRequest& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const{ return m_rollbackConfiguration; }
    inline bool RollbackConfigurationHasBeenSet() const { return m_rollbackConfigurationHasBeenSet; }
    inline void SetRollbackConfiguration(const RollbackConfiguration& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = value; }
    inline void SetRollbackConfiguration(RollbackConfiguration&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::move(value); }
    inline CreateStackRequest& WithRollbackConfiguration(const RollbackConfiguration& value) { SetRollbackConfiguration(value); return *this;}
    inline CreateStackRequest& WithRollbackConfiguration(RollbackConfiguration&& value) { SetRollbackConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that can pass before the stack status becomes
     * <code>CREATE_FAILED</code>; if <code>DisableRollback</code> is not set or is set
     * to <code>false</code>, the stack will be rolled back.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline CreateStackRequest& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topic ARNs to publish stack related events. You can find your
     * Amazon SNS topic ARNs using the Amazon SNS console or your Command Line
     * Interface (CLI).</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }
    inline bool NotificationARNsHasBeenSet() const { return m_notificationARNsHasBeenSet; }
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = std::move(value); }
    inline CreateStackRequest& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}
    inline CreateStackRequest& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(std::move(value)); return *this;}
    inline CreateStackRequest& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }
    inline CreateStackRequest& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(std::move(value)); return *this; }
    inline CreateStackRequest& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new IAM users. For those stacks, you must explicitly
     * acknowledge this by specifying one of these capabilities.</p> <p>The following
     * IAM resources require you to specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability.</p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you don't specify either
     * of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-accesskey.html">AWS::IAM::AccessKey</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-group.html">AWS::IAM::Group</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-policy.html">AWS::IAM::Policy</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">AWS::IAM::Role</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-user.html">AWS::IAM::User</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-usertogroupaddition.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#using-iam-capabilities">Acknowledging
     * IAM resources in CloudFormation templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some template contain macros. Macros
     * perform custom processing on templates; this can include simple actions like
     * find-and-replace operations, all the way to extensive transformations of entire
     * templates. Because of this, users typically create a change set from the
     * processed template, so that they can review the changes resulting from the
     * macros before actually creating the stack. If your stack template contains one
     * or more macros, and you choose to create a stack directly from the processed
     * template, without first reviewing the resulting changes in a change set, you
     * must acknowledge this capability. This includes the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by CloudFormation.</p> <p>If you want to
     * create a stack from a stack template that contains macros <i>and</i> nested
     * stacks, you must create the stack directly from the template using this
     * capability.</p>  <p>You should only create stacks directly from a
     * stack template that contains macros if you know what processing the macro
     * performs.</p> <p>Each macro relies on an underlying Lambda service function for
     * processing stack templates. Be aware that the Lambda function owner can update
     * the function operation without CloudFormation being notified.</p> 
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Perform
     * custom processing on CloudFormation templates with template macros</a>.</p>
     * </li> </ul>  <p>Only one of the <code>Capabilities</code> and
     * <code>ResourceType</code> parameters can be specified.</p> 
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline CreateStackRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}
    inline CreateStackRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline CreateStackRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline CreateStackRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all Amazon Web Services resources), <code>Custom::*</code> (for all custom
     * resources), <code>Custom::<i>logical_ID</i> </code> (for a specific custom
     * resource), <code>AWS::<i>service_name</i>::*</code> (for all resources of a
     * particular Amazon Web Services service), and
     * <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code> (for a
     * specific Amazon Web Services resource).</p> <p>If the list of resource types
     * doesn't include a resource that you're creating, the stack creation fails. By
     * default, CloudFormation grants permissions to all resource types. IAM uses this
     * parameter for CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Control
     * access with Identity and Access Management</a>.</p>  <p>Only one of the
     * <code>Capabilities</code> and <code>ResourceType</code> parameters can be
     * specified.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline CreateStackRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline CreateStackRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline CreateStackRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline CreateStackRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    inline CreateStackRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that CloudFormation assumes to
     * create the stack. CloudFormation uses the role's credentials to make calls on
     * your behalf. CloudFormation always uses this role for all future operations on
     * the stack. Provided that users have permission to operate on the stack,
     * CloudFormation uses this role even if the users don't have permission to pass
     * it. Ensure that the role grants least privilege.</p> <p>If you don't specify a
     * value, CloudFormation uses the role that was previously associated with the
     * stack. If no role is available, CloudFormation uses a temporary session that's
     * generated from your user credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline CreateStackRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline CreateStackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline CreateStackRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines what action will be taken if stack creation fails. This must be
     * one of: <code>DO_NOTHING</code>, <code>ROLLBACK</code>, or <code>DELETE</code>.
     * You can specify either <code>OnFailure</code> or <code>DisableRollback</code>,
     * but not both.</p> <p>Default: <code>ROLLBACK</code> </p>
     */
    inline const OnFailure& GetOnFailure() const{ return m_onFailure; }
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }
    inline void SetOnFailure(const OnFailure& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }
    inline void SetOnFailure(OnFailure&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::move(value); }
    inline CreateStackRequest& WithOnFailure(const OnFailure& value) { SetOnFailure(value); return *this;}
    inline CreateStackRequest& WithOnFailure(OnFailure&& value) { SetOnFailure(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure containing the stack policy body. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">Prevent
     * updates to stack resources</a> in the <i>CloudFormation User Guide</i>. You can
     * specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetStackPolicyBody() const{ return m_stackPolicyBody; }
    inline bool StackPolicyBodyHasBeenSet() const { return m_stackPolicyBodyHasBeenSet; }
    inline void SetStackPolicyBody(const Aws::String& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = value; }
    inline void SetStackPolicyBody(Aws::String&& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = std::move(value); }
    inline void SetStackPolicyBody(const char* value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody.assign(value); }
    inline CreateStackRequest& WithStackPolicyBody(const Aws::String& value) { SetStackPolicyBody(value); return *this;}
    inline CreateStackRequest& WithStackPolicyBody(Aws::String&& value) { SetStackPolicyBody(std::move(value)); return *this;}
    inline CreateStackRequest& WithStackPolicyBody(const char* value) { SetStackPolicyBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same Region as the
     * stack. The location for an Amazon S3 bucket must start with
     * <code>https://</code>. You can specify either the <code>StackPolicyBody</code>
     * or the <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetStackPolicyURL() const{ return m_stackPolicyURL; }
    inline bool StackPolicyURLHasBeenSet() const { return m_stackPolicyURLHasBeenSet; }
    inline void SetStackPolicyURL(const Aws::String& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = value; }
    inline void SetStackPolicyURL(Aws::String&& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = std::move(value); }
    inline void SetStackPolicyURL(const char* value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL.assign(value); }
    inline CreateStackRequest& WithStackPolicyURL(const Aws::String& value) { SetStackPolicyURL(value); return *this;}
    inline CreateStackRequest& WithStackPolicyURL(Aws::String&& value) { SetStackPolicyURL(std::move(value)); return *this;}
    inline CreateStackRequest& WithStackPolicyURL(const char* value) { SetStackPolicyURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to the resources created in the stack. A maximum number of 50 tags
     * can be specified.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateStackRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateStackRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateStackRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateStackRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this <code>CreateStack</code> request. Specify this
     * token if you plan to retry requests so that CloudFormation knows that you're not
     * attempting to create a stack with the same name. You might retry
     * <code>CreateStack</code> requests to ensure that CloudFormation successfully
     * received them.</p> <p>All events initiated by a given stack operation are
     * assigned the same client request token, which you can use to track operations.
     * For example, if you execute a <code>CreateStack</code> operation with the token
     * <code>token1</code>, then all the <code>StackEvents</code> generated by that
     * operation will have <code>ClientRequestToken</code> set as
     * <code>token1</code>.</p> <p>In the console, stack operations display the client
     * request token on the Events tab. Stack operations that are initiated from the
     * console use the token format <i>Console-StackOperation-ID</i>, which helps you
     * easily identify the stack operation . For example, if you create a stack using
     * the console, each stack event would be assigned the same token in the following
     * format:
     * <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateStackRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateStackRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateStackRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable termination protection on the specified stack. If a user
     * attempts to delete a stack with termination protection enabled, the operation
     * fails and the stack remains unchanged. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protect
     * CloudFormation stacks from being deleted</a> in the <i>CloudFormation User
     * Guide</i>. Termination protection is deactivated on stacks by default.</p>
     * <p>For <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
     * stacks</a>, termination protection is set on the root stack and can't be changed
     * directly on the nested stack.</p>
     */
    inline bool GetEnableTerminationProtection() const{ return m_enableTerminationProtection; }
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }
    inline CreateStackRequest& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, newly created resources are deleted when the
     * operation rolls back. This includes newly created resources marked with a
     * deletion policy of <code>Retain</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetRetainExceptOnCreate() const{ return m_retainExceptOnCreate; }
    inline bool RetainExceptOnCreateHasBeenSet() const { return m_retainExceptOnCreateHasBeenSet; }
    inline void SetRetainExceptOnCreate(bool value) { m_retainExceptOnCreateHasBeenSet = true; m_retainExceptOnCreate = value; }
    inline CreateStackRequest& WithRetainExceptOnCreate(bool value) { SetRetainExceptOnCreate(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    bool m_disableRollback;
    bool m_disableRollbackHasBeenSet = false;

    RollbackConfiguration m_rollbackConfiguration;
    bool m_rollbackConfigurationHasBeenSet = false;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    OnFailure m_onFailure;
    bool m_onFailureHasBeenSet = false;

    Aws::String m_stackPolicyBody;
    bool m_stackPolicyBodyHasBeenSet = false;

    Aws::String m_stackPolicyURL;
    bool m_stackPolicyURLHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    bool m_enableTerminationProtection;
    bool m_enableTerminationProtectionHasBeenSet = false;

    bool m_retainExceptOnCreate;
    bool m_retainExceptOnCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

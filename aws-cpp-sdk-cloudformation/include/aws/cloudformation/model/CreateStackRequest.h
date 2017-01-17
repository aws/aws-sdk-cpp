﻿/*
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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/OnFailure.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>

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
  class AWS_CLOUDFORMATION_API CreateStackRequest : public CloudFormationRequest
  {
  public:
    CreateStackRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name that is associated with the stack. The name must be unique in the
     * region in which you are creating the stack.</p> <note> <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetic character and cannot be longer than 128 characters.</p>
     * </note>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name that is associated with the stack. The name must be unique in the
     * region in which you are creating the stack.</p> <note> <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetic character and cannot be longer than 128 characters.</p>
     * </note>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name that is associated with the stack. The name must be unique in the
     * region in which you are creating the stack.</p> <note> <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetic character and cannot be longer than 128 characters.</p>
     * </note>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name that is associated with the stack. The name must be unique in the
     * region in which you are creating the stack.</p> <note> <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetic character and cannot be longer than 128 characters.</p>
     * </note>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name that is associated with the stack. The name must be unique in the
     * region in which you are creating the stack.</p> <note> <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetic character and cannot be longer than 128 characters.</p>
     * </note>
     */
    inline CreateStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name that is associated with the stack. The name must be unique in the
     * region in which you are creating the stack.</p> <note> <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetic character and cannot be longer than 128 characters.</p>
     * </note>
     */
    inline CreateStackRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name that is associated with the stack. The name must be unique in the
     * region in which you are creating the stack.</p> <note> <p>A stack name can
     * contain only alphanumeric characters (case sensitive) and hyphens. It must start
     * with an alphabetic character and cannot be longer than 128 characters.</p>
     * </note>
     */
    inline CreateStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline CreateStackRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline CreateStackRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline CreateStackRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information, go to the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information, go to the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information, go to the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information, go to the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information, go to the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline CreateStackRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information, go to the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline CreateStackRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information, go to the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline CreateStackRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateStackRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateStackRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateStackRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateStackRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>Set to <code>true</code> to disable rollback of the stack if stack creation
     * failed. You can specify either <code>DisableRollback</code> or
     * <code>OnFailure</code>, but not both.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetDisableRollback() const{ return m_disableRollback; }

    /**
     * <p>Set to <code>true</code> to disable rollback of the stack if stack creation
     * failed. You can specify either <code>DisableRollback</code> or
     * <code>OnFailure</code>, but not both.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }

    /**
     * <p>Set to <code>true</code> to disable rollback of the stack if stack creation
     * failed. You can specify either <code>DisableRollback</code> or
     * <code>OnFailure</code>, but not both.</p> <p>Default: <code>false</code> </p>
     */
    inline CreateStackRequest& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}

    /**
     * <p>The amount of time that can pass before the stack status becomes
     * CREATE_FAILED; if <code>DisableRollback</code> is not set or is set to
     * <code>false</code>, the stack will be rolled back.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>The amount of time that can pass before the stack status becomes
     * CREATE_FAILED; if <code>DisableRollback</code> is not set or is set to
     * <code>false</code>, the stack will be rolled back.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>The amount of time that can pass before the stack status becomes
     * CREATE_FAILED; if <code>DisableRollback</code> is not set or is set to
     * <code>false</code>, the stack will be rolled back.</p>
     */
    inline CreateStackRequest& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline CreateStackRequest& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline CreateStackRequest& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline CreateStackRequest& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline CreateStackRequest& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The Simple Notification Service (SNS) topic ARNs to publish stack related
     * events. You can find your SNS topic ARNs using the <a
     * href="https://console.aws.amazon.com/sns">SNS console</a> or your Command Line
     * Interface (CLI).</p>
     */
    inline CreateStackRequest& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stacks. Some stack templates might include resources that can affect
     * permissions in your AWS account, for example, by creating new AWS Identity and
     * Access Management (IAM) users. For those stacks, you must explicitly acknowledge
     * their capabilities by specifying this parameter.</p> <p>The only valid values
     * are <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code>. The
     * following resources require you to specify this parameter: <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a>, and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a>. If your stack template contains these
     * resources, we recommend that you review all permissions associated with them and
     * edit their permissions if necessary.</p> <p>If you have IAM resources, you can
     * specify either capability. If you have IAM resources with custom names, you must
     * specify <code>CAPABILITY_NAMED_IAM</code>. If you don't specify this parameter,
     * this action returns an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stacks. Some stack templates might include resources that can affect
     * permissions in your AWS account, for example, by creating new AWS Identity and
     * Access Management (IAM) users. For those stacks, you must explicitly acknowledge
     * their capabilities by specifying this parameter.</p> <p>The only valid values
     * are <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code>. The
     * following resources require you to specify this parameter: <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a>, and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a>. If your stack template contains these
     * resources, we recommend that you review all permissions associated with them and
     * edit their permissions if necessary.</p> <p>If you have IAM resources, you can
     * specify either capability. If you have IAM resources with custom names, you must
     * specify <code>CAPABILITY_NAMED_IAM</code>. If you don't specify this parameter,
     * this action returns an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stacks. Some stack templates might include resources that can affect
     * permissions in your AWS account, for example, by creating new AWS Identity and
     * Access Management (IAM) users. For those stacks, you must explicitly acknowledge
     * their capabilities by specifying this parameter.</p> <p>The only valid values
     * are <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code>. The
     * following resources require you to specify this parameter: <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a>, and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a>. If your stack template contains these
     * resources, we recommend that you review all permissions associated with them and
     * edit their permissions if necessary.</p> <p>If you have IAM resources, you can
     * specify either capability. If you have IAM resources with custom names, you must
     * specify <code>CAPABILITY_NAMED_IAM</code>. If you don't specify this parameter,
     * this action returns an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stacks. Some stack templates might include resources that can affect
     * permissions in your AWS account, for example, by creating new AWS Identity and
     * Access Management (IAM) users. For those stacks, you must explicitly acknowledge
     * their capabilities by specifying this parameter.</p> <p>The only valid values
     * are <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code>. The
     * following resources require you to specify this parameter: <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a>, and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a>. If your stack template contains these
     * resources, we recommend that you review all permissions associated with them and
     * edit their permissions if necessary.</p> <p>If you have IAM resources, you can
     * specify either capability. If you have IAM resources with custom names, you must
     * specify <code>CAPABILITY_NAMED_IAM</code>. If you don't specify this parameter,
     * this action returns an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline CreateStackRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stacks. Some stack templates might include resources that can affect
     * permissions in your AWS account, for example, by creating new AWS Identity and
     * Access Management (IAM) users. For those stacks, you must explicitly acknowledge
     * their capabilities by specifying this parameter.</p> <p>The only valid values
     * are <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code>. The
     * following resources require you to specify this parameter: <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a>, and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a>. If your stack template contains these
     * resources, we recommend that you review all permissions associated with them and
     * edit their permissions if necessary.</p> <p>If you have IAM resources, you can
     * specify either capability. If you have IAM resources with custom names, you must
     * specify <code>CAPABILITY_NAMED_IAM</code>. If you don't specify this parameter,
     * this action returns an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline CreateStackRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(value); return *this;}

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stacks. Some stack templates might include resources that can affect
     * permissions in your AWS account, for example, by creating new AWS Identity and
     * Access Management (IAM) users. For those stacks, you must explicitly acknowledge
     * their capabilities by specifying this parameter.</p> <p>The only valid values
     * are <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code>. The
     * following resources require you to specify this parameter: <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a>, and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a>. If your stack template contains these
     * resources, we recommend that you review all permissions associated with them and
     * edit their permissions if necessary.</p> <p>If you have IAM resources, you can
     * specify either capability. If you have IAM resources with custom names, you must
     * specify <code>CAPABILITY_NAMED_IAM</code>. If you don't specify this parameter,
     * this action returns an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline CreateStackRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stacks. Some stack templates might include resources that can affect
     * permissions in your AWS account, for example, by creating new AWS Identity and
     * Access Management (IAM) users. For those stacks, you must explicitly acknowledge
     * their capabilities by specifying this parameter.</p> <p>The only valid values
     * are <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code>. The
     * following resources require you to specify this parameter: <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a>, <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a>, and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a>. If your stack template contains these
     * resources, we recommend that you review all permissions associated with them and
     * edit their permissions if necessary.</p> <p>If you have IAM resources, you can
     * specify either capability. If you have IAM resources with custom names, you must
     * specify <code>CAPABILITY_NAMED_IAM</code>. If you don't specify this parameter,
     * this action returns an <code>InsufficientCapabilities</code> error.</p> <p>For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p>
     */
    inline CreateStackRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline CreateStackRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline CreateStackRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline CreateStackRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline CreateStackRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * create stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>. Use the
     * following syntax to describe template resource types: <code>AWS::*</code> (for
     * all AWS resource), <code>Custom::*</code> (for all custom resources),
     * <code>Custom::<i>logical_ID</i> </code> (for a specific custom resource),
     * <code>AWS::<i>service_name</i>::*</code> (for all resources of a particular AWS
     * service), and <code>AWS::<i>service_name</i>::<i>resource_logical_ID</i> </code>
     * (for a specific AWS resource).</p> <p>If the list of resource types doesn't
     * include a resource that you're creating, the stack creation fails. By default,
     * AWS CloudFormation grants permissions to all resource types. AWS Identity and
     * Access Management (IAM) uses this parameter for AWS CloudFormation-specific
     * condition keys in IAM policies. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline CreateStackRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to create the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to create the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to create the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to create the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to create the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateStackRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to create the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateStackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to create the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateStackRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>Determines what action will be taken if stack creation fails. This must be
     * one of: DO_NOTHING, ROLLBACK, or DELETE. You can specify either
     * <code>OnFailure</code> or <code>DisableRollback</code>, but not both.</p>
     * <p>Default: <code>ROLLBACK</code> </p>
     */
    inline const OnFailure& GetOnFailure() const{ return m_onFailure; }

    /**
     * <p>Determines what action will be taken if stack creation fails. This must be
     * one of: DO_NOTHING, ROLLBACK, or DELETE. You can specify either
     * <code>OnFailure</code> or <code>DisableRollback</code>, but not both.</p>
     * <p>Default: <code>ROLLBACK</code> </p>
     */
    inline void SetOnFailure(const OnFailure& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }

    /**
     * <p>Determines what action will be taken if stack creation fails. This must be
     * one of: DO_NOTHING, ROLLBACK, or DELETE. You can specify either
     * <code>OnFailure</code> or <code>DisableRollback</code>, but not both.</p>
     * <p>Default: <code>ROLLBACK</code> </p>
     */
    inline void SetOnFailure(OnFailure&& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }

    /**
     * <p>Determines what action will be taken if stack creation fails. This must be
     * one of: DO_NOTHING, ROLLBACK, or DELETE. You can specify either
     * <code>OnFailure</code> or <code>DisableRollback</code>, but not both.</p>
     * <p>Default: <code>ROLLBACK</code> </p>
     */
    inline CreateStackRequest& WithOnFailure(const OnFailure& value) { SetOnFailure(value); return *this;}

    /**
     * <p>Determines what action will be taken if stack creation fails. This must be
     * one of: DO_NOTHING, ROLLBACK, or DELETE. You can specify either
     * <code>OnFailure</code> or <code>DisableRollback</code>, but not both.</p>
     * <p>Default: <code>ROLLBACK</code> </p>
     */
    inline CreateStackRequest& WithOnFailure(OnFailure&& value) { SetOnFailure(value); return *this;}

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the <i>AWS CloudFormation User
     * Guide</i>. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetStackPolicyBody() const{ return m_stackPolicyBody; }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the <i>AWS CloudFormation User
     * Guide</i>. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyBody(const Aws::String& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = value; }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the <i>AWS CloudFormation User
     * Guide</i>. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyBody(Aws::String&& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = value; }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the <i>AWS CloudFormation User
     * Guide</i>. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyBody(const char* value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody.assign(value); }

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the <i>AWS CloudFormation User
     * Guide</i>. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline CreateStackRequest& WithStackPolicyBody(const Aws::String& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the <i>AWS CloudFormation User
     * Guide</i>. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline CreateStackRequest& WithStackPolicyBody(Aws::String&& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing the stack policy body. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/protect-stack-resources.html">
     * Prevent Updates to Stack Resources</a> in the <i>AWS CloudFormation User
     * Guide</i>. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline CreateStackRequest& WithStackPolicyBody(const char* value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetStackPolicyURL() const{ return m_stackPolicyURL; }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyURL(const Aws::String& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = value; }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyURL(Aws::String&& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = value; }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline void SetStackPolicyURL(const char* value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL.assign(value); }

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline CreateStackRequest& WithStackPolicyURL(const Aws::String& value) { SetStackPolicyURL(value); return *this;}

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline CreateStackRequest& WithStackPolicyURL(Aws::String&& value) { SetStackPolicyURL(value); return *this;}

    /**
     * <p>Location of a file containing the stack policy. The URL must point to a
     * policy (maximum size: 16 KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p>
     */
    inline CreateStackRequest& WithStackPolicyURL(const char* value) { SetStackPolicyURL(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to the resources created in the stack. A maximum number of
     * 10 tags can be specified.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to the resources created in the stack. A maximum number of
     * 10 tags can be specified.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to the resources created in the stack. A maximum number of
     * 10 tags can be specified.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to the resources created in the stack. A maximum number of
     * 10 tags can be specified.</p>
     */
    inline CreateStackRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to the resources created in the stack. A maximum number of
     * 10 tags can be specified.</p>
     */
    inline CreateStackRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to the resources created in the stack. A maximum number of
     * 10 tags can be specified.</p>
     */
    inline CreateStackRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to the resources created in the stack. A maximum number of
     * 10 tags can be specified.</p>
     */
    inline CreateStackRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;
    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet;
    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
    bool m_disableRollback;
    bool m_disableRollbackHasBeenSet;
    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;
    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet;
    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet;
    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    OnFailure m_onFailure;
    bool m_onFailureHasBeenSet;
    Aws::String m_stackPolicyBody;
    bool m_stackPolicyBodyHasBeenSet;
    Aws::String m_stackPolicyURL;
    bool m_stackPolicyURLHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

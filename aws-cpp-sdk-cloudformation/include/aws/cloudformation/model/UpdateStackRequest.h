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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The input for an <a>UpdateStack</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API UpdateStackRequest : public CloudFormationRequest
  {
  public:
    UpdateStackRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or unique stack ID of the stack to update.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or unique stack ID of the stack to update.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or unique stack ID of the stack to update.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or unique stack ID of the stack to update.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or unique stack ID of the stack to update.</p>
     */
    inline UpdateStackRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or unique stack ID of the stack to update.</p>
     */
    inline UpdateStackRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or unique stack ID of the stack to update.</p>
     */
    inline UpdateStackRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline UpdateStackRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline UpdateStackRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline UpdateStackRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline UpdateStackRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline UpdateStackRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the <code>TemplateBody</code> or the <code>TemplateURL</code>
     * parameter, but not both.</p>
     */
    inline UpdateStackRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Reuse the existing template that is associated with the stack that you are
     * updating.</p>
     */
    inline bool GetUsePreviousTemplate() const{ return m_usePreviousTemplate; }

    /**
     * <p>Reuse the existing template that is associated with the stack that you are
     * updating.</p>
     */
    inline void SetUsePreviousTemplate(bool value) { m_usePreviousTemplateHasBeenSet = true; m_usePreviousTemplate = value; }

    /**
     * <p>Reuse the existing template that is associated with the stack that you are
     * updating.</p>
     */
    inline UpdateStackRequest& WithUsePreviousTemplate(bool value) { SetUsePreviousTemplate(value); return *this;}

    /**
     * <p>Structure containing the temporary overriding stack policy body. You can
     * specify either the <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline const Aws::String& GetStackPolicyDuringUpdateBody() const{ return m_stackPolicyDuringUpdateBody; }

    /**
     * <p>Structure containing the temporary overriding stack policy body. You can
     * specify either the <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline void SetStackPolicyDuringUpdateBody(const Aws::String& value) { m_stackPolicyDuringUpdateBodyHasBeenSet = true; m_stackPolicyDuringUpdateBody = value; }

    /**
     * <p>Structure containing the temporary overriding stack policy body. You can
     * specify either the <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline void SetStackPolicyDuringUpdateBody(Aws::String&& value) { m_stackPolicyDuringUpdateBodyHasBeenSet = true; m_stackPolicyDuringUpdateBody = value; }

    /**
     * <p>Structure containing the temporary overriding stack policy body. You can
     * specify either the <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline void SetStackPolicyDuringUpdateBody(const char* value) { m_stackPolicyDuringUpdateBodyHasBeenSet = true; m_stackPolicyDuringUpdateBody.assign(value); }

    /**
     * <p>Structure containing the temporary overriding stack policy body. You can
     * specify either the <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline UpdateStackRequest& WithStackPolicyDuringUpdateBody(const Aws::String& value) { SetStackPolicyDuringUpdateBody(value); return *this;}

    /**
     * <p>Structure containing the temporary overriding stack policy body. You can
     * specify either the <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline UpdateStackRequest& WithStackPolicyDuringUpdateBody(Aws::String&& value) { SetStackPolicyDuringUpdateBody(value); return *this;}

    /**
     * <p>Structure containing the temporary overriding stack policy body. You can
     * specify either the <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline UpdateStackRequest& WithStackPolicyDuringUpdateBody(const char* value) { SetStackPolicyDuringUpdateBody(value); return *this;}

    /**
     * <p>Location of a file containing the temporary overriding stack policy. The URL
     * must point to a policy (max size: 16KB) located in an S3 bucket in the same
     * region as the stack. You can specify either the
     * <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline const Aws::String& GetStackPolicyDuringUpdateURL() const{ return m_stackPolicyDuringUpdateURL; }

    /**
     * <p>Location of a file containing the temporary overriding stack policy. The URL
     * must point to a policy (max size: 16KB) located in an S3 bucket in the same
     * region as the stack. You can specify either the
     * <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline void SetStackPolicyDuringUpdateURL(const Aws::String& value) { m_stackPolicyDuringUpdateURLHasBeenSet = true; m_stackPolicyDuringUpdateURL = value; }

    /**
     * <p>Location of a file containing the temporary overriding stack policy. The URL
     * must point to a policy (max size: 16KB) located in an S3 bucket in the same
     * region as the stack. You can specify either the
     * <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline void SetStackPolicyDuringUpdateURL(Aws::String&& value) { m_stackPolicyDuringUpdateURLHasBeenSet = true; m_stackPolicyDuringUpdateURL = value; }

    /**
     * <p>Location of a file containing the temporary overriding stack policy. The URL
     * must point to a policy (max size: 16KB) located in an S3 bucket in the same
     * region as the stack. You can specify either the
     * <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline void SetStackPolicyDuringUpdateURL(const char* value) { m_stackPolicyDuringUpdateURLHasBeenSet = true; m_stackPolicyDuringUpdateURL.assign(value); }

    /**
     * <p>Location of a file containing the temporary overriding stack policy. The URL
     * must point to a policy (max size: 16KB) located in an S3 bucket in the same
     * region as the stack. You can specify either the
     * <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline UpdateStackRequest& WithStackPolicyDuringUpdateURL(const Aws::String& value) { SetStackPolicyDuringUpdateURL(value); return *this;}

    /**
     * <p>Location of a file containing the temporary overriding stack policy. The URL
     * must point to a policy (max size: 16KB) located in an S3 bucket in the same
     * region as the stack. You can specify either the
     * <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline UpdateStackRequest& WithStackPolicyDuringUpdateURL(Aws::String&& value) { SetStackPolicyDuringUpdateURL(value); return *this;}

    /**
     * <p>Location of a file containing the temporary overriding stack policy. The URL
     * must point to a policy (max size: 16KB) located in an S3 bucket in the same
     * region as the stack. You can specify either the
     * <code>StackPolicyDuringUpdateBody</code> or the
     * <code>StackPolicyDuringUpdateURL</code> parameter, but not both.</p> <p>If you
     * want to update protected resources, specify a temporary overriding stack policy
     * during this update. If you do not specify a stack policy, the current policy
     * that is associated with the stack will be used.</p>
     */
    inline UpdateStackRequest& WithStackPolicyDuringUpdateURL(const char* value) { SetStackPolicyDuringUpdateURL(value); return *this;}

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
    inline UpdateStackRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline UpdateStackRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline UpdateStackRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the stack. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline UpdateStackRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can update
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
     * <p>A list of values that you must specify before AWS CloudFormation can update
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
     * <p>A list of values that you must specify before AWS CloudFormation can update
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
     * <p>A list of values that you must specify before AWS CloudFormation can update
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
    inline UpdateStackRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can update
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
    inline UpdateStackRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(value); return *this;}

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can update
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
    inline UpdateStackRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can update
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
    inline UpdateStackRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline UpdateStackRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline UpdateStackRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline UpdateStackRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline UpdateStackRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with for this
     * update stack action, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource that you're updating, the
     * stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * AWS CloudFormation-specific condition keys in IAM policies. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a>.</p>
     */
    inline UpdateStackRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to update the stack. AWS CloudFormation
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
     * role that AWS CloudFormation assumes to update the stack. AWS CloudFormation
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
     * role that AWS CloudFormation assumes to update the stack. AWS CloudFormation
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
     * role that AWS CloudFormation assumes to update the stack. AWS CloudFormation
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
     * role that AWS CloudFormation assumes to update the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline UpdateStackRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to update the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline UpdateStackRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes to update the stack. AWS CloudFormation
     * uses the role's credentials to make calls on your behalf. AWS CloudFormation
     * always uses this role for all future operations on the stack. As long as users
     * have permission to operate on the stack, AWS CloudFormation uses this role even
     * if the users don't have permission to pass it. Ensure that the role grants least
     * privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses the role
     * that was previously associated with the stack. If no role is available, AWS
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline UpdateStackRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>Structure containing a new stack policy body. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p> <p>You might update the stack policy, for example, in order to
     * protect a new resource that you created during a stack update. If you do not
     * specify a stack policy, the current policy that is associated with the stack is
     * unchanged.</p>
     */
    inline const Aws::String& GetStackPolicyBody() const{ return m_stackPolicyBody; }

    /**
     * <p>Structure containing a new stack policy body. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p> <p>You might update the stack policy, for example, in order to
     * protect a new resource that you created during a stack update. If you do not
     * specify a stack policy, the current policy that is associated with the stack is
     * unchanged.</p>
     */
    inline void SetStackPolicyBody(const Aws::String& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = value; }

    /**
     * <p>Structure containing a new stack policy body. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p> <p>You might update the stack policy, for example, in order to
     * protect a new resource that you created during a stack update. If you do not
     * specify a stack policy, the current policy that is associated with the stack is
     * unchanged.</p>
     */
    inline void SetStackPolicyBody(Aws::String&& value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody = value; }

    /**
     * <p>Structure containing a new stack policy body. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p> <p>You might update the stack policy, for example, in order to
     * protect a new resource that you created during a stack update. If you do not
     * specify a stack policy, the current policy that is associated with the stack is
     * unchanged.</p>
     */
    inline void SetStackPolicyBody(const char* value) { m_stackPolicyBodyHasBeenSet = true; m_stackPolicyBody.assign(value); }

    /**
     * <p>Structure containing a new stack policy body. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p> <p>You might update the stack policy, for example, in order to
     * protect a new resource that you created during a stack update. If you do not
     * specify a stack policy, the current policy that is associated with the stack is
     * unchanged.</p>
     */
    inline UpdateStackRequest& WithStackPolicyBody(const Aws::String& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing a new stack policy body. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p> <p>You might update the stack policy, for example, in order to
     * protect a new resource that you created during a stack update. If you do not
     * specify a stack policy, the current policy that is associated with the stack is
     * unchanged.</p>
     */
    inline UpdateStackRequest& WithStackPolicyBody(Aws::String&& value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Structure containing a new stack policy body. You can specify either the
     * <code>StackPolicyBody</code> or the <code>StackPolicyURL</code> parameter, but
     * not both.</p> <p>You might update the stack policy, for example, in order to
     * protect a new resource that you created during a stack update. If you do not
     * specify a stack policy, the current policy that is associated with the stack is
     * unchanged.</p>
     */
    inline UpdateStackRequest& WithStackPolicyBody(const char* value) { SetStackPolicyBody(value); return *this;}

    /**
     * <p>Location of a file containing the updated stack policy. The URL must point to
     * a policy (max size: 16KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p> <p>You might update the
     * stack policy, for example, in order to protect a new resource that you created
     * during a stack update. If you do not specify a stack policy, the current policy
     * that is associated with the stack is unchanged.</p>
     */
    inline const Aws::String& GetStackPolicyURL() const{ return m_stackPolicyURL; }

    /**
     * <p>Location of a file containing the updated stack policy. The URL must point to
     * a policy (max size: 16KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p> <p>You might update the
     * stack policy, for example, in order to protect a new resource that you created
     * during a stack update. If you do not specify a stack policy, the current policy
     * that is associated with the stack is unchanged.</p>
     */
    inline void SetStackPolicyURL(const Aws::String& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = value; }

    /**
     * <p>Location of a file containing the updated stack policy. The URL must point to
     * a policy (max size: 16KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p> <p>You might update the
     * stack policy, for example, in order to protect a new resource that you created
     * during a stack update. If you do not specify a stack policy, the current policy
     * that is associated with the stack is unchanged.</p>
     */
    inline void SetStackPolicyURL(Aws::String&& value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL = value; }

    /**
     * <p>Location of a file containing the updated stack policy. The URL must point to
     * a policy (max size: 16KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p> <p>You might update the
     * stack policy, for example, in order to protect a new resource that you created
     * during a stack update. If you do not specify a stack policy, the current policy
     * that is associated with the stack is unchanged.</p>
     */
    inline void SetStackPolicyURL(const char* value) { m_stackPolicyURLHasBeenSet = true; m_stackPolicyURL.assign(value); }

    /**
     * <p>Location of a file containing the updated stack policy. The URL must point to
     * a policy (max size: 16KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p> <p>You might update the
     * stack policy, for example, in order to protect a new resource that you created
     * during a stack update. If you do not specify a stack policy, the current policy
     * that is associated with the stack is unchanged.</p>
     */
    inline UpdateStackRequest& WithStackPolicyURL(const Aws::String& value) { SetStackPolicyURL(value); return *this;}

    /**
     * <p>Location of a file containing the updated stack policy. The URL must point to
     * a policy (max size: 16KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p> <p>You might update the
     * stack policy, for example, in order to protect a new resource that you created
     * during a stack update. If you do not specify a stack policy, the current policy
     * that is associated with the stack is unchanged.</p>
     */
    inline UpdateStackRequest& WithStackPolicyURL(Aws::String&& value) { SetStackPolicyURL(value); return *this;}

    /**
     * <p>Location of a file containing the updated stack policy. The URL must point to
     * a policy (max size: 16KB) located in an S3 bucket in the same region as the
     * stack. You can specify either the <code>StackPolicyBody</code> or the
     * <code>StackPolicyURL</code> parameter, but not both.</p> <p>You might update the
     * stack policy, for example, in order to protect a new resource that you created
     * during a stack update. If you do not specify a stack policy, the current policy
     * that is associated with the stack is unchanged.</p>
     */
    inline UpdateStackRequest& WithStackPolicyURL(const char* value) { SetStackPolicyURL(value); return *this;}

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline UpdateStackRequest& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline UpdateStackRequest& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline UpdateStackRequest& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline UpdateStackRequest& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>Amazon Simple Notification Service topic Amazon Resource Names (ARNs) that
     * AWS CloudFormation associates with the stack. Specify an empty list to remove
     * all notification topics.</p>
     */
    inline UpdateStackRequest& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to supported resources in the stack. You can specify a
     * maximum number of 10 tags.</p> <p>If you don't specify this parameter, AWS
     * CloudFormation doesn't modify the stack's tags. If you specify an empty value,
     * AWS CloudFormation removes all associated tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to supported resources in the stack. You can specify a
     * maximum number of 10 tags.</p> <p>If you don't specify this parameter, AWS
     * CloudFormation doesn't modify the stack's tags. If you specify an empty value,
     * AWS CloudFormation removes all associated tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to supported resources in the stack. You can specify a
     * maximum number of 10 tags.</p> <p>If you don't specify this parameter, AWS
     * CloudFormation doesn't modify the stack's tags. If you specify an empty value,
     * AWS CloudFormation removes all associated tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to supported resources in the stack. You can specify a
     * maximum number of 10 tags.</p> <p>If you don't specify this parameter, AWS
     * CloudFormation doesn't modify the stack's tags. If you specify an empty value,
     * AWS CloudFormation removes all associated tags.</p>
     */
    inline UpdateStackRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to supported resources in the stack. You can specify a
     * maximum number of 10 tags.</p> <p>If you don't specify this parameter, AWS
     * CloudFormation doesn't modify the stack's tags. If you specify an empty value,
     * AWS CloudFormation removes all associated tags.</p>
     */
    inline UpdateStackRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to supported resources in the stack. You can specify a
     * maximum number of 10 tags.</p> <p>If you don't specify this parameter, AWS
     * CloudFormation doesn't modify the stack's tags. If you specify an empty value,
     * AWS CloudFormation removes all associated tags.</p>
     */
    inline UpdateStackRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to supported resources in the stack. You can specify a
     * maximum number of 10 tags.</p> <p>If you don't specify this parameter, AWS
     * CloudFormation doesn't modify the stack's tags. If you specify an empty value,
     * AWS CloudFormation removes all associated tags.</p>
     */
    inline UpdateStackRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;
    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet;
    bool m_usePreviousTemplate;
    bool m_usePreviousTemplateHasBeenSet;
    Aws::String m_stackPolicyDuringUpdateBody;
    bool m_stackPolicyDuringUpdateBodyHasBeenSet;
    Aws::String m_stackPolicyDuringUpdateURL;
    bool m_stackPolicyDuringUpdateURLHasBeenSet;
    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet;
    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::String m_stackPolicyBody;
    bool m_stackPolicyBodyHasBeenSet;
    Aws::String m_stackPolicyURL;
    bool m_stackPolicyURLHasBeenSet;
    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

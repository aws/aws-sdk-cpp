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
#include <aws/cloudformation/model/ChangeSetType.h>
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
   * <p>The input for the <a>CreateChangeSet</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API CreateChangeSetRequest : public CloudFormationRequest
  {
  public:
    CreateChangeSetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. AWS CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. AWS CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. AWS CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. AWS CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. AWS CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline CreateChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. AWS CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline CreateChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. AWS CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline CreateChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. AWS CloudFormation
     * generates the change set by comparing this template with the template of the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. AWS CloudFormation
     * generates the change set by comparing this template with the template of the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. AWS CloudFormation
     * generates the change set by comparing this template with the template of the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. AWS CloudFormation
     * generates the change set by comparing this template with the template of the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. AWS CloudFormation
     * generates the change set by comparing this template with the template of the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. AWS CloudFormation
     * generates the change set by comparing this template with the template of the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. AWS CloudFormation
     * generates the change set by comparing this template with the template of the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that is located in an S3 bucket.
     * AWS CloudFormation generates the change set by comparing this template with the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that is located in an S3 bucket.
     * AWS CloudFormation generates the change set by comparing this template with the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that is located in an S3 bucket.
     * AWS CloudFormation generates the change set by comparing this template with the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that is located in an S3 bucket.
     * AWS CloudFormation generates the change set by comparing this template with the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that is located in an S3 bucket.
     * AWS CloudFormation generates the change set by comparing this template with the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that is located in an S3 bucket.
     * AWS CloudFormation generates the change set by comparing this template with the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that is located in an S3 bucket.
     * AWS CloudFormation generates the change set by comparing this template with the
     * stack that you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Whether to reuse the template that is associated with the stack to create the
     * change set.</p>
     */
    inline bool GetUsePreviousTemplate() const{ return m_usePreviousTemplate; }

    /**
     * <p>Whether to reuse the template that is associated with the stack to create the
     * change set.</p>
     */
    inline void SetUsePreviousTemplate(bool value) { m_usePreviousTemplateHasBeenSet = true; m_usePreviousTemplate = value; }

    /**
     * <p>Whether to reuse the template that is associated with the stack to create the
     * change set.</p>
     */
    inline CreateChangeSetRequest& WithUsePreviousTemplate(bool value) { SetUsePreviousTemplate(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateChangeSetRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateChangeSetRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateChangeSetRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline CreateChangeSetRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

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
    inline CreateChangeSetRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

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
    inline CreateChangeSetRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(value); return *this;}

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
    inline CreateChangeSetRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

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
    inline CreateChangeSetRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline CreateChangeSetRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline CreateChangeSetRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline CreateChangeSetRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline CreateChangeSetRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, AWS CloudFormation grants permissions to all
     * resource types. AWS Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for AWS CloudFormation. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * Access with AWS Identity and Access Management</a> in the AWS CloudFormation
     * User Guide.</p>
     */
    inline CreateChangeSetRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes when executing the change set. AWS
     * CloudFormation uses the role's credentials to make calls on your behalf. AWS
     * CloudFormation uses this role for all future operations on the stack. As long as
     * users have permission to operate on the stack, AWS CloudFormation uses this role
     * even if the users don't have permission to pass it. Ensure that the role grants
     * least privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses
     * the role that was previously associated with the stack. If no role is available,
     * AWS CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes when executing the change set. AWS
     * CloudFormation uses the role's credentials to make calls on your behalf. AWS
     * CloudFormation uses this role for all future operations on the stack. As long as
     * users have permission to operate on the stack, AWS CloudFormation uses this role
     * even if the users don't have permission to pass it. Ensure that the role grants
     * least privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses
     * the role that was previously associated with the stack. If no role is available,
     * AWS CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes when executing the change set. AWS
     * CloudFormation uses the role's credentials to make calls on your behalf. AWS
     * CloudFormation uses this role for all future operations on the stack. As long as
     * users have permission to operate on the stack, AWS CloudFormation uses this role
     * even if the users don't have permission to pass it. Ensure that the role grants
     * least privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses
     * the role that was previously associated with the stack. If no role is available,
     * AWS CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes when executing the change set. AWS
     * CloudFormation uses the role's credentials to make calls on your behalf. AWS
     * CloudFormation uses this role for all future operations on the stack. As long as
     * users have permission to operate on the stack, AWS CloudFormation uses this role
     * even if the users don't have permission to pass it. Ensure that the role grants
     * least privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses
     * the role that was previously associated with the stack. If no role is available,
     * AWS CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes when executing the change set. AWS
     * CloudFormation uses the role's credentials to make calls on your behalf. AWS
     * CloudFormation uses this role for all future operations on the stack. As long as
     * users have permission to operate on the stack, AWS CloudFormation uses this role
     * even if the users don't have permission to pass it. Ensure that the role grants
     * least privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses
     * the role that was previously associated with the stack. If no role is available,
     * AWS CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateChangeSetRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes when executing the change set. AWS
     * CloudFormation uses the role's credentials to make calls on your behalf. AWS
     * CloudFormation uses this role for all future operations on the stack. As long as
     * users have permission to operate on the stack, AWS CloudFormation uses this role
     * even if the users don't have permission to pass it. Ensure that the role grants
     * least privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses
     * the role that was previously associated with the stack. If no role is available,
     * AWS CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateChangeSetRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that AWS CloudFormation assumes when executing the change set. AWS
     * CloudFormation uses the role's credentials to make calls on your behalf. AWS
     * CloudFormation uses this role for all future operations on the stack. As long as
     * users have permission to operate on the stack, AWS CloudFormation uses this role
     * even if the users don't have permission to pass it. Ensure that the role grants
     * least privilege.</p> <p>If you don't specify a value, AWS CloudFormation uses
     * the role that was previously associated with the stack. If no role is available,
     * AWS CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateChangeSetRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that AWS CloudFormation associates with the stack. To remove
     * all associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to resources in the stack. You can specify a maximum of 10
     * tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to resources in the stack. You can specify a maximum of 10
     * tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to resources in the stack. You can specify a maximum of 10
     * tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to resources in the stack. You can specify a maximum of 10
     * tags.</p>
     */
    inline CreateChangeSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to resources in the stack. You can specify a maximum of 10
     * tags.</p>
     */
    inline CreateChangeSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to resources in the stack. You can specify a maximum of 10
     * tags.</p>
     */
    inline CreateChangeSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs to associate with this stack. AWS CloudFormation also
     * propagates these tags to resources in the stack. You can specify a maximum of 10
     * tags.</p>
     */
    inline CreateChangeSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters and hyphens. It must start
     * with an alphabetic character and cannot exceed 128 characters.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters and hyphens. It must start
     * with an alphabetic character and cannot exceed 128 characters.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters and hyphens. It must start
     * with an alphabetic character and cannot exceed 128 characters.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters and hyphens. It must start
     * with an alphabetic character and cannot exceed 128 characters.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters and hyphens. It must start
     * with an alphabetic character and cannot exceed 128 characters.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters and hyphens. It must start
     * with an alphabetic character and cannot exceed 128 characters.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters and hyphens. It must start
     * with an alphabetic character and cannot exceed 128 characters.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p>
     */
    inline CreateChangeSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p>
     */
    inline CreateChangeSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p>
     */
    inline CreateChangeSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline CreateChangeSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline CreateChangeSetRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline CreateChangeSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The type of change set operation.</p> <p>Valid values are <code>CREATE</code>
     * and <code>UPDATE</code>. The default value is <code>UPDATE</code>.</p> <ul> <li>
     * <p> <code>CREATE</code> - Specify to use the change set to create a new stack.
     * While AWS CloudFormation creates the stack, the stack has the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">
     * <code>REVIEW_IN_PROGRESS</code> </a> status and an expected
     * <code>StackId</code>, but no template or resources. Except for its
     * <code>StackId</code>, the stack is completely empty until you execute the change
     * set. You can apply multiple change sets to a stack.</p> </li> <li> <p>
     * <code>UPDATE</code> - Specify to create a change set for an existing stack.</p>
     * </li> </ul>
     */
    inline const ChangeSetType& GetChangeSetType() const{ return m_changeSetType; }

    /**
     * <p>The type of change set operation.</p> <p>Valid values are <code>CREATE</code>
     * and <code>UPDATE</code>. The default value is <code>UPDATE</code>.</p> <ul> <li>
     * <p> <code>CREATE</code> - Specify to use the change set to create a new stack.
     * While AWS CloudFormation creates the stack, the stack has the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">
     * <code>REVIEW_IN_PROGRESS</code> </a> status and an expected
     * <code>StackId</code>, but no template or resources. Except for its
     * <code>StackId</code>, the stack is completely empty until you execute the change
     * set. You can apply multiple change sets to a stack.</p> </li> <li> <p>
     * <code>UPDATE</code> - Specify to create a change set for an existing stack.</p>
     * </li> </ul>
     */
    inline void SetChangeSetType(const ChangeSetType& value) { m_changeSetTypeHasBeenSet = true; m_changeSetType = value; }

    /**
     * <p>The type of change set operation.</p> <p>Valid values are <code>CREATE</code>
     * and <code>UPDATE</code>. The default value is <code>UPDATE</code>.</p> <ul> <li>
     * <p> <code>CREATE</code> - Specify to use the change set to create a new stack.
     * While AWS CloudFormation creates the stack, the stack has the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">
     * <code>REVIEW_IN_PROGRESS</code> </a> status and an expected
     * <code>StackId</code>, but no template or resources. Except for its
     * <code>StackId</code>, the stack is completely empty until you execute the change
     * set. You can apply multiple change sets to a stack.</p> </li> <li> <p>
     * <code>UPDATE</code> - Specify to create a change set for an existing stack.</p>
     * </li> </ul>
     */
    inline void SetChangeSetType(ChangeSetType&& value) { m_changeSetTypeHasBeenSet = true; m_changeSetType = value; }

    /**
     * <p>The type of change set operation.</p> <p>Valid values are <code>CREATE</code>
     * and <code>UPDATE</code>. The default value is <code>UPDATE</code>.</p> <ul> <li>
     * <p> <code>CREATE</code> - Specify to use the change set to create a new stack.
     * While AWS CloudFormation creates the stack, the stack has the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">
     * <code>REVIEW_IN_PROGRESS</code> </a> status and an expected
     * <code>StackId</code>, but no template or resources. Except for its
     * <code>StackId</code>, the stack is completely empty until you execute the change
     * set. You can apply multiple change sets to a stack.</p> </li> <li> <p>
     * <code>UPDATE</code> - Specify to create a change set for an existing stack.</p>
     * </li> </ul>
     */
    inline CreateChangeSetRequest& WithChangeSetType(const ChangeSetType& value) { SetChangeSetType(value); return *this;}

    /**
     * <p>The type of change set operation.</p> <p>Valid values are <code>CREATE</code>
     * and <code>UPDATE</code>. The default value is <code>UPDATE</code>.</p> <ul> <li>
     * <p> <code>CREATE</code> - Specify to use the change set to create a new stack.
     * While AWS CloudFormation creates the stack, the stack has the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">
     * <code>REVIEW_IN_PROGRESS</code> </a> status and an expected
     * <code>StackId</code>, but no template or resources. Except for its
     * <code>StackId</code>, the stack is completely empty until you execute the change
     * set. You can apply multiple change sets to a stack.</p> </li> <li> <p>
     * <code>UPDATE</code> - Specify to create a change set for an existing stack.</p>
     * </li> </ul>
     */
    inline CreateChangeSetRequest& WithChangeSetType(ChangeSetType&& value) { SetChangeSetType(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;
    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet;
    bool m_usePreviousTemplate;
    bool m_usePreviousTemplateHasBeenSet;
    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet;
    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    ChangeSetType m_changeSetType;
    bool m_changeSetTypeHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

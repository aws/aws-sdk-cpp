/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API CreateStackSetRequest : public CloudFormationRequest
  {
  public:
    CreateStackSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStackSet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline CreateStackSetRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline CreateStackSetRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name to associate with the stack set. The name must be unique in the
     * region where you create your stack set.</p> <note> <p>A stack name can contain
     * only alphanumeric characters (case-sensitive) and hyphens. It must start with an
     * alphabetic character and can't be longer than 128 characters.</p> </note>
     */
    inline CreateStackSetRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline CreateStackSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline CreateStackSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stack set. You can use the description to identify the
     * stack set's purpose or other important information.</p>
     */
    inline CreateStackSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline CreateStackSetRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline CreateStackSetRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline CreateStackSetRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline CreateStackSetRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline CreateStackSetRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that's located in an Amazon S3
     * bucket. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify either the TemplateBody or the TemplateURL parameter, but not both.</p>
     */
    inline CreateStackSetRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}


    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline CreateStackSetRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline CreateStackSetRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline CreateStackSetRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The input parameters for the stack set template. </p>
     */
    inline CreateStackSetRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline CreateStackSetRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline CreateStackSetRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline CreateStackSetRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>In some cases, you must explicity acknowledge that your stack set template
     * contains certain capabilities in order for AWS CloudFormation to create the
     * stack set and related stack instances.</p> <ul> <li> <p>
     * <code>CAPABILITY_IAM</code> and <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some
     * stack templates might include resources that can affect permissions in your AWS
     * account; for example, by creating new AWS Identity and Access Management (IAM)
     * users. For those stack sets, you must explicitly acknowledge this by specifying
     * one of these capabilities.</p> <p>The following IAM resources require you to
     * specify either the <code>CAPABILITY_IAM</code> or
     * <code>CAPABILITY_NAMED_IAM</code> capability.</p> <ul> <li> <p>If you have IAM
     * resources, you can specify either capability. </p> </li> <li> <p>If you have IAM
     * resources with custom names, you <i>must</i> specify
     * <code>CAPABILITY_NAMED_IAM</code>. </p> </li> <li> <p>If you don't specify
     * either of these capabilities, AWS CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we recommend that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">
     * AWS::IAM::InstanceProfile</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">
     * AWS::IAM::UserToGroupAddition</a> </p> </li> </ul> <p>For more information, see
     * <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates</a>.</p> </li> <li> <p>
     * <code>CAPABILITY_AUTO_EXPAND</code> </p> <p>Some templates contain macros. If
     * your stack template contains one or more macros, and you choose to create a
     * stack directly from the processed template, without first reviewing the
     * resulting changes in a change set, you must acknowledge this capability. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * AWS CloudFormation Macros to Perform Custom Processing on Templates</a>.</p>
     * <note> <p>Stack sets do not currently support macros in stack templates. (This
     * includes the <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/create-reusable-transform-function-snippets-and-add-to-your-template-with-aws-include-transform.html">AWS::Include</a>
     * and <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/transform-aws-serverless.html">AWS::Serverless</a>
     * transforms, which are macros hosted by AWS CloudFormation.) Even if you specify
     * this capability, if you include a macro in your template the stack set operation
     * will fail.</p> </note> </li> </ul>
     */
    inline CreateStackSetRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline CreateStackSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline CreateStackSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline CreateStackSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. A maximum number of 50 tags can be
     * specified.</p> <p>If you specify tags as part of a <code>CreateStackSet</code>
     * action, AWS CloudFormation checks to see if you have the required IAM permission
     * to tag resources. If you don't, the entire <code>CreateStackSet</code> action
     * fails with an <code>access denied</code> error, and the stack set is not
     * created.</p>
     */
    inline CreateStackSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const{ return m_administrationRoleARN; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(const Aws::String& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(Aws::String&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(const char* value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline CreateStackSetRequest& WithAdministrationRoleARN(const Aws::String& value) { SetAdministrationRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline CreateStackSetRequest& WithAdministrationRoleARN(Aws::String&& value) { SetAdministrationRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to create this stack
     * set. </p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline CreateStackSetRequest& WithAdministrationRoleARN(const char* value) { SetAdministrationRoleARN(value); return *this;}


    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline const Aws::String& GetExecutionRoleName() const{ return m_executionRoleName; }

    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }

    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline void SetExecutionRoleName(const Aws::String& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = value; }

    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline void SetExecutionRoleName(Aws::String&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::move(value); }

    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline void SetExecutionRoleName(const char* value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName.assign(value); }

    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline CreateStackSetRequest& WithExecutionRoleName(const Aws::String& value) { SetExecutionRoleName(value); return *this;}

    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline CreateStackSetRequest& WithExecutionRoleName(Aws::String&& value) { SetExecutionRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM execution role to use to create the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p>
     */
    inline CreateStackSetRequest& WithExecutionRoleName(const char* value) { SetExecutionRoleName(value); return *this;}


    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline CreateStackSetRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline CreateStackSetRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>CreateStackSet</code> request. Specify
     * this token if you plan to retry requests so that AWS CloudFormation knows that
     * you're not attempting to create another stack set with the same name. You might
     * retry <code>CreateStackSet</code> requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, the SDK
     * generates one automatically. </p>
     */
    inline CreateStackSetRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

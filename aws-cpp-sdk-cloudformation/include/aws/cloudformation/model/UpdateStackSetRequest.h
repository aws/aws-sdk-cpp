﻿/*
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
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
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
  class AWS_CLOUDFORMATION_API UpdateStackSetRequest : public CloudFormationRequest
  {
  public:
    UpdateStackSetRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStackSet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique ID of the stack set that you want to update.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set that you want to update.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set that you want to update.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to update.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to update.</p>
     */
    inline UpdateStackSetRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to update.</p>
     */
    inline UpdateStackSetRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to update.</p>
     */
    inline UpdateStackSetRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline UpdateStackSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline UpdateStackSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of updates that you are making.</p>
     */
    inline UpdateStackSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline UpdateStackSetRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline UpdateStackSetRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The structure that contains the template body, with a minimum length of 1
     * byte and a maximum length of 51,200 bytes. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>—or set <code>UsePreviousTemplate</code> to true.</p>
     */
    inline UpdateStackSetRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that is located in an Amazon S3
     * bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>��or set <code>UsePreviousTemplate</code> to true. </p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that is located in an Amazon S3
     * bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>��or set <code>UsePreviousTemplate</code> to true. </p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that is located in an Amazon S3
     * bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>��or set <code>UsePreviousTemplate</code> to true. </p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that is located in an Amazon S3
     * bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>��or set <code>UsePreviousTemplate</code> to true. </p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that is located in an Amazon S3
     * bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>��or set <code>UsePreviousTemplate</code> to true. </p>
     */
    inline UpdateStackSetRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that is located in an Amazon S3
     * bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>��or set <code>UsePreviousTemplate</code> to true. </p>
     */
    inline UpdateStackSetRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}

    /**
     * <p>The location of the file that contains the template body. The URL must point
     * to a template (maximum size: 460,800 bytes) that is located in an Amazon S3
     * bucket. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>TemplateBody</code> or
     * <code>TemplateURL</code>��or set <code>UsePreviousTemplate</code> to true. </p>
     */
    inline UpdateStackSetRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}


    /**
     * <p>Use the existing template that's associated with the stack set that you're
     * updating.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>TemplateBody</code> or <code>TemplateURL</code>—or set
     * <code>UsePreviousTemplate</code> to true. </p>
     */
    inline bool GetUsePreviousTemplate() const{ return m_usePreviousTemplate; }

    /**
     * <p>Use the existing template that's associated with the stack set that you're
     * updating.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>TemplateBody</code> or <code>TemplateURL</code>—or set
     * <code>UsePreviousTemplate</code> to true. </p>
     */
    inline void SetUsePreviousTemplate(bool value) { m_usePreviousTemplateHasBeenSet = true; m_usePreviousTemplate = value; }

    /**
     * <p>Use the existing template that's associated with the stack set that you're
     * updating.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>TemplateBody</code> or <code>TemplateURL</code>—or set
     * <code>UsePreviousTemplate</code> to true. </p>
     */
    inline UpdateStackSetRequest& WithUsePreviousTemplate(bool value) { SetUsePreviousTemplate(value); return *this;}


    /**
     * <p>A list of input parameters for the stack set template. </p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of input parameters for the stack set template. </p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of input parameters for the stack set template. </p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A list of input parameters for the stack set template. </p>
     */
    inline UpdateStackSetRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of input parameters for the stack set template. </p>
     */
    inline UpdateStackSetRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of input parameters for the stack set template. </p>
     */
    inline UpdateStackSetRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of input parameters for the stack set template. </p>
     */
    inline UpdateStackSetRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stack sets. Some stack set templates might include resources that can
     * affect permissions in your AWS account—for example, by creating new AWS Identity
     * and Access Management (IAM) users. For those stack sets, you must explicitly
     * acknowledge their capabilities by specifying this parameter.</p> <p>The only
     * valid values are CAPABILITY_IAM and CAPABILITY_NAMED_IAM. The following
     * resources require you to specify this parameter: </p> <ul> <li>
     * <p>AWS::IAM::AccessKey</p> </li> <li> <p>AWS::IAM::Group</p> </li> <li>
     * <p>AWS::IAM::InstanceProfile</p> </li> <li> <p>AWS::IAM::Policy</p> </li> <li>
     * <p>AWS::IAM::Role</p> </li> <li> <p>AWS::IAM::User</p> </li> <li>
     * <p>AWS::IAM::UserToGroupAddition</p> </li> </ul> <p>If your stack template
     * contains these resources, we recommend that you review all permissions that are
     * associated with them and edit their permissions if necessary.</p> <p>If you have
     * IAM resources, you can specify either capability. If you have IAM resources with
     * custom names, you must specify CAPABILITY_NAMED_IAM. If you don't specify this
     * parameter, this action returns an <code>InsufficientCapabilities</code>
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stack sets. Some stack set templates might include resources that can
     * affect permissions in your AWS account—for example, by creating new AWS Identity
     * and Access Management (IAM) users. For those stack sets, you must explicitly
     * acknowledge their capabilities by specifying this parameter.</p> <p>The only
     * valid values are CAPABILITY_IAM and CAPABILITY_NAMED_IAM. The following
     * resources require you to specify this parameter: </p> <ul> <li>
     * <p>AWS::IAM::AccessKey</p> </li> <li> <p>AWS::IAM::Group</p> </li> <li>
     * <p>AWS::IAM::InstanceProfile</p> </li> <li> <p>AWS::IAM::Policy</p> </li> <li>
     * <p>AWS::IAM::Role</p> </li> <li> <p>AWS::IAM::User</p> </li> <li>
     * <p>AWS::IAM::UserToGroupAddition</p> </li> </ul> <p>If your stack template
     * contains these resources, we recommend that you review all permissions that are
     * associated with them and edit their permissions if necessary.</p> <p>If you have
     * IAM resources, you can specify either capability. If you have IAM resources with
     * custom names, you must specify CAPABILITY_NAMED_IAM. If you don't specify this
     * parameter, this action returns an <code>InsufficientCapabilities</code>
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stack sets. Some stack set templates might include resources that can
     * affect permissions in your AWS account—for example, by creating new AWS Identity
     * and Access Management (IAM) users. For those stack sets, you must explicitly
     * acknowledge their capabilities by specifying this parameter.</p> <p>The only
     * valid values are CAPABILITY_IAM and CAPABILITY_NAMED_IAM. The following
     * resources require you to specify this parameter: </p> <ul> <li>
     * <p>AWS::IAM::AccessKey</p> </li> <li> <p>AWS::IAM::Group</p> </li> <li>
     * <p>AWS::IAM::InstanceProfile</p> </li> <li> <p>AWS::IAM::Policy</p> </li> <li>
     * <p>AWS::IAM::Role</p> </li> <li> <p>AWS::IAM::User</p> </li> <li>
     * <p>AWS::IAM::UserToGroupAddition</p> </li> </ul> <p>If your stack template
     * contains these resources, we recommend that you review all permissions that are
     * associated with them and edit their permissions if necessary.</p> <p>If you have
     * IAM resources, you can specify either capability. If you have IAM resources with
     * custom names, you must specify CAPABILITY_NAMED_IAM. If you don't specify this
     * parameter, this action returns an <code>InsufficientCapabilities</code>
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stack sets. Some stack set templates might include resources that can
     * affect permissions in your AWS account—for example, by creating new AWS Identity
     * and Access Management (IAM) users. For those stack sets, you must explicitly
     * acknowledge their capabilities by specifying this parameter.</p> <p>The only
     * valid values are CAPABILITY_IAM and CAPABILITY_NAMED_IAM. The following
     * resources require you to specify this parameter: </p> <ul> <li>
     * <p>AWS::IAM::AccessKey</p> </li> <li> <p>AWS::IAM::Group</p> </li> <li>
     * <p>AWS::IAM::InstanceProfile</p> </li> <li> <p>AWS::IAM::Policy</p> </li> <li>
     * <p>AWS::IAM::Role</p> </li> <li> <p>AWS::IAM::User</p> </li> <li>
     * <p>AWS::IAM::UserToGroupAddition</p> </li> </ul> <p>If your stack template
     * contains these resources, we recommend that you review all permissions that are
     * associated with them and edit their permissions if necessary.</p> <p>If you have
     * IAM resources, you can specify either capability. If you have IAM resources with
     * custom names, you must specify CAPABILITY_NAMED_IAM. If you don't specify this
     * parameter, this action returns an <code>InsufficientCapabilities</code>
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline UpdateStackSetRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stack sets. Some stack set templates might include resources that can
     * affect permissions in your AWS account—for example, by creating new AWS Identity
     * and Access Management (IAM) users. For those stack sets, you must explicitly
     * acknowledge their capabilities by specifying this parameter.</p> <p>The only
     * valid values are CAPABILITY_IAM and CAPABILITY_NAMED_IAM. The following
     * resources require you to specify this parameter: </p> <ul> <li>
     * <p>AWS::IAM::AccessKey</p> </li> <li> <p>AWS::IAM::Group</p> </li> <li>
     * <p>AWS::IAM::InstanceProfile</p> </li> <li> <p>AWS::IAM::Policy</p> </li> <li>
     * <p>AWS::IAM::Role</p> </li> <li> <p>AWS::IAM::User</p> </li> <li>
     * <p>AWS::IAM::UserToGroupAddition</p> </li> </ul> <p>If your stack template
     * contains these resources, we recommend that you review all permissions that are
     * associated with them and edit their permissions if necessary.</p> <p>If you have
     * IAM resources, you can specify either capability. If you have IAM resources with
     * custom names, you must specify CAPABILITY_NAMED_IAM. If you don't specify this
     * parameter, this action returns an <code>InsufficientCapabilities</code>
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline UpdateStackSetRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stack sets. Some stack set templates might include resources that can
     * affect permissions in your AWS account—for example, by creating new AWS Identity
     * and Access Management (IAM) users. For those stack sets, you must explicitly
     * acknowledge their capabilities by specifying this parameter.</p> <p>The only
     * valid values are CAPABILITY_IAM and CAPABILITY_NAMED_IAM. The following
     * resources require you to specify this parameter: </p> <ul> <li>
     * <p>AWS::IAM::AccessKey</p> </li> <li> <p>AWS::IAM::Group</p> </li> <li>
     * <p>AWS::IAM::InstanceProfile</p> </li> <li> <p>AWS::IAM::Policy</p> </li> <li>
     * <p>AWS::IAM::Role</p> </li> <li> <p>AWS::IAM::User</p> </li> <li>
     * <p>AWS::IAM::UserToGroupAddition</p> </li> </ul> <p>If your stack template
     * contains these resources, we recommend that you review all permissions that are
     * associated with them and edit their permissions if necessary.</p> <p>If you have
     * IAM resources, you can specify either capability. If you have IAM resources with
     * custom names, you must specify CAPABILITY_NAMED_IAM. If you don't specify this
     * parameter, this action returns an <code>InsufficientCapabilities</code>
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline UpdateStackSetRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>A list of values that you must specify before AWS CloudFormation can create
     * certain stack sets. Some stack set templates might include resources that can
     * affect permissions in your AWS account—for example, by creating new AWS Identity
     * and Access Management (IAM) users. For those stack sets, you must explicitly
     * acknowledge their capabilities by specifying this parameter.</p> <p>The only
     * valid values are CAPABILITY_IAM and CAPABILITY_NAMED_IAM. The following
     * resources require you to specify this parameter: </p> <ul> <li>
     * <p>AWS::IAM::AccessKey</p> </li> <li> <p>AWS::IAM::Group</p> </li> <li>
     * <p>AWS::IAM::InstanceProfile</p> </li> <li> <p>AWS::IAM::Policy</p> </li> <li>
     * <p>AWS::IAM::Role</p> </li> <li> <p>AWS::IAM::User</p> </li> <li>
     * <p>AWS::IAM::UserToGroupAddition</p> </li> </ul> <p>If your stack template
     * contains these resources, we recommend that you review all permissions that are
     * associated with them and edit their permissions if necessary.</p> <p>If you have
     * IAM resources, you can specify either capability. If you have IAM resources with
     * custom names, you must specify CAPABILITY_NAMED_IAM. If you don't specify this
     * parameter, this action returns an <code>InsufficientCapabilities</code>
     * error.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline UpdateStackSetRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this stack set. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, AWS CloudFormation doesn't modify the
     * stack's tags. </p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this stack set, even tags you've specifed before (for example, when creating the
     * stack set or during a previous update of the stack set.). Any tags that you
     * don't include in the updated list of tags are removed from the stack set, and
     * therefore from the stacks and resources as well. </p> </li> <li> <p>If you
     * specify an empty value, AWS CloudFormation removes all currently associated
     * tags.</p> </li> </ul> <p>If you specify new tags as part of an
     * <code>UpdateStackSet</code> action, AWS CloudFormation checks to see if you have
     * the required IAM permission to tag resources. If you omit tags that are
     * currently associated with the stack set from the list of tags you specify, AWS
     * CloudFormation assumes that you want to remove those tags from the stack set,
     * and checks to see if you have permission to untag resources. If you don't have
     * the necessary permission(s), the entire <code>UpdateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not updated.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this stack set. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, AWS CloudFormation doesn't modify the
     * stack's tags. </p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this stack set, even tags you've specifed before (for example, when creating the
     * stack set or during a previous update of the stack set.). Any tags that you
     * don't include in the updated list of tags are removed from the stack set, and
     * therefore from the stacks and resources as well. </p> </li> <li> <p>If you
     * specify an empty value, AWS CloudFormation removes all currently associated
     * tags.</p> </li> </ul> <p>If you specify new tags as part of an
     * <code>UpdateStackSet</code> action, AWS CloudFormation checks to see if you have
     * the required IAM permission to tag resources. If you omit tags that are
     * currently associated with the stack set from the list of tags you specify, AWS
     * CloudFormation assumes that you want to remove those tags from the stack set,
     * and checks to see if you have permission to untag resources. If you don't have
     * the necessary permission(s), the entire <code>UpdateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not updated.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this stack set. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, AWS CloudFormation doesn't modify the
     * stack's tags. </p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this stack set, even tags you've specifed before (for example, when creating the
     * stack set or during a previous update of the stack set.). Any tags that you
     * don't include in the updated list of tags are removed from the stack set, and
     * therefore from the stacks and resources as well. </p> </li> <li> <p>If you
     * specify an empty value, AWS CloudFormation removes all currently associated
     * tags.</p> </li> </ul> <p>If you specify new tags as part of an
     * <code>UpdateStackSet</code> action, AWS CloudFormation checks to see if you have
     * the required IAM permission to tag resources. If you omit tags that are
     * currently associated with the stack set from the list of tags you specify, AWS
     * CloudFormation assumes that you want to remove those tags from the stack set,
     * and checks to see if you have permission to untag resources. If you don't have
     * the necessary permission(s), the entire <code>UpdateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not updated.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this stack set. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, AWS CloudFormation doesn't modify the
     * stack's tags. </p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this stack set, even tags you've specifed before (for example, when creating the
     * stack set or during a previous update of the stack set.). Any tags that you
     * don't include in the updated list of tags are removed from the stack set, and
     * therefore from the stacks and resources as well. </p> </li> <li> <p>If you
     * specify an empty value, AWS CloudFormation removes all currently associated
     * tags.</p> </li> </ul> <p>If you specify new tags as part of an
     * <code>UpdateStackSet</code> action, AWS CloudFormation checks to see if you have
     * the required IAM permission to tag resources. If you omit tags that are
     * currently associated with the stack set from the list of tags you specify, AWS
     * CloudFormation assumes that you want to remove those tags from the stack set,
     * and checks to see if you have permission to untag resources. If you don't have
     * the necessary permission(s), the entire <code>UpdateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not updated.</p>
     */
    inline UpdateStackSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this stack set. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, AWS CloudFormation doesn't modify the
     * stack's tags. </p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this stack set, even tags you've specifed before (for example, when creating the
     * stack set or during a previous update of the stack set.). Any tags that you
     * don't include in the updated list of tags are removed from the stack set, and
     * therefore from the stacks and resources as well. </p> </li> <li> <p>If you
     * specify an empty value, AWS CloudFormation removes all currently associated
     * tags.</p> </li> </ul> <p>If you specify new tags as part of an
     * <code>UpdateStackSet</code> action, AWS CloudFormation checks to see if you have
     * the required IAM permission to tag resources. If you omit tags that are
     * currently associated with the stack set from the list of tags you specify, AWS
     * CloudFormation assumes that you want to remove those tags from the stack set,
     * and checks to see if you have permission to untag resources. If you don't have
     * the necessary permission(s), the entire <code>UpdateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not updated.</p>
     */
    inline UpdateStackSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this stack set. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, AWS CloudFormation doesn't modify the
     * stack's tags. </p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this stack set, even tags you've specifed before (for example, when creating the
     * stack set or during a previous update of the stack set.). Any tags that you
     * don't include in the updated list of tags are removed from the stack set, and
     * therefore from the stacks and resources as well. </p> </li> <li> <p>If you
     * specify an empty value, AWS CloudFormation removes all currently associated
     * tags.</p> </li> </ul> <p>If you specify new tags as part of an
     * <code>UpdateStackSet</code> action, AWS CloudFormation checks to see if you have
     * the required IAM permission to tag resources. If you omit tags that are
     * currently associated with the stack set from the list of tags you specify, AWS
     * CloudFormation assumes that you want to remove those tags from the stack set,
     * and checks to see if you have permission to untag resources. If you don't have
     * the necessary permission(s), the entire <code>UpdateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not updated.</p>
     */
    inline UpdateStackSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pairs to associate with this stack set and the stacks created
     * from it. AWS CloudFormation also propagates these tags to supported resources
     * that are created in the stacks. You can specify a maximum number of 50 tags.</p>
     * <p>If you specify tags for this parameter, those tags replace any list of tags
     * that are currently associated with this stack set. This means:</p> <ul> <li>
     * <p>If you don't specify this parameter, AWS CloudFormation doesn't modify the
     * stack's tags. </p> </li> <li> <p>If you specify <i>any</i> tags using this
     * parameter, you must specify <i>all</i> the tags that you want associated with
     * this stack set, even tags you've specifed before (for example, when creating the
     * stack set or during a previous update of the stack set.). Any tags that you
     * don't include in the updated list of tags are removed from the stack set, and
     * therefore from the stacks and resources as well. </p> </li> <li> <p>If you
     * specify an empty value, AWS CloudFormation removes all currently associated
     * tags.</p> </li> </ul> <p>If you specify new tags as part of an
     * <code>UpdateStackSet</code> action, AWS CloudFormation checks to see if you have
     * the required IAM permission to tag resources. If you omit tags that are
     * currently associated with the stack set from the list of tags you specify, AWS
     * CloudFormation assumes that you want to remove those tags from the stack set,
     * and checks to see if you have permission to untag resources. If you don't have
     * the necessary permission(s), the entire <code>UpdateStackSet</code> action fails
     * with an <code>access denied</code> error, and the stack set is not updated.</p>
     */
    inline UpdateStackSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const{ return m_operationPreferences; }

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(const StackSetOperationPreferences& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = value; }

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline void SetOperationPreferences(StackSetOperationPreferences&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::move(value); }

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline UpdateStackSetRequest& WithOperationPreferences(const StackSetOperationPreferences& value) { SetOperationPreferences(value); return *this;}

    /**
     * <p>Preferences for how AWS CloudFormation performs this stack set operation.</p>
     */
    inline UpdateStackSetRequest& WithOperationPreferences(StackSetOperationPreferences&& value) { SetOperationPreferences(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to update this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>AWS CloudFormation User
     * Guide</i>.</p> <p> If you specify a customized administrator role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized administrator role, AWS CloudFormation performs the update using the
     * role previously associated with the stack set, so long as you have permissions
     * to perform operations on the stack set.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const{ return m_administrationRoleARN; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to update this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>AWS CloudFormation User
     * Guide</i>.</p> <p> If you specify a customized administrator role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized administrator role, AWS CloudFormation performs the update using the
     * role previously associated with the stack set, so long as you have permissions
     * to perform operations on the stack set.</p>
     */
    inline void SetAdministrationRoleARN(const Aws::String& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to update this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>AWS CloudFormation User
     * Guide</i>.</p> <p> If you specify a customized administrator role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized administrator role, AWS CloudFormation performs the update using the
     * role previously associated with the stack set, so long as you have permissions
     * to perform operations on the stack set.</p>
     */
    inline void SetAdministrationRoleARN(Aws::String&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to update this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>AWS CloudFormation User
     * Guide</i>.</p> <p> If you specify a customized administrator role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized administrator role, AWS CloudFormation performs the update using the
     * role previously associated with the stack set, so long as you have permissions
     * to perform operations on the stack set.</p>
     */
    inline void SetAdministrationRoleARN(const char* value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to update this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>AWS CloudFormation User
     * Guide</i>.</p> <p> If you specify a customized administrator role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized administrator role, AWS CloudFormation performs the update using the
     * role previously associated with the stack set, so long as you have permissions
     * to perform operations on the stack set.</p>
     */
    inline UpdateStackSetRequest& WithAdministrationRoleARN(const Aws::String& value) { SetAdministrationRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to update this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>AWS CloudFormation User
     * Guide</i>.</p> <p> If you specify a customized administrator role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized administrator role, AWS CloudFormation performs the update using the
     * role previously associated with the stack set, so long as you have permissions
     * to perform operations on the stack set.</p>
     */
    inline UpdateStackSetRequest& WithAdministrationRoleARN(Aws::String&& value) { SetAdministrationRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role to use to update this stack
     * set.</p> <p>Specify an IAM role only if you are using customized administrator
     * roles to control which users or groups can manage specific stack sets within the
     * same administrator account. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Define
     * Permissions for Multiple Administrators</a> in the <i>AWS CloudFormation User
     * Guide</i>.</p> <p> If you specify a customized administrator role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized administrator role, AWS CloudFormation performs the update using the
     * role previously associated with the stack set, so long as you have permissions
     * to perform operations on the stack set.</p>
     */
    inline UpdateStackSetRequest& WithAdministrationRoleARN(const char* value) { SetAdministrationRoleARN(value); return *this;}


    /**
     * <p>The name of the IAM execution role to use to update the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p> <p> If you specify a customized execution role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, AWS CloudFormation performs the update using the role
     * previously associated with the stack set, so long as you have permissions to
     * perform operations on the stack set.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const{ return m_executionRoleName; }

    /**
     * <p>The name of the IAM execution role to use to update the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p> <p> If you specify a customized execution role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, AWS CloudFormation performs the update using the role
     * previously associated with the stack set, so long as you have permissions to
     * perform operations on the stack set.</p>
     */
    inline void SetExecutionRoleName(const Aws::String& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = value; }

    /**
     * <p>The name of the IAM execution role to use to update the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p> <p> If you specify a customized execution role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, AWS CloudFormation performs the update using the role
     * previously associated with the stack set, so long as you have permissions to
     * perform operations on the stack set.</p>
     */
    inline void SetExecutionRoleName(Aws::String&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::move(value); }

    /**
     * <p>The name of the IAM execution role to use to update the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p> <p> If you specify a customized execution role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, AWS CloudFormation performs the update using the role
     * previously associated with the stack set, so long as you have permissions to
     * perform operations on the stack set.</p>
     */
    inline void SetExecutionRoleName(const char* value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName.assign(value); }

    /**
     * <p>The name of the IAM execution role to use to update the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p> <p> If you specify a customized execution role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, AWS CloudFormation performs the update using the role
     * previously associated with the stack set, so long as you have permissions to
     * perform operations on the stack set.</p>
     */
    inline UpdateStackSetRequest& WithExecutionRoleName(const Aws::String& value) { SetExecutionRoleName(value); return *this;}

    /**
     * <p>The name of the IAM execution role to use to update the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p> <p> If you specify a customized execution role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, AWS CloudFormation performs the update using the role
     * previously associated with the stack set, so long as you have permissions to
     * perform operations on the stack set.</p>
     */
    inline UpdateStackSetRequest& WithExecutionRoleName(Aws::String&& value) { SetExecutionRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM execution role to use to update the stack set. If you do
     * not specify an execution role, AWS CloudFormation uses the
     * <code>AWSCloudFormationStackSetExecutionRole</code> role for the stack set
     * operation.</p> <p>Specify an IAM role only if you are using customized execution
     * roles to control which stack resources users and groups can include in their
     * stack sets. </p> <p> If you specify a customized execution role, AWS
     * CloudFormation uses that role to update the stack. If you do not specify a
     * customized execution role, AWS CloudFormation performs the update using the role
     * previously associated with the stack set, so long as you have permissions to
     * perform operations on the stack set.</p>
     */
    inline UpdateStackSetRequest& WithExecutionRoleName(const char* value) { SetExecutionRoleName(value); return *this;}


    /**
     * <p>The unique ID for this stack set operation. </p> <p>The operation ID also
     * functions as an idempotency token, to ensure that AWS CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, AWS
     * CloudFormation generates one automatically.</p> <p>Repeating this stack set
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique ID for this stack set operation. </p> <p>The operation ID also
     * functions as an idempotency token, to ensure that AWS CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, AWS
     * CloudFormation generates one automatically.</p> <p>Repeating this stack set
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The unique ID for this stack set operation. </p> <p>The operation ID also
     * functions as an idempotency token, to ensure that AWS CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, AWS
     * CloudFormation generates one automatically.</p> <p>Repeating this stack set
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The unique ID for this stack set operation. </p> <p>The operation ID also
     * functions as an idempotency token, to ensure that AWS CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, AWS
     * CloudFormation generates one automatically.</p> <p>Repeating this stack set
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The unique ID for this stack set operation. </p> <p>The operation ID also
     * functions as an idempotency token, to ensure that AWS CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, AWS
     * CloudFormation generates one automatically.</p> <p>Repeating this stack set
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline UpdateStackSetRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique ID for this stack set operation. </p> <p>The operation ID also
     * functions as an idempotency token, to ensure that AWS CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, AWS
     * CloudFormation generates one automatically.</p> <p>Repeating this stack set
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline UpdateStackSetRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for this stack set operation. </p> <p>The operation ID also
     * functions as an idempotency token, to ensure that AWS CloudFormation performs
     * the stack set operation only once, even if you retry the request multiple times.
     * You might retry stack set operation requests to ensure that AWS CloudFormation
     * successfully received them.</p> <p>If you don't specify an operation ID, AWS
     * CloudFormation generates one automatically.</p> <p>Repeating this stack set
     * operation with a new operation ID retries all stack instances whose status is
     * <code>OUTDATED</code>. </p>
     */
    inline UpdateStackSetRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

    /**
     * <p>The accounts in which to update associated stack instances. If you specify
     * accounts, you must also specify the regions in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }


    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>The regions in which to update associated stack instances. If you specify
     * regions, you must also specify accounts in which to update stack set
     * instances.</p> <p>To update <i>all</i> the stack instances associated with this
     * stack set, do not specify the <code>Accounts</code> or <code>Regions</code>
     * properties.</p> <p>If the stack set update includes changes to the template
     * (that is, if the <code>TemplateBody</code> or <code>TemplateURL</code>
     * properties are specified), or the <code>Parameters</code> property, AWS
     * CloudFormation marks all stack instances with a status of <code>OUTDATED</code>
     * prior to updating the stack instances in the specified accounts and regions. If
     * the stack set update does not include changes to the template or parameters, AWS
     * CloudFormation updates the stack instances in the specified accounts and
     * regions, while leaving all other stack instances with their existing stack
     * instance status. </p>
     */
    inline UpdateStackSetRequest& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

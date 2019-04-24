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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>A structure that contains information about a stack set. A stack set enables
   * you to provision stacks into AWS accounts and across regions by using a single
   * CloudFormation template. In the stack set, you specify the template to use, as
   * well as any parameters and capabilities that the template requires.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSet">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API StackSet
  {
  public:
    StackSet();
    StackSet(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackSet& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline StackSet& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline StackSet& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name that's associated with the stack set.</p>
     */
    inline StackSet& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>The ID of the stack set.</p>
     */
    inline const Aws::String& GetStackSetId() const{ return m_stackSetId; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const Aws::String& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = value; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(Aws::String&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::move(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const char* value) { m_stackSetIdHasBeenSet = true; m_stackSetId.assign(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSet& WithStackSetId(const Aws::String& value) { SetStackSetId(value); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSet& WithStackSetId(Aws::String&& value) { SetStackSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSet& WithStackSetId(const char* value) { SetStackSetId(value); return *this;}


    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSet& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the stack set.</p>
     */
    inline const StackSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline void SetStatus(const StackSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline void SetStatus(StackSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the stack set.</p>
     */
    inline StackSet& WithStatus(const StackSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the stack set.</p>
     */
    inline StackSet& WithStatus(StackSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline StackSet& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline StackSet& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The structure that contains the body of the template that was used to create
     * or update the stack set.</p>
     */
    inline StackSet& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline StackSet& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline StackSet& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline StackSet& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of input parameters for a stack set.</p>
     */
    inline StackSet& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline StackSet& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline StackSet& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline StackSet& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The capabilities that are allowed in the stack set. Some stack set templates
     * might include resources that can affect permissions in your AWS account—for
     * example, by creating new AWS Identity and Access Management (IAM) users. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
     * IAM Resources in AWS CloudFormation Templates.</a> </p>
     */
    inline StackSet& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline StackSet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline StackSet& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline StackSet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags that specify information about the stack set. A maximum number
     * of 50 tags can be specified.</p>
     */
    inline StackSet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline const Aws::String& GetStackSetARN() const{ return m_stackSetARN; }

    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline bool StackSetARNHasBeenSet() const { return m_stackSetARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline void SetStackSetARN(const Aws::String& value) { m_stackSetARNHasBeenSet = true; m_stackSetARN = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline void SetStackSetARN(Aws::String&& value) { m_stackSetARNHasBeenSet = true; m_stackSetARN = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline void SetStackSetARN(const char* value) { m_stackSetARNHasBeenSet = true; m_stackSetARN.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline StackSet& WithStackSetARN(const Aws::String& value) { SetStackSetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline StackSet& WithStackSetARN(Aws::String&& value) { SetStackSetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the stack set.</p>
     */
    inline StackSet& WithStackSetARN(const char* value) { SetStackSetARN(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const{ return m_administrationRoleARN; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(const Aws::String& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(Aws::String&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline void SetAdministrationRoleARN(const char* value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline StackSet& WithAdministrationRoleARN(const Aws::String& value) { SetAdministrationRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline StackSet& WithAdministrationRoleARN(Aws::String&& value) { SetAdministrationRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the IAM role used to create or update the
     * stack set.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific stack sets within the same administrator account. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs.html">Prerequisites:
     * Granting Permissions for Stack Set Operations</a> in the <i>AWS CloudFormation
     * User Guide</i>.</p>
     */
    inline StackSet& WithAdministrationRoleARN(const char* value) { SetAdministrationRoleARN(value); return *this;}


    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline const Aws::String& GetExecutionRoleName() const{ return m_executionRoleName; }

    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }

    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline void SetExecutionRoleName(const Aws::String& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = value; }

    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline void SetExecutionRoleName(Aws::String&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::move(value); }

    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline void SetExecutionRoleName(const char* value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName.assign(value); }

    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline StackSet& WithExecutionRoleName(const Aws::String& value) { SetExecutionRoleName(value); return *this;}

    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline StackSet& WithExecutionRoleName(Aws::String&& value) { SetExecutionRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM execution role used to create or update the stack set.
     * </p> <p>Use customized execution roles to control which stack resources users
     * and groups can include in their stack sets. </p>
     */
    inline StackSet& WithExecutionRoleName(const char* value) { SetExecutionRoleName(value); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    StackSetStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_stackSetARN;
    bool m_stackSetARNHasBeenSet;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

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
#include <aws/cloudformation/model/ChangeSetType.h>
#include <aws/cloudformation/model/OnStackFailure.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>
#include <aws/cloudformation/model/ResourceToImport.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>CreateChangeSet</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/CreateChangeSetInput">AWS
   * API Reference</a></p>
   */
  class CreateChangeSetRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API CreateChangeSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChangeSet"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline CreateChangeSetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline CreateChangeSetRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or the unique ID of the stack for which you are creating a change
     * set. CloudFormation generates the change set by comparing this stack's
     * information with the information that you submit, such as a modified template or
     * different parameter input values.</p>
     */
    inline CreateChangeSetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>A structure that contains the body of the revised template, with a minimum
     * length of 1 byte and a maximum length of 51,200 bytes. CloudFormation generates
     * the change set by comparing this template with the template of the stack that
     * you specified.</p> <p>Conditional: You must specify only
     * <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}

    /**
     * <p>The location of the file that contains the revised template. The URL must
     * point to a template (max size: 460,800 bytes) that's located in an Amazon S3
     * bucket or a Systems Manager document. CloudFormation generates the change set by
     * comparing this template with the stack that you specified.</p> <p>Conditional:
     * You must specify only <code>TemplateBody</code> or <code>TemplateURL</code>.</p>
     */
    inline CreateChangeSetRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}


    /**
     * <p>Whether to reuse the template that's associated with the stack to create the
     * change set.</p>
     */
    inline bool GetUsePreviousTemplate() const{ return m_usePreviousTemplate; }

    /**
     * <p>Whether to reuse the template that's associated with the stack to create the
     * change set.</p>
     */
    inline bool UsePreviousTemplateHasBeenSet() const { return m_usePreviousTemplateHasBeenSet; }

    /**
     * <p>Whether to reuse the template that's associated with the stack to create the
     * change set.</p>
     */
    inline void SetUsePreviousTemplate(bool value) { m_usePreviousTemplateHasBeenSet = true; m_usePreviousTemplate = value; }

    /**
     * <p>Whether to reuse the template that's associated with the stack to create the
     * change set.</p>
     */
    inline CreateChangeSetRequest& WithUsePreviousTemplate(bool value) { SetUsePreviousTemplate(value); return *this;}


    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline CreateChangeSetRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline CreateChangeSetRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline CreateChangeSetRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input parameters for
     * the change set. For more information, see the <a>Parameter</a> data type.</p>
     */
    inline CreateChangeSetRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline CreateChangeSetRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline CreateChangeSetRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline CreateChangeSetRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>In some cases, you must explicitly acknowledge that your stack template
     * contains certain capabilities in order for CloudFormation to create the
     * stack.</p> <ul> <li> <p> <code>CAPABILITY_IAM</code> and
     * <code>CAPABILITY_NAMED_IAM</code> </p> <p>Some stack templates might include
     * resources that can affect permissions in your Amazon Web Services account; for
     * example, by creating new Identity and Access Management (IAM) users. For those
     * stacks, you must explicitly acknowledge this by specifying one of these
     * capabilities.</p> <p>The following IAM resources require you to specify either
     * the <code>CAPABILITY_IAM</code> or <code>CAPABILITY_NAMED_IAM</code>
     * capability.</p> <ul> <li> <p>If you have IAM resources, you can specify either
     * capability.</p> </li> <li> <p>If you have IAM resources with custom names, you
     * <i>must</i> specify <code>CAPABILITY_NAMED_IAM</code>.</p> </li> <li> <p>If you
     * don't specify either of these capabilities, CloudFormation returns an
     * <code>InsufficientCapabilities</code> error.</p> </li> </ul> <p>If your stack
     * template contains these resources, we suggest that you review all permissions
     * associated with them and edit their permissions if necessary.</p> <ul> <li> <p>
     * <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-accesskey.html">
     * AWS::IAM::AccessKey</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-group.html">
     * AWS::IAM::Group</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-instanceprofile.html">AWS::IAM::InstanceProfile</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-policy.html">
     * AWS::IAM::Policy</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-resource-iam-role.html">
     * AWS::IAM::Role</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-user.html">
     * AWS::IAM::User</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-properties-iam-addusertogroup.html">AWS::IAM::UserToGroupAddition</a>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html#capabilities">Acknowledging
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
     * transforms, which are macros hosted by CloudFormation.</p>  <p>This
     * capacity doesn't apply to creating change sets, and specifying it when creating
     * change sets has no effect.</p> <p>If you want to create a stack from a stack
     * template that contains macros <i>and</i> nested stacks, you must create or
     * update the stack directly from the template using the <a>CreateStack</a> or
     * <a>UpdateStack</a> action, and specifying this capability.</p>  <p>For
     * more information about macros, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-macros.html">Using
     * CloudFormation macros to perform custom processing on templates</a>.</p> </li>
     * </ul>
     */
    inline CreateChangeSetRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline CreateChangeSetRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline CreateChangeSetRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline CreateChangeSetRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline CreateChangeSetRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The template resource types that you have permissions to work with if you
     * execute this change set, such as <code>AWS::EC2::Instance</code>,
     * <code>AWS::EC2::*</code>, or <code>Custom::MyCustomInstance</code>.</p> <p>If
     * the list of resource types doesn't include a resource type that you're updating,
     * the stack update fails. By default, CloudFormation grants permissions to all
     * resource types. Identity and Access Management (IAM) uses this parameter for
     * condition keys in IAM policies for CloudFormation. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-iam-template.html">Controlling
     * access with Identity and Access Management</a> in the CloudFormation User
     * Guide.</p>
     */
    inline CreateChangeSetRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateChangeSetRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateChangeSetRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that CloudFormation assumes when executing the change set. CloudFormation
     * uses the role's credentials to make calls on your behalf. CloudFormation uses
     * this role for all future operations on the stack. Provided that users have
     * permission to operate on the stack, CloudFormation uses this role even if the
     * users don't have permission to pass it. Ensure that the role grants least
     * permission.</p> <p>If you don't specify a value, CloudFormation uses the role
     * that was previously associated with the stack. If no role is available,
     * CloudFormation uses a temporary session that is generated from your user
     * credentials.</p>
     */
    inline CreateChangeSetRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const{ return m_rollbackConfiguration; }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline bool RollbackConfigurationHasBeenSet() const { return m_rollbackConfigurationHasBeenSet; }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline void SetRollbackConfiguration(const RollbackConfiguration& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = value; }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline void SetRollbackConfiguration(RollbackConfiguration&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::move(value); }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline CreateChangeSetRequest& WithRollbackConfiguration(const RollbackConfiguration& value) { SetRollbackConfiguration(value); return *this;}

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline CreateChangeSetRequest& WithRollbackConfiguration(RollbackConfiguration&& value) { SetRollbackConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline bool NotificationARNsHasBeenSet() const { return m_notificationARNsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Amazon Simple Notification Service
     * (Amazon SNS) topics that CloudFormation associates with the stack. To remove all
     * associated notification topics, specify an empty list.</p>
     */
    inline CreateChangeSetRequest& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }


    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline CreateChangeSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline CreateChangeSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline CreateChangeSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs to associate with this stack. CloudFormation also propagates
     * these tags to resources in the stack. You can specify a maximum of 50 tags.</p>
     */
    inline CreateChangeSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the change set. The name must be unique among all change sets
     * that are associated with the specified stack.</p> <p>A change set name can
     * contain only alphanumeric, case sensitive characters, and hyphens. It must start
     * with an alphabetical character and can't exceed 128 characters.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}


    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
     * successfully received them.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
     * successfully received them.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
     * successfully received them.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
     * successfully received them.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
     * successfully received them.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
     * successfully received them.</p>
     */
    inline CreateChangeSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
     * successfully received them.</p>
     */
    inline CreateChangeSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>CreateChangeSet</code> request. Specify
     * this token if you plan to retry requests so that CloudFormation knows that
     * you're not attempting to create another change set with the same name. You might
     * retry <code>CreateChangeSet</code> requests to ensure that CloudFormation
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
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

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
    inline CreateChangeSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description to help you identify this change set.</p>
     */
    inline CreateChangeSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of change set operation. To create a change set for a new stack,
     * specify <code>CREATE</code>. To create a change set for an existing stack,
     * specify <code>UPDATE</code>. To create a change set for an import operation,
     * specify <code>IMPORT</code>.</p> <p>If you create a change set for a new stack,
     * CloudFormation creates a stack with a unique stack ID, but no template or
     * resources. The stack will be in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">REVIEW_IN_PROGRESS</a>
     * state until you execute the change set.</p> <p>By default, CloudFormation
     * specifies <code>UPDATE</code>. You can't use the <code>UPDATE</code> type to
     * create a change set for a new stack or the <code>CREATE</code> type to create a
     * change set for an existing stack.</p>
     */
    inline const ChangeSetType& GetChangeSetType() const{ return m_changeSetType; }

    /**
     * <p>The type of change set operation. To create a change set for a new stack,
     * specify <code>CREATE</code>. To create a change set for an existing stack,
     * specify <code>UPDATE</code>. To create a change set for an import operation,
     * specify <code>IMPORT</code>.</p> <p>If you create a change set for a new stack,
     * CloudFormation creates a stack with a unique stack ID, but no template or
     * resources. The stack will be in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">REVIEW_IN_PROGRESS</a>
     * state until you execute the change set.</p> <p>By default, CloudFormation
     * specifies <code>UPDATE</code>. You can't use the <code>UPDATE</code> type to
     * create a change set for a new stack or the <code>CREATE</code> type to create a
     * change set for an existing stack.</p>
     */
    inline bool ChangeSetTypeHasBeenSet() const { return m_changeSetTypeHasBeenSet; }

    /**
     * <p>The type of change set operation. To create a change set for a new stack,
     * specify <code>CREATE</code>. To create a change set for an existing stack,
     * specify <code>UPDATE</code>. To create a change set for an import operation,
     * specify <code>IMPORT</code>.</p> <p>If you create a change set for a new stack,
     * CloudFormation creates a stack with a unique stack ID, but no template or
     * resources. The stack will be in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">REVIEW_IN_PROGRESS</a>
     * state until you execute the change set.</p> <p>By default, CloudFormation
     * specifies <code>UPDATE</code>. You can't use the <code>UPDATE</code> type to
     * create a change set for a new stack or the <code>CREATE</code> type to create a
     * change set for an existing stack.</p>
     */
    inline void SetChangeSetType(const ChangeSetType& value) { m_changeSetTypeHasBeenSet = true; m_changeSetType = value; }

    /**
     * <p>The type of change set operation. To create a change set for a new stack,
     * specify <code>CREATE</code>. To create a change set for an existing stack,
     * specify <code>UPDATE</code>. To create a change set for an import operation,
     * specify <code>IMPORT</code>.</p> <p>If you create a change set for a new stack,
     * CloudFormation creates a stack with a unique stack ID, but no template or
     * resources. The stack will be in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">REVIEW_IN_PROGRESS</a>
     * state until you execute the change set.</p> <p>By default, CloudFormation
     * specifies <code>UPDATE</code>. You can't use the <code>UPDATE</code> type to
     * create a change set for a new stack or the <code>CREATE</code> type to create a
     * change set for an existing stack.</p>
     */
    inline void SetChangeSetType(ChangeSetType&& value) { m_changeSetTypeHasBeenSet = true; m_changeSetType = std::move(value); }

    /**
     * <p>The type of change set operation. To create a change set for a new stack,
     * specify <code>CREATE</code>. To create a change set for an existing stack,
     * specify <code>UPDATE</code>. To create a change set for an import operation,
     * specify <code>IMPORT</code>.</p> <p>If you create a change set for a new stack,
     * CloudFormation creates a stack with a unique stack ID, but no template or
     * resources. The stack will be in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">REVIEW_IN_PROGRESS</a>
     * state until you execute the change set.</p> <p>By default, CloudFormation
     * specifies <code>UPDATE</code>. You can't use the <code>UPDATE</code> type to
     * create a change set for a new stack or the <code>CREATE</code> type to create a
     * change set for an existing stack.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetType(const ChangeSetType& value) { SetChangeSetType(value); return *this;}

    /**
     * <p>The type of change set operation. To create a change set for a new stack,
     * specify <code>CREATE</code>. To create a change set for an existing stack,
     * specify <code>UPDATE</code>. To create a change set for an import operation,
     * specify <code>IMPORT</code>.</p> <p>If you create a change set for a new stack,
     * CloudFormation creates a stack with a unique stack ID, but no template or
     * resources. The stack will be in the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-describing-stacks.html#d0e11995">REVIEW_IN_PROGRESS</a>
     * state until you execute the change set.</p> <p>By default, CloudFormation
     * specifies <code>UPDATE</code>. You can't use the <code>UPDATE</code> type to
     * create a change set for a new stack or the <code>CREATE</code> type to create a
     * change set for an existing stack.</p>
     */
    inline CreateChangeSetRequest& WithChangeSetType(ChangeSetType&& value) { SetChangeSetType(std::move(value)); return *this;}


    /**
     * <p>The resources to import into your stack.</p>
     */
    inline const Aws::Vector<ResourceToImport>& GetResourcesToImport() const{ return m_resourcesToImport; }

    /**
     * <p>The resources to import into your stack.</p>
     */
    inline bool ResourcesToImportHasBeenSet() const { return m_resourcesToImportHasBeenSet; }

    /**
     * <p>The resources to import into your stack.</p>
     */
    inline void SetResourcesToImport(const Aws::Vector<ResourceToImport>& value) { m_resourcesToImportHasBeenSet = true; m_resourcesToImport = value; }

    /**
     * <p>The resources to import into your stack.</p>
     */
    inline void SetResourcesToImport(Aws::Vector<ResourceToImport>&& value) { m_resourcesToImportHasBeenSet = true; m_resourcesToImport = std::move(value); }

    /**
     * <p>The resources to import into your stack.</p>
     */
    inline CreateChangeSetRequest& WithResourcesToImport(const Aws::Vector<ResourceToImport>& value) { SetResourcesToImport(value); return *this;}

    /**
     * <p>The resources to import into your stack.</p>
     */
    inline CreateChangeSetRequest& WithResourcesToImport(Aws::Vector<ResourceToImport>&& value) { SetResourcesToImport(std::move(value)); return *this;}

    /**
     * <p>The resources to import into your stack.</p>
     */
    inline CreateChangeSetRequest& AddResourcesToImport(const ResourceToImport& value) { m_resourcesToImportHasBeenSet = true; m_resourcesToImport.push_back(value); return *this; }

    /**
     * <p>The resources to import into your stack.</p>
     */
    inline CreateChangeSetRequest& AddResourcesToImport(ResourceToImport&& value) { m_resourcesToImportHasBeenSet = true; m_resourcesToImport.push_back(std::move(value)); return *this; }


    /**
     * <p>Creates a change set for the all nested stacks specified in the template. The
     * default behavior of this action is set to <code>False</code>. To include nested
     * sets in a change set, specify <code>True</code>.</p>
     */
    inline bool GetIncludeNestedStacks() const{ return m_includeNestedStacks; }

    /**
     * <p>Creates a change set for the all nested stacks specified in the template. The
     * default behavior of this action is set to <code>False</code>. To include nested
     * sets in a change set, specify <code>True</code>.</p>
     */
    inline bool IncludeNestedStacksHasBeenSet() const { return m_includeNestedStacksHasBeenSet; }

    /**
     * <p>Creates a change set for the all nested stacks specified in the template. The
     * default behavior of this action is set to <code>False</code>. To include nested
     * sets in a change set, specify <code>True</code>.</p>
     */
    inline void SetIncludeNestedStacks(bool value) { m_includeNestedStacksHasBeenSet = true; m_includeNestedStacks = value; }

    /**
     * <p>Creates a change set for the all nested stacks specified in the template. The
     * default behavior of this action is set to <code>False</code>. To include nested
     * sets in a change set, specify <code>True</code>.</p>
     */
    inline CreateChangeSetRequest& WithIncludeNestedStacks(bool value) { SetIncludeNestedStacks(value); return *this;}


    /**
     * <p>Determines what action will be taken if stack creation fails. If this
     * parameter is specified, the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation must not be specified. This must be one of these values:</p> <ul>
     * <li> <p> <code>DELETE</code> - Deletes the change set if the stack creation
     * fails. This is only valid when the <code>ChangeSetType</code> parameter is set
     * to <code>CREATE</code>. If the deletion of the stack fails, the status of the
     * stack is <code>DELETE_FAILED</code>.</p> </li> <li> <p> <code>DO_NOTHING</code>
     * - if the stack creation fails, do nothing. This is equivalent to specifying
     * <code>true</code> for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>ROLLBACK</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying <code>false</code>
     * for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> </ul> <p>For nested stacks, when the
     * <code>OnStackFailure</code> parameter is set to <code>DELETE</code> for the
     * change set for the parent stack, any failure in a child stack will cause the
     * parent stack creation to fail and all stacks to be deleted.</p>
     */
    inline const OnStackFailure& GetOnStackFailure() const{ return m_onStackFailure; }

    /**
     * <p>Determines what action will be taken if stack creation fails. If this
     * parameter is specified, the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation must not be specified. This must be one of these values:</p> <ul>
     * <li> <p> <code>DELETE</code> - Deletes the change set if the stack creation
     * fails. This is only valid when the <code>ChangeSetType</code> parameter is set
     * to <code>CREATE</code>. If the deletion of the stack fails, the status of the
     * stack is <code>DELETE_FAILED</code>.</p> </li> <li> <p> <code>DO_NOTHING</code>
     * - if the stack creation fails, do nothing. This is equivalent to specifying
     * <code>true</code> for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>ROLLBACK</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying <code>false</code>
     * for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> </ul> <p>For nested stacks, when the
     * <code>OnStackFailure</code> parameter is set to <code>DELETE</code> for the
     * change set for the parent stack, any failure in a child stack will cause the
     * parent stack creation to fail and all stacks to be deleted.</p>
     */
    inline bool OnStackFailureHasBeenSet() const { return m_onStackFailureHasBeenSet; }

    /**
     * <p>Determines what action will be taken if stack creation fails. If this
     * parameter is specified, the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation must not be specified. This must be one of these values:</p> <ul>
     * <li> <p> <code>DELETE</code> - Deletes the change set if the stack creation
     * fails. This is only valid when the <code>ChangeSetType</code> parameter is set
     * to <code>CREATE</code>. If the deletion of the stack fails, the status of the
     * stack is <code>DELETE_FAILED</code>.</p> </li> <li> <p> <code>DO_NOTHING</code>
     * - if the stack creation fails, do nothing. This is equivalent to specifying
     * <code>true</code> for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>ROLLBACK</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying <code>false</code>
     * for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> </ul> <p>For nested stacks, when the
     * <code>OnStackFailure</code> parameter is set to <code>DELETE</code> for the
     * change set for the parent stack, any failure in a child stack will cause the
     * parent stack creation to fail and all stacks to be deleted.</p>
     */
    inline void SetOnStackFailure(const OnStackFailure& value) { m_onStackFailureHasBeenSet = true; m_onStackFailure = value; }

    /**
     * <p>Determines what action will be taken if stack creation fails. If this
     * parameter is specified, the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation must not be specified. This must be one of these values:</p> <ul>
     * <li> <p> <code>DELETE</code> - Deletes the change set if the stack creation
     * fails. This is only valid when the <code>ChangeSetType</code> parameter is set
     * to <code>CREATE</code>. If the deletion of the stack fails, the status of the
     * stack is <code>DELETE_FAILED</code>.</p> </li> <li> <p> <code>DO_NOTHING</code>
     * - if the stack creation fails, do nothing. This is equivalent to specifying
     * <code>true</code> for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>ROLLBACK</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying <code>false</code>
     * for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> </ul> <p>For nested stacks, when the
     * <code>OnStackFailure</code> parameter is set to <code>DELETE</code> for the
     * change set for the parent stack, any failure in a child stack will cause the
     * parent stack creation to fail and all stacks to be deleted.</p>
     */
    inline void SetOnStackFailure(OnStackFailure&& value) { m_onStackFailureHasBeenSet = true; m_onStackFailure = std::move(value); }

    /**
     * <p>Determines what action will be taken if stack creation fails. If this
     * parameter is specified, the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation must not be specified. This must be one of these values:</p> <ul>
     * <li> <p> <code>DELETE</code> - Deletes the change set if the stack creation
     * fails. This is only valid when the <code>ChangeSetType</code> parameter is set
     * to <code>CREATE</code>. If the deletion of the stack fails, the status of the
     * stack is <code>DELETE_FAILED</code>.</p> </li> <li> <p> <code>DO_NOTHING</code>
     * - if the stack creation fails, do nothing. This is equivalent to specifying
     * <code>true</code> for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>ROLLBACK</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying <code>false</code>
     * for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> </ul> <p>For nested stacks, when the
     * <code>OnStackFailure</code> parameter is set to <code>DELETE</code> for the
     * change set for the parent stack, any failure in a child stack will cause the
     * parent stack creation to fail and all stacks to be deleted.</p>
     */
    inline CreateChangeSetRequest& WithOnStackFailure(const OnStackFailure& value) { SetOnStackFailure(value); return *this;}

    /**
     * <p>Determines what action will be taken if stack creation fails. If this
     * parameter is specified, the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation must not be specified. This must be one of these values:</p> <ul>
     * <li> <p> <code>DELETE</code> - Deletes the change set if the stack creation
     * fails. This is only valid when the <code>ChangeSetType</code> parameter is set
     * to <code>CREATE</code>. If the deletion of the stack fails, the status of the
     * stack is <code>DELETE_FAILED</code>.</p> </li> <li> <p> <code>DO_NOTHING</code>
     * - if the stack creation fails, do nothing. This is equivalent to specifying
     * <code>true</code> for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>ROLLBACK</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying <code>false</code>
     * for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> </ul> <p>For nested stacks, when the
     * <code>OnStackFailure</code> parameter is set to <code>DELETE</code> for the
     * change set for the parent stack, any failure in a child stack will cause the
     * parent stack creation to fail and all stacks to be deleted.</p>
     */
    inline CreateChangeSetRequest& WithOnStackFailure(OnStackFailure&& value) { SetOnStackFailure(std::move(value)); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet = false;

    bool m_usePreviousTemplate;
    bool m_usePreviousTemplateHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    RollbackConfiguration m_rollbackConfiguration;
    bool m_rollbackConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ChangeSetType m_changeSetType;
    bool m_changeSetTypeHasBeenSet = false;

    Aws::Vector<ResourceToImport> m_resourcesToImport;
    bool m_resourcesToImportHasBeenSet = false;

    bool m_includeNestedStacks;
    bool m_includeNestedStacksHasBeenSet = false;

    OnStackFailure m_onStackFailure;
    bool m_onStackFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

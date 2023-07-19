/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/CallAs.h>
#include <aws/cloudformation/model/TemplateSummaryConfig.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for the <a>GetTemplateSummary</a> action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/GetTemplateSummaryInput">AWS
   * API Reference</a></p>
   */
  class GetTemplateSummaryRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API GetTemplateSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplateSummary"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that's located in an Amazon S3 bucket or a
     * Systems Manager document. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * anatomy</a> in the CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}


    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or the stack ID that's associated with the stack, which aren't
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set from which the stack was created.</p>
     * <p>Conditional: You must specify only one of the following parameters:
     * <code>StackName</code>, <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline const CallAs& GetCallAs() const{ return m_callAs; }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetCallAs(const CallAs& value) { m_callAsHasBeenSet = true; m_callAs = value; }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetCallAs(CallAs&& value) { m_callAsHasBeenSet = true; m_callAs = std::move(value); }

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline GetTemplateSummaryRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}

    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline GetTemplateSummaryRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}


    /**
     * <p>Specifies options for the <code>GetTemplateSummary</code> API action.</p>
     */
    inline const TemplateSummaryConfig& GetTemplateSummaryConfig() const{ return m_templateSummaryConfig; }

    /**
     * <p>Specifies options for the <code>GetTemplateSummary</code> API action.</p>
     */
    inline bool TemplateSummaryConfigHasBeenSet() const { return m_templateSummaryConfigHasBeenSet; }

    /**
     * <p>Specifies options for the <code>GetTemplateSummary</code> API action.</p>
     */
    inline void SetTemplateSummaryConfig(const TemplateSummaryConfig& value) { m_templateSummaryConfigHasBeenSet = true; m_templateSummaryConfig = value; }

    /**
     * <p>Specifies options for the <code>GetTemplateSummary</code> API action.</p>
     */
    inline void SetTemplateSummaryConfig(TemplateSummaryConfig&& value) { m_templateSummaryConfigHasBeenSet = true; m_templateSummaryConfig = std::move(value); }

    /**
     * <p>Specifies options for the <code>GetTemplateSummary</code> API action.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateSummaryConfig(const TemplateSummaryConfig& value) { SetTemplateSummaryConfig(value); return *this;}

    /**
     * <p>Specifies options for the <code>GetTemplateSummary</code> API action.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateSummaryConfig(TemplateSummaryConfig&& value) { SetTemplateSummaryConfig(std::move(value)); return *this;}

  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    CallAs m_callAs;
    bool m_callAsHasBeenSet = false;

    TemplateSummaryConfig m_templateSummaryConfig;
    bool m_templateSummaryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

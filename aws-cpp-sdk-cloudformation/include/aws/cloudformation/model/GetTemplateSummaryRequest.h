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
  class AWS_CLOUDFORMATION_API GetTemplateSummaryRequest : public CloudFormationRequest
  {
  public:
    GetTemplateSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplateSummary"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. For more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template (max size: 460,800 bytes) that is located in an Amazon S3 bucket. For
     * more information about templates, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * specify only one of the following parameters: <code>StackName</code>,
     * <code>StackSetName</code>, <code>TemplateBody</code>, or
     * <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}


    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
     * always interchangeable. For running stacks, you can specify either the stack's
     * name or its unique stack ID. For deleted stack, you must specify the unique
     * stack ID.</p> <p>Conditional: You must specify only one of the following
     * parameters: <code>StackName</code>, <code>StackSetName</code>,
     * <code>TemplateBody</code>, or <code>TemplateURL</code>.</p>
     */
    inline GetTemplateSummaryRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or the stack ID that is associated with the stack, which are not
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

  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

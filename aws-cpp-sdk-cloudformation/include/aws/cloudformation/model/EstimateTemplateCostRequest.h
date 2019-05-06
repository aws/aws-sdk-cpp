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
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for an <a>EstimateTemplateCost</a> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/EstimateTemplateCostInput">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API EstimateTemplateCostRequest : public CloudFormationRequest
  {
  public:
    EstimateTemplateCostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EstimateTemplateCost"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline EstimateTemplateCostRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline EstimateTemplateCostRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>Structure containing the template body with a minimum length of 1 byte and a
     * maximum length of 51,200 bytes. (For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.)</p> <p>Conditional: You must
     * pass <code>TemplateBody</code> or <code>TemplateURL</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline EstimateTemplateCostRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline const Aws::String& GetTemplateURL() const{ return m_templateURL; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline bool TemplateURLHasBeenSet() const { return m_templateURLHasBeenSet; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline void SetTemplateURL(const Aws::String& value) { m_templateURLHasBeenSet = true; m_templateURL = value; }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline void SetTemplateURL(Aws::String&& value) { m_templateURLHasBeenSet = true; m_templateURL = std::move(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline void SetTemplateURL(const char* value) { m_templateURLHasBeenSet = true; m_templateURL.assign(value); }

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline EstimateTemplateCostRequest& WithTemplateURL(const Aws::String& value) { SetTemplateURL(value); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline EstimateTemplateCostRequest& WithTemplateURL(Aws::String&& value) { SetTemplateURL(std::move(value)); return *this;}

    /**
     * <p>Location of file containing the template body. The URL must point to a
     * template that is located in an Amazon S3 bucket. For more information, go to <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/template-anatomy.html">Template
     * Anatomy</a> in the AWS CloudFormation User Guide.</p> <p>Conditional: You must
     * pass <code>TemplateURL</code> or <code>TemplateBody</code>. If both are passed,
     * only <code>TemplateBody</code> is used.</p>
     */
    inline EstimateTemplateCostRequest& WithTemplateURL(const char* value) { SetTemplateURL(value); return *this;}


    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline EstimateTemplateCostRequest& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline EstimateTemplateCostRequest& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline EstimateTemplateCostRequest& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures that specify input
     * parameters.</p>
     */
    inline EstimateTemplateCostRequest& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_templateURL;
    bool m_templateURLHasBeenSet;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

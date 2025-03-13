/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/cloudformation/model/TemplateFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class GetGeneratedTemplateRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API GetGeneratedTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeneratedTemplate"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The language to use to retrieve for the generated template. Supported values
     * are:</p> <ul> <li> <p> <code>JSON</code> </p> </li> <li> <p> <code>YAML</code>
     * </p> </li> </ul>
     */
    inline TemplateFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(TemplateFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline GetGeneratedTemplateRequest& WithFormat(TemplateFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the generated template. The format
     * is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const { return m_generatedTemplateName; }
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }
    template<typename GeneratedTemplateNameT = Aws::String>
    void SetGeneratedTemplateName(GeneratedTemplateNameT&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::forward<GeneratedTemplateNameT>(value); }
    template<typename GeneratedTemplateNameT = Aws::String>
    GetGeneratedTemplateRequest& WithGeneratedTemplateName(GeneratedTemplateNameT&& value) { SetGeneratedTemplateName(std::forward<GeneratedTemplateNameT>(value)); return *this;}
    ///@}
  private:

    TemplateFormat m_format{TemplateFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    Aws::String m_generatedTemplateName;
    bool m_generatedTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

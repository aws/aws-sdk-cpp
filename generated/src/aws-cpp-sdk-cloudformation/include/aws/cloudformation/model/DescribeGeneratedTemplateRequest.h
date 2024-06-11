/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class DescribeGeneratedTemplateRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeGeneratedTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGeneratedTemplate"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of a generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const{ return m_generatedTemplateName; }
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }
    inline void SetGeneratedTemplateName(const Aws::String& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = value; }
    inline void SetGeneratedTemplateName(Aws::String&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::move(value); }
    inline void SetGeneratedTemplateName(const char* value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName.assign(value); }
    inline DescribeGeneratedTemplateRequest& WithGeneratedTemplateName(const Aws::String& value) { SetGeneratedTemplateName(value); return *this;}
    inline DescribeGeneratedTemplateRequest& WithGeneratedTemplateName(Aws::String&& value) { SetGeneratedTemplateName(std::move(value)); return *this;}
    inline DescribeGeneratedTemplateRequest& WithGeneratedTemplateName(const char* value) { SetGeneratedTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_generatedTemplateName;
    bool m_generatedTemplateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

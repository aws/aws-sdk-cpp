/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/Template.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   */
  class UpdateTemplateRequest : public SESRequest
  {
  public:
    AWS_SES_API UpdateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplate"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Template& GetTemplate() const{ return m_template; }

    
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    
    inline void SetTemplate(const Template& value) { m_templateHasBeenSet = true; m_template = value; }

    
    inline void SetTemplate(Template&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    
    inline UpdateTemplateRequest& WithTemplate(const Template& value) { SetTemplate(value); return *this;}

    
    inline UpdateTemplateRequest& WithTemplate(Template&& value) { SetTemplate(std::move(value)); return *this;}

  private:

    Template m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws

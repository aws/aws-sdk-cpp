﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   */
  class TestRenderTemplateRequest : public SESRequest
  {
  public:
    AWS_SES_API TestRenderTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestRenderTemplate"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the template to render.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline TestRenderTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline TestRenderTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline TestRenderTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline const Aws::String& GetTemplateData() const{ return m_templateData; }
    inline bool TemplateDataHasBeenSet() const { return m_templateDataHasBeenSet; }
    inline void SetTemplateData(const Aws::String& value) { m_templateDataHasBeenSet = true; m_templateData = value; }
    inline void SetTemplateData(Aws::String&& value) { m_templateDataHasBeenSet = true; m_templateData = std::move(value); }
    inline void SetTemplateData(const char* value) { m_templateDataHasBeenSet = true; m_templateData.assign(value); }
    inline TestRenderTemplateRequest& WithTemplateData(const Aws::String& value) { SetTemplateData(value); return *this;}
    inline TestRenderTemplateRequest& WithTemplateData(Aws::String&& value) { SetTemplateData(std::move(value)); return *this;}
    inline TestRenderTemplateRequest& WithTemplateData(const char* value) { SetTemplateData(value); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws

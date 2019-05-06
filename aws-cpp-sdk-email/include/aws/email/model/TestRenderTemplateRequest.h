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
  class AWS_SES_API TestRenderTemplateRequest : public SESRequest
  {
  public:
    TestRenderTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestRenderTemplate"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline TestRenderTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline TestRenderTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the template that you want to render.</p>
     */
    inline TestRenderTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline const Aws::String& GetTemplateData() const{ return m_templateData; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline bool TemplateDataHasBeenSet() const { return m_templateDataHasBeenSet; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetTemplateData(const Aws::String& value) { m_templateDataHasBeenSet = true; m_templateData = value; }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetTemplateData(Aws::String&& value) { m_templateDataHasBeenSet = true; m_templateData = std::move(value); }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetTemplateData(const char* value) { m_templateDataHasBeenSet = true; m_templateData.assign(value); }

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline TestRenderTemplateRequest& WithTemplateData(const Aws::String& value) { SetTemplateData(value); return *this;}

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline TestRenderTemplateRequest& WithTemplateData(Aws::String&& value) { SetTemplateData(std::move(value)); return *this;}

    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline TestRenderTemplateRequest& WithTemplateData(const char* value) { SetTemplateData(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws

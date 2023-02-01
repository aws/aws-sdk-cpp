/**
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
   * <p>Represents a request to retrieve an existing custom verification email
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetCustomVerificationEmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class GetCustomVerificationEmailTemplateRequest : public SESRequest
  {
  public:
    AWS_SES_API GetCustomVerificationEmailTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCustomVerificationEmailTemplate"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline GetCustomVerificationEmailTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline GetCustomVerificationEmailTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom verification email template that you want to
     * retrieve.</p>
     */
    inline GetCustomVerificationEmailTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws

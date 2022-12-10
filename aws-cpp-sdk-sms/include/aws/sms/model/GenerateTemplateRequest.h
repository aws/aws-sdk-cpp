/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/OutputFormat.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class GenerateTemplateRequest : public SMSRequest
  {
  public:
    AWS_SMS_API GenerateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateTemplate"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The format for generating the CloudFormation template.</p>
     */
    inline const OutputFormat& GetTemplateFormat() const{ return m_templateFormat; }

    /**
     * <p>The format for generating the CloudFormation template.</p>
     */
    inline bool TemplateFormatHasBeenSet() const { return m_templateFormatHasBeenSet; }

    /**
     * <p>The format for generating the CloudFormation template.</p>
     */
    inline void SetTemplateFormat(const OutputFormat& value) { m_templateFormatHasBeenSet = true; m_templateFormat = value; }

    /**
     * <p>The format for generating the CloudFormation template.</p>
     */
    inline void SetTemplateFormat(OutputFormat&& value) { m_templateFormatHasBeenSet = true; m_templateFormat = std::move(value); }

    /**
     * <p>The format for generating the CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithTemplateFormat(const OutputFormat& value) { SetTemplateFormat(value); return *this;}

    /**
     * <p>The format for generating the CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithTemplateFormat(OutputFormat&& value) { SetTemplateFormat(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    OutputFormat m_templateFormat;
    bool m_templateFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

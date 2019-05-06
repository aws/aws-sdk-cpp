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
  class AWS_SMS_API GenerateTemplateRequest : public SMSRequest
  {
  public:
    GenerateTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>ID of the application associated with the Amazon CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Format for generating the Amazon CloudFormation template.</p>
     */
    inline const OutputFormat& GetTemplateFormat() const{ return m_templateFormat; }

    /**
     * <p>Format for generating the Amazon CloudFormation template.</p>
     */
    inline bool TemplateFormatHasBeenSet() const { return m_templateFormatHasBeenSet; }

    /**
     * <p>Format for generating the Amazon CloudFormation template.</p>
     */
    inline void SetTemplateFormat(const OutputFormat& value) { m_templateFormatHasBeenSet = true; m_templateFormat = value; }

    /**
     * <p>Format for generating the Amazon CloudFormation template.</p>
     */
    inline void SetTemplateFormat(OutputFormat&& value) { m_templateFormatHasBeenSet = true; m_templateFormat = std::move(value); }

    /**
     * <p>Format for generating the Amazon CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithTemplateFormat(const OutputFormat& value) { SetTemplateFormat(value); return *this;}

    /**
     * <p>Format for generating the Amazon CloudFormation template.</p>
     */
    inline GenerateTemplateRequest& WithTemplateFormat(OutputFormat&& value) { SetTemplateFormat(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    OutputFormat m_templateFormat;
    bool m_templateFormatHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws

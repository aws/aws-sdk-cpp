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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Set of options which defines notification preferences of given
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/NotificationOptions">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API NotificationOptions
  {
  public:
    NotificationOptions();
    NotificationOptions(Aws::Utils::Json::JsonView jsonValue);
    NotificationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Boolean value to indicate an email notification should be sent to the
     * receipients.</p>
     */
    inline bool GetSendEmail() const{ return m_sendEmail; }

    /**
     * <p>Boolean value to indicate an email notification should be sent to the
     * receipients.</p>
     */
    inline bool SendEmailHasBeenSet() const { return m_sendEmailHasBeenSet; }

    /**
     * <p>Boolean value to indicate an email notification should be sent to the
     * receipients.</p>
     */
    inline void SetSendEmail(bool value) { m_sendEmailHasBeenSet = true; m_sendEmail = value; }

    /**
     * <p>Boolean value to indicate an email notification should be sent to the
     * receipients.</p>
     */
    inline NotificationOptions& WithSendEmail(bool value) { SetSendEmail(value); return *this;}


    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline const Aws::String& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }

    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline void SetEmailMessage(const Aws::String& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline void SetEmailMessage(Aws::String&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline void SetEmailMessage(const char* value) { m_emailMessageHasBeenSet = true; m_emailMessage.assign(value); }

    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline NotificationOptions& WithEmailMessage(const Aws::String& value) { SetEmailMessage(value); return *this;}

    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline NotificationOptions& WithEmailMessage(Aws::String&& value) { SetEmailMessage(std::move(value)); return *this;}

    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline NotificationOptions& WithEmailMessage(const char* value) { SetEmailMessage(value); return *this;}

  private:

    bool m_sendEmail;
    bool m_sendEmailHasBeenSet;

    Aws::String m_emailMessage;
    bool m_emailMessageHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws

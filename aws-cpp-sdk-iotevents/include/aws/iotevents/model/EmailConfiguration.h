/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/EmailContent.h>
#include <aws/iotevents/model/EmailRecipients.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains the configuration information of email notifications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/EmailConfiguration">AWS
   * API Reference</a></p>
   */
  class EmailConfiguration
  {
  public:
    AWS_IOTEVENTS_API EmailConfiguration();
    AWS_IOTEVENTS_API EmailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API EmailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline EmailConfiguration& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline EmailConfiguration& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline EmailConfiguration& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>Contains the subject and message of an email.</p>
     */
    inline const EmailContent& GetContent() const{ return m_content; }

    /**
     * <p>Contains the subject and message of an email.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>Contains the subject and message of an email.</p>
     */
    inline void SetContent(const EmailContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Contains the subject and message of an email.</p>
     */
    inline void SetContent(EmailContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>Contains the subject and message of an email.</p>
     */
    inline EmailConfiguration& WithContent(const EmailContent& value) { SetContent(value); return *this;}

    /**
     * <p>Contains the subject and message of an email.</p>
     */
    inline EmailConfiguration& WithContent(EmailContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>Contains the information of one or more recipients who receive the
     * emails.</p>  <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive emails to your AWS SSO store</a>.</p> 
     */
    inline const EmailRecipients& GetRecipients() const{ return m_recipients; }

    /**
     * <p>Contains the information of one or more recipients who receive the
     * emails.</p>  <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive emails to your AWS SSO store</a>.</p> 
     */
    inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }

    /**
     * <p>Contains the information of one or more recipients who receive the
     * emails.</p>  <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive emails to your AWS SSO store</a>.</p> 
     */
    inline void SetRecipients(const EmailRecipients& value) { m_recipientsHasBeenSet = true; m_recipients = value; }

    /**
     * <p>Contains the information of one or more recipients who receive the
     * emails.</p>  <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive emails to your AWS SSO store</a>.</p> 
     */
    inline void SetRecipients(EmailRecipients&& value) { m_recipientsHasBeenSet = true; m_recipients = std::move(value); }

    /**
     * <p>Contains the information of one or more recipients who receive the
     * emails.</p>  <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive emails to your AWS SSO store</a>.</p> 
     */
    inline EmailConfiguration& WithRecipients(const EmailRecipients& value) { SetRecipients(value); return *this;}

    /**
     * <p>Contains the information of one or more recipients who receive the
     * emails.</p>  <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive emails to your AWS SSO store</a>.</p> 
     */
    inline EmailConfiguration& WithRecipients(EmailRecipients&& value) { SetRecipients(std::move(value)); return *this;}

  private:

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    EmailContent m_content;
    bool m_contentHasBeenSet = false;

    EmailRecipients m_recipients;
    bool m_recipientsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

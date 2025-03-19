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
    AWS_IOTEVENTS_API EmailConfiguration() = default;
    AWS_IOTEVENTS_API EmailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API EmailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address that sends emails.</p>  <p>If you use the AWS
     * IoT Events managed AWS Lambda function to manage your emails, you must <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-email-addresses.html">verify
     * the email address that sends emails in Amazon SES</a>.</p> 
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    EmailConfiguration& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the subject and message of an email.</p>
     */
    inline const EmailContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = EmailContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = EmailContent>
    EmailConfiguration& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the information of one or more recipients who receive the
     * emails.</p>  <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive emails to your AWS SSO store</a>.</p> 
     */
    inline const EmailRecipients& GetRecipients() const { return m_recipients; }
    inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }
    template<typename RecipientsT = EmailRecipients>
    void SetRecipients(RecipientsT&& value) { m_recipientsHasBeenSet = true; m_recipients = std::forward<RecipientsT>(value); }
    template<typename RecipientsT = EmailRecipients>
    EmailConfiguration& WithRecipients(RecipientsT&& value) { SetRecipients(std::forward<RecipientsT>(value)); return *this;}
    ///@}
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

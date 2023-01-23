/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/RecipientDetail.h>
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
   * <p>Contains the configuration information of SMS notifications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SMSConfiguration">AWS
   * API Reference</a></p>
   */
  class SMSConfiguration
  {
  public:
    AWS_IOTEVENTS_API SMSConfiguration();
    AWS_IOTEVENTS_API SMSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SMSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sender ID.</p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }

    /**
     * <p>The sender ID.</p>
     */
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }

    /**
     * <p>The sender ID.</p>
     */
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }

    /**
     * <p>The sender ID.</p>
     */
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }

    /**
     * <p>The sender ID.</p>
     */
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }

    /**
     * <p>The sender ID.</p>
     */
    inline SMSConfiguration& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}

    /**
     * <p>The sender ID.</p>
     */
    inline SMSConfiguration& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}

    /**
     * <p>The sender ID.</p>
     */
    inline SMSConfiguration& WithSenderId(const char* value) { SetSenderId(value); return *this;}


    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline const Aws::String& GetAdditionalMessage() const{ return m_additionalMessage; }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline bool AdditionalMessageHasBeenSet() const { return m_additionalMessageHasBeenSet; }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline void SetAdditionalMessage(const Aws::String& value) { m_additionalMessageHasBeenSet = true; m_additionalMessage = value; }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline void SetAdditionalMessage(Aws::String&& value) { m_additionalMessageHasBeenSet = true; m_additionalMessage = std::move(value); }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline void SetAdditionalMessage(const char* value) { m_additionalMessageHasBeenSet = true; m_additionalMessage.assign(value); }

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline SMSConfiguration& WithAdditionalMessage(const Aws::String& value) { SetAdditionalMessage(value); return *this;}

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline SMSConfiguration& WithAdditionalMessage(Aws::String&& value) { SetAdditionalMessage(std::move(value)); return *this;}

    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline SMSConfiguration& WithAdditionalMessage(const char* value) { SetAdditionalMessage(value); return *this;}


    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline const Aws::Vector<RecipientDetail>& GetRecipients() const{ return m_recipients; }

    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }

    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline void SetRecipients(const Aws::Vector<RecipientDetail>& value) { m_recipientsHasBeenSet = true; m_recipients = value; }

    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline void SetRecipients(Aws::Vector<RecipientDetail>&& value) { m_recipientsHasBeenSet = true; m_recipients = std::move(value); }

    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline SMSConfiguration& WithRecipients(const Aws::Vector<RecipientDetail>& value) { SetRecipients(value); return *this;}

    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline SMSConfiguration& WithRecipients(Aws::Vector<RecipientDetail>&& value) { SetRecipients(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline SMSConfiguration& AddRecipients(const RecipientDetail& value) { m_recipientsHasBeenSet = true; m_recipients.push_back(value); return *this; }

    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline SMSConfiguration& AddRecipients(RecipientDetail&& value) { m_recipientsHasBeenSet = true; m_recipients.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_additionalMessage;
    bool m_additionalMessageHasBeenSet = false;

    Aws::Vector<RecipientDetail> m_recipients;
    bool m_recipientsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws

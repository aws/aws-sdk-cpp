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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Message.h>
#include <aws/pinpoint/model/CampaignEmailMessage.h>
#include <aws/pinpoint/model/CampaignSmsMessage.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Message configuration for a campaign.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API MessageConfiguration
  {
  public:
    MessageConfiguration();
    MessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The message that the campaign delivers to ADM channels. Overrides the default
     * message.
     */
    inline const Message& GetADMMessage() const{ return m_aDMMessage; }

    /**
     * The message that the campaign delivers to ADM channels. Overrides the default
     * message.
     */
    inline bool ADMMessageHasBeenSet() const { return m_aDMMessageHasBeenSet; }

    /**
     * The message that the campaign delivers to ADM channels. Overrides the default
     * message.
     */
    inline void SetADMMessage(const Message& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = value; }

    /**
     * The message that the campaign delivers to ADM channels. Overrides the default
     * message.
     */
    inline void SetADMMessage(Message&& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = std::move(value); }

    /**
     * The message that the campaign delivers to ADM channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithADMMessage(const Message& value) { SetADMMessage(value); return *this;}

    /**
     * The message that the campaign delivers to ADM channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithADMMessage(Message&& value) { SetADMMessage(std::move(value)); return *this;}


    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline const Message& GetAPNSMessage() const{ return m_aPNSMessage; }

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline bool APNSMessageHasBeenSet() const { return m_aPNSMessageHasBeenSet; }

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline void SetAPNSMessage(const Message& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = value; }

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline void SetAPNSMessage(Message&& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = std::move(value); }

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithAPNSMessage(const Message& value) { SetAPNSMessage(value); return *this;}

    /**
     * The message that the campaign delivers to APNS channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithAPNSMessage(Message&& value) { SetAPNSMessage(std::move(value)); return *this;}


    /**
     * The message that the campaign delivers to Baidu channels. Overrides the default
     * message.
     */
    inline const Message& GetBaiduMessage() const{ return m_baiduMessage; }

    /**
     * The message that the campaign delivers to Baidu channels. Overrides the default
     * message.
     */
    inline bool BaiduMessageHasBeenSet() const { return m_baiduMessageHasBeenSet; }

    /**
     * The message that the campaign delivers to Baidu channels. Overrides the default
     * message.
     */
    inline void SetBaiduMessage(const Message& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = value; }

    /**
     * The message that the campaign delivers to Baidu channels. Overrides the default
     * message.
     */
    inline void SetBaiduMessage(Message&& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = std::move(value); }

    /**
     * The message that the campaign delivers to Baidu channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithBaiduMessage(const Message& value) { SetBaiduMessage(value); return *this;}

    /**
     * The message that the campaign delivers to Baidu channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithBaiduMessage(Message&& value) { SetBaiduMessage(std::move(value)); return *this;}


    /**
     * The default message for all channels.
     */
    inline const Message& GetDefaultMessage() const{ return m_defaultMessage; }

    /**
     * The default message for all channels.
     */
    inline bool DefaultMessageHasBeenSet() const { return m_defaultMessageHasBeenSet; }

    /**
     * The default message for all channels.
     */
    inline void SetDefaultMessage(const Message& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = value; }

    /**
     * The default message for all channels.
     */
    inline void SetDefaultMessage(Message&& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = std::move(value); }

    /**
     * The default message for all channels.
     */
    inline MessageConfiguration& WithDefaultMessage(const Message& value) { SetDefaultMessage(value); return *this;}

    /**
     * The default message for all channels.
     */
    inline MessageConfiguration& WithDefaultMessage(Message&& value) { SetDefaultMessage(std::move(value)); return *this;}


    /**
     * The email message configuration.
     */
    inline const CampaignEmailMessage& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * The email message configuration.
     */
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }

    /**
     * The email message configuration.
     */
    inline void SetEmailMessage(const CampaignEmailMessage& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * The email message configuration.
     */
    inline void SetEmailMessage(CampaignEmailMessage&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * The email message configuration.
     */
    inline MessageConfiguration& WithEmailMessage(const CampaignEmailMessage& value) { SetEmailMessage(value); return *this;}

    /**
     * The email message configuration.
     */
    inline MessageConfiguration& WithEmailMessage(CampaignEmailMessage&& value) { SetEmailMessage(std::move(value)); return *this;}


    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline const Message& GetGCMMessage() const{ return m_gCMMessage; }

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline bool GCMMessageHasBeenSet() const { return m_gCMMessageHasBeenSet; }

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline void SetGCMMessage(const Message& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = value; }

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline void SetGCMMessage(Message&& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = std::move(value); }

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithGCMMessage(const Message& value) { SetGCMMessage(value); return *this;}

    /**
     * The message that the campaign delivers to GCM channels. Overrides the default
     * message.
     */
    inline MessageConfiguration& WithGCMMessage(Message&& value) { SetGCMMessage(std::move(value)); return *this;}


    /**
     * The SMS message configuration.
     */
    inline const CampaignSmsMessage& GetSMSMessage() const{ return m_sMSMessage; }

    /**
     * The SMS message configuration.
     */
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }

    /**
     * The SMS message configuration.
     */
    inline void SetSMSMessage(const CampaignSmsMessage& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = value; }

    /**
     * The SMS message configuration.
     */
    inline void SetSMSMessage(CampaignSmsMessage&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::move(value); }

    /**
     * The SMS message configuration.
     */
    inline MessageConfiguration& WithSMSMessage(const CampaignSmsMessage& value) { SetSMSMessage(value); return *this;}

    /**
     * The SMS message configuration.
     */
    inline MessageConfiguration& WithSMSMessage(CampaignSmsMessage&& value) { SetSMSMessage(std::move(value)); return *this;}

  private:

    Message m_aDMMessage;
    bool m_aDMMessageHasBeenSet;

    Message m_aPNSMessage;
    bool m_aPNSMessageHasBeenSet;

    Message m_baiduMessage;
    bool m_baiduMessageHasBeenSet;

    Message m_defaultMessage;
    bool m_defaultMessageHasBeenSet;

    CampaignEmailMessage m_emailMessage;
    bool m_emailMessageHasBeenSet;

    Message m_gCMMessage;
    bool m_gCMMessageHasBeenSet;

    CampaignSmsMessage m_sMSMessage;
    bool m_sMSMessageHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

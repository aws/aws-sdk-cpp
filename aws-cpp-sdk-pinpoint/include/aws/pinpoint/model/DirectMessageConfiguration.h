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
#include <aws/pinpoint/model/ADMMessage.h>
#include <aws/pinpoint/model/APNSMessage.h>
#include <aws/pinpoint/model/BaiduMessage.h>
#include <aws/pinpoint/model/DefaultMessage.h>
#include <aws/pinpoint/model/DefaultPushNotificationMessage.h>
#include <aws/pinpoint/model/EmailMessage.h>
#include <aws/pinpoint/model/GCMMessage.h>
#include <aws/pinpoint/model/SMSMessage.h>
#include <aws/pinpoint/model/VoiceMessage.h>
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
   * Message definitions for the default message and any messages that are tailored
   * for specific channels.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/DirectMessageConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API DirectMessageConfiguration
  {
  public:
    DirectMessageConfiguration();
    DirectMessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DirectMessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The message to ADM channels. Overrides the default push notification message.
     */
    inline const ADMMessage& GetADMMessage() const{ return m_aDMMessage; }

    /**
     * The message to ADM channels. Overrides the default push notification message.
     */
    inline bool ADMMessageHasBeenSet() const { return m_aDMMessageHasBeenSet; }

    /**
     * The message to ADM channels. Overrides the default push notification message.
     */
    inline void SetADMMessage(const ADMMessage& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = value; }

    /**
     * The message to ADM channels. Overrides the default push notification message.
     */
    inline void SetADMMessage(ADMMessage&& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = std::move(value); }

    /**
     * The message to ADM channels. Overrides the default push notification message.
     */
    inline DirectMessageConfiguration& WithADMMessage(const ADMMessage& value) { SetADMMessage(value); return *this;}

    /**
     * The message to ADM channels. Overrides the default push notification message.
     */
    inline DirectMessageConfiguration& WithADMMessage(ADMMessage&& value) { SetADMMessage(std::move(value)); return *this;}


    /**
     * The message to APNS channels. Overrides the default push notification message.
     */
    inline const APNSMessage& GetAPNSMessage() const{ return m_aPNSMessage; }

    /**
     * The message to APNS channels. Overrides the default push notification message.
     */
    inline bool APNSMessageHasBeenSet() const { return m_aPNSMessageHasBeenSet; }

    /**
     * The message to APNS channels. Overrides the default push notification message.
     */
    inline void SetAPNSMessage(const APNSMessage& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = value; }

    /**
     * The message to APNS channels. Overrides the default push notification message.
     */
    inline void SetAPNSMessage(APNSMessage&& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = std::move(value); }

    /**
     * The message to APNS channels. Overrides the default push notification message.
     */
    inline DirectMessageConfiguration& WithAPNSMessage(const APNSMessage& value) { SetAPNSMessage(value); return *this;}

    /**
     * The message to APNS channels. Overrides the default push notification message.
     */
    inline DirectMessageConfiguration& WithAPNSMessage(APNSMessage&& value) { SetAPNSMessage(std::move(value)); return *this;}


    /**
     * The message to Baidu GCM channels. Overrides the default push notification
     * message.
     */
    inline const BaiduMessage& GetBaiduMessage() const{ return m_baiduMessage; }

    /**
     * The message to Baidu GCM channels. Overrides the default push notification
     * message.
     */
    inline bool BaiduMessageHasBeenSet() const { return m_baiduMessageHasBeenSet; }

    /**
     * The message to Baidu GCM channels. Overrides the default push notification
     * message.
     */
    inline void SetBaiduMessage(const BaiduMessage& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = value; }

    /**
     * The message to Baidu GCM channels. Overrides the default push notification
     * message.
     */
    inline void SetBaiduMessage(BaiduMessage&& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = std::move(value); }

    /**
     * The message to Baidu GCM channels. Overrides the default push notification
     * message.
     */
    inline DirectMessageConfiguration& WithBaiduMessage(const BaiduMessage& value) { SetBaiduMessage(value); return *this;}

    /**
     * The message to Baidu GCM channels. Overrides the default push notification
     * message.
     */
    inline DirectMessageConfiguration& WithBaiduMessage(BaiduMessage&& value) { SetBaiduMessage(std::move(value)); return *this;}


    /**
     * The default message for all channels.
     */
    inline const DefaultMessage& GetDefaultMessage() const{ return m_defaultMessage; }

    /**
     * The default message for all channels.
     */
    inline bool DefaultMessageHasBeenSet() const { return m_defaultMessageHasBeenSet; }

    /**
     * The default message for all channels.
     */
    inline void SetDefaultMessage(const DefaultMessage& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = value; }

    /**
     * The default message for all channels.
     */
    inline void SetDefaultMessage(DefaultMessage&& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = std::move(value); }

    /**
     * The default message for all channels.
     */
    inline DirectMessageConfiguration& WithDefaultMessage(const DefaultMessage& value) { SetDefaultMessage(value); return *this;}

    /**
     * The default message for all channels.
     */
    inline DirectMessageConfiguration& WithDefaultMessage(DefaultMessage&& value) { SetDefaultMessage(std::move(value)); return *this;}


    /**
     * The default push notification message for all push channels.
     */
    inline const DefaultPushNotificationMessage& GetDefaultPushNotificationMessage() const{ return m_defaultPushNotificationMessage; }

    /**
     * The default push notification message for all push channels.
     */
    inline bool DefaultPushNotificationMessageHasBeenSet() const { return m_defaultPushNotificationMessageHasBeenSet; }

    /**
     * The default push notification message for all push channels.
     */
    inline void SetDefaultPushNotificationMessage(const DefaultPushNotificationMessage& value) { m_defaultPushNotificationMessageHasBeenSet = true; m_defaultPushNotificationMessage = value; }

    /**
     * The default push notification message for all push channels.
     */
    inline void SetDefaultPushNotificationMessage(DefaultPushNotificationMessage&& value) { m_defaultPushNotificationMessageHasBeenSet = true; m_defaultPushNotificationMessage = std::move(value); }

    /**
     * The default push notification message for all push channels.
     */
    inline DirectMessageConfiguration& WithDefaultPushNotificationMessage(const DefaultPushNotificationMessage& value) { SetDefaultPushNotificationMessage(value); return *this;}

    /**
     * The default push notification message for all push channels.
     */
    inline DirectMessageConfiguration& WithDefaultPushNotificationMessage(DefaultPushNotificationMessage&& value) { SetDefaultPushNotificationMessage(std::move(value)); return *this;}


    /**
     * The message to Email channels. Overrides the default message.
     */
    inline const EmailMessage& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * The message to Email channels. Overrides the default message.
     */
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }

    /**
     * The message to Email channels. Overrides the default message.
     */
    inline void SetEmailMessage(const EmailMessage& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * The message to Email channels. Overrides the default message.
     */
    inline void SetEmailMessage(EmailMessage&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * The message to Email channels. Overrides the default message.
     */
    inline DirectMessageConfiguration& WithEmailMessage(const EmailMessage& value) { SetEmailMessage(value); return *this;}

    /**
     * The message to Email channels. Overrides the default message.
     */
    inline DirectMessageConfiguration& WithEmailMessage(EmailMessage&& value) { SetEmailMessage(std::move(value)); return *this;}


    /**
     * The message to GCM channels. Overrides the default push notification message.
     */
    inline const GCMMessage& GetGCMMessage() const{ return m_gCMMessage; }

    /**
     * The message to GCM channels. Overrides the default push notification message.
     */
    inline bool GCMMessageHasBeenSet() const { return m_gCMMessageHasBeenSet; }

    /**
     * The message to GCM channels. Overrides the default push notification message.
     */
    inline void SetGCMMessage(const GCMMessage& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = value; }

    /**
     * The message to GCM channels. Overrides the default push notification message.
     */
    inline void SetGCMMessage(GCMMessage&& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = std::move(value); }

    /**
     * The message to GCM channels. Overrides the default push notification message.
     */
    inline DirectMessageConfiguration& WithGCMMessage(const GCMMessage& value) { SetGCMMessage(value); return *this;}

    /**
     * The message to GCM channels. Overrides the default push notification message.
     */
    inline DirectMessageConfiguration& WithGCMMessage(GCMMessage&& value) { SetGCMMessage(std::move(value)); return *this;}


    /**
     * The message to SMS channels. Overrides the default message.
     */
    inline const SMSMessage& GetSMSMessage() const{ return m_sMSMessage; }

    /**
     * The message to SMS channels. Overrides the default message.
     */
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }

    /**
     * The message to SMS channels. Overrides the default message.
     */
    inline void SetSMSMessage(const SMSMessage& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = value; }

    /**
     * The message to SMS channels. Overrides the default message.
     */
    inline void SetSMSMessage(SMSMessage&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::move(value); }

    /**
     * The message to SMS channels. Overrides the default message.
     */
    inline DirectMessageConfiguration& WithSMSMessage(const SMSMessage& value) { SetSMSMessage(value); return *this;}

    /**
     * The message to SMS channels. Overrides the default message.
     */
    inline DirectMessageConfiguration& WithSMSMessage(SMSMessage&& value) { SetSMSMessage(std::move(value)); return *this;}


    /**
     * The message to Voice channels. Overrides the default message.
     */
    inline const VoiceMessage& GetVoiceMessage() const{ return m_voiceMessage; }

    /**
     * The message to Voice channels. Overrides the default message.
     */
    inline bool VoiceMessageHasBeenSet() const { return m_voiceMessageHasBeenSet; }

    /**
     * The message to Voice channels. Overrides the default message.
     */
    inline void SetVoiceMessage(const VoiceMessage& value) { m_voiceMessageHasBeenSet = true; m_voiceMessage = value; }

    /**
     * The message to Voice channels. Overrides the default message.
     */
    inline void SetVoiceMessage(VoiceMessage&& value) { m_voiceMessageHasBeenSet = true; m_voiceMessage = std::move(value); }

    /**
     * The message to Voice channels. Overrides the default message.
     */
    inline DirectMessageConfiguration& WithVoiceMessage(const VoiceMessage& value) { SetVoiceMessage(value); return *this;}

    /**
     * The message to Voice channels. Overrides the default message.
     */
    inline DirectMessageConfiguration& WithVoiceMessage(VoiceMessage&& value) { SetVoiceMessage(std::move(value)); return *this;}

  private:

    ADMMessage m_aDMMessage;
    bool m_aDMMessageHasBeenSet;

    APNSMessage m_aPNSMessage;
    bool m_aPNSMessageHasBeenSet;

    BaiduMessage m_baiduMessage;
    bool m_baiduMessageHasBeenSet;

    DefaultMessage m_defaultMessage;
    bool m_defaultMessageHasBeenSet;

    DefaultPushNotificationMessage m_defaultPushNotificationMessage;
    bool m_defaultPushNotificationMessageHasBeenSet;

    EmailMessage m_emailMessage;
    bool m_emailMessageHasBeenSet;

    GCMMessage m_gCMMessage;
    bool m_gCMMessageHasBeenSet;

    SMSMessage m_sMSMessage;
    bool m_sMSMessageHasBeenSet;

    VoiceMessage m_voiceMessage;
    bool m_voiceMessageHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

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
   * <p>Specifies the settings and content for the default message and any default
   * messages that you tailored for specific channels.</p><p><h3>See Also:</h3>   <a
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
     * <p>The default push notification message for the ADM (Amazon Device Messaging)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline const ADMMessage& GetADMMessage() const{ return m_aDMMessage; }

    /**
     * <p>The default push notification message for the ADM (Amazon Device Messaging)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline bool ADMMessageHasBeenSet() const { return m_aDMMessageHasBeenSet; }

    /**
     * <p>The default push notification message for the ADM (Amazon Device Messaging)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline void SetADMMessage(const ADMMessage& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = value; }

    /**
     * <p>The default push notification message for the ADM (Amazon Device Messaging)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline void SetADMMessage(ADMMessage&& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = std::move(value); }

    /**
     * <p>The default push notification message for the ADM (Amazon Device Messaging)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithADMMessage(const ADMMessage& value) { SetADMMessage(value); return *this;}

    /**
     * <p>The default push notification message for the ADM (Amazon Device Messaging)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithADMMessage(ADMMessage&& value) { SetADMMessage(std::move(value)); return *this;}


    /**
     * <p>The default push notification message for the APNs (Apple Push Notification
     * service) channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline const APNSMessage& GetAPNSMessage() const{ return m_aPNSMessage; }

    /**
     * <p>The default push notification message for the APNs (Apple Push Notification
     * service) channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline bool APNSMessageHasBeenSet() const { return m_aPNSMessageHasBeenSet; }

    /**
     * <p>The default push notification message for the APNs (Apple Push Notification
     * service) channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline void SetAPNSMessage(const APNSMessage& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = value; }

    /**
     * <p>The default push notification message for the APNs (Apple Push Notification
     * service) channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline void SetAPNSMessage(APNSMessage&& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = std::move(value); }

    /**
     * <p>The default push notification message for the APNs (Apple Push Notification
     * service) channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithAPNSMessage(const APNSMessage& value) { SetAPNSMessage(value); return *this;}

    /**
     * <p>The default push notification message for the APNs (Apple Push Notification
     * service) channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithAPNSMessage(APNSMessage&& value) { SetAPNSMessage(std::move(value)); return *this;}


    /**
     * <p>The default push notification message for the Baidu (Baidu Cloud Push)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline const BaiduMessage& GetBaiduMessage() const{ return m_baiduMessage; }

    /**
     * <p>The default push notification message for the Baidu (Baidu Cloud Push)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline bool BaiduMessageHasBeenSet() const { return m_baiduMessageHasBeenSet; }

    /**
     * <p>The default push notification message for the Baidu (Baidu Cloud Push)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline void SetBaiduMessage(const BaiduMessage& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = value; }

    /**
     * <p>The default push notification message for the Baidu (Baidu Cloud Push)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline void SetBaiduMessage(BaiduMessage&& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = std::move(value); }

    /**
     * <p>The default push notification message for the Baidu (Baidu Cloud Push)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithBaiduMessage(const BaiduMessage& value) { SetBaiduMessage(value); return *this;}

    /**
     * <p>The default push notification message for the Baidu (Baidu Cloud Push)
     * channel. This message overrides the default push notification message
     * (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithBaiduMessage(BaiduMessage&& value) { SetBaiduMessage(std::move(value)); return *this;}


    /**
     * <p>The default message body for all channels.</p>
     */
    inline const DefaultMessage& GetDefaultMessage() const{ return m_defaultMessage; }

    /**
     * <p>The default message body for all channels.</p>
     */
    inline bool DefaultMessageHasBeenSet() const { return m_defaultMessageHasBeenSet; }

    /**
     * <p>The default message body for all channels.</p>
     */
    inline void SetDefaultMessage(const DefaultMessage& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = value; }

    /**
     * <p>The default message body for all channels.</p>
     */
    inline void SetDefaultMessage(DefaultMessage&& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = std::move(value); }

    /**
     * <p>The default message body for all channels.</p>
     */
    inline DirectMessageConfiguration& WithDefaultMessage(const DefaultMessage& value) { SetDefaultMessage(value); return *this;}

    /**
     * <p>The default message body for all channels.</p>
     */
    inline DirectMessageConfiguration& WithDefaultMessage(DefaultMessage&& value) { SetDefaultMessage(std::move(value)); return *this;}


    /**
     * <p>The default push notification message for all push channels.</p>
     */
    inline const DefaultPushNotificationMessage& GetDefaultPushNotificationMessage() const{ return m_defaultPushNotificationMessage; }

    /**
     * <p>The default push notification message for all push channels.</p>
     */
    inline bool DefaultPushNotificationMessageHasBeenSet() const { return m_defaultPushNotificationMessageHasBeenSet; }

    /**
     * <p>The default push notification message for all push channels.</p>
     */
    inline void SetDefaultPushNotificationMessage(const DefaultPushNotificationMessage& value) { m_defaultPushNotificationMessageHasBeenSet = true; m_defaultPushNotificationMessage = value; }

    /**
     * <p>The default push notification message for all push channels.</p>
     */
    inline void SetDefaultPushNotificationMessage(DefaultPushNotificationMessage&& value) { m_defaultPushNotificationMessageHasBeenSet = true; m_defaultPushNotificationMessage = std::move(value); }

    /**
     * <p>The default push notification message for all push channels.</p>
     */
    inline DirectMessageConfiguration& WithDefaultPushNotificationMessage(const DefaultPushNotificationMessage& value) { SetDefaultPushNotificationMessage(value); return *this;}

    /**
     * <p>The default push notification message for all push channels.</p>
     */
    inline DirectMessageConfiguration& WithDefaultPushNotificationMessage(DefaultPushNotificationMessage&& value) { SetDefaultPushNotificationMessage(std::move(value)); return *this;}


    /**
     * <p>The default message for the email channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline const EmailMessage& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * <p>The default message for the email channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }

    /**
     * <p>The default message for the email channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline void SetEmailMessage(const EmailMessage& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * <p>The default message for the email channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline void SetEmailMessage(EmailMessage&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * <p>The default message for the email channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline DirectMessageConfiguration& WithEmailMessage(const EmailMessage& value) { SetEmailMessage(value); return *this;}

    /**
     * <p>The default message for the email channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline DirectMessageConfiguration& WithEmailMessage(EmailMessage&& value) { SetEmailMessage(std::move(value)); return *this;}


    /**
     * <p>The default push notification message for the GCM channel, which is used to
     * send notifications through the Firebase Cloud Messaging (FCM), formerly Google
     * Cloud Messaging (GCM), service. This message overrides the default push
     * notification message (DefaultPushNotificationMessage).</p>
     */
    inline const GCMMessage& GetGCMMessage() const{ return m_gCMMessage; }

    /**
     * <p>The default push notification message for the GCM channel, which is used to
     * send notifications through the Firebase Cloud Messaging (FCM), formerly Google
     * Cloud Messaging (GCM), service. This message overrides the default push
     * notification message (DefaultPushNotificationMessage).</p>
     */
    inline bool GCMMessageHasBeenSet() const { return m_gCMMessageHasBeenSet; }

    /**
     * <p>The default push notification message for the GCM channel, which is used to
     * send notifications through the Firebase Cloud Messaging (FCM), formerly Google
     * Cloud Messaging (GCM), service. This message overrides the default push
     * notification message (DefaultPushNotificationMessage).</p>
     */
    inline void SetGCMMessage(const GCMMessage& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = value; }

    /**
     * <p>The default push notification message for the GCM channel, which is used to
     * send notifications through the Firebase Cloud Messaging (FCM), formerly Google
     * Cloud Messaging (GCM), service. This message overrides the default push
     * notification message (DefaultPushNotificationMessage).</p>
     */
    inline void SetGCMMessage(GCMMessage&& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = std::move(value); }

    /**
     * <p>The default push notification message for the GCM channel, which is used to
     * send notifications through the Firebase Cloud Messaging (FCM), formerly Google
     * Cloud Messaging (GCM), service. This message overrides the default push
     * notification message (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithGCMMessage(const GCMMessage& value) { SetGCMMessage(value); return *this;}

    /**
     * <p>The default push notification message for the GCM channel, which is used to
     * send notifications through the Firebase Cloud Messaging (FCM), formerly Google
     * Cloud Messaging (GCM), service. This message overrides the default push
     * notification message (DefaultPushNotificationMessage).</p>
     */
    inline DirectMessageConfiguration& WithGCMMessage(GCMMessage&& value) { SetGCMMessage(std::move(value)); return *this;}


    /**
     * <p>The default message for the SMS channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline const SMSMessage& GetSMSMessage() const{ return m_sMSMessage; }

    /**
     * <p>The default message for the SMS channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }

    /**
     * <p>The default message for the SMS channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline void SetSMSMessage(const SMSMessage& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = value; }

    /**
     * <p>The default message for the SMS channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline void SetSMSMessage(SMSMessage&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::move(value); }

    /**
     * <p>The default message for the SMS channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline DirectMessageConfiguration& WithSMSMessage(const SMSMessage& value) { SetSMSMessage(value); return *this;}

    /**
     * <p>The default message for the SMS channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline DirectMessageConfiguration& WithSMSMessage(SMSMessage&& value) { SetSMSMessage(std::move(value)); return *this;}


    /**
     * <p>The default message for the voice channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline const VoiceMessage& GetVoiceMessage() const{ return m_voiceMessage; }

    /**
     * <p>The default message for the voice channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline bool VoiceMessageHasBeenSet() const { return m_voiceMessageHasBeenSet; }

    /**
     * <p>The default message for the voice channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline void SetVoiceMessage(const VoiceMessage& value) { m_voiceMessageHasBeenSet = true; m_voiceMessage = value; }

    /**
     * <p>The default message for the voice channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline void SetVoiceMessage(VoiceMessage&& value) { m_voiceMessageHasBeenSet = true; m_voiceMessage = std::move(value); }

    /**
     * <p>The default message for the voice channel. This message overrides the default
     * message (DefaultMessage).</p>
     */
    inline DirectMessageConfiguration& WithVoiceMessage(const VoiceMessage& value) { SetVoiceMessage(value); return *this;}

    /**
     * <p>The default message for the voice channel. This message overrides the default
     * message (DefaultMessage).</p>
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

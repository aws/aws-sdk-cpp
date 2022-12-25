/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Message.h>
#include <aws/pinpoint/model/CampaignCustomMessage.h>
#include <aws/pinpoint/model/CampaignEmailMessage.h>
#include <aws/pinpoint/model/CampaignSmsMessage.h>
#include <aws/pinpoint/model/CampaignInAppMessage.h>
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
   * <p>Specifies the message configuration settings for a campaign.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MessageConfiguration">AWS
   * API Reference</a></p>
   */
  class MessageConfiguration
  {
  public:
    AWS_PINPOINT_API MessageConfiguration();
    AWS_PINPOINT_API MessageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MessageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message that the campaign sends through the ADM (Amazon Device Messaging)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline const Message& GetADMMessage() const{ return m_aDMMessage; }

    /**
     * <p>The message that the campaign sends through the ADM (Amazon Device Messaging)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline bool ADMMessageHasBeenSet() const { return m_aDMMessageHasBeenSet; }

    /**
     * <p>The message that the campaign sends through the ADM (Amazon Device Messaging)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline void SetADMMessage(const Message& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = value; }

    /**
     * <p>The message that the campaign sends through the ADM (Amazon Device Messaging)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline void SetADMMessage(Message&& value) { m_aDMMessageHasBeenSet = true; m_aDMMessage = std::move(value); }

    /**
     * <p>The message that the campaign sends through the ADM (Amazon Device Messaging)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithADMMessage(const Message& value) { SetADMMessage(value); return *this;}

    /**
     * <p>The message that the campaign sends through the ADM (Amazon Device Messaging)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithADMMessage(Message&& value) { SetADMMessage(std::move(value)); return *this;}


    /**
     * <p>The message that the campaign sends through the APNs (Apple Push Notification
     * service) channel. If specified, this message overrides the default message.</p>
     */
    inline const Message& GetAPNSMessage() const{ return m_aPNSMessage; }

    /**
     * <p>The message that the campaign sends through the APNs (Apple Push Notification
     * service) channel. If specified, this message overrides the default message.</p>
     */
    inline bool APNSMessageHasBeenSet() const { return m_aPNSMessageHasBeenSet; }

    /**
     * <p>The message that the campaign sends through the APNs (Apple Push Notification
     * service) channel. If specified, this message overrides the default message.</p>
     */
    inline void SetAPNSMessage(const Message& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = value; }

    /**
     * <p>The message that the campaign sends through the APNs (Apple Push Notification
     * service) channel. If specified, this message overrides the default message.</p>
     */
    inline void SetAPNSMessage(Message&& value) { m_aPNSMessageHasBeenSet = true; m_aPNSMessage = std::move(value); }

    /**
     * <p>The message that the campaign sends through the APNs (Apple Push Notification
     * service) channel. If specified, this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithAPNSMessage(const Message& value) { SetAPNSMessage(value); return *this;}

    /**
     * <p>The message that the campaign sends through the APNs (Apple Push Notification
     * service) channel. If specified, this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithAPNSMessage(Message&& value) { SetAPNSMessage(std::move(value)); return *this;}


    /**
     * <p>The message that the campaign sends through the Baidu (Baidu Cloud Push)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline const Message& GetBaiduMessage() const{ return m_baiduMessage; }

    /**
     * <p>The message that the campaign sends through the Baidu (Baidu Cloud Push)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline bool BaiduMessageHasBeenSet() const { return m_baiduMessageHasBeenSet; }

    /**
     * <p>The message that the campaign sends through the Baidu (Baidu Cloud Push)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline void SetBaiduMessage(const Message& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = value; }

    /**
     * <p>The message that the campaign sends through the Baidu (Baidu Cloud Push)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline void SetBaiduMessage(Message&& value) { m_baiduMessageHasBeenSet = true; m_baiduMessage = std::move(value); }

    /**
     * <p>The message that the campaign sends through the Baidu (Baidu Cloud Push)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithBaiduMessage(const Message& value) { SetBaiduMessage(value); return *this;}

    /**
     * <p>The message that the campaign sends through the Baidu (Baidu Cloud Push)
     * channel. If specified, this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithBaiduMessage(Message&& value) { SetBaiduMessage(std::move(value)); return *this;}


    /**
     * <p>The message that the campaign sends through a custom channel, as specified by
     * the delivery configuration (CustomDeliveryConfiguration) settings for the
     * campaign. If specified, this message overrides the default message.</p> 
     */
    inline const CampaignCustomMessage& GetCustomMessage() const{ return m_customMessage; }

    /**
     * <p>The message that the campaign sends through a custom channel, as specified by
     * the delivery configuration (CustomDeliveryConfiguration) settings for the
     * campaign. If specified, this message overrides the default message.</p> 
     */
    inline bool CustomMessageHasBeenSet() const { return m_customMessageHasBeenSet; }

    /**
     * <p>The message that the campaign sends through a custom channel, as specified by
     * the delivery configuration (CustomDeliveryConfiguration) settings for the
     * campaign. If specified, this message overrides the default message.</p> 
     */
    inline void SetCustomMessage(const CampaignCustomMessage& value) { m_customMessageHasBeenSet = true; m_customMessage = value; }

    /**
     * <p>The message that the campaign sends through a custom channel, as specified by
     * the delivery configuration (CustomDeliveryConfiguration) settings for the
     * campaign. If specified, this message overrides the default message.</p> 
     */
    inline void SetCustomMessage(CampaignCustomMessage&& value) { m_customMessageHasBeenSet = true; m_customMessage = std::move(value); }

    /**
     * <p>The message that the campaign sends through a custom channel, as specified by
     * the delivery configuration (CustomDeliveryConfiguration) settings for the
     * campaign. If specified, this message overrides the default message.</p> 
     */
    inline MessageConfiguration& WithCustomMessage(const CampaignCustomMessage& value) { SetCustomMessage(value); return *this;}

    /**
     * <p>The message that the campaign sends through a custom channel, as specified by
     * the delivery configuration (CustomDeliveryConfiguration) settings for the
     * campaign. If specified, this message overrides the default message.</p> 
     */
    inline MessageConfiguration& WithCustomMessage(CampaignCustomMessage&& value) { SetCustomMessage(std::move(value)); return *this;}


    /**
     * <p>The default message that the campaign sends through all the channels that are
     * configured for the campaign.</p>
     */
    inline const Message& GetDefaultMessage() const{ return m_defaultMessage; }

    /**
     * <p>The default message that the campaign sends through all the channels that are
     * configured for the campaign.</p>
     */
    inline bool DefaultMessageHasBeenSet() const { return m_defaultMessageHasBeenSet; }

    /**
     * <p>The default message that the campaign sends through all the channels that are
     * configured for the campaign.</p>
     */
    inline void SetDefaultMessage(const Message& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = value; }

    /**
     * <p>The default message that the campaign sends through all the channels that are
     * configured for the campaign.</p>
     */
    inline void SetDefaultMessage(Message&& value) { m_defaultMessageHasBeenSet = true; m_defaultMessage = std::move(value); }

    /**
     * <p>The default message that the campaign sends through all the channels that are
     * configured for the campaign.</p>
     */
    inline MessageConfiguration& WithDefaultMessage(const Message& value) { SetDefaultMessage(value); return *this;}

    /**
     * <p>The default message that the campaign sends through all the channels that are
     * configured for the campaign.</p>
     */
    inline MessageConfiguration& WithDefaultMessage(Message&& value) { SetDefaultMessage(std::move(value)); return *this;}


    /**
     * <p>The message that the campaign sends through the email channel. If specified,
     * this message overrides the default message.</p>
     */
    inline const CampaignEmailMessage& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * <p>The message that the campaign sends through the email channel. If specified,
     * this message overrides the default message.</p>
     */
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }

    /**
     * <p>The message that the campaign sends through the email channel. If specified,
     * this message overrides the default message.</p>
     */
    inline void SetEmailMessage(const CampaignEmailMessage& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * <p>The message that the campaign sends through the email channel. If specified,
     * this message overrides the default message.</p>
     */
    inline void SetEmailMessage(CampaignEmailMessage&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * <p>The message that the campaign sends through the email channel. If specified,
     * this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithEmailMessage(const CampaignEmailMessage& value) { SetEmailMessage(value); return *this;}

    /**
     * <p>The message that the campaign sends through the email channel. If specified,
     * this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithEmailMessage(CampaignEmailMessage&& value) { SetEmailMessage(std::move(value)); return *this;}


    /**
     * <p>The message that the campaign sends through the GCM channel, which enables
     * Amazon Pinpoint to send push notifications through the Firebase Cloud Messaging
     * (FCM), formerly Google Cloud Messaging (GCM), service. If specified, this
     * message overrides the default message.</p>
     */
    inline const Message& GetGCMMessage() const{ return m_gCMMessage; }

    /**
     * <p>The message that the campaign sends through the GCM channel, which enables
     * Amazon Pinpoint to send push notifications through the Firebase Cloud Messaging
     * (FCM), formerly Google Cloud Messaging (GCM), service. If specified, this
     * message overrides the default message.</p>
     */
    inline bool GCMMessageHasBeenSet() const { return m_gCMMessageHasBeenSet; }

    /**
     * <p>The message that the campaign sends through the GCM channel, which enables
     * Amazon Pinpoint to send push notifications through the Firebase Cloud Messaging
     * (FCM), formerly Google Cloud Messaging (GCM), service. If specified, this
     * message overrides the default message.</p>
     */
    inline void SetGCMMessage(const Message& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = value; }

    /**
     * <p>The message that the campaign sends through the GCM channel, which enables
     * Amazon Pinpoint to send push notifications through the Firebase Cloud Messaging
     * (FCM), formerly Google Cloud Messaging (GCM), service. If specified, this
     * message overrides the default message.</p>
     */
    inline void SetGCMMessage(Message&& value) { m_gCMMessageHasBeenSet = true; m_gCMMessage = std::move(value); }

    /**
     * <p>The message that the campaign sends through the GCM channel, which enables
     * Amazon Pinpoint to send push notifications through the Firebase Cloud Messaging
     * (FCM), formerly Google Cloud Messaging (GCM), service. If specified, this
     * message overrides the default message.</p>
     */
    inline MessageConfiguration& WithGCMMessage(const Message& value) { SetGCMMessage(value); return *this;}

    /**
     * <p>The message that the campaign sends through the GCM channel, which enables
     * Amazon Pinpoint to send push notifications through the Firebase Cloud Messaging
     * (FCM), formerly Google Cloud Messaging (GCM), service. If specified, this
     * message overrides the default message.</p>
     */
    inline MessageConfiguration& WithGCMMessage(Message&& value) { SetGCMMessage(std::move(value)); return *this;}


    /**
     * <p>The message that the campaign sends through the SMS channel. If specified,
     * this message overrides the default message.</p>
     */
    inline const CampaignSmsMessage& GetSMSMessage() const{ return m_sMSMessage; }

    /**
     * <p>The message that the campaign sends through the SMS channel. If specified,
     * this message overrides the default message.</p>
     */
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }

    /**
     * <p>The message that the campaign sends through the SMS channel. If specified,
     * this message overrides the default message.</p>
     */
    inline void SetSMSMessage(const CampaignSmsMessage& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = value; }

    /**
     * <p>The message that the campaign sends through the SMS channel. If specified,
     * this message overrides the default message.</p>
     */
    inline void SetSMSMessage(CampaignSmsMessage&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::move(value); }

    /**
     * <p>The message that the campaign sends through the SMS channel. If specified,
     * this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithSMSMessage(const CampaignSmsMessage& value) { SetSMSMessage(value); return *this;}

    /**
     * <p>The message that the campaign sends through the SMS channel. If specified,
     * this message overrides the default message.</p>
     */
    inline MessageConfiguration& WithSMSMessage(CampaignSmsMessage&& value) { SetSMSMessage(std::move(value)); return *this;}


    /**
     * <p>The in-app message configuration.</p>
     */
    inline const CampaignInAppMessage& GetInAppMessage() const{ return m_inAppMessage; }

    /**
     * <p>The in-app message configuration.</p>
     */
    inline bool InAppMessageHasBeenSet() const { return m_inAppMessageHasBeenSet; }

    /**
     * <p>The in-app message configuration.</p>
     */
    inline void SetInAppMessage(const CampaignInAppMessage& value) { m_inAppMessageHasBeenSet = true; m_inAppMessage = value; }

    /**
     * <p>The in-app message configuration.</p>
     */
    inline void SetInAppMessage(CampaignInAppMessage&& value) { m_inAppMessageHasBeenSet = true; m_inAppMessage = std::move(value); }

    /**
     * <p>The in-app message configuration.</p>
     */
    inline MessageConfiguration& WithInAppMessage(const CampaignInAppMessage& value) { SetInAppMessage(value); return *this;}

    /**
     * <p>The in-app message configuration.</p>
     */
    inline MessageConfiguration& WithInAppMessage(CampaignInAppMessage&& value) { SetInAppMessage(std::move(value)); return *this;}

  private:

    Message m_aDMMessage;
    bool m_aDMMessageHasBeenSet = false;

    Message m_aPNSMessage;
    bool m_aPNSMessageHasBeenSet = false;

    Message m_baiduMessage;
    bool m_baiduMessageHasBeenSet = false;

    CampaignCustomMessage m_customMessage;
    bool m_customMessageHasBeenSet = false;

    Message m_defaultMessage;
    bool m_defaultMessageHasBeenSet = false;

    CampaignEmailMessage m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    Message m_gCMMessage;
    bool m_gCMMessageHasBeenSet = false;

    CampaignSmsMessage m_sMSMessage;
    bool m_sMSMessageHasBeenSet = false;

    CampaignInAppMessage m_inAppMessage;
    bool m_inAppMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

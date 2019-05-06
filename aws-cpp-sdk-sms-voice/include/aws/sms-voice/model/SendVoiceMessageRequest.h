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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/PinpointSMSVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms-voice/model/VoiceMessageContent.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * SendVoiceMessageRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/SendVoiceMessageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API SendVoiceMessageRequest : public PinpointSMSVoiceRequest
  {
  public:
    SendVoiceMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendVoiceMessage"; }

    Aws::String SerializePayload() const override;


    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline const Aws::String& GetCallerId() const{ return m_callerId; }

    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline bool CallerIdHasBeenSet() const { return m_callerIdHasBeenSet; }

    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline void SetCallerId(const Aws::String& value) { m_callerIdHasBeenSet = true; m_callerId = value; }

    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline void SetCallerId(Aws::String&& value) { m_callerIdHasBeenSet = true; m_callerId = std::move(value); }

    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline void SetCallerId(const char* value) { m_callerIdHasBeenSet = true; m_callerId.assign(value); }

    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline SendVoiceMessageRequest& WithCallerId(const Aws::String& value) { SetCallerId(value); return *this;}

    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline SendVoiceMessageRequest& WithCallerId(Aws::String&& value) { SetCallerId(std::move(value)); return *this;}

    /**
     * The phone number that appears on recipients' devices when they receive the
     * message.
     */
    inline SendVoiceMessageRequest& WithCallerId(const char* value) { SetCallerId(value); return *this;}


    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline SendVoiceMessageRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline SendVoiceMessageRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * The name of the configuration set that you want to use to send the message.
     */
    inline SendVoiceMessageRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    
    inline const VoiceMessageContent& GetContent() const{ return m_content; }

    
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    
    inline void SetContent(const VoiceMessageContent& value) { m_contentHasBeenSet = true; m_content = value; }

    
    inline void SetContent(VoiceMessageContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    
    inline SendVoiceMessageRequest& WithContent(const VoiceMessageContent& value) { SetContent(value); return *this;}

    
    inline SendVoiceMessageRequest& WithContent(VoiceMessageContent&& value) { SetContent(std::move(value)); return *this;}


    /**
     * The phone number that you want to send the voice message to.
     */
    inline const Aws::String& GetDestinationPhoneNumber() const{ return m_destinationPhoneNumber; }

    /**
     * The phone number that you want to send the voice message to.
     */
    inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }

    /**
     * The phone number that you want to send the voice message to.
     */
    inline void SetDestinationPhoneNumber(const Aws::String& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = value; }

    /**
     * The phone number that you want to send the voice message to.
     */
    inline void SetDestinationPhoneNumber(Aws::String&& value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber = std::move(value); }

    /**
     * The phone number that you want to send the voice message to.
     */
    inline void SetDestinationPhoneNumber(const char* value) { m_destinationPhoneNumberHasBeenSet = true; m_destinationPhoneNumber.assign(value); }

    /**
     * The phone number that you want to send the voice message to.
     */
    inline SendVoiceMessageRequest& WithDestinationPhoneNumber(const Aws::String& value) { SetDestinationPhoneNumber(value); return *this;}

    /**
     * The phone number that you want to send the voice message to.
     */
    inline SendVoiceMessageRequest& WithDestinationPhoneNumber(Aws::String&& value) { SetDestinationPhoneNumber(std::move(value)); return *this;}

    /**
     * The phone number that you want to send the voice message to.
     */
    inline SendVoiceMessageRequest& WithDestinationPhoneNumber(const char* value) { SetDestinationPhoneNumber(value); return *this;}


    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline const Aws::String& GetOriginationPhoneNumber() const{ return m_originationPhoneNumber; }

    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline bool OriginationPhoneNumberHasBeenSet() const { return m_originationPhoneNumberHasBeenSet; }

    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline void SetOriginationPhoneNumber(const Aws::String& value) { m_originationPhoneNumberHasBeenSet = true; m_originationPhoneNumber = value; }

    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline void SetOriginationPhoneNumber(Aws::String&& value) { m_originationPhoneNumberHasBeenSet = true; m_originationPhoneNumber = std::move(value); }

    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline void SetOriginationPhoneNumber(const char* value) { m_originationPhoneNumberHasBeenSet = true; m_originationPhoneNumber.assign(value); }

    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline SendVoiceMessageRequest& WithOriginationPhoneNumber(const Aws::String& value) { SetOriginationPhoneNumber(value); return *this;}

    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline SendVoiceMessageRequest& WithOriginationPhoneNumber(Aws::String&& value) { SetOriginationPhoneNumber(std::move(value)); return *this;}

    /**
     * The phone number that Amazon Pinpoint should use to send the voice message. This
     * isn't necessarily the phone number that appears on recipients' devices when they
     * receive the message, because you can specify a CallerId parameter in the
     * request.
     */
    inline SendVoiceMessageRequest& WithOriginationPhoneNumber(const char* value) { SetOriginationPhoneNumber(value); return *this;}

  private:

    Aws::String m_callerId;
    bool m_callerIdHasBeenSet;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    VoiceMessageContent m_content;
    bool m_contentHasBeenSet;

    Aws::String m_destinationPhoneNumber;
    bool m_destinationPhoneNumberHasBeenSet;

    Aws::String m_originationPhoneNumber;
    bool m_originationPhoneNumberHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws

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
#include <aws/sms-voice/model/CallInstructionsMessageType.h>
#include <aws/sms-voice/model/PlainTextMessageType.h>
#include <aws/sms-voice/model/SSMLMessageType.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that contains a voice message and information about the recipient that
   * you want to send it to.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/VoiceMessageContent">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API VoiceMessageContent
  {
  public:
    VoiceMessageContent();
    VoiceMessageContent(Aws::Utils::Json::JsonView jsonValue);
    VoiceMessageContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CallInstructionsMessageType& GetCallInstructionsMessage() const{ return m_callInstructionsMessage; }

    
    inline bool CallInstructionsMessageHasBeenSet() const { return m_callInstructionsMessageHasBeenSet; }

    
    inline void SetCallInstructionsMessage(const CallInstructionsMessageType& value) { m_callInstructionsMessageHasBeenSet = true; m_callInstructionsMessage = value; }

    
    inline void SetCallInstructionsMessage(CallInstructionsMessageType&& value) { m_callInstructionsMessageHasBeenSet = true; m_callInstructionsMessage = std::move(value); }

    
    inline VoiceMessageContent& WithCallInstructionsMessage(const CallInstructionsMessageType& value) { SetCallInstructionsMessage(value); return *this;}

    
    inline VoiceMessageContent& WithCallInstructionsMessage(CallInstructionsMessageType&& value) { SetCallInstructionsMessage(std::move(value)); return *this;}


    
    inline const PlainTextMessageType& GetPlainTextMessage() const{ return m_plainTextMessage; }

    
    inline bool PlainTextMessageHasBeenSet() const { return m_plainTextMessageHasBeenSet; }

    
    inline void SetPlainTextMessage(const PlainTextMessageType& value) { m_plainTextMessageHasBeenSet = true; m_plainTextMessage = value; }

    
    inline void SetPlainTextMessage(PlainTextMessageType&& value) { m_plainTextMessageHasBeenSet = true; m_plainTextMessage = std::move(value); }

    
    inline VoiceMessageContent& WithPlainTextMessage(const PlainTextMessageType& value) { SetPlainTextMessage(value); return *this;}

    
    inline VoiceMessageContent& WithPlainTextMessage(PlainTextMessageType&& value) { SetPlainTextMessage(std::move(value)); return *this;}


    
    inline const SSMLMessageType& GetSSMLMessage() const{ return m_sSMLMessage; }

    
    inline bool SSMLMessageHasBeenSet() const { return m_sSMLMessageHasBeenSet; }

    
    inline void SetSSMLMessage(const SSMLMessageType& value) { m_sSMLMessageHasBeenSet = true; m_sSMLMessage = value; }

    
    inline void SetSSMLMessage(SSMLMessageType&& value) { m_sSMLMessageHasBeenSet = true; m_sSMLMessage = std::move(value); }

    
    inline VoiceMessageContent& WithSSMLMessage(const SSMLMessageType& value) { SetSSMLMessage(value); return *this;}

    
    inline VoiceMessageContent& WithSSMLMessage(SSMLMessageType&& value) { SetSSMLMessage(std::move(value)); return *this;}

  private:

    CallInstructionsMessageType m_callInstructionsMessage;
    bool m_callInstructionsMessageHasBeenSet;

    PlainTextMessageType m_plainTextMessage;
    bool m_plainTextMessageHasBeenSet;

    SSMLMessageType m_sSMLMessage;
    bool m_sSMLMessageHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws

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

#include <aws/sms-voice/model/VoiceMessageContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

VoiceMessageContent::VoiceMessageContent() : 
    m_callInstructionsMessageHasBeenSet(false),
    m_plainTextMessageHasBeenSet(false),
    m_sSMLMessageHasBeenSet(false)
{
}

VoiceMessageContent::VoiceMessageContent(JsonView jsonValue) : 
    m_callInstructionsMessageHasBeenSet(false),
    m_plainTextMessageHasBeenSet(false),
    m_sSMLMessageHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceMessageContent& VoiceMessageContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CallInstructionsMessage"))
  {
    m_callInstructionsMessage = jsonValue.GetObject("CallInstructionsMessage");

    m_callInstructionsMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlainTextMessage"))
  {
    m_plainTextMessage = jsonValue.GetObject("PlainTextMessage");

    m_plainTextMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSMLMessage"))
  {
    m_sSMLMessage = jsonValue.GetObject("SSMLMessage");

    m_sSMLMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceMessageContent::Jsonize() const
{
  JsonValue payload;

  if(m_callInstructionsMessageHasBeenSet)
  {
   payload.WithObject("CallInstructionsMessage", m_callInstructionsMessage.Jsonize());

  }

  if(m_plainTextMessageHasBeenSet)
  {
   payload.WithObject("PlainTextMessage", m_plainTextMessage.Jsonize());

  }

  if(m_sSMLMessageHasBeenSet)
  {
   payload.WithObject("SSMLMessage", m_sSMLMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws

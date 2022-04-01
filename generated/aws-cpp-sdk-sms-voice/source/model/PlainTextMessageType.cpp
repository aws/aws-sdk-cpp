/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/PlainTextMessageType.h>
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

PlainTextMessageType::PlainTextMessageType() : 
    m_languageCodeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
}

PlainTextMessageType::PlainTextMessageType(JsonView jsonValue) : 
    m_languageCodeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
  *this = jsonValue;
}

PlainTextMessageType& PlainTextMessageType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = jsonValue.GetString("LanguageCode");

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceId"))
  {
    m_voiceId = jsonValue.GetString("VoiceId");

    m_voiceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PlainTextMessageType::Jsonize() const
{
  JsonValue payload;

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", m_languageCode);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("VoiceId", m_voiceId);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws

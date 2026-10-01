/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateVoiceParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

UpdateVoiceParameters::UpdateVoiceParameters(JsonView jsonValue) { *this = jsonValue; }

UpdateVoiceParameters& UpdateVoiceParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inlineTemplateBody")) {
    m_inlineTemplateBody = jsonValue.GetString("inlineTemplateBody");
    m_inlineTemplateBodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("languageCode")) {
    m_languageCode = jsonValue.GetString("languageCode");
    m_languageCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("voiceId")) {
    m_voiceId = jsonValue.GetString("voiceId");
    m_voiceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("voiceMessageBodyTextType")) {
    m_voiceMessageBodyTextType =
        VoiceMessageBodyTextTypeMapper::GetVoiceMessageBodyTextTypeForName(jsonValue.GetString("voiceMessageBodyTextType"));
    m_voiceMessageBodyTextTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateVoiceParameters::Jsonize() const {
  JsonValue payload;

  if (m_inlineTemplateBodyHasBeenSet) {
    payload.WithString("inlineTemplateBody", m_inlineTemplateBody);
  }

  if (m_languageCodeHasBeenSet) {
    payload.WithString("languageCode", m_languageCode);
  }

  if (m_voiceIdHasBeenSet) {
    payload.WithString("voiceId", m_voiceId);
  }

  if (m_voiceMessageBodyTextTypeHasBeenSet) {
    payload.WithString("voiceMessageBodyTextType",
                       VoiceMessageBodyTextTypeMapper::GetNameForVoiceMessageBodyTextType(m_voiceMessageBodyTextType));
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws

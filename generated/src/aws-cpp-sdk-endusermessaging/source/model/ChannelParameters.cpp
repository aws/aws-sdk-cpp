/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/ChannelParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

ChannelParameters::ChannelParameters(JsonView jsonValue) { *this = jsonValue; }

ChannelParameters& ChannelParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    m_text = jsonValue.GetObject("text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("voice")) {
    m_voice = jsonValue.GetObject("voice");
    m_voiceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notify")) {
    m_notify = jsonValue.GetObject("notify");
    m_notifyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("whatsApp")) {
    m_whatsApp = jsonValue.GetObject("whatsApp");
    m_whatsAppHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelParameters::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithObject("text", m_text.Jsonize());
  }

  if (m_voiceHasBeenSet) {
    payload.WithObject("voice", m_voice.Jsonize());
  }

  if (m_notifyHasBeenSet) {
    payload.WithObject("notify", m_notify.Jsonize());
  }

  if (m_whatsAppHasBeenSet) {
    payload.WithObject("whatsApp", m_whatsApp.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws

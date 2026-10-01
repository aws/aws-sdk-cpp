/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/NotifyParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

NotifyParameters::NotifyParameters(JsonView jsonValue) { *this = jsonValue; }

NotifyParameters& NotifyParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("notifyTemplateId")) {
    m_notifyTemplateId = jsonValue.GetString("notifyTemplateId");
    m_notifyTemplateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("voiceId")) {
    m_voiceId = jsonValue.GetString("voiceId");
    m_voiceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NotifyParameters::Jsonize() const {
  JsonValue payload;

  if (m_notifyTemplateIdHasBeenSet) {
    payload.WithString("notifyTemplateId", m_notifyTemplateId);
  }

  if (m_voiceIdHasBeenSet) {
    payload.WithString("voiceId", m_voiceId);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/UpdateWhatsAppParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

UpdateWhatsAppParameters::UpdateWhatsAppParameters(JsonView jsonValue) { *this = jsonValue; }

UpdateWhatsAppParameters& UpdateWhatsAppParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("whatsAppTemplateName")) {
    m_whatsAppTemplateName = jsonValue.GetString("whatsAppTemplateName");
    m_whatsAppTemplateNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("languageCode")) {
    m_languageCode = jsonValue.GetString("languageCode");
    m_languageCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateWhatsAppParameters::Jsonize() const {
  JsonValue payload;

  if (m_whatsAppTemplateNameHasBeenSet) {
    payload.WithString("whatsAppTemplateName", m_whatsAppTemplateName);
  }

  if (m_languageCodeHasBeenSet) {
    payload.WithString("languageCode", m_languageCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws

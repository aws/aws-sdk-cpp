/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateOutboundEmailContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

UpdateOutboundEmailContent::UpdateOutboundEmailContent(JsonView jsonValue) { *this = jsonValue; }

UpdateOutboundEmailContent& UpdateOutboundEmailContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MessageSourceType")) {
    m_messageSourceType = UpdateOutboundEmailMessageSourceTypeMapper::GetUpdateOutboundEmailMessageSourceTypeForName(
        jsonValue.GetString("MessageSourceType"));
    m_messageSourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RawMessage")) {
    m_rawMessage = jsonValue.GetObject("RawMessage");
    m_rawMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOutboundEmailContent::Jsonize() const {
  JsonValue payload;

  if (m_messageSourceTypeHasBeenSet) {
    payload.WithString("MessageSourceType",
                       UpdateOutboundEmailMessageSourceTypeMapper::GetNameForUpdateOutboundEmailMessageSourceType(m_messageSourceType));
  }

  if (m_rawMessageHasBeenSet) {
    payload.WithObject("RawMessage", m_rawMessage.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

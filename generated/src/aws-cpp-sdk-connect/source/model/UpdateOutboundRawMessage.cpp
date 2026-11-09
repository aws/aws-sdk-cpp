/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateOutboundRawMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

UpdateOutboundRawMessage::UpdateOutboundRawMessage(JsonView jsonValue) { *this = jsonValue; }

UpdateOutboundRawMessage& UpdateOutboundRawMessage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Body")) {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContentType")) {
    m_contentType = jsonValue.GetString("ContentType");
    m_contentTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOutboundRawMessage::Jsonize() const {
  JsonValue payload;

  if (m_bodyHasBeenSet) {
    payload.WithString("Body", m_body);
  }

  if (m_contentTypeHasBeenSet) {
    payload.WithString("ContentType", m_contentType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

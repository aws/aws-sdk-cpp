/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/HeadersAndImplicitPayloadEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

HeadersAndImplicitPayloadEvent::HeadersAndImplicitPayloadEvent(JsonView jsonValue) { *this = jsonValue; }

HeadersAndImplicitPayloadEvent& HeadersAndImplicitPayloadEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("header")) {
    m_header = jsonValue.GetString("header");
    m_headerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("payload")) {
    m_payload = jsonValue.GetString("payload");
    m_payloadHasBeenSet = true;
  }
  return *this;
}

JsonValue HeadersAndImplicitPayloadEvent::Jsonize() const {
  JsonValue payload;

  if (m_headerHasBeenSet) {
    payload.WithString("header", m_header);
  }

  if (m_payloadHasBeenSet) {
    payload.WithString("payload", m_payload);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/HeadersAndExplicitPayloadEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

HeadersAndExplicitPayloadEvent::HeadersAndExplicitPayloadEvent(JsonView jsonValue) { *this = jsonValue; }

HeadersAndExplicitPayloadEvent& HeadersAndExplicitPayloadEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("header")) {
    m_header = jsonValue.GetString("header");
    m_headerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("payload")) {
    m_payload = jsonValue.GetObject("payload");
    m_payloadHasBeenSet = true;
  }
  return *this;
}

JsonValue HeadersAndExplicitPayloadEvent::Jsonize() const {
  JsonValue payload;

  if (m_headerHasBeenSet) {
    payload.WithString("header", m_header);
  }

  if (m_payloadHasBeenSet) {
    payload.WithObject("payload", m_payload.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

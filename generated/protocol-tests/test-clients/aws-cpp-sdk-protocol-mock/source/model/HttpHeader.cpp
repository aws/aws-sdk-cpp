/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/protocol-mock/model/HttpHeader.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ProtocolMock {
namespace Model {

HttpHeader::HttpHeader(JsonView jsonValue) { *this = jsonValue; }

HttpHeader& HttpHeader::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("val")) {
    m_val = jsonValue.GetString("val");
    m_valHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpHeader::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_valHasBeenSet) {
    payload.WithString("val", m_val);
  }

  return payload;
}

}  // namespace Model
}  // namespace ProtocolMock
}  // namespace Aws

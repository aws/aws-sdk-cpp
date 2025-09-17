/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/TestConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

TestConfig::TestConfig(JsonView jsonValue) { *this = jsonValue; }

TestConfig& TestConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeout")) {
    m_timeout = jsonValue.GetInteger("timeout");
    m_timeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue TestConfig::Jsonize() const {
  JsonValue payload;

  if (m_timeoutHasBeenSet) {
    payload.WithInteger("timeout", m_timeout);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

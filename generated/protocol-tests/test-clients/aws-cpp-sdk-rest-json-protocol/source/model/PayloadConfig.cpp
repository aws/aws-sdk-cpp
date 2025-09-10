/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/PayloadConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

PayloadConfig::PayloadConfig(JsonView jsonValue) { *this = jsonValue; }

PayloadConfig& PayloadConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetInteger("data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue PayloadConfig::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithInteger("data", m_data);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

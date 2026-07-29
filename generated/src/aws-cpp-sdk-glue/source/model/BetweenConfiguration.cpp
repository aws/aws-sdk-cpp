/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/BetweenConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

BetweenConfiguration::BetweenConfiguration(JsonView jsonValue) { *this = jsonValue; }

BetweenConfiguration& BetweenConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LowBoundKey")) {
    m_lowBoundKey = jsonValue.GetString("LowBoundKey");
    m_lowBoundKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HighBoundKey")) {
    m_highBoundKey = jsonValue.GetString("HighBoundKey");
    m_highBoundKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Template")) {
    m_template = jsonValue.GetString("Template");
    m_templateHasBeenSet = true;
  }
  return *this;
}

JsonValue BetweenConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_lowBoundKeyHasBeenSet) {
    payload.WithString("LowBoundKey", m_lowBoundKey);
  }

  if (m_highBoundKeyHasBeenSet) {
    payload.WithString("HighBoundKey", m_highBoundKey);
  }

  if (m_templateHasBeenSet) {
    payload.WithString("Template", m_template);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ProviderPrefix.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ProviderPrefix::ProviderPrefix(JsonView jsonValue) { *this = jsonValue; }

ProviderPrefix& ProviderPrefix::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("strip")) {
    m_strip = jsonValue.GetBool("strip");
    m_stripHasBeenSet = true;
  }
  if (jsonValue.ValueExists("separator")) {
    m_separator = jsonValue.GetString("separator");
    m_separatorHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderPrefix::Jsonize() const {
  JsonValue payload;

  if (m_stripHasBeenSet) {
    payload.WithBool("strip", m_strip);
  }

  if (m_separatorHasBeenSet) {
    payload.WithString("separator", m_separator);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/CacheDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {

CacheDetail::CacheDetail(JsonView jsonValue) { *this = jsonValue; }

CacheDetail& CacheDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ttl")) {
    m_ttl = CacheTTLMapper::GetCacheTTLForName(jsonValue.GetString("ttl"));
    m_ttlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputTokens")) {
    m_inputTokens = jsonValue.GetInteger("inputTokens");
    m_inputTokensHasBeenSet = true;
  }
  return *this;
}

JsonValue CacheDetail::Jsonize() const {
  JsonValue payload;

  if (m_ttlHasBeenSet) {
    payload.WithString("ttl", CacheTTLMapper::GetNameForCacheTTL(m_ttl));
  }

  if (m_inputTokensHasBeenSet) {
    payload.WithInteger("inputTokens", m_inputTokens);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PublishedDateFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

PublishedDateFilter::PublishedDateFilter(JsonView jsonValue) { *this = jsonValue; }

PublishedDateFilter& PublishedDateFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("publishedAfter")) {
    m_publishedAfter = jsonValue.GetString("publishedAfter");
    m_publishedAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publishedBefore")) {
    m_publishedBefore = jsonValue.GetString("publishedBefore");
    m_publishedBeforeHasBeenSet = true;
  }
  return *this;
}

JsonValue PublishedDateFilter::Jsonize() const {
  JsonValue payload;

  if (m_publishedAfterHasBeenSet) {
    payload.WithString("publishedAfter", m_publishedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_publishedBeforeHasBeenSet) {
    payload.WithString("publishedBefore", m_publishedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

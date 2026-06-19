/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/InterceptorPayloadExclusionSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

InterceptorPayloadExclusionSelector::InterceptorPayloadExclusionSelector(JsonView jsonValue) { *this = jsonValue; }

InterceptorPayloadExclusionSelector& InterceptorPayloadExclusionSelector::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("field")) {
    m_field = InterceptorPayloadExclusionMapper::GetInterceptorPayloadExclusionForName(jsonValue.GetString("field"));
    m_fieldHasBeenSet = true;
  }
  return *this;
}

JsonValue InterceptorPayloadExclusionSelector::Jsonize() const {
  JsonValue payload;

  if (m_fieldHasBeenSet) {
    payload.WithString("field", InterceptorPayloadExclusionMapper::GetNameForInterceptorPayloadExclusion(m_field));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

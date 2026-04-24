/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/InsightsContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

InsightsContext::InsightsContext(JsonView jsonValue) { *this = jsonValue; }

InsightsContext& InsightsContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("insightsType")) {
    m_insightsType = InsightsTypeMapper::GetInsightsTypeForName(jsonValue.GetString("insightsType"));
    m_insightsTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightsContext::Jsonize() const {
  JsonValue payload;

  if (m_insightsTypeHasBeenSet) {
    payload.WithString("insightsType", InsightsTypeMapper::GetNameForInsightsType(m_insightsType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

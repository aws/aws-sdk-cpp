/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/AnalyticsUtteranceAttribute.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

AnalyticsUtteranceAttribute::AnalyticsUtteranceAttribute(JsonView jsonValue) { *this = jsonValue; }

AnalyticsUtteranceAttribute& AnalyticsUtteranceAttribute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = AnalyticsUtteranceAttributeNameMapper::GetAnalyticsUtteranceAttributeNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalyticsUtteranceAttribute::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", AnalyticsUtteranceAttributeNameMapper::GetNameForAnalyticsUtteranceAttributeName(m_name));
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws

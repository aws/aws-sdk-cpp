/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/TagCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectContactLens {
namespace Model {

TagCondition::TagCondition(JsonView jsonValue) { *this = jsonValue; }

TagCondition& TagCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TagKey")) {
    m_tagKey = jsonValue.GetString("TagKey");
    m_tagKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TagValue")) {
    m_tagValue = jsonValue.GetString("TagValue");
    m_tagValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComparisonType")) {
    m_comparisonType = TagComparisonTypeMapper::GetTagComparisonTypeForName(jsonValue.GetString("ComparisonType"));
    m_comparisonTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TagCondition::Jsonize() const {
  JsonValue payload;

  if (m_tagKeyHasBeenSet) {
    payload.WithString("TagKey", m_tagKey);
  }

  if (m_tagValueHasBeenSet) {
    payload.WithString("TagValue", m_tagValue);
  }

  if (m_comparisonTypeHasBeenSet) {
    payload.WithString("ComparisonType", TagComparisonTypeMapper::GetNameForTagComparisonType(m_comparisonType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectContactLens
}  // namespace Aws

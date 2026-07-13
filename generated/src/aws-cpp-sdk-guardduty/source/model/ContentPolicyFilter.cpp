/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ContentPolicyFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ContentPolicyFilter::ContentPolicyFilter(JsonView jsonValue) { *this = jsonValue; }

ContentPolicyFilter& ContentPolicyFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = ContentPolicyFilterTypeMapper::GetContentPolicyFilterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = ConfidenceLevelMapper::GetConfidenceLevelForName(jsonValue.GetString("confidence"));
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = ContentPolicyFilterActionMapper::GetContentPolicyFilterActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentPolicyFilter::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", ContentPolicyFilterTypeMapper::GetNameForContentPolicyFilterType(m_type));
  }

  if (m_confidenceHasBeenSet) {
    payload.WithString("confidence", ConfidenceLevelMapper::GetNameForConfidenceLevel(m_confidence));
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", ContentPolicyFilterActionMapper::GetNameForContentPolicyFilterAction(m_action));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws

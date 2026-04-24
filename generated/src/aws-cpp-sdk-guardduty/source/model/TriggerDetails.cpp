/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/TriggerDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

TriggerDetails::TriggerDetails(JsonView jsonValue) { *this = jsonValue; }

TriggerDetails& TriggerDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("guardDutyFindingId")) {
    m_guardDutyFindingId = jsonValue.GetString("guardDutyFindingId");
    m_guardDutyFindingIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerType")) {
    m_triggerType = TriggerTypeMapper::GetTriggerTypeForName(jsonValue.GetString("triggerType"));
    m_triggerTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerDetails::Jsonize() const {
  JsonValue payload;

  if (m_guardDutyFindingIdHasBeenSet) {
    payload.WithString("guardDutyFindingId", m_guardDutyFindingId);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_triggerTypeHasBeenSet) {
    payload.WithString("triggerType", TriggerTypeMapper::GetNameForTriggerType(m_triggerType));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws

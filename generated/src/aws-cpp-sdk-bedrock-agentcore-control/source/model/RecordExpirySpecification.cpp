/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/RecordExpirySpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

RecordExpirySpecification::RecordExpirySpecification(JsonView jsonValue) { *this = jsonValue; }

RecordExpirySpecification& RecordExpirySpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recordExpiryDurationDays")) {
    m_recordExpiryDurationDays = jsonValue.GetInteger("recordExpiryDurationDays");
    m_recordExpiryDurationDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = RecordExpiryActionMapper::GetRecordExpiryActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordExpirySpecification::Jsonize() const {
  JsonValue payload;

  if (m_recordExpiryDurationDaysHasBeenSet) {
    payload.WithInteger("recordExpiryDurationDays", m_recordExpiryDurationDays);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", RecordExpiryActionMapper::GetNameForRecordExpiryAction(m_action));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

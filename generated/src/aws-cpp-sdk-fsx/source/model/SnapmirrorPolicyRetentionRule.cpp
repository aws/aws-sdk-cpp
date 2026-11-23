/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapmirrorPolicyRetentionRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapmirrorPolicyRetentionRule::SnapmirrorPolicyRetentionRule(JsonView jsonValue) { *this = jsonValue; }

SnapmirrorPolicyRetentionRule& SnapmirrorPolicyRetentionRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Label")) {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Count")) {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationSchedule")) {
    m_creationSchedule = jsonValue.GetString("CreationSchedule");
    m_creationScheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapmirrorPolicyRetentionRule::Jsonize() const {
  JsonValue payload;

  if (m_labelHasBeenSet) {
    payload.WithString("Label", m_label);
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("Count", m_count);
  }

  if (m_creationScheduleHasBeenSet) {
    payload.WithString("CreationSchedule", m_creationSchedule);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

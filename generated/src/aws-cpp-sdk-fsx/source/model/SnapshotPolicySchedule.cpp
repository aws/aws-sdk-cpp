/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapshotPolicySchedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapshotPolicySchedule::SnapshotPolicySchedule(JsonView jsonValue) { *this = jsonValue; }

SnapshotPolicySchedule& SnapshotPolicySchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Count")) {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Prefix")) {
    m_prefix = jsonValue.GetString("Prefix");
    m_prefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapmirrorLabel")) {
    m_snapmirrorLabel = jsonValue.GetString("SnapmirrorLabel");
    m_snapmirrorLabelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetentionPeriod")) {
    m_retentionPeriod = jsonValue.GetObject("RetentionPeriod");
    m_retentionPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotPolicySchedule::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("Count", m_count);
  }

  if (m_prefixHasBeenSet) {
    payload.WithString("Prefix", m_prefix);
  }

  if (m_snapmirrorLabelHasBeenSet) {
    payload.WithString("SnapmirrorLabel", m_snapmirrorLabel);
  }

  if (m_retentionPeriodHasBeenSet) {
    payload.WithObject("RetentionPeriod", m_retentionPeriod.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

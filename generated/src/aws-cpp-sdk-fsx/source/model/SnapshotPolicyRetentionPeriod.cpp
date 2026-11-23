/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/SnapshotPolicyRetentionPeriod.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

SnapshotPolicyRetentionPeriod::SnapshotPolicyRetentionPeriod(JsonView jsonValue) { *this = jsonValue; }

SnapshotPolicyRetentionPeriod& SnapshotPolicyRetentionPeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = SnapshotPolicyRetentionPeriodTypeMapper::GetSnapshotPolicyRetentionPeriodTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetInteger("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SnapshotPolicyRetentionPeriod::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", SnapshotPolicyRetentionPeriodTypeMapper::GetNameForSnapshotPolicyRetentionPeriodType(m_type));
  }

  if (m_valueHasBeenSet) {
    payload.WithInteger("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

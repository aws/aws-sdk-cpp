/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/FoundationModelLifecycle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

FoundationModelLifecycle::FoundationModelLifecycle(JsonView jsonValue) { *this = jsonValue; }

FoundationModelLifecycle& FoundationModelLifecycle::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = FoundationModelLifecycleStatusMapper::GetFoundationModelLifecycleStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startOfLifeTime")) {
    m_startOfLifeTime = jsonValue.GetString("startOfLifeTime");
    m_startOfLifeTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endOfLifeTime")) {
    m_endOfLifeTime = jsonValue.GetString("endOfLifeTime");
    m_endOfLifeTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("legacyTime")) {
    m_legacyTime = jsonValue.GetString("legacyTime");
    m_legacyTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publicExtendedAccessTime")) {
    m_publicExtendedAccessTime = jsonValue.GetString("publicExtendedAccessTime");
    m_publicExtendedAccessTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue FoundationModelLifecycle::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", FoundationModelLifecycleStatusMapper::GetNameForFoundationModelLifecycleStatus(m_status));
  }

  if (m_startOfLifeTimeHasBeenSet) {
    payload.WithString("startOfLifeTime", m_startOfLifeTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endOfLifeTimeHasBeenSet) {
    payload.WithString("endOfLifeTime", m_endOfLifeTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_legacyTimeHasBeenSet) {
    payload.WithString("legacyTime", m_legacyTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_publicExtendedAccessTimeHasBeenSet) {
    payload.WithString("publicExtendedAccessTime", m_publicExtendedAccessTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/model/CutoverOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {

CutoverOptions::CutoverOptions(JsonView jsonValue) { *this = jsonValue; }

CutoverOptions& CutoverOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Target")) {
    m_target = CutoverTargetMapper::GetCutoverTargetForName(jsonValue.GetString("Target"));
    m_targetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = CutoverStatusMapper::GetCutoverStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue CutoverOptions::Jsonize() const {
  JsonValue payload;

  if (m_targetHasBeenSet) {
    payload.WithString("Target", CutoverTargetMapper::GetNameForCutoverTarget(m_target));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CutoverStatusMapper::GetNameForCutoverStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws

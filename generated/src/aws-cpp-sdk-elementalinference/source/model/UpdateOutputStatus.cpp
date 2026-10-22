/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/UpdateOutputStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

UpdateOutputStatus::UpdateOutputStatus(JsonView jsonValue) { *this = jsonValue; }

UpdateOutputStatus& UpdateOutputStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputName")) {
    m_outputName = jsonValue.GetString("outputName");
    m_outputNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = OutputStatusMapper::GetOutputStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOutputStatus::Jsonize() const {
  JsonValue payload;

  if (m_outputNameHasBeenSet) {
    payload.WithString("outputName", m_outputName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", OutputStatusMapper::GetNameForOutputStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/WorkflowsMwaaPropertiesInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

WorkflowsMwaaPropertiesInput::WorkflowsMwaaPropertiesInput(JsonView jsonValue) { *this = jsonValue; }

WorkflowsMwaaPropertiesInput& WorkflowsMwaaPropertiesInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mwaaEnvironmentName")) {
    m_mwaaEnvironmentName = jsonValue.GetString("mwaaEnvironmentName");
    m_mwaaEnvironmentNameHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkflowsMwaaPropertiesInput::Jsonize() const {
  JsonValue payload;

  if (m_mwaaEnvironmentNameHasBeenSet) {
    payload.WithString("mwaaEnvironmentName", m_mwaaEnvironmentName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

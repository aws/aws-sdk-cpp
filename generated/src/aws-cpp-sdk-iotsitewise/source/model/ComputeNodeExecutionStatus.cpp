/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ComputeNodeExecutionStatus::ComputeNodeExecutionStatus(JsonView jsonValue) { *this = jsonValue; }

ComputeNodeExecutionStatus& ComputeNodeExecutionStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("state")) {
    m_state = ComputeNodeExecutionStateMapper::GetComputeNodeExecutionStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateDetails")) {
    m_stateDetails = jsonValue.GetObject("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeNodeExecutionStatus::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("state", ComputeNodeExecutionStateMapper::GetNameForComputeNodeExecutionState(m_state));
  }

  if (m_stateDetailsHasBeenSet) {
    payload.WithObject("stateDetails", m_stateDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

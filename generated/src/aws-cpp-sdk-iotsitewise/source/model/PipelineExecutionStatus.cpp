/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/PipelineExecutionStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

PipelineExecutionStatus::PipelineExecutionStatus(JsonView jsonValue) { *this = jsonValue; }

PipelineExecutionStatus& PipelineExecutionStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("state")) {
    m_state = PipelineExecutionStateMapper::GetPipelineExecutionStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateDetails")) {
    m_stateDetails = jsonValue.GetObject("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineExecutionStatus::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("state", PipelineExecutionStateMapper::GetNameForPipelineExecutionState(m_state));
  }

  if (m_stateDetailsHasBeenSet) {
    payload.WithObject("stateDetails", m_stateDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

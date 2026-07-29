/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionState.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionStateDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Current execution status of a compute node within a pipeline
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputeNodeExecutionStatus">AWS
 * API Reference</a></p>
 */
class ComputeNodeExecutionStatus {
 public:
  AWS_IOTSITEWISE_API ComputeNodeExecutionStatus() = default;
  AWS_IOTSITEWISE_API ComputeNodeExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ComputeNodeExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Current state of the compute node execution.</p>
   */
  inline ComputeNodeExecutionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ComputeNodeExecutionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ComputeNodeExecutionStatus& WithState(ComputeNodeExecutionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the compute node's failure. Populated when the
   * compute node has failed.</p>
   */
  inline const ComputeNodeExecutionStateDetails& GetStateDetails() const { return m_stateDetails; }
  inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
  template <typename StateDetailsT = ComputeNodeExecutionStateDetails>
  void SetStateDetails(StateDetailsT&& value) {
    m_stateDetailsHasBeenSet = true;
    m_stateDetails = std::forward<StateDetailsT>(value);
  }
  template <typename StateDetailsT = ComputeNodeExecutionStateDetails>
  ComputeNodeExecutionStatus& WithStateDetails(StateDetailsT&& value) {
    SetStateDetails(std::forward<StateDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  ComputeNodeExecutionState m_state{ComputeNodeExecutionState::NOT_SET};

  ComputeNodeExecutionStateDetails m_stateDetails;
  bool m_stateHasBeenSet = false;
  bool m_stateDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PipelineExecutionState.h>
#include <aws/iotsitewise/model/PipelineExecutionStateDetails.h>

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
 * <p>Current execution status of a pipeline.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PipelineExecutionStatus">AWS
 * API Reference</a></p>
 */
class PipelineExecutionStatus {
 public:
  AWS_IOTSITEWISE_API PipelineExecutionStatus() = default;
  AWS_IOTSITEWISE_API PipelineExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API PipelineExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Current state of the pipeline execution.</p>
   */
  inline PipelineExecutionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(PipelineExecutionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline PipelineExecutionStatus& WithState(PipelineExecutionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the execution outcome. Populated when the
   * execution has terminated (failed or cancelled).</p>
   */
  inline const PipelineExecutionStateDetails& GetStateDetails() const { return m_stateDetails; }
  inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
  template <typename StateDetailsT = PipelineExecutionStateDetails>
  void SetStateDetails(StateDetailsT&& value) {
    m_stateDetailsHasBeenSet = true;
    m_stateDetails = std::forward<StateDetailsT>(value);
  }
  template <typename StateDetailsT = PipelineExecutionStateDetails>
  PipelineExecutionStatus& WithStateDetails(StateDetailsT&& value) {
    SetStateDetails(std::forward<StateDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  PipelineExecutionState m_state{PipelineExecutionState::NOT_SET};

  PipelineExecutionStateDetails m_stateDetails;
  bool m_stateHasBeenSet = false;
  bool m_stateDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

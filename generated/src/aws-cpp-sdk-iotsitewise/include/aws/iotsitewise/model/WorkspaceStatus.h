/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/WorkspaceErrorDetails.h>
#include <aws/iotsitewise/model/WorkspaceState.h>

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
 * <p>Contains information about the current status of a workspace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/WorkspaceStatus">AWS
 * API Reference</a></p>
 */
class WorkspaceStatus {
 public:
  AWS_IOTSITEWISE_API WorkspaceStatus() = default;
  AWS_IOTSITEWISE_API WorkspaceStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API WorkspaceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current state of the workspace.</p>
   */
  inline WorkspaceState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(WorkspaceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline WorkspaceStatus& WithState(WorkspaceState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains associated error information, if any.</p>
   */
  inline const WorkspaceErrorDetails& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = WorkspaceErrorDetails>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = WorkspaceErrorDetails>
  WorkspaceStatus& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  WorkspaceState m_state{WorkspaceState::NOT_SET};

  WorkspaceErrorDetails m_error;
  bool m_stateHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

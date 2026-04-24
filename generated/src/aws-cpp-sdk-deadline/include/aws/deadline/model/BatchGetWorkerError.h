/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/BatchGetWorkerErrorCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The error details for a worker that could not be retrieved in a batch get
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetWorkerError">AWS
 * API Reference</a></p>
 */
class BatchGetWorkerError {
 public:
  AWS_DEADLINE_API BatchGetWorkerError() = default;
  AWS_DEADLINE_API BatchGetWorkerError(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetWorkerError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the worker that could not be retrieved.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetWorkerError& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fleet ID of the worker that could not be retrieved.</p>
   */
  inline const Aws::String& GetFleetId() const { return m_fleetId; }
  inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
  template <typename FleetIdT = Aws::String>
  void SetFleetId(FleetIdT&& value) {
    m_fleetIdHasBeenSet = true;
    m_fleetId = std::forward<FleetIdT>(value);
  }
  template <typename FleetIdT = Aws::String>
  BatchGetWorkerError& WithFleetId(FleetIdT&& value) {
    SetFleetId(std::forward<FleetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The worker ID of the worker that could not be retrieved.</p>
   */
  inline const Aws::String& GetWorkerId() const { return m_workerId; }
  inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
  template <typename WorkerIdT = Aws::String>
  void SetWorkerId(WorkerIdT&& value) {
    m_workerIdHasBeenSet = true;
    m_workerId = std::forward<WorkerIdT>(value);
  }
  template <typename WorkerIdT = Aws::String>
  BatchGetWorkerError& WithWorkerId(WorkerIdT&& value) {
    SetWorkerId(std::forward<WorkerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code.</p>
   */
  inline BatchGetWorkerErrorCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(BatchGetWorkerErrorCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline BatchGetWorkerError& WithCode(BatchGetWorkerErrorCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchGetWorkerError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_fleetId;

  Aws::String m_workerId;

  BatchGetWorkerErrorCode m_code{BatchGetWorkerErrorCode::NOT_SET};

  Aws::String m_message;
  bool m_farmIdHasBeenSet = false;
  bool m_fleetIdHasBeenSet = false;
  bool m_workerIdHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws

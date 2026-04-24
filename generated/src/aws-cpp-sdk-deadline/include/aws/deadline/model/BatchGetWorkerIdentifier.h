/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

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
 * <p>The identifiers for a worker.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetWorkerIdentifier">AWS
 * API Reference</a></p>
 */
class BatchGetWorkerIdentifier {
 public:
  AWS_DEADLINE_API BatchGetWorkerIdentifier() = default;
  AWS_DEADLINE_API BatchGetWorkerIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetWorkerIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the worker.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetWorkerIdentifier& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fleet ID of the worker.</p>
   */
  inline const Aws::String& GetFleetId() const { return m_fleetId; }
  inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
  template <typename FleetIdT = Aws::String>
  void SetFleetId(FleetIdT&& value) {
    m_fleetIdHasBeenSet = true;
    m_fleetId = std::forward<FleetIdT>(value);
  }
  template <typename FleetIdT = Aws::String>
  BatchGetWorkerIdentifier& WithFleetId(FleetIdT&& value) {
    SetFleetId(std::forward<FleetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The worker ID.</p>
   */
  inline const Aws::String& GetWorkerId() const { return m_workerId; }
  inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
  template <typename WorkerIdT = Aws::String>
  void SetWorkerId(WorkerIdT&& value) {
    m_workerIdHasBeenSet = true;
    m_workerId = std::forward<WorkerIdT>(value);
  }
  template <typename WorkerIdT = Aws::String>
  BatchGetWorkerIdentifier& WithWorkerId(WorkerIdT&& value) {
    SetWorkerId(std::forward<WorkerIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_fleetId;

  Aws::String m_workerId;
  bool m_farmIdHasBeenSet = false;
  bool m_fleetIdHasBeenSet = false;
  bool m_workerIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws

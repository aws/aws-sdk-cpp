/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionStatus.h>

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
 * <p>Contains detailed execution information for a compute node within a pipeline
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ComputeNodeExecutionDetails">AWS
 * API Reference</a></p>
 */
class ComputeNodeExecutionDetails {
 public:
  AWS_IOTSITEWISE_API ComputeNodeExecutionDetails() = default;
  AWS_IOTSITEWISE_API ComputeNodeExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ComputeNodeExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the compute node.</p>
   */
  inline const Aws::String& GetComputeNodeName() const { return m_computeNodeName; }
  inline bool ComputeNodeNameHasBeenSet() const { return m_computeNodeNameHasBeenSet; }
  template <typename ComputeNodeNameT = Aws::String>
  void SetComputeNodeName(ComputeNodeNameT&& value) {
    m_computeNodeNameHasBeenSet = true;
    m_computeNodeName = std::forward<ComputeNodeNameT>(value);
  }
  template <typename ComputeNodeNameT = Aws::String>
  ComputeNodeExecutionDetails& WithComputeNodeName(ComputeNodeNameT&& value) {
    SetComputeNodeName(std::forward<ComputeNodeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the task executed for this compute node.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  ComputeNodeExecutionDetails& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the task.</p>
   */
  inline const Aws::String& GetTaskArn() const { return m_taskArn; }
  inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
  template <typename TaskArnT = Aws::String>
  void SetTaskArn(TaskArnT&& value) {
    m_taskArnHasBeenSet = true;
    m_taskArn = std::forward<TaskArnT>(value);
  }
  template <typename TaskArnT = Aws::String>
  ComputeNodeExecutionDetails& WithTaskArn(TaskArnT&& value) {
    SetTaskArn(std::forward<TaskArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The task version that executed for this compute node.</p>
   */
  inline const Aws::String& GetTaskVersion() const { return m_taskVersion; }
  inline bool TaskVersionHasBeenSet() const { return m_taskVersionHasBeenSet; }
  template <typename TaskVersionT = Aws::String>
  void SetTaskVersion(TaskVersionT&& value) {
    m_taskVersionHasBeenSet = true;
    m_taskVersion = std::forward<TaskVersionT>(value);
  }
  template <typename TaskVersionT = Aws::String>
  ComputeNodeExecutionDetails& WithTaskVersion(TaskVersionT&& value) {
    SetTaskVersion(std::forward<TaskVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of compute node names that this node depends on.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDependsOn() const { return m_dependsOn; }
  inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
  template <typename DependsOnT = Aws::Vector<Aws::String>>
  void SetDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn = std::forward<DependsOnT>(value);
  }
  template <typename DependsOnT = Aws::Vector<Aws::String>>
  ComputeNodeExecutionDetails& WithDependsOn(DependsOnT&& value) {
    SetDependsOn(std::forward<DependsOnT>(value));
    return *this;
  }
  template <typename DependsOnT = Aws::String>
  ComputeNodeExecutionDetails& AddDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn.emplace_back(std::forward<DependsOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the compute node.</p>
   */
  inline const ComputeNodeExecutionStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = ComputeNodeExecutionStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = ComputeNodeExecutionStatus>
  ComputeNodeExecutionDetails& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the compute node execution started, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ComputeNodeExecutionDetails& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the compute node execution completed, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ComputeNodeExecutionDetails& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully resolved environment variables used for this compute node
   * execution.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetExecutionEnvironmentVariables() const { return m_executionEnvironmentVariables; }
  inline bool ExecutionEnvironmentVariablesHasBeenSet() const { return m_executionEnvironmentVariablesHasBeenSet; }
  template <typename ExecutionEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetExecutionEnvironmentVariables(ExecutionEnvironmentVariablesT&& value) {
    m_executionEnvironmentVariablesHasBeenSet = true;
    m_executionEnvironmentVariables = std::forward<ExecutionEnvironmentVariablesT>(value);
  }
  template <typename ExecutionEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  ComputeNodeExecutionDetails& WithExecutionEnvironmentVariables(ExecutionEnvironmentVariablesT&& value) {
    SetExecutionEnvironmentVariables(std::forward<ExecutionEnvironmentVariablesT>(value));
    return *this;
  }
  template <typename ExecutionEnvironmentVariablesKeyT = Aws::String, typename ExecutionEnvironmentVariablesValueT = Aws::String>
  ComputeNodeExecutionDetails& AddExecutionEnvironmentVariables(ExecutionEnvironmentVariablesKeyT&& key,
                                                                ExecutionEnvironmentVariablesValueT&& value) {
    m_executionEnvironmentVariablesHasBeenSet = true;
    m_executionEnvironmentVariables.emplace(std::forward<ExecutionEnvironmentVariablesKeyT>(key),
                                            std::forward<ExecutionEnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_computeNodeName;

  Aws::String m_taskName;

  Aws::String m_taskArn;

  Aws::String m_taskVersion;

  Aws::Vector<Aws::String> m_dependsOn;

  ComputeNodeExecutionStatus m_status;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Map<Aws::String, Aws::String> m_executionEnvironmentVariables;
  bool m_computeNodeNameHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_taskArnHasBeenSet = false;
  bool m_taskVersionHasBeenSet = false;
  bool m_dependsOnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_executionEnvironmentVariablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

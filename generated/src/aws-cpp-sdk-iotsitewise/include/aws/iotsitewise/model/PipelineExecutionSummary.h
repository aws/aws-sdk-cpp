/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/PipelineExecutionStatus.h>

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
 * <p>Contains summary information about a pipeline execution.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PipelineExecutionSummary">AWS
 * API Reference</a></p>
 */
class PipelineExecutionSummary {
 public:
  AWS_IOTSITEWISE_API PipelineExecutionSummary() = default;
  AWS_IOTSITEWISE_API PipelineExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API PipelineExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the pipeline execution.</p>
   */
  inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
  inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
  template <typename PipelineExecutionIdT = Aws::String>
  void SetPipelineExecutionId(PipelineExecutionIdT&& value) {
    m_pipelineExecutionIdHasBeenSet = true;
    m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value);
  }
  template <typename PipelineExecutionIdT = Aws::String>
  PipelineExecutionSummary& WithPipelineExecutionId(PipelineExecutionIdT&& value) {
    SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pipeline version this execution ran against.</p>
   */
  inline const Aws::String& GetPipelineVersion() const { return m_pipelineVersion; }
  inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
  template <typename PipelineVersionT = Aws::String>
  void SetPipelineVersion(PipelineVersionT&& value) {
    m_pipelineVersionHasBeenSet = true;
    m_pipelineVersion = std::forward<PipelineVersionT>(value);
  }
  template <typename PipelineVersionT = Aws::String>
  PipelineExecutionSummary& WithPipelineVersion(PipelineVersionT&& value) {
    SetPipelineVersion(std::forward<PipelineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current execution status of the pipeline.</p>
   */
  inline const PipelineExecutionStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = PipelineExecutionStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = PipelineExecutionStatus>
  PipelineExecutionSummary& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scheduling priority for the execution. When not specified, defaults to lowest
   * priority.</p>
   */
  inline int GetExecutionPriority() const { return m_executionPriority; }
  inline bool ExecutionPriorityHasBeenSet() const { return m_executionPriorityHasBeenSet; }
  inline void SetExecutionPriority(int value) {
    m_executionPriorityHasBeenSet = true;
    m_executionPriority = value;
  }
  inline PipelineExecutionSummary& WithExecutionPriority(int value) {
    SetExecutionPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the pipeline execution started, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  PipelineExecutionSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the pipeline execution completed, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  PipelineExecutionSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_pipelineExecutionId;

  Aws::String m_pipelineVersion;

  PipelineExecutionStatus m_status;

  int m_executionPriority{0};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_pipelineExecutionIdHasBeenSet = false;
  bool m_pipelineVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_executionPriorityHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

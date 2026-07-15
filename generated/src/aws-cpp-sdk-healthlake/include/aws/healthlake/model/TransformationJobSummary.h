/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/SourceFormat.h>
#include <aws/healthlake/model/TransformationJobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Contains summary information about a data transformation job. To retrieve
 * full job details, call <code>DescribeDataTransformationJob</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TransformationJobSummary">AWS
 * API Reference</a></p>
 */
class TransformationJobSummary {
 public:
  AWS_HEALTHLAKE_API TransformationJobSummary() = default;
  AWS_HEALTHLAKE_API TransformationJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API TransformationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  TransformationJobSummary& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the job.</p>
   */
  inline TransformationJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(TransformationJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline TransformationJobSummary& WithJobStatus(TransformationJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
  inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
  template <typename SubmitTimeT = Aws::Utils::DateTime>
  void SetSubmitTime(SubmitTimeT&& value) {
    m_submitTimeHasBeenSet = true;
    m_submitTime = std::forward<SubmitTimeT>(value);
  }
  template <typename SubmitTimeT = Aws::Utils::DateTime>
  TransformationJobSummary& WithSubmitTime(SubmitTimeT&& value) {
    SetSubmitTime(std::forward<SubmitTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the job.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  TransformationJobSummary& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job completed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  TransformationJobSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source data format for this job.</p>
   */
  inline SourceFormat GetSourceFormat() const { return m_sourceFormat; }
  inline bool SourceFormatHasBeenSet() const { return m_sourceFormatHasBeenSet; }
  inline void SetSourceFormat(SourceFormat value) {
    m_sourceFormatHasBeenSet = true;
    m_sourceFormat = value;
  }
  inline TransformationJobSummary& WithSourceFormat(SourceFormat value) {
    SetSourceFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  TransformationJobStatus m_jobStatus{TransformationJobStatus::NOT_SET};

  Aws::Utils::DateTime m_submitTime{};

  Aws::String m_jobName;

  Aws::Utils::DateTime m_endTime{};

  SourceFormat m_sourceFormat{SourceFormat::NOT_SET};
  bool m_jobIdHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_submitTimeHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_sourceFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws

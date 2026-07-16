/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/TransformationInputDataConfig.h>
#include <aws/healthlake/model/TransformationJobProgressReport.h>
#include <aws/healthlake/model/TransformationJobStatus.h>
#include <aws/healthlake/model/TransformationOutputDataConfig.h>

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
 * <p>Contains the properties of a data transformation job, including its status,
 * configuration, and progress information. You retrieve this structure by calling
 * <code>DescribeDataTransformationJob</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TransformationJobProperties">AWS
 * API Reference</a></p>
 */
class TransformationJobProperties {
 public:
  AWS_HEALTHLAKE_API TransformationJobProperties() = default;
  AWS_HEALTHLAKE_API TransformationJobProperties(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API TransformationJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the data transformation job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  TransformationJobProperties& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the data transformation job.</p>
   */
  inline TransformationJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(TransformationJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline TransformationJobProperties& WithJobStatus(TransformationJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location and format of the source files for this job.</p>
   */
  inline const TransformationInputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
  inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
  template <typename InputDataConfigT = TransformationInputDataConfig>
  void SetInputDataConfig(InputDataConfigT&& value) {
    m_inputDataConfigHasBeenSet = true;
    m_inputDataConfig = std::forward<InputDataConfigT>(value);
  }
  template <typename InputDataConfigT = TransformationInputDataConfig>
  TransformationJobProperties& WithInputDataConfig(InputDataConfigT&& value) {
    SetInputDataConfig(std::forward<InputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location and encryption configuration for the converted
   * output.</p>
   */
  inline const TransformationOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
  inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
  template <typename OutputDataConfigT = TransformationOutputDataConfig>
  void SetOutputDataConfig(OutputDataConfigT&& value) {
    m_outputDataConfigHasBeenSet = true;
    m_outputDataConfig = std::forward<OutputDataConfigT>(value);
  }
  template <typename OutputDataConfigT = TransformationOutputDataConfig>
  TransformationJobProperties& WithOutputDataConfig(OutputDataConfigT&& value) {
    SetOutputDataConfig(std::forward<OutputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
   * (IAM) role that grants AWS HealthLake access to the specified Amazon S3
   * locations. AWS HealthLake assumes this role to read input files and write output
   * files.</p>
   */
  inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
  inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
  template <typename DataAccessRoleArnT = Aws::String>
  void SetDataAccessRoleArn(DataAccessRoleArnT&& value) {
    m_dataAccessRoleArnHasBeenSet = true;
    m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value);
  }
  template <typename DataAccessRoleArnT = Aws::String>
  TransformationJobProperties& WithDataAccessRoleArn(DataAccessRoleArnT&& value) {
    SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value));
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
  TransformationJobProperties& WithSubmitTime(SubmitTimeT&& value) {
    SetSubmitTime(std::forward<SubmitTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the data transformation job.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  TransformationJobProperties& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the data transformation profile used for this
   * job.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  TransformationJobProperties& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the data transformation profile used for this job.</p>
   */
  inline const Aws::String& GetProfileName() const { return m_profileName; }
  inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
  template <typename ProfileNameT = Aws::String>
  void SetProfileName(ProfileNameT&& value) {
    m_profileNameHasBeenSet = true;
    m_profileName = std::forward<ProfileNameT>(value);
  }
  template <typename ProfileNameT = Aws::String>
  TransformationJobProperties& WithProfileName(ProfileNameT&& value) {
    SetProfileName(std::forward<ProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the data transformation profile used for this job.</p>
   */
  inline int GetProfileVersion() const { return m_profileVersion; }
  inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
  inline void SetProfileVersion(int value) {
    m_profileVersionHasBeenSet = true;
    m_profileVersion = value;
  }
  inline TransformationJobProperties& WithProfileVersion(int value) {
    SetProfileVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the job completed or failed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  TransformationJobProperties& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether drift detection is enabled for this job. When enabled, AWS
   * HealthLake writes a drift report to the output Amazon S3 location alongside the
   * converted files.</p>
   */
  inline bool GetDriftDetectionEnabled() const { return m_driftDetectionEnabled; }
  inline bool DriftDetectionEnabledHasBeenSet() const { return m_driftDetectionEnabledHasBeenSet; }
  inline void SetDriftDetectionEnabled(bool value) {
    m_driftDetectionEnabledHasBeenSet = true;
    m_driftDetectionEnabled = value;
  }
  inline TransformationJobProperties& WithDriftDetectionEnabled(bool value) {
    SetDriftDetectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether FHIR R4 Provenance resource generation is enabled for this
   * transformation job. When provenance is enabled, the service also generates
   * related DocumentReference and Device resources.</p>
   */
  inline bool GetProvenanceEnabled() const { return m_provenanceEnabled; }
  inline bool ProvenanceEnabledHasBeenSet() const { return m_provenanceEnabledHasBeenSet; }
  inline void SetProvenanceEnabled(bool value) {
    m_provenanceEnabledHasBeenSet = true;
    m_provenanceEnabled = value;
  }
  inline TransformationJobProperties& WithProvenanceEnabled(bool value) {
    SetProvenanceEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An informational message about the job, such as an error description if the
   * job failed.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  TransformationJobProperties& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress report for the data transformation job, including counts of
   * files processed and resources generated.</p>
   */
  inline const TransformationJobProgressReport& GetJobProgressReport() const { return m_jobProgressReport; }
  inline bool JobProgressReportHasBeenSet() const { return m_jobProgressReportHasBeenSet; }
  template <typename JobProgressReportT = TransformationJobProgressReport>
  void SetJobProgressReport(JobProgressReportT&& value) {
    m_jobProgressReportHasBeenSet = true;
    m_jobProgressReport = std::forward<JobProgressReportT>(value);
  }
  template <typename JobProgressReportT = TransformationJobProgressReport>
  TransformationJobProperties& WithJobProgressReport(JobProgressReportT&& value) {
    SetJobProgressReport(std::forward<JobProgressReportT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  TransformationJobStatus m_jobStatus{TransformationJobStatus::NOT_SET};

  TransformationInputDataConfig m_inputDataConfig;

  TransformationOutputDataConfig m_outputDataConfig;

  Aws::String m_dataAccessRoleArn;

  Aws::Utils::DateTime m_submitTime{};

  Aws::String m_jobName;

  Aws::String m_profileId;

  Aws::String m_profileName;

  int m_profileVersion{0};

  Aws::Utils::DateTime m_endTime{};

  bool m_driftDetectionEnabled{false};

  bool m_provenanceEnabled{false};

  Aws::String m_message;

  TransformationJobProgressReport m_jobProgressReport;
  bool m_jobIdHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_inputDataConfigHasBeenSet = false;
  bool m_outputDataConfigHasBeenSet = false;
  bool m_dataAccessRoleArnHasBeenSet = false;
  bool m_submitTimeHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_profileNameHasBeenSet = false;
  bool m_profileVersionHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_driftDetectionEnabledHasBeenSet = false;
  bool m_provenanceEnabledHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_jobProgressReportHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws

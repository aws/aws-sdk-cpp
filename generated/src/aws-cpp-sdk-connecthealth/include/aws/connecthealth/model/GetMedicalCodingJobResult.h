/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/JobStatus.h>
#include <aws/connecthealth/model/MedicalCodesEncounterContext.h>
#include <aws/connecthealth/model/MedicalCodesPatientContext.h>
#include <aws/connecthealth/model/MedicalCodingOutput.h>
#include <aws/connecthealth/model/MedicalCodingOutputDataConfig.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {
class GetMedicalCodingJobResult {
 public:
  AWS_CONNECTHEALTH_API GetMedicalCodingJobResult() = default;
  AWS_CONNECTHEALTH_API GetMedicalCodingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTHEALTH_API GetMedicalCodingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the medical coding job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetMedicalCodingJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the medical coding job.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  GetMedicalCodingJobResult& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the medical coding job.</p>
   */
  inline JobStatus GetJobStatus() const { return m_jobStatus; }
  inline void SetJobStatus(JobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline GetMedicalCodingJobResult& WithJobStatus(JobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the medical coding job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetMedicalCodingJobResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the medical coding job was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
  template <typename UpdatedTimeT = Aws::Utils::DateTime>
  void SetUpdatedTime(UpdatedTimeT&& value) {
    m_updatedTimeHasBeenSet = true;
    m_updatedTime = std::forward<UpdatedTimeT>(value);
  }
  template <typename UpdatedTimeT = Aws::Utils::DateTime>
  GetMedicalCodingJobResult& WithUpdatedTime(UpdatedTimeT&& value) {
    SetUpdatedTime(std::forward<UpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The clinical text that the medical coding job codes.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  GetMedicalCodingJobResult& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patient context that you provided for the job.</p>
   */
  inline const MedicalCodesPatientContext& GetPatientContext() const { return m_patientContext; }
  template <typename PatientContextT = MedicalCodesPatientContext>
  void SetPatientContext(PatientContextT&& value) {
    m_patientContextHasBeenSet = true;
    m_patientContext = std::forward<PatientContextT>(value);
  }
  template <typename PatientContextT = MedicalCodesPatientContext>
  GetMedicalCodingJobResult& WithPatientContext(PatientContextT&& value) {
    SetPatientContext(std::forward<PatientContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encounter context that you provided for the job.</p>
   */
  inline const MedicalCodesEncounterContext& GetEncounterContext() const { return m_encounterContext; }
  template <typename EncounterContextT = MedicalCodesEncounterContext>
  void SetEncounterContext(EncounterContextT&& value) {
    m_encounterContextHasBeenSet = true;
    m_encounterContext = std::forward<EncounterContextT>(value);
  }
  template <typename EncounterContextT = MedicalCodesEncounterContext>
  GetMedicalCodingJobResult& WithEncounterContext(EncounterContextT&& value) {
    SetEncounterContext(std::forward<EncounterContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration that you provided for the job.</p>
   */
  inline const MedicalCodingOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
  template <typename OutputDataConfigT = MedicalCodingOutputDataConfig>
  void SetOutputDataConfig(OutputDataConfigT&& value) {
    m_outputDataConfigHasBeenSet = true;
    m_outputDataConfig = std::forward<OutputDataConfigT>(value);
  }
  template <typename OutputDataConfigT = MedicalCodingOutputDataConfig>
  GetMedicalCodingJobResult& WithOutputDataConfig(OutputDataConfigT&& value) {
    SetOutputDataConfig(std::forward<OutputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the dataset that the job codes against. Not returned
   * if the job uses the general medical coding knowledge base.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  GetMedicalCodingJobResult& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the job results. Returned when the job succeeds.</p>
   */
  inline const MedicalCodingOutput& GetMedicalCodingOutput() const { return m_medicalCodingOutput; }
  template <typename MedicalCodingOutputT = MedicalCodingOutput>
  void SetMedicalCodingOutput(MedicalCodingOutputT&& value) {
    m_medicalCodingOutputHasBeenSet = true;
    m_medicalCodingOutput = std::forward<MedicalCodingOutputT>(value);
  }
  template <typename MedicalCodingOutputT = MedicalCodingOutput>
  GetMedicalCodingJobResult& WithMedicalCodingOutput(MedicalCodingOutputT&& value) {
    SetMedicalCodingOutput(std::forward<MedicalCodingOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the status of the job, such as the reason that it failed.</p>
   */
  inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
  template <typename StatusDetailsT = Aws::String>
  void SetStatusDetails(StatusDetailsT&& value) {
    m_statusDetailsHasBeenSet = true;
    m_statusDetails = std::forward<StatusDetailsT>(value);
  }
  template <typename StatusDetailsT = Aws::String>
  GetMedicalCodingJobResult& WithStatusDetails(StatusDetailsT&& value) {
    SetStatusDetails(std::forward<StatusDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetMedicalCodingJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobId;

  Aws::String m_jobArn;

  JobStatus m_jobStatus{JobStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_updatedTime{};

  Aws::String m_text;

  MedicalCodesPatientContext m_patientContext;

  MedicalCodesEncounterContext m_encounterContext;

  MedicalCodingOutputDataConfig m_outputDataConfig;

  Aws::String m_datasetId;

  MedicalCodingOutput m_medicalCodingOutput;

  Aws::String m_statusDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobIdHasBeenSet = false;
  bool m_jobArnHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_updatedTimeHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_patientContextHasBeenSet = false;
  bool m_encounterContextHasBeenSet = false;
  bool m_outputDataConfigHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_medicalCodingOutputHasBeenSet = false;
  bool m_statusDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

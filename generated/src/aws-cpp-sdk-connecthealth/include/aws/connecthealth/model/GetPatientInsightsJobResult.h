/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/InputDataConfig.h>
#include <aws/connecthealth/model/InsightsContext.h>
#include <aws/connecthealth/model/InsightsOutput.h>
#include <aws/connecthealth/model/JobStatus.h>
#include <aws/connecthealth/model/OutputDataConfig.h>
#include <aws/connecthealth/model/PatientInsightsEncounterContext.h>
#include <aws/connecthealth/model/PatientInsightsPatientContext.h>
#include <aws/connecthealth/model/UserContext.h>
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
class GetPatientInsightsJobResult {
 public:
  AWS_CONNECTHEALTH_API GetPatientInsightsJobResult() = default;
  AWS_CONNECTHEALTH_API GetPatientInsightsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECTHEALTH_API GetPatientInsightsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetPatientInsightsJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  GetPatientInsightsJobResult& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline JobStatus GetJobStatus() const { return m_jobStatus; }
  inline void SetJobStatus(JobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline GetPatientInsightsJobResult& WithJobStatus(JobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Date and time the patient insights job was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  GetPatientInsightsJobResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Date and time the patient insights job was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
  template <typename UpdatedTimeT = Aws::Utils::DateTime>
  void SetUpdatedTime(UpdatedTimeT&& value) {
    m_updatedTimeHasBeenSet = true;
    m_updatedTime = std::forward<UpdatedTimeT>(value);
  }
  template <typename UpdatedTimeT = Aws::Utils::DateTime>
  GetPatientInsightsJobResult& WithUpdatedTime(UpdatedTimeT&& value) {
    SetUpdatedTime(std::forward<UpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const InsightsOutput& GetInsightsOutput() const { return m_insightsOutput; }
  template <typename InsightsOutputT = InsightsOutput>
  void SetInsightsOutput(InsightsOutputT&& value) {
    m_insightsOutputHasBeenSet = true;
    m_insightsOutput = std::forward<InsightsOutputT>(value);
  }
  template <typename InsightsOutputT = InsightsOutput>
  GetPatientInsightsJobResult& WithInsightsOutput(InsightsOutputT&& value) {
    SetInsightsOutput(std::forward<InsightsOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the status of a job.</p>
   */
  inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
  template <typename StatusDetailsT = Aws::String>
  void SetStatusDetails(StatusDetailsT&& value) {
    m_statusDetailsHasBeenSet = true;
    m_statusDetails = std::forward<StatusDetailsT>(value);
  }
  template <typename StatusDetailsT = Aws::String>
  GetPatientInsightsJobResult& WithStatusDetails(StatusDetailsT&& value) {
    SetStatusDetails(std::forward<StatusDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const PatientInsightsPatientContext& GetPatientContext() const { return m_patientContext; }
  template <typename PatientContextT = PatientInsightsPatientContext>
  void SetPatientContext(PatientContextT&& value) {
    m_patientContextHasBeenSet = true;
    m_patientContext = std::forward<PatientContextT>(value);
  }
  template <typename PatientContextT = PatientInsightsPatientContext>
  GetPatientInsightsJobResult& WithPatientContext(PatientContextT&& value) {
    SetPatientContext(std::forward<PatientContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const InsightsContext& GetInsightsContext() const { return m_insightsContext; }
  template <typename InsightsContextT = InsightsContext>
  void SetInsightsContext(InsightsContextT&& value) {
    m_insightsContextHasBeenSet = true;
    m_insightsContext = std::forward<InsightsContextT>(value);
  }
  template <typename InsightsContextT = InsightsContext>
  GetPatientInsightsJobResult& WithInsightsContext(InsightsContextT&& value) {
    SetInsightsContext(std::forward<InsightsContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const PatientInsightsEncounterContext& GetEncounterContext() const { return m_encounterContext; }
  template <typename EncounterContextT = PatientInsightsEncounterContext>
  void SetEncounterContext(EncounterContextT&& value) {
    m_encounterContextHasBeenSet = true;
    m_encounterContext = std::forward<EncounterContextT>(value);
  }
  template <typename EncounterContextT = PatientInsightsEncounterContext>
  GetPatientInsightsJobResult& WithEncounterContext(EncounterContextT&& value) {
    SetEncounterContext(std::forward<EncounterContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const UserContext& GetUserContext() const { return m_userContext; }
  template <typename UserContextT = UserContext>
  void SetUserContext(UserContextT&& value) {
    m_userContextHasBeenSet = true;
    m_userContext = std::forward<UserContextT>(value);
  }
  template <typename UserContextT = UserContext>
  GetPatientInsightsJobResult& WithUserContext(UserContextT&& value) {
    SetUserContext(std::forward<UserContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
  template <typename InputDataConfigT = InputDataConfig>
  void SetInputDataConfig(InputDataConfigT&& value) {
    m_inputDataConfigHasBeenSet = true;
    m_inputDataConfig = std::forward<InputDataConfigT>(value);
  }
  template <typename InputDataConfigT = InputDataConfig>
  GetPatientInsightsJobResult& WithInputDataConfig(InputDataConfigT&& value) {
    SetInputDataConfig(std::forward<InputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
  template <typename OutputDataConfigT = OutputDataConfig>
  void SetOutputDataConfig(OutputDataConfigT&& value) {
    m_outputDataConfigHasBeenSet = true;
    m_outputDataConfig = std::forward<OutputDataConfigT>(value);
  }
  template <typename OutputDataConfigT = OutputDataConfig>
  GetPatientInsightsJobResult& WithOutputDataConfig(OutputDataConfigT&& value) {
    SetOutputDataConfig(std::forward<OutputDataConfigT>(value));
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
  GetPatientInsightsJobResult& WithRequestId(RequestIdT&& value) {
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

  InsightsOutput m_insightsOutput;

  Aws::String m_statusDetails;

  PatientInsightsPatientContext m_patientContext;

  InsightsContext m_insightsContext;

  PatientInsightsEncounterContext m_encounterContext;

  UserContext m_userContext;

  InputDataConfig m_inputDataConfig;

  OutputDataConfig m_outputDataConfig;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobIdHasBeenSet = false;
  bool m_jobArnHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_updatedTimeHasBeenSet = false;
  bool m_insightsOutputHasBeenSet = false;
  bool m_statusDetailsHasBeenSet = false;
  bool m_patientContextHasBeenSet = false;
  bool m_insightsContextHasBeenSet = false;
  bool m_encounterContextHasBeenSet = false;
  bool m_userContextHasBeenSet = false;
  bool m_inputDataConfigHasBeenSet = false;
  bool m_outputDataConfigHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws

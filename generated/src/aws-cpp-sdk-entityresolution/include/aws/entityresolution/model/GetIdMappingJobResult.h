﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ErrorDetails.h>
#include <aws/entityresolution/model/IdMappingJobMetrics.h>
#include <aws/entityresolution/model/IdMappingJobOutputSource.h>
#include <aws/entityresolution/model/JobStatus.h>
#include <aws/entityresolution/model/JobType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace EntityResolution {
namespace Model {
class GetIdMappingJobResult {
 public:
  AWS_ENTITYRESOLUTION_API GetIdMappingJobResult() = default;
  AWS_ENTITYRESOLUTION_API GetIdMappingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ENTITYRESOLUTION_API GetIdMappingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetIdMappingJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the job.</p>
   */
  inline JobStatus GetStatus() const { return m_status; }
  inline void SetStatus(JobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetIdMappingJobResult& WithStatus(JobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the job was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetIdMappingJobResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the job has finished.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetIdMappingJobResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metrics associated with the execution, specifically total records processed,
   * unique IDs generated, and records the execution skipped.</p>
   */
  inline const IdMappingJobMetrics& GetMetrics() const { return m_metrics; }
  template <typename MetricsT = IdMappingJobMetrics>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = IdMappingJobMetrics>
  GetIdMappingJobResult& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
  template <typename ErrorDetailsT = ErrorDetails>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = ErrorDetails>
  GetIdMappingJobResult& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>OutputSource</code> objects.</p>
   */
  inline const Aws::Vector<IdMappingJobOutputSource>& GetOutputSourceConfig() const { return m_outputSourceConfig; }
  template <typename OutputSourceConfigT = Aws::Vector<IdMappingJobOutputSource>>
  void SetOutputSourceConfig(OutputSourceConfigT&& value) {
    m_outputSourceConfigHasBeenSet = true;
    m_outputSourceConfig = std::forward<OutputSourceConfigT>(value);
  }
  template <typename OutputSourceConfigT = Aws::Vector<IdMappingJobOutputSource>>
  GetIdMappingJobResult& WithOutputSourceConfig(OutputSourceConfigT&& value) {
    SetOutputSourceConfig(std::forward<OutputSourceConfigT>(value));
    return *this;
  }
  template <typename OutputSourceConfigT = IdMappingJobOutputSource>
  GetIdMappingJobResult& AddOutputSourceConfig(OutputSourceConfigT&& value) {
    m_outputSourceConfigHasBeenSet = true;
    m_outputSourceConfig.emplace_back(std::forward<OutputSourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The job type of the ID mapping job.</p> <p>A value of
   * <code>INCREMENTAL</code> indicates that only new or changed data was processed
   * since the last job run. This is the default job type if the workflow was created
   * with an <code>incrementalRunConfig</code>.</p> <p>A value of <code>BATCH</code>
   * indicates that all data was processed from the input source, regardless of
   * previous job runs. This is the default job type if the workflow wasn't created
   * with an <code>incrementalRunConfig</code>.</p> <p>A value of
   * <code>DELETE_ONLY</code> indicates that only deletion requests from
   * <code>BatchDeleteUniqueIds</code> were processed.</p>
   */
  inline JobType GetJobType() const { return m_jobType; }
  inline void SetJobType(JobType value) {
    m_jobTypeHasBeenSet = true;
    m_jobType = value;
  }
  inline GetIdMappingJobResult& WithJobType(JobType value) {
    SetJobType(value);
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
  GetIdMappingJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;
  bool m_jobIdHasBeenSet = false;

  JobStatus m_status{JobStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

  IdMappingJobMetrics m_metrics;
  bool m_metricsHasBeenSet = false;

  ErrorDetails m_errorDetails;
  bool m_errorDetailsHasBeenSet = false;

  Aws::Vector<IdMappingJobOutputSource> m_outputSourceConfig;
  bool m_outputSourceConfigHasBeenSet = false;

  JobType m_jobType{JobType::NOT_SET};
  bool m_jobTypeHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws

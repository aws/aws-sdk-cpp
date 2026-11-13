/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AnalysisType.h>
#include <aws/glue/model/Status.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class GetJobUpgradeAnalysisResult {
 public:
  AWS_GLUE_API GetJobUpgradeAnalysisResult() = default;
  AWS_GLUE_API GetJobUpgradeAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetJobUpgradeAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the job associated with this analysis.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  GetJobUpgradeAnalysisResult& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the upgrade analysis.</p>
   */
  inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
  template <typename AnalysisIdT = Aws::String>
  void SetAnalysisId(AnalysisIdT&& value) {
    m_analysisIdHasBeenSet = true;
    m_analysisId = std::forward<AnalysisIdT>(value);
  }
  template <typename AnalysisIdT = Aws::String>
  GetJobUpgradeAnalysisResult& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the analysis.</p>
   */
  inline Status GetStatus() const { return m_status; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetJobUpgradeAnalysisResult& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue version the job was running before the upgrade, for example
   * <code>4.0</code>.</p>
   */
  inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
  template <typename SourceVersionT = Aws::String>
  void SetSourceVersion(SourceVersionT&& value) {
    m_sourceVersionHasBeenSet = true;
    m_sourceVersion = std::forward<SourceVersionT>(value);
  }
  template <typename SourceVersionT = Aws::String>
  GetJobUpgradeAnalysisResult& WithSourceVersion(SourceVersionT&& value) {
    SetSourceVersion(std::forward<SourceVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Glue version the job will be upgraded to, for example
   * <code>6.0</code>.</p>
   */
  inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
  template <typename TargetVersionT = Aws::String>
  void SetTargetVersion(TargetVersionT&& value) {
    m_targetVersionHasBeenSet = true;
    m_targetVersion = std::forward<TargetVersionT>(value);
  }
  template <typename TargetVersionT = Aws::String>
  GetJobUpgradeAnalysisResult& WithTargetVersion(TargetVersionT&& value) {
    SetTargetVersion(std::forward<TargetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of upgrade analysis. For auto-upgrade jobs, this value is
   * <code>AUTO_UPGRADE</code>.</p>
   */
  inline AnalysisType GetAnalysisType() const { return m_analysisType; }
  inline void SetAnalysisType(AnalysisType value) {
    m_analysisTypeHasBeenSet = true;
    m_analysisType = value;
  }
  inline GetJobUpgradeAnalysisResult& WithAnalysisType(AnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A presigned URL for downloading the auto upgrade evaluation summary for the
   * analysis. Available once the analysis reaches a terminal status
   * (<code>SUCCEEDED</code> or <code>FAILED</code>). The URL expires after 1 hour.
   * Calling <code>GetJobUpgradeAnalysis</code> again returns a new URL.</p>
   */
  inline const Aws::String& GetAutoUpgradeEvaluationSummary() const { return m_autoUpgradeEvaluationSummary; }
  template <typename AutoUpgradeEvaluationSummaryT = Aws::String>
  void SetAutoUpgradeEvaluationSummary(AutoUpgradeEvaluationSummaryT&& value) {
    m_autoUpgradeEvaluationSummaryHasBeenSet = true;
    m_autoUpgradeEvaluationSummary = std::forward<AutoUpgradeEvaluationSummaryT>(value);
  }
  template <typename AutoUpgradeEvaluationSummaryT = Aws::String>
  GetJobUpgradeAnalysisResult& WithAutoUpgradeEvaluationSummary(AutoUpgradeEvaluationSummaryT&& value) {
    SetAutoUpgradeEvaluationSummary(std::forward<AutoUpgradeEvaluationSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the analysis did not complete.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetJobUpgradeAnalysisResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A presigned URL for downloading the auto upgrade eligibility summary, which
   * lists the compatibility results for the job. Available once the analysis reaches
   * <code>WAITING_FOR_CONSENT</code> and in all subsequent states. The URL expires
   * after 1 hour. Calling <code>GetJobUpgradeAnalysis</code> again returns a new
   * URL.</p>
   */
  inline const Aws::String& GetAutoUpgradeEligibilitySummary() const { return m_autoUpgradeEligibilitySummary; }
  template <typename AutoUpgradeEligibilitySummaryT = Aws::String>
  void SetAutoUpgradeEligibilitySummary(AutoUpgradeEligibilitySummaryT&& value) {
    m_autoUpgradeEligibilitySummaryHasBeenSet = true;
    m_autoUpgradeEligibilitySummary = std::forward<AutoUpgradeEligibilitySummaryT>(value);
  }
  template <typename AutoUpgradeEligibilitySummaryT = Aws::String>
  GetJobUpgradeAnalysisResult& WithAutoUpgradeEligibilitySummary(AutoUpgradeEligibilitySummaryT&& value) {
    SetAutoUpgradeEligibilitySummary(std::forward<AutoUpgradeEligibilitySummaryT>(value));
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
  GetJobUpgradeAnalysisResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobName;

  Aws::String m_analysisId;

  Status m_status{Status::NOT_SET};

  Aws::String m_sourceVersion;

  Aws::String m_targetVersion;

  AnalysisType m_analysisType{AnalysisType::NOT_SET};

  Aws::String m_autoUpgradeEvaluationSummary;

  Aws::String m_errorMessage;

  Aws::String m_autoUpgradeEligibilitySummary;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobNameHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_sourceVersionHasBeenSet = false;
  bool m_targetVersionHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_autoUpgradeEvaluationSummaryHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_autoUpgradeEligibilitySummaryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/PolicyPreviewJobDetails.h>
#include <aws/accessanalyzer/model/PolicyPreviewJobParameters.h>
#include <aws/core/http/HttpResponse.h>
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
namespace AccessAnalyzer {
namespace Model {
class GetPolicyPreviewJobResult {
 public:
  AWS_ACCESSANALYZER_API GetPolicyPreviewJobResult() = default;
  AWS_ACCESSANALYZER_API GetPolicyPreviewJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCESSANALYZER_API GetPolicyPreviewJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the policy preview job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetPolicyPreviewJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original parameters used to create the policy preview job, including the
   * analysis time window and policy configurations.</p>
   */
  inline const PolicyPreviewJobParameters& GetJobParameters() const { return m_jobParameters; }
  template <typename JobParametersT = PolicyPreviewJobParameters>
  void SetJobParameters(JobParametersT&& value) {
    m_jobParametersHasBeenSet = true;
    m_jobParameters = std::forward<JobParametersT>(value);
  }
  template <typename JobParametersT = PolicyPreviewJobParameters>
  GetPolicyPreviewJobResult& WithJobParameters(JobParametersT&& value) {
    SetJobParameters(std::forward<JobParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the job execution, including current status, submission time,
   * start time, completion time, and any errors that occurred.</p>
   */
  inline const PolicyPreviewJobDetails& GetJobDetails() const { return m_jobDetails; }
  template <typename JobDetailsT = PolicyPreviewJobDetails>
  void SetJobDetails(JobDetailsT&& value) {
    m_jobDetailsHasBeenSet = true;
    m_jobDetails = std::forward<JobDetailsT>(value);
  }
  template <typename JobDetailsT = PolicyPreviewJobDetails>
  GetPolicyPreviewJobResult& WithJobDetails(JobDetailsT&& value) {
    SetJobDetails(std::forward<JobDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 URI where the analysis report is stored. The report contains
   * metadata for CloudTrail events that would be denied by the proposed policy.</p>
   */
  inline const Aws::String& GetOutputS3Uri() const { return m_outputS3Uri; }
  template <typename OutputS3UriT = Aws::String>
  void SetOutputS3Uri(OutputS3UriT&& value) {
    m_outputS3UriHasBeenSet = true;
    m_outputS3Uri = std::forward<OutputS3UriT>(value);
  }
  template <typename OutputS3UriT = Aws::String>
  GetPolicyPreviewJobResult& WithOutputS3Uri(OutputS3UriT&& value) {
    SetOutputS3Uri(std::forward<OutputS3UriT>(value));
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
  GetPolicyPreviewJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobId;

  PolicyPreviewJobParameters m_jobParameters;

  PolicyPreviewJobDetails m_jobDetails;

  Aws::String m_outputS3Uri;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobIdHasBeenSet = false;
  bool m_jobParametersHasBeenSet = false;
  bool m_jobDetailsHasBeenSet = false;
  bool m_outputS3UriHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws

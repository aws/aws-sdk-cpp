/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

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
class StartJobUpgradeAnalysisResult {
 public:
  AWS_GLUE_API StartJobUpgradeAnalysisResult() = default;
  AWS_GLUE_API StartJobUpgradeAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API StartJobUpgradeAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  StartJobUpgradeAnalysisResult& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}

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
  StartJobUpgradeAnalysisResult& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
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
  StartJobUpgradeAnalysisResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_analysisId;

  Aws::String m_jobName;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_analysisIdHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

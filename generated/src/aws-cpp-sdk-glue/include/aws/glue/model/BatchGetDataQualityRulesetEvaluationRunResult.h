/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityRulesetEvaluationRun.h>

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
class BatchGetDataQualityRulesetEvaluationRunResult {
 public:
  AWS_GLUE_API BatchGetDataQualityRulesetEvaluationRunResult() = default;
  AWS_GLUE_API BatchGetDataQualityRulesetEvaluationRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API BatchGetDataQualityRulesetEvaluationRunResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of evaluation run details for the requested run IDs.</p>
   */
  inline const Aws::Vector<DataQualityRulesetEvaluationRun>& GetRuns() const { return m_runs; }
  template <typename RunsT = Aws::Vector<DataQualityRulesetEvaluationRun>>
  void SetRuns(RunsT&& value) {
    m_runsHasBeenSet = true;
    m_runs = std::forward<RunsT>(value);
  }
  template <typename RunsT = Aws::Vector<DataQualityRulesetEvaluationRun>>
  BatchGetDataQualityRulesetEvaluationRunResult& WithRuns(RunsT&& value) {
    SetRuns(std::forward<RunsT>(value));
    return *this;
  }
  template <typename RunsT = DataQualityRulesetEvaluationRun>
  BatchGetDataQualityRulesetEvaluationRunResult& AddRuns(RunsT&& value) {
    m_runsHasBeenSet = true;
    m_runs.emplace_back(std::forward<RunsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of run IDs that were not found.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRunsNotFound() const { return m_runsNotFound; }
  template <typename RunsNotFoundT = Aws::Vector<Aws::String>>
  void SetRunsNotFound(RunsNotFoundT&& value) {
    m_runsNotFoundHasBeenSet = true;
    m_runsNotFound = std::forward<RunsNotFoundT>(value);
  }
  template <typename RunsNotFoundT = Aws::Vector<Aws::String>>
  BatchGetDataQualityRulesetEvaluationRunResult& WithRunsNotFound(RunsNotFoundT&& value) {
    SetRunsNotFound(std::forward<RunsNotFoundT>(value));
    return *this;
  }
  template <typename RunsNotFoundT = Aws::String>
  BatchGetDataQualityRulesetEvaluationRunResult& AddRunsNotFound(RunsNotFoundT&& value) {
    m_runsNotFoundHasBeenSet = true;
    m_runsNotFound.emplace_back(std::forward<RunsNotFoundT>(value));
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
  BatchGetDataQualityRulesetEvaluationRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataQualityRulesetEvaluationRun> m_runs;

  Aws::Vector<Aws::String> m_runsNotFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_runsHasBeenSet = false;
  bool m_runsNotFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

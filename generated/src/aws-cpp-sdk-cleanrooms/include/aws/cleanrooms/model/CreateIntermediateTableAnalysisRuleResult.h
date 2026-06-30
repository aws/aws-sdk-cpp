/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableAnalysisRule.h>
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
namespace CleanRooms {
namespace Model {
class CreateIntermediateTableAnalysisRuleResult {
 public:
  AWS_CLEANROOMS_API CreateIntermediateTableAnalysisRuleResult() = default;
  AWS_CLEANROOMS_API CreateIntermediateTableAnalysisRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLEANROOMS_API CreateIntermediateTableAnalysisRuleResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The analysis rule that was created for the intermediate table.</p>
   */
  inline const IntermediateTableAnalysisRule& GetAnalysisRule() const { return m_analysisRule; }
  template <typename AnalysisRuleT = IntermediateTableAnalysisRule>
  void SetAnalysisRule(AnalysisRuleT&& value) {
    m_analysisRuleHasBeenSet = true;
    m_analysisRule = std::forward<AnalysisRuleT>(value);
  }
  template <typename AnalysisRuleT = IntermediateTableAnalysisRule>
  CreateIntermediateTableAnalysisRuleResult& WithAnalysisRule(AnalysisRuleT&& value) {
    SetAnalysisRule(std::forward<AnalysisRuleT>(value));
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
  CreateIntermediateTableAnalysisRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  IntermediateTableAnalysisRule m_analysisRule;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_analysisRuleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

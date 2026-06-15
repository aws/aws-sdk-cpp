/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksResults.h>
#include <aws/bedrock-runtime/model/GuardrailChecksUsageResults.h>
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
namespace BedrockRuntime {
namespace Model {
class InvokeGuardrailChecksResult {
 public:
  AWS_BEDROCKRUNTIME_API InvokeGuardrailChecksResult() = default;
  AWS_BEDROCKRUNTIME_API InvokeGuardrailChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKRUNTIME_API InvokeGuardrailChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The per-check results containing findings from the guardrail evaluation.</p>
   */
  inline const GuardrailChecksResults& GetResults() const { return m_results; }
  template <typename ResultsT = GuardrailChecksResults>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = GuardrailChecksResults>
  InvokeGuardrailChecksResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-check text unit consumption for the guardrail evaluation.</p>
   */
  inline const GuardrailChecksUsageResults& GetUsage() const { return m_usage; }
  template <typename UsageT = GuardrailChecksUsageResults>
  void SetUsage(UsageT&& value) {
    m_usageHasBeenSet = true;
    m_usage = std::forward<UsageT>(value);
  }
  template <typename UsageT = GuardrailChecksUsageResults>
  InvokeGuardrailChecksResult& WithUsage(UsageT&& value) {
    SetUsage(std::forward<UsageT>(value));
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
  InvokeGuardrailChecksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  GuardrailChecksResults m_results;

  GuardrailChecksUsageResults m_usage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resultsHasBeenSet = false;
  bool m_usageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws

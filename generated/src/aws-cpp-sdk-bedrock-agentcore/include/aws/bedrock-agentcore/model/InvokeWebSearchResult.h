/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/WebSearchResult.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {
/**
 * <p>Response for the <code>InvokeWebSearch</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeWebSearchOutput">AWS
 * API Reference</a></p>
 */
class InvokeWebSearchResult {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeWebSearchResult() = default;
  AWS_BEDROCKAGENTCORE_API InvokeWebSearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API InvokeWebSearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The search results, in ranked order.</p>
   */
  inline const Aws::Vector<WebSearchResult>& GetResults() const { return m_results; }
  template <typename ResultsT = Aws::Vector<WebSearchResult>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<WebSearchResult>>
  InvokeWebSearchResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = WebSearchResult>
  InvokeWebSearchResult& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
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
  InvokeWebSearchResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<WebSearchResult> m_results;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resultsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

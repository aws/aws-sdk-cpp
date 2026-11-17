/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/DatasetGenerationSummary.h>
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
class ListDatasetGenerationsResult {
 public:
  AWS_BEDROCKAGENTCORE_API ListDatasetGenerationsResult() = default;
  AWS_BEDROCKAGENTCORE_API ListDatasetGenerationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API ListDatasetGenerationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The dataset generations.</p>
   */
  inline const Aws::Vector<DatasetGenerationSummary>& GetDatasetGenerations() const { return m_datasetGenerations; }
  template <typename DatasetGenerationsT = Aws::Vector<DatasetGenerationSummary>>
  void SetDatasetGenerations(DatasetGenerationsT&& value) {
    m_datasetGenerationsHasBeenSet = true;
    m_datasetGenerations = std::forward<DatasetGenerationsT>(value);
  }
  template <typename DatasetGenerationsT = Aws::Vector<DatasetGenerationSummary>>
  ListDatasetGenerationsResult& WithDatasetGenerations(DatasetGenerationsT&& value) {
    SetDatasetGenerations(std::forward<DatasetGenerationsT>(value));
    return *this;
  }
  template <typename DatasetGenerationsT = DatasetGenerationSummary>
  ListDatasetGenerationsResult& AddDatasetGenerations(DatasetGenerationsT&& value) {
    m_datasetGenerationsHasBeenSet = true;
    m_datasetGenerations.emplace_back(std::forward<DatasetGenerationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the total number of results is greater than the <code>maxResults</code>
   * value provided in the request, use this token when making another request in the
   * <code>nextToken</code> field to return the next batch of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDatasetGenerationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListDatasetGenerationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DatasetGenerationSummary> m_datasetGenerations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetGenerationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

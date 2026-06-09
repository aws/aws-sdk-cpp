/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DatasetSummary.h>
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
namespace BedrockAgentCoreControl {
namespace Model {
class ListDatasetsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of datasets. </p>
   */
  inline const Aws::Vector<DatasetSummary>& GetDatasets() const { return m_datasets; }
  template <typename DatasetsT = Aws::Vector<DatasetSummary>>
  void SetDatasets(DatasetsT&& value) {
    m_datasetsHasBeenSet = true;
    m_datasets = std::forward<DatasetsT>(value);
  }
  template <typename DatasetsT = Aws::Vector<DatasetSummary>>
  ListDatasetsResult& WithDatasets(DatasetsT&& value) {
    SetDatasets(std::forward<DatasetsT>(value));
    return *this;
  }
  template <typename DatasetsT = DatasetSummary>
  ListDatasetsResult& AddDatasets(DatasetsT&& value) {
    m_datasetsHasBeenSet = true;
    m_datasets.emplace_back(std::forward<DatasetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token for the next page of results, or null if there are no more
   * results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDatasetsResult& WithNextToken(NextTokenT&& value) {
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
  ListDatasetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DatasetSummary> m_datasets;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_datasetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

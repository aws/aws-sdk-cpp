/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DatasetVersionSummary.h>
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
class ListDatasetVersionsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetVersionsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListDatasetVersionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of published dataset versions. </p>
   */
  inline const Aws::Vector<DatasetVersionSummary>& GetVersions() const { return m_versions; }
  template <typename VersionsT = Aws::Vector<DatasetVersionSummary>>
  void SetVersions(VersionsT&& value) {
    m_versionsHasBeenSet = true;
    m_versions = std::forward<VersionsT>(value);
  }
  template <typename VersionsT = Aws::Vector<DatasetVersionSummary>>
  ListDatasetVersionsResult& WithVersions(VersionsT&& value) {
    SetVersions(std::forward<VersionsT>(value));
    return *this;
  }
  template <typename VersionsT = DatasetVersionSummary>
  ListDatasetVersionsResult& AddVersions(VersionsT&& value) {
    m_versionsHasBeenSet = true;
    m_versions.emplace_back(std::forward<VersionsT>(value));
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
  ListDatasetVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListDatasetVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DatasetVersionSummary> m_versions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_versionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

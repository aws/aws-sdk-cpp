/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessVersionSummary.h>
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
class ListHarnessVersionsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListHarnessVersionsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListHarnessVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListHarnessVersionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of harness version summaries.</p>
   */
  inline const Aws::Vector<HarnessVersionSummary>& GetHarnessVersions() const { return m_harnessVersions; }
  template <typename HarnessVersionsT = Aws::Vector<HarnessVersionSummary>>
  void SetHarnessVersions(HarnessVersionsT&& value) {
    m_harnessVersionsHasBeenSet = true;
    m_harnessVersions = std::forward<HarnessVersionsT>(value);
  }
  template <typename HarnessVersionsT = Aws::Vector<HarnessVersionSummary>>
  ListHarnessVersionsResult& WithHarnessVersions(HarnessVersionsT&& value) {
    SetHarnessVersions(std::forward<HarnessVersionsT>(value));
    return *this;
  }
  template <typename HarnessVersionsT = HarnessVersionSummary>
  ListHarnessVersionsResult& AddHarnessVersions(HarnessVersionsT&& value) {
    m_harnessVersionsHasBeenSet = true;
    m_harnessVersions.emplace_back(std::forward<HarnessVersionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListHarnessVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListHarnessVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<HarnessVersionSummary> m_harnessVersions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_harnessVersionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

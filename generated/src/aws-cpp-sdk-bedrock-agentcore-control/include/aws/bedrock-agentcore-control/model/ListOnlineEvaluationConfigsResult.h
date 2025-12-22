/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationConfigSummary.h>
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
class ListOnlineEvaluationConfigsResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListOnlineEvaluationConfigsResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListOnlineEvaluationConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListOnlineEvaluationConfigsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The list of online evaluation configuration summaries containing basic
   * information about each configuration. </p>
   */
  inline const Aws::Vector<OnlineEvaluationConfigSummary>& GetOnlineEvaluationConfigs() const { return m_onlineEvaluationConfigs; }
  template <typename OnlineEvaluationConfigsT = Aws::Vector<OnlineEvaluationConfigSummary>>
  void SetOnlineEvaluationConfigs(OnlineEvaluationConfigsT&& value) {
    m_onlineEvaluationConfigsHasBeenSet = true;
    m_onlineEvaluationConfigs = std::forward<OnlineEvaluationConfigsT>(value);
  }
  template <typename OnlineEvaluationConfigsT = Aws::Vector<OnlineEvaluationConfigSummary>>
  ListOnlineEvaluationConfigsResult& WithOnlineEvaluationConfigs(OnlineEvaluationConfigsT&& value) {
    SetOnlineEvaluationConfigs(std::forward<OnlineEvaluationConfigsT>(value));
    return *this;
  }
  template <typename OnlineEvaluationConfigsT = OnlineEvaluationConfigSummary>
  ListOnlineEvaluationConfigsResult& AddOnlineEvaluationConfigs(OnlineEvaluationConfigsT&& value) {
    m_onlineEvaluationConfigsHasBeenSet = true;
    m_onlineEvaluationConfigs.emplace_back(std::forward<OnlineEvaluationConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The pagination token to use in a subsequent request to retrieve the next
   * page of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOnlineEvaluationConfigsResult& WithNextToken(NextTokenT&& value) {
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
  ListOnlineEvaluationConfigsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OnlineEvaluationConfigSummary> m_onlineEvaluationConfigs;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_onlineEvaluationConfigsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws

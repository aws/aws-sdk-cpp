/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for listing service associations within an AgentSpace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListAssociationsInput">AWS
 * API Reference</a></p>
 */
class ListAssociationsRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API ListAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAssociations"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  AWS_DEVOPSAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the AgentSpace</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ListAssociationsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAssociationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssociationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comma-separated list of service types to filter list associations
   * output</p>
   */
  inline const Aws::String& GetFilterServiceTypes() const { return m_filterServiceTypes; }
  inline bool FilterServiceTypesHasBeenSet() const { return m_filterServiceTypesHasBeenSet; }
  template <typename FilterServiceTypesT = Aws::String>
  void SetFilterServiceTypes(FilterServiceTypesT&& value) {
    m_filterServiceTypesHasBeenSet = true;
    m_filterServiceTypes = std::forward<FilterServiceTypesT>(value);
  }
  template <typename FilterServiceTypesT = Aws::String>
  ListAssociationsRequest& WithFilterServiceTypes(FilterServiceTypesT&& value) {
    SetFilterServiceTypes(std::forward<FilterServiceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_filterServiceTypes;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_filterServiceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/VpcConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgent {
namespace Model {

/**
 */
class ListVpcConfigurationsRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API ListVpcConfigurationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListVpcConfigurations"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the knowledge base whose VPC configurations you want
   * to list.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  ListVpcConfigurationsRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status to filter the results by. Only VPC configurations with the
   * specified status are returned.</p>
   */
  inline VpcConfigurationStatus GetStatusFilter() const { return m_statusFilter; }
  inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
  inline void SetStatusFilter(VpcConfigurationStatus value) {
    m_statusFilterHasBeenSet = true;
    m_statusFilter = value;
  }
  inline ListVpcConfigurationsRequest& WithStatusFilter(VpcConfigurationStatus value) {
    SetStatusFilter(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in the response. If more results are
   * available, the response returns a <code>nextToken</code>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListVpcConfigurationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token to retrieve the next page of results, returned in a
   * previous response when more results are available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListVpcConfigurationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_knowledgeBaseId;

  VpcConfigurationStatus m_statusFilter{VpcConfigurationStatus::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_statusFilterHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws

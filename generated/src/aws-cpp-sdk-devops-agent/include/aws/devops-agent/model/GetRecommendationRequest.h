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
 * <p>Request structure for retrieving a specific recommendation</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetRecommendationRequest">AWS
 * API Reference</a></p>
 */
class GetRecommendationRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API GetRecommendationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRecommendation"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  AWS_DEVOPSAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing the recommendation</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  GetRecommendationRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the recommendation to retrieve</p>
   */
  inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
  inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
  template <typename RecommendationIdT = Aws::String>
  void SetRecommendationId(RecommendationIdT&& value) {
    m_recommendationIdHasBeenSet = true;
    m_recommendationId = std::forward<RecommendationIdT>(value);
  }
  template <typename RecommendationIdT = Aws::String>
  GetRecommendationRequest& WithRecommendationId(RecommendationIdT&& value) {
    SetRecommendationId(std::forward<RecommendationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specific version of the recommendation to retrieve. If not specified, returns
   * the latest version.</p>
   */
  inline long long GetRecommendationVersion() const { return m_recommendationVersion; }
  inline bool RecommendationVersionHasBeenSet() const { return m_recommendationVersionHasBeenSet; }
  inline void SetRecommendationVersion(long long value) {
    m_recommendationVersionHasBeenSet = true;
    m_recommendationVersion = value;
  }
  inline GetRecommendationRequest& WithRecommendationVersion(long long value) {
    SetRecommendationVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_recommendationId;

  long long m_recommendationVersion{0};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_recommendationIdHasBeenSet = false;
  bool m_recommendationVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

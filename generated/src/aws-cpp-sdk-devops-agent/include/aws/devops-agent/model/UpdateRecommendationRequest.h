/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/RecommendationStatus.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for updating an existing recommendation</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateRecommendationRequest">AWS
 * API Reference</a></p>
 */
class UpdateRecommendationRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API UpdateRecommendationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRecommendation"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

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
  UpdateRecommendationRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the recommendation to update</p>
   */
  inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
  inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
  template <typename RecommendationIdT = Aws::String>
  void SetRecommendationId(RecommendationIdT&& value) {
    m_recommendationIdHasBeenSet = true;
    m_recommendationId = std::forward<RecommendationIdT>(value);
  }
  template <typename RecommendationIdT = Aws::String>
  UpdateRecommendationRequest& WithRecommendationId(RecommendationIdT&& value) {
    SetRecommendationId(std::forward<RecommendationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the recommendation</p>
   */
  inline RecommendationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateRecommendationRequest& WithStatus(RecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context for recommendation</p>
   */
  inline const Aws::String& GetAdditionalContext() const { return m_additionalContext; }
  inline bool AdditionalContextHasBeenSet() const { return m_additionalContextHasBeenSet; }
  template <typename AdditionalContextT = Aws::String>
  void SetAdditionalContext(AdditionalContextT&& value) {
    m_additionalContextHasBeenSet = true;
    m_additionalContext = std::forward<AdditionalContextT>(value);
  }
  template <typename AdditionalContextT = Aws::String>
  UpdateRecommendationRequest& WithAdditionalContext(AdditionalContextT&& value) {
    SetAdditionalContext(std::forward<AdditionalContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique token that ensures idempotency of the request</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateRecommendationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_recommendationId;

  RecommendationStatus m_status{RecommendationStatus::NOT_SET};

  Aws::String m_additionalContext;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_recommendationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_additionalContextHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws

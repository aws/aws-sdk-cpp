/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AffectedSession.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A cluster of similar root causes identified within a failure
 * subcategory.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RootCauseCluster">AWS
 * API Reference</a></p>
 */
class RootCauseCluster {
 public:
  AWS_BEDROCKAGENTCORE_API RootCauseCluster() = default;
  AWS_BEDROCKAGENTCORE_API RootCauseCluster(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RootCauseCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the root cause cluster.</p>
   */
  inline int GetClusterId() const { return m_clusterId; }
  inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
  inline void SetClusterId(int value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = value;
  }
  inline RootCauseCluster& WithClusterId(int value) {
    SetClusterId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the root cause cluster.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RootCauseCluster& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The root cause explanation for this cluster of failures.</p>
   */
  inline const Aws::String& GetRootCause() const { return m_rootCause; }
  inline bool RootCauseHasBeenSet() const { return m_rootCauseHasBeenSet; }
  template <typename RootCauseT = Aws::String>
  void SetRootCause(RootCauseT&& value) {
    m_rootCauseHasBeenSet = true;
    m_rootCause = std::forward<RootCauseT>(value);
  }
  template <typename RootCauseT = Aws::String>
  RootCauseCluster& WithRootCause(RootCauseT&& value) {
    SetRootCause(std::forward<RootCauseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended fix for this root cause.</p>
   */
  inline const Aws::String& GetRecommendation() const { return m_recommendation; }
  inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
  template <typename RecommendationT = Aws::String>
  void SetRecommendation(RecommendationT&& value) {
    m_recommendationHasBeenSet = true;
    m_recommendation = std::forward<RecommendationT>(value);
  }
  template <typename RecommendationT = Aws::String>
  RootCauseCluster& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions affected by this root cause.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline bool AffectedSessionCountHasBeenSet() const { return m_affectedSessionCountHasBeenSet; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline RootCauseCluster& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of sessions affected by this root cause.</p>
   */
  inline const Aws::Vector<AffectedSession>& GetAffectedSessions() const { return m_affectedSessions; }
  inline bool AffectedSessionsHasBeenSet() const { return m_affectedSessionsHasBeenSet; }
  template <typename AffectedSessionsT = Aws::Vector<AffectedSession>>
  void SetAffectedSessions(AffectedSessionsT&& value) {
    m_affectedSessionsHasBeenSet = true;
    m_affectedSessions = std::forward<AffectedSessionsT>(value);
  }
  template <typename AffectedSessionsT = Aws::Vector<AffectedSession>>
  RootCauseCluster& WithAffectedSessions(AffectedSessionsT&& value) {
    SetAffectedSessions(std::forward<AffectedSessionsT>(value));
    return *this;
  }
  template <typename AffectedSessionsT = AffectedSession>
  RootCauseCluster& AddAffectedSessions(AffectedSessionsT&& value) {
    m_affectedSessionsHasBeenSet = true;
    m_affectedSessions.emplace_back(std::forward<AffectedSessionsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_clusterId{0};

  Aws::String m_name;

  Aws::String m_rootCause;

  Aws::String m_recommendation;

  int m_affectedSessionCount{0};

  Aws::Vector<AffectedSession> m_affectedSessions;
  bool m_clusterIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_rootCauseHasBeenSet = false;
  bool m_recommendationHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_affectedSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

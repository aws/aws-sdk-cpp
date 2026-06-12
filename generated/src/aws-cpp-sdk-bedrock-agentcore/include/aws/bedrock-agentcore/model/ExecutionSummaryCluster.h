/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ExecutionSummaryAffectedSession.h>
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
 * <p>A cluster of similar execution patterns identified across
 * sessions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExecutionSummaryCluster">AWS
 * API Reference</a></p>
 */
class ExecutionSummaryCluster {
 public:
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryCluster() = default;
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryCluster(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the execution summary cluster.</p>
   */
  inline int GetClusterId() const { return m_clusterId; }
  inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
  inline void SetClusterId(int value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = value;
  }
  inline ExecutionSummaryCluster& WithClusterId(int value) {
    SetClusterId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the execution pattern cluster.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ExecutionSummaryCluster& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the execution pattern.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ExecutionSummaryCluster& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions with this execution pattern.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline bool AffectedSessionCountHasBeenSet() const { return m_affectedSessionCountHasBeenSet; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline ExecutionSummaryCluster& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of sessions with this execution pattern.</p>
   */
  inline const Aws::Vector<ExecutionSummaryAffectedSession>& GetAffectedSessions() const { return m_affectedSessions; }
  inline bool AffectedSessionsHasBeenSet() const { return m_affectedSessionsHasBeenSet; }
  template <typename AffectedSessionsT = Aws::Vector<ExecutionSummaryAffectedSession>>
  void SetAffectedSessions(AffectedSessionsT&& value) {
    m_affectedSessionsHasBeenSet = true;
    m_affectedSessions = std::forward<AffectedSessionsT>(value);
  }
  template <typename AffectedSessionsT = Aws::Vector<ExecutionSummaryAffectedSession>>
  ExecutionSummaryCluster& WithAffectedSessions(AffectedSessionsT&& value) {
    SetAffectedSessions(std::forward<AffectedSessionsT>(value));
    return *this;
  }
  template <typename AffectedSessionsT = ExecutionSummaryAffectedSession>
  ExecutionSummaryCluster& AddAffectedSessions(AffectedSessionsT&& value) {
    m_affectedSessionsHasBeenSet = true;
    m_affectedSessions.emplace_back(std::forward<AffectedSessionsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_clusterId{0};

  Aws::String m_name;

  Aws::String m_description;

  int m_affectedSessionCount{0};

  Aws::Vector<ExecutionSummaryAffectedSession> m_affectedSessions;
  bool m_clusterIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_affectedSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

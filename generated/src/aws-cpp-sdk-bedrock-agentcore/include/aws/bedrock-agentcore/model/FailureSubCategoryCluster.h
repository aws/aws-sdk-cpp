/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/RootCauseCluster.h>
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
 * <p>A subcategory of failures within a top-level failure category.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/FailureSubCategoryCluster">AWS
 * API Reference</a></p>
 */
class FailureSubCategoryCluster {
 public:
  AWS_BEDROCKAGENTCORE_API FailureSubCategoryCluster() = default;
  AWS_BEDROCKAGENTCORE_API FailureSubCategoryCluster(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API FailureSubCategoryCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the failure subcategory cluster.</p>
   */
  inline int GetClusterId() const { return m_clusterId; }
  inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
  inline void SetClusterId(int value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = value;
  }
  inline FailureSubCategoryCluster& WithClusterId(int value) {
    SetClusterId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the failure subcategory.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FailureSubCategoryCluster& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the failure subcategory pattern.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FailureSubCategoryCluster& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions affected by this failure subcategory.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline bool AffectedSessionCountHasBeenSet() const { return m_affectedSessionCountHasBeenSet; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline FailureSubCategoryCluster& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of root cause clusters identified within this subcategory.</p>
   */
  inline const Aws::Vector<RootCauseCluster>& GetRootCauses() const { return m_rootCauses; }
  inline bool RootCausesHasBeenSet() const { return m_rootCausesHasBeenSet; }
  template <typename RootCausesT = Aws::Vector<RootCauseCluster>>
  void SetRootCauses(RootCausesT&& value) {
    m_rootCausesHasBeenSet = true;
    m_rootCauses = std::forward<RootCausesT>(value);
  }
  template <typename RootCausesT = Aws::Vector<RootCauseCluster>>
  FailureSubCategoryCluster& WithRootCauses(RootCausesT&& value) {
    SetRootCauses(std::forward<RootCausesT>(value));
    return *this;
  }
  template <typename RootCausesT = RootCauseCluster>
  FailureSubCategoryCluster& AddRootCauses(RootCausesT&& value) {
    m_rootCausesHasBeenSet = true;
    m_rootCauses.emplace_back(std::forward<RootCausesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_clusterId{0};

  Aws::String m_name;

  Aws::String m_description;

  int m_affectedSessionCount{0};

  Aws::Vector<RootCauseCluster> m_rootCauses;
  bool m_clusterIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_rootCausesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

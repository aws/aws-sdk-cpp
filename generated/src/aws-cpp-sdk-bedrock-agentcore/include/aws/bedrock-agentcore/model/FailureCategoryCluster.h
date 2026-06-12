/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/FailureSubCategoryCluster.h>
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
 * <p>A top-level failure category identified by clustering similar failure
 * patterns across sessions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/FailureCategoryCluster">AWS
 * API Reference</a></p>
 */
class FailureCategoryCluster {
 public:
  AWS_BEDROCKAGENTCORE_API FailureCategoryCluster() = default;
  AWS_BEDROCKAGENTCORE_API FailureCategoryCluster(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API FailureCategoryCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the failure category cluster.</p>
   */
  inline int GetClusterId() const { return m_clusterId; }
  inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
  inline void SetClusterId(int value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = value;
  }
  inline FailureCategoryCluster& WithClusterId(int value) {
    SetClusterId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the failure category.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FailureCategoryCluster& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the failure category pattern.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FailureCategoryCluster& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions affected by this failure category.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline bool AffectedSessionCountHasBeenSet() const { return m_affectedSessionCountHasBeenSet; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline FailureCategoryCluster& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of failure subcategories within this category.</p>
   */
  inline const Aws::Vector<FailureSubCategoryCluster>& GetSubCategories() const { return m_subCategories; }
  inline bool SubCategoriesHasBeenSet() const { return m_subCategoriesHasBeenSet; }
  template <typename SubCategoriesT = Aws::Vector<FailureSubCategoryCluster>>
  void SetSubCategories(SubCategoriesT&& value) {
    m_subCategoriesHasBeenSet = true;
    m_subCategories = std::forward<SubCategoriesT>(value);
  }
  template <typename SubCategoriesT = Aws::Vector<FailureSubCategoryCluster>>
  FailureCategoryCluster& WithSubCategories(SubCategoriesT&& value) {
    SetSubCategories(std::forward<SubCategoriesT>(value));
    return *this;
  }
  template <typename SubCategoriesT = FailureSubCategoryCluster>
  FailureCategoryCluster& AddSubCategories(SubCategoriesT&& value) {
    m_subCategoriesHasBeenSet = true;
    m_subCategories.emplace_back(std::forward<SubCategoriesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_clusterId{0};

  Aws::String m_name;

  Aws::String m_description;

  int m_affectedSessionCount{0};

  Aws::Vector<FailureSubCategoryCluster> m_subCategories;
  bool m_clusterIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_subCategoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

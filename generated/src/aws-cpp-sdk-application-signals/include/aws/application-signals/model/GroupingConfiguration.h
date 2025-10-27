/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/GroupingAttributeDefinition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A structure that contains the complete grouping configuration for an account,
 * including all defined grouping attributes and metadata about when it was last
 * updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/GroupingConfiguration">AWS
 * API Reference</a></p>
 */
class GroupingConfiguration {
 public:
  AWS_APPLICATIONSIGNALS_API GroupingConfiguration() = default;
  AWS_APPLICATIONSIGNALS_API GroupingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API GroupingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of grouping attribute definitions that specify how services should
   * be grouped based on various attributes and source keys.</p>
   */
  inline const Aws::Vector<GroupingAttributeDefinition>& GetGroupingAttributeDefinitions() const { return m_groupingAttributeDefinitions; }
  inline bool GroupingAttributeDefinitionsHasBeenSet() const { return m_groupingAttributeDefinitionsHasBeenSet; }
  template <typename GroupingAttributeDefinitionsT = Aws::Vector<GroupingAttributeDefinition>>
  void SetGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) {
    m_groupingAttributeDefinitionsHasBeenSet = true;
    m_groupingAttributeDefinitions = std::forward<GroupingAttributeDefinitionsT>(value);
  }
  template <typename GroupingAttributeDefinitionsT = Aws::Vector<GroupingAttributeDefinition>>
  GroupingConfiguration& WithGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) {
    SetGroupingAttributeDefinitions(std::forward<GroupingAttributeDefinitionsT>(value));
    return *this;
  }
  template <typename GroupingAttributeDefinitionsT = GroupingAttributeDefinition>
  GroupingConfiguration& AddGroupingAttributeDefinitions(GroupingAttributeDefinitionsT&& value) {
    m_groupingAttributeDefinitionsHasBeenSet = true;
    m_groupingAttributeDefinitions.emplace_back(std::forward<GroupingAttributeDefinitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this grouping configuration was last updated. When used in
   * a raw HTTP Query API, it is formatted as epoch time in seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GroupingConfiguration& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GroupingAttributeDefinition> m_groupingAttributeDefinitions;
  bool m_groupingAttributeDefinitionsHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws

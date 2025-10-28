/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
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
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Defines how services should be grouped based on specific attributes. This
 * allows logical organization of services in dashboards and service
 * maps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/GroupingAttributeDefinition">AWS
 * API Reference</a></p>
 */
class GroupingAttributeDefinition {
 public:
  AWS_APPLICATIONSIGNALS_API GroupingAttributeDefinition() = default;
  AWS_APPLICATIONSIGNALS_API GroupingAttributeDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API GroupingAttributeDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the grouping attribute, such as "Environment", "Team", or
   * "Application".</p>
   */
  inline const Aws::String& GetGroupingName() const { return m_groupingName; }
  inline bool GroupingNameHasBeenSet() const { return m_groupingNameHasBeenSet; }
  template <typename GroupingNameT = Aws::String>
  void SetGroupingName(GroupingNameT&& value) {
    m_groupingNameHasBeenSet = true;
    m_groupingName = std::forward<GroupingNameT>(value);
  }
  template <typename GroupingNameT = Aws::String>
  GroupingAttributeDefinition& WithGroupingName(GroupingNameT&& value) {
    SetGroupingName(std::forward<GroupingNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of source attribute keys that will be used to determine the grouping
   * value for each service. These keys correspond to service metadata or tags.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupingSourceKeys() const { return m_groupingSourceKeys; }
  inline bool GroupingSourceKeysHasBeenSet() const { return m_groupingSourceKeysHasBeenSet; }
  template <typename GroupingSourceKeysT = Aws::Vector<Aws::String>>
  void SetGroupingSourceKeys(GroupingSourceKeysT&& value) {
    m_groupingSourceKeysHasBeenSet = true;
    m_groupingSourceKeys = std::forward<GroupingSourceKeysT>(value);
  }
  template <typename GroupingSourceKeysT = Aws::Vector<Aws::String>>
  GroupingAttributeDefinition& WithGroupingSourceKeys(GroupingSourceKeysT&& value) {
    SetGroupingSourceKeys(std::forward<GroupingSourceKeysT>(value));
    return *this;
  }
  template <typename GroupingSourceKeysT = Aws::String>
  GroupingAttributeDefinition& AddGroupingSourceKeys(GroupingSourceKeysT&& value) {
    m_groupingSourceKeysHasBeenSet = true;
    m_groupingSourceKeys.emplace_back(std::forward<GroupingSourceKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value to use for grouping when a service doesn't have any of the
   * specified source keys, such as "Unknown" or "Unassigned".</p>
   */
  inline const Aws::String& GetDefaultGroupingValue() const { return m_defaultGroupingValue; }
  inline bool DefaultGroupingValueHasBeenSet() const { return m_defaultGroupingValueHasBeenSet; }
  template <typename DefaultGroupingValueT = Aws::String>
  void SetDefaultGroupingValue(DefaultGroupingValueT&& value) {
    m_defaultGroupingValueHasBeenSet = true;
    m_defaultGroupingValue = std::forward<DefaultGroupingValueT>(value);
  }
  template <typename DefaultGroupingValueT = Aws::String>
  GroupingAttributeDefinition& WithDefaultGroupingValue(DefaultGroupingValueT&& value) {
    SetDefaultGroupingValue(std::forward<DefaultGroupingValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groupingName;
  bool m_groupingNameHasBeenSet = false;

  Aws::Vector<Aws::String> m_groupingSourceKeys;
  bool m_groupingSourceKeysHasBeenSet = false;

  Aws::String m_defaultGroupingValue;
  bool m_defaultGroupingValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Represents a logical grouping of services based on shared attributes or
 * characteristics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceGroup">AWS
 * API Reference</a></p>
 */
class ServiceGroup {
 public:
  AWS_APPLICATIONSIGNALS_API ServiceGroup() = default;
  AWS_APPLICATIONSIGNALS_API ServiceGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API ServiceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the group, such as "Environment", "Team", or "Application".</p>
   */
  inline const Aws::String& GetGroupName() const { return m_groupName; }
  inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
  template <typename GroupNameT = Aws::String>
  void SetGroupName(GroupNameT&& value) {
    m_groupNameHasBeenSet = true;
    m_groupName = std::forward<GroupNameT>(value);
  }
  template <typename GroupNameT = Aws::String>
  ServiceGroup& WithGroupName(GroupNameT&& value) {
    SetGroupName(std::forward<GroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific value for this group, such as "Production", "TeamA", or
   * "WebApp".</p>
   */
  inline const Aws::String& GetGroupValue() const { return m_groupValue; }
  inline bool GroupValueHasBeenSet() const { return m_groupValueHasBeenSet; }
  template <typename GroupValueT = Aws::String>
  void SetGroupValue(GroupValueT&& value) {
    m_groupValueHasBeenSet = true;
    m_groupValue = std::forward<GroupValueT>(value);
  }
  template <typename GroupValueT = Aws::String>
  ServiceGroup& WithGroupValue(GroupValueT&& value) {
    SetGroupValue(std::forward<GroupValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the grouping information, such as "Tag", "Attribute", or
   * "Manual".</p>
   */
  inline const Aws::String& GetGroupSource() const { return m_groupSource; }
  inline bool GroupSourceHasBeenSet() const { return m_groupSourceHasBeenSet; }
  template <typename GroupSourceT = Aws::String>
  void SetGroupSource(GroupSourceT&& value) {
    m_groupSourceHasBeenSet = true;
    m_groupSource = std::forward<GroupSourceT>(value);
  }
  template <typename GroupSourceT = Aws::String>
  ServiceGroup& WithGroupSource(GroupSourceT&& value) {
    SetGroupSource(std::forward<GroupSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the group within the grouping configuration.</p>
   */
  inline const Aws::String& GetGroupIdentifier() const { return m_groupIdentifier; }
  inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }
  template <typename GroupIdentifierT = Aws::String>
  void SetGroupIdentifier(GroupIdentifierT&& value) {
    m_groupIdentifierHasBeenSet = true;
    m_groupIdentifier = std::forward<GroupIdentifierT>(value);
  }
  template <typename GroupIdentifierT = Aws::String>
  ServiceGroup& WithGroupIdentifier(GroupIdentifierT&& value) {
    SetGroupIdentifier(std::forward<GroupIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groupName;
  bool m_groupNameHasBeenSet = false;

  Aws::String m_groupValue;
  bool m_groupValueHasBeenSet = false;

  Aws::String m_groupSource;
  bool m_groupSourceHasBeenSet = false;

  Aws::String m_groupIdentifier;
  bool m_groupIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws

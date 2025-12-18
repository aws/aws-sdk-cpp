/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AutoApprovedChangeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Defines the specific changes being requested for a collaboration, including
 * configuration modifications and approval requirements.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationChangeSpecification">AWS
 * API Reference</a></p>
 */
class CollaborationChangeSpecification {
 public:
  AWS_CLEANROOMS_API CollaborationChangeSpecification() = default;
  AWS_CLEANROOMS_API CollaborationChangeSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API CollaborationChangeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Defines requested updates to properties of the collaboration. Currently, this
   * only supports modifying which change types are auto-approved for the
   * collaboration.</p>
   */
  inline const Aws::Vector<AutoApprovedChangeType>& GetAutoApprovedChangeTypes() const { return m_autoApprovedChangeTypes; }
  inline bool AutoApprovedChangeTypesHasBeenSet() const { return m_autoApprovedChangeTypesHasBeenSet; }
  template <typename AutoApprovedChangeTypesT = Aws::Vector<AutoApprovedChangeType>>
  void SetAutoApprovedChangeTypes(AutoApprovedChangeTypesT&& value) {
    m_autoApprovedChangeTypesHasBeenSet = true;
    m_autoApprovedChangeTypes = std::forward<AutoApprovedChangeTypesT>(value);
  }
  template <typename AutoApprovedChangeTypesT = Aws::Vector<AutoApprovedChangeType>>
  CollaborationChangeSpecification& WithAutoApprovedChangeTypes(AutoApprovedChangeTypesT&& value) {
    SetAutoApprovedChangeTypes(std::forward<AutoApprovedChangeTypesT>(value));
    return *this;
  }
  inline CollaborationChangeSpecification& AddAutoApprovedChangeTypes(AutoApprovedChangeType value) {
    m_autoApprovedChangeTypesHasBeenSet = true;
    m_autoApprovedChangeTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutoApprovedChangeType> m_autoApprovedChangeTypes;
  bool m_autoApprovedChangeTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

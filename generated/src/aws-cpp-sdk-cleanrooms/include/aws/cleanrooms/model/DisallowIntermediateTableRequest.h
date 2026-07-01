/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class DisallowIntermediateTableRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API DisallowIntermediateTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisallowIntermediateTable"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the membership that contains the intermediate table
   * to disallow.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  DisallowIntermediateTableRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the intermediate table to disallow.</p>
   */
  inline const Aws::String& GetIntermediateTableName() const { return m_intermediateTableName; }
  inline bool IntermediateTableNameHasBeenSet() const { return m_intermediateTableNameHasBeenSet; }
  template <typename IntermediateTableNameT = Aws::String>
  void SetIntermediateTableName(IntermediateTableNameT&& value) {
    m_intermediateTableNameHasBeenSet = true;
    m_intermediateTableName = std::forward<IntermediateTableNameT>(value);
  }
  template <typename IntermediateTableNameT = Aws::String>
  DisallowIntermediateTableRequest& WithIntermediateTableName(IntermediateTableNameT&& value) {
    SetIntermediateTableName(std::forward<IntermediateTableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to cascade the disallow action to descendant intermediate
   * tables. Default is <code>true</code>.</p>
   */
  inline bool GetIncludeDescendants() const { return m_includeDescendants; }
  inline bool IncludeDescendantsHasBeenSet() const { return m_includeDescendantsHasBeenSet; }
  inline void SetIncludeDescendants(bool value) {
    m_includeDescendantsHasBeenSet = true;
    m_includeDescendants = value;
  }
  inline DisallowIntermediateTableRequest& WithIncludeDescendants(bool value) {
    SetIncludeDescendants(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;

  Aws::String m_intermediateTableName;

  bool m_includeDescendants{false};
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_intermediateTableNameHasBeenSet = false;
  bool m_includeDescendantsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

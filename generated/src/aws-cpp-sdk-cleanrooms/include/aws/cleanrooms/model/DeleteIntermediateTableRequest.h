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
class DeleteIntermediateTableRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API DeleteIntermediateTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteIntermediateTable"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the membership that contains the intermediate
   * table.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  DeleteIntermediateTableRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the intermediate table to delete.</p>
   */
  inline const Aws::String& GetIntermediateTableIdentifier() const { return m_intermediateTableIdentifier; }
  inline bool IntermediateTableIdentifierHasBeenSet() const { return m_intermediateTableIdentifierHasBeenSet; }
  template <typename IntermediateTableIdentifierT = Aws::String>
  void SetIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    m_intermediateTableIdentifierHasBeenSet = true;
    m_intermediateTableIdentifier = std::forward<IntermediateTableIdentifierT>(value);
  }
  template <typename IntermediateTableIdentifierT = Aws::String>
  DeleteIntermediateTableRequest& WithIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    SetIntermediateTableIdentifier(std::forward<IntermediateTableIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_membershipIdentifier;

  Aws::String m_intermediateTableIdentifier;
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_intermediateTableIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

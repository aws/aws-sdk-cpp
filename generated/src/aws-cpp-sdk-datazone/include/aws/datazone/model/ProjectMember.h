/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/MemberDetails.h>
#include <aws/datazone/model/UserDesignation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The details of a project member.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProjectMember">AWS
 * API Reference</a></p>
 */
class ProjectMember {
 public:
  AWS_DATAZONE_API ProjectMember() = default;
  AWS_DATAZONE_API ProjectMember(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ProjectMember& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The membership details of a project member.</p>
   */
  inline const MemberDetails& GetMemberDetails() const { return m_memberDetails; }
  inline bool MemberDetailsHasBeenSet() const { return m_memberDetailsHasBeenSet; }
  template <typename MemberDetailsT = MemberDetails>
  void SetMemberDetails(MemberDetailsT&& value) {
    m_memberDetailsHasBeenSet = true;
    m_memberDetails = std::forward<MemberDetailsT>(value);
  }
  template <typename MemberDetailsT = MemberDetails>
  ProjectMember& WithMemberDetails(MemberDetailsT&& value) {
    SetMemberDetails(std::forward<MemberDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The designated role of a project member.</p>
   */
  inline UserDesignation GetDesignation() const { return m_designation; }
  inline bool DesignationHasBeenSet() const { return m_designationHasBeenSet; }
  inline void SetDesignation(UserDesignation value) {
    m_designationHasBeenSet = true;
    m_designation = value;
  }
  inline ProjectMember& WithDesignation(UserDesignation value) {
    SetDesignation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the user-created designation held by the project member when
   * <code>designation</code> is <code>USER_CREATED_DESIGNATION</code>.</p>
   */
  inline const Aws::String& GetUserCreatedDesignationId() const { return m_userCreatedDesignationId; }
  inline bool UserCreatedDesignationIdHasBeenSet() const { return m_userCreatedDesignationIdHasBeenSet; }
  template <typename UserCreatedDesignationIdT = Aws::String>
  void SetUserCreatedDesignationId(UserCreatedDesignationIdT&& value) {
    m_userCreatedDesignationIdHasBeenSet = true;
    m_userCreatedDesignationId = std::forward<UserCreatedDesignationIdT>(value);
  }
  template <typename UserCreatedDesignationIdT = Aws::String>
  ProjectMember& WithUserCreatedDesignationId(UserCreatedDesignationIdT&& value) {
    SetUserCreatedDesignationId(std::forward<UserCreatedDesignationIdT>(value));
    return *this;
  }
  ///@}
 private:
  MemberDetails m_memberDetails;

  UserDesignation m_designation{UserDesignation::NOT_SET};

  Aws::String m_userCreatedDesignationId;
  bool m_memberDetailsHasBeenSet = false;
  bool m_designationHasBeenSet = false;
  bool m_userCreatedDesignationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

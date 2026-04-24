/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/Member.h>
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
 * <p>A map of user or group profiles to designations that need to be assigned in
 * the project.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProjectMembershipAssignment">AWS
 * API Reference</a></p>
 */
class ProjectMembershipAssignment {
 public:
  AWS_DATAZONE_API ProjectMembershipAssignment() = default;
  AWS_DATAZONE_API ProjectMembershipAssignment(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ProjectMembershipAssignment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The details about a project member.</p>
   */
  inline const Member& GetMember() const { return m_member; }
  inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
  template <typename MemberT = Member>
  void SetMember(MemberT&& value) {
    m_memberHasBeenSet = true;
    m_member = std::forward<MemberT>(value);
  }
  template <typename MemberT = Member>
  ProjectMembershipAssignment& WithMember(MemberT&& value) {
    SetMember(std::forward<MemberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The designation of the project membership.</p>
   */
  inline UserDesignation GetDesignation() const { return m_designation; }
  inline bool DesignationHasBeenSet() const { return m_designationHasBeenSet; }
  inline void SetDesignation(UserDesignation value) {
    m_designationHasBeenSet = true;
    m_designation = value;
  }
  inline ProjectMembershipAssignment& WithDesignation(UserDesignation value) {
    SetDesignation(value);
    return *this;
  }
  ///@}
 private:
  Member m_member;

  UserDesignation m_designation{UserDesignation::NOT_SET};
  bool m_memberHasBeenSet = false;
  bool m_designationHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

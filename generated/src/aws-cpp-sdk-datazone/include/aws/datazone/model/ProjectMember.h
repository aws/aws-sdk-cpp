/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/UserDesignation.h>
#include <aws/datazone/model/MemberDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of a project member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ProjectMember">AWS
   * API Reference</a></p>
   */
  class ProjectMember
  {
  public:
    AWS_DATAZONE_API ProjectMember() = default;
    AWS_DATAZONE_API ProjectMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProjectMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The designated role of a project member.</p>
     */
    inline UserDesignation GetDesignation() const { return m_designation; }
    inline bool DesignationHasBeenSet() const { return m_designationHasBeenSet; }
    inline void SetDesignation(UserDesignation value) { m_designationHasBeenSet = true; m_designation = value; }
    inline ProjectMember& WithDesignation(UserDesignation value) { SetDesignation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership details of a project member.</p>
     */
    inline const MemberDetails& GetMemberDetails() const { return m_memberDetails; }
    inline bool MemberDetailsHasBeenSet() const { return m_memberDetailsHasBeenSet; }
    template<typename MemberDetailsT = MemberDetails>
    void SetMemberDetails(MemberDetailsT&& value) { m_memberDetailsHasBeenSet = true; m_memberDetails = std::forward<MemberDetailsT>(value); }
    template<typename MemberDetailsT = MemberDetails>
    ProjectMember& WithMemberDetails(MemberDetailsT&& value) { SetMemberDetails(std::forward<MemberDetailsT>(value)); return *this;}
    ///@}
  private:

    UserDesignation m_designation{UserDesignation::NOT_SET};
    bool m_designationHasBeenSet = false;

    MemberDetails m_memberDetails;
    bool m_memberDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

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
    AWS_DATAZONE_API ProjectMember();
    AWS_DATAZONE_API ProjectMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ProjectMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The designated role of a project member.</p>
     */
    inline const UserDesignation& GetDesignation() const{ return m_designation; }

    /**
     * <p>The designated role of a project member.</p>
     */
    inline bool DesignationHasBeenSet() const { return m_designationHasBeenSet; }

    /**
     * <p>The designated role of a project member.</p>
     */
    inline void SetDesignation(const UserDesignation& value) { m_designationHasBeenSet = true; m_designation = value; }

    /**
     * <p>The designated role of a project member.</p>
     */
    inline void SetDesignation(UserDesignation&& value) { m_designationHasBeenSet = true; m_designation = std::move(value); }

    /**
     * <p>The designated role of a project member.</p>
     */
    inline ProjectMember& WithDesignation(const UserDesignation& value) { SetDesignation(value); return *this;}

    /**
     * <p>The designated role of a project member.</p>
     */
    inline ProjectMember& WithDesignation(UserDesignation&& value) { SetDesignation(std::move(value)); return *this;}


    /**
     * <p>The membership details of a project member.</p>
     */
    inline const MemberDetails& GetMemberDetails() const{ return m_memberDetails; }

    /**
     * <p>The membership details of a project member.</p>
     */
    inline bool MemberDetailsHasBeenSet() const { return m_memberDetailsHasBeenSet; }

    /**
     * <p>The membership details of a project member.</p>
     */
    inline void SetMemberDetails(const MemberDetails& value) { m_memberDetailsHasBeenSet = true; m_memberDetails = value; }

    /**
     * <p>The membership details of a project member.</p>
     */
    inline void SetMemberDetails(MemberDetails&& value) { m_memberDetailsHasBeenSet = true; m_memberDetails = std::move(value); }

    /**
     * <p>The membership details of a project member.</p>
     */
    inline ProjectMember& WithMemberDetails(const MemberDetails& value) { SetMemberDetails(value); return *this;}

    /**
     * <p>The membership details of a project member.</p>
     */
    inline ProjectMember& WithMemberDetails(MemberDetails&& value) { SetMemberDetails(std::move(value)); return *this;}

  private:

    UserDesignation m_designation;
    bool m_designationHasBeenSet = false;

    MemberDetails m_memberDetails;
    bool m_memberDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/model/UserDesignation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/Member.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateProjectMembershipRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateProjectMembershipRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProjectMembership"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The designation of the project membership.</p>
     */
    inline UserDesignation GetDesignation() const { return m_designation; }
    inline bool DesignationHasBeenSet() const { return m_designationHasBeenSet; }
    inline void SetDesignation(UserDesignation value) { m_designationHasBeenSet = true; m_designation = value; }
    inline CreateProjectMembershipRequest& WithDesignation(UserDesignation value) { SetDesignation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateProjectMembershipRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project member whose project membership was created.</p>
     */
    inline const Member& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = Member>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = Member>
    CreateProjectMembershipRequest& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const { return m_projectIdentifier; }
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }
    template<typename ProjectIdentifierT = Aws::String>
    void SetProjectIdentifier(ProjectIdentifierT&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::forward<ProjectIdentifierT>(value); }
    template<typename ProjectIdentifierT = Aws::String>
    CreateProjectMembershipRequest& WithProjectIdentifier(ProjectIdentifierT&& value) { SetProjectIdentifier(std::forward<ProjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    UserDesignation m_designation{UserDesignation::NOT_SET};
    bool m_designationHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Member m_member;
    bool m_memberHasBeenSet = false;

    Aws::String m_projectIdentifier;
    bool m_projectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

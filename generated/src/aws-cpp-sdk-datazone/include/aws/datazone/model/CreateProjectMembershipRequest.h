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
    AWS_DATAZONE_API CreateProjectMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProjectMembership"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The designation of the project membership.</p>
     */
    inline const UserDesignation& GetDesignation() const{ return m_designation; }

    /**
     * <p>The designation of the project membership.</p>
     */
    inline bool DesignationHasBeenSet() const { return m_designationHasBeenSet; }

    /**
     * <p>The designation of the project membership.</p>
     */
    inline void SetDesignation(const UserDesignation& value) { m_designationHasBeenSet = true; m_designation = value; }

    /**
     * <p>The designation of the project membership.</p>
     */
    inline void SetDesignation(UserDesignation&& value) { m_designationHasBeenSet = true; m_designation = std::move(value); }

    /**
     * <p>The designation of the project membership.</p>
     */
    inline CreateProjectMembershipRequest& WithDesignation(const UserDesignation& value) { SetDesignation(value); return *this;}

    /**
     * <p>The designation of the project membership.</p>
     */
    inline CreateProjectMembershipRequest& WithDesignation(UserDesignation&& value) { SetDesignation(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline CreateProjectMembershipRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline CreateProjectMembershipRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which project membership is
     * created.</p>
     */
    inline CreateProjectMembershipRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The project member whose project membership was created.</p>
     */
    inline const Member& GetMember() const{ return m_member; }

    /**
     * <p>The project member whose project membership was created.</p>
     */
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }

    /**
     * <p>The project member whose project membership was created.</p>
     */
    inline void SetMember(const Member& value) { m_memberHasBeenSet = true; m_member = value; }

    /**
     * <p>The project member whose project membership was created.</p>
     */
    inline void SetMember(Member&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }

    /**
     * <p>The project member whose project membership was created.</p>
     */
    inline CreateProjectMembershipRequest& WithMember(const Member& value) { SetMember(value); return *this;}

    /**
     * <p>The project member whose project membership was created.</p>
     */
    inline CreateProjectMembershipRequest& WithMember(Member&& value) { SetMember(std::move(value)); return *this;}


    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }

    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }

    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }

    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }

    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }

    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline CreateProjectMembershipRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}

    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline CreateProjectMembershipRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the project for which this project membership was created.</p>
     */
    inline CreateProjectMembershipRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}

  private:

    UserDesignation m_designation;
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

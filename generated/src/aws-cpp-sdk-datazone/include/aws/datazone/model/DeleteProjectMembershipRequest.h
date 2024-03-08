/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
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
  class DeleteProjectMembershipRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API DeleteProjectMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProjectMembership"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where project membership is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The project member whose project membership is deleted.</p>
     */
    inline const Member& GetMember() const{ return m_member; }

    /**
     * <p>The project member whose project membership is deleted.</p>
     */
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }

    /**
     * <p>The project member whose project membership is deleted.</p>
     */
    inline void SetMember(const Member& value) { m_memberHasBeenSet = true; m_member = value; }

    /**
     * <p>The project member whose project membership is deleted.</p>
     */
    inline void SetMember(Member&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }

    /**
     * <p>The project member whose project membership is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithMember(const Member& value) { SetMember(value); return *this;}

    /**
     * <p>The project member whose project membership is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithMember(Member&& value) { SetMember(std::move(value)); return *this;}


    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline const Aws::String& GetProjectIdentifier() const{ return m_projectIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline bool ProjectIdentifierHasBeenSet() const { return m_projectIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline void SetProjectIdentifier(const Aws::String& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline void SetProjectIdentifier(Aws::String&& value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline void SetProjectIdentifier(const char* value) { m_projectIdentifierHasBeenSet = true; m_projectIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithProjectIdentifier(const Aws::String& value) { SetProjectIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithProjectIdentifier(Aws::String&& value) { SetProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project the membership to which is deleted.</p>
     */
    inline DeleteProjectMembershipRequest& WithProjectIdentifier(const char* value) { SetProjectIdentifier(value); return *this;}

  private:

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

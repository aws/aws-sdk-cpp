/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/MembershipQueryLogStatus.h>
#include <utility>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class CreateMembershipRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API CreateMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembership"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline CreateMembershipRequest& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline CreateMembershipRequest& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the associated collaboration.</p>
     */
    inline CreateMembershipRequest& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}


    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline const MembershipQueryLogStatus& GetQueryLogStatus() const{ return m_queryLogStatus; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline bool QueryLogStatusHasBeenSet() const { return m_queryLogStatusHasBeenSet; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline void SetQueryLogStatus(const MembershipQueryLogStatus& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = value; }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline void SetQueryLogStatus(MembershipQueryLogStatus&& value) { m_queryLogStatusHasBeenSet = true; m_queryLogStatus = std::move(value); }

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline CreateMembershipRequest& WithQueryLogStatus(const MembershipQueryLogStatus& value) { SetQueryLogStatus(value); return *this;}

    /**
     * <p>An indicator as to whether query logging has been enabled or disabled for the
     * collaboration.</p>
     */
    inline CreateMembershipRequest& WithQueryLogStatus(MembershipQueryLogStatus&& value) { SetQueryLogStatus(std::move(value)); return *this;}

  private:

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    MembershipQueryLogStatus m_queryLogStatus;
    bool m_queryLogStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

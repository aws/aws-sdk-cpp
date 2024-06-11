/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the administrator account and
   * invitation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Administrator">AWS
   * API Reference</a></p>
   */
  class Administrator
  {
  public:
    AWS_GUARDDUTY_API Administrator();
    AWS_GUARDDUTY_API Administrator(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Administrator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Administrator& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Administrator& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Administrator& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }
    inline Administrator& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}
    inline Administrator& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}
    inline Administrator& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline const Aws::String& GetRelationshipStatus() const{ return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    inline void SetRelationshipStatus(const Aws::String& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }
    inline void SetRelationshipStatus(Aws::String&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }
    inline void SetRelationshipStatus(const char* value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus.assign(value); }
    inline Administrator& WithRelationshipStatus(const Aws::String& value) { SetRelationshipStatus(value); return *this;}
    inline Administrator& WithRelationshipStatus(Aws::String&& value) { SetRelationshipStatus(std::move(value)); return *this;}
    inline Administrator& WithRelationshipStatus(const char* value) { SetRelationshipStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline const Aws::String& GetInvitedAt() const{ return m_invitedAt; }
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }
    inline void SetInvitedAt(const Aws::String& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }
    inline void SetInvitedAt(Aws::String&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }
    inline void SetInvitedAt(const char* value) { m_invitedAtHasBeenSet = true; m_invitedAt.assign(value); }
    inline Administrator& WithInvitedAt(const Aws::String& value) { SetInvitedAt(value); return *this;}
    inline Administrator& WithInvitedAt(Aws::String&& value) { SetInvitedAt(std::move(value)); return *this;}
    inline Administrator& WithInvitedAt(const char* value) { SetInvitedAt(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;

    Aws::String m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet = false;

    Aws::String m_invitedAt;
    bool m_invitedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

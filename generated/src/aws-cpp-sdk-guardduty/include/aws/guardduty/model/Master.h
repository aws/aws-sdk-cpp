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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Master">AWS
   * API Reference</a></p>
   */
  class Master
  {
  public:
    AWS_GUARDDUTY_API Master();
    AWS_GUARDDUTY_API Master(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Master& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline Master& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline Master& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the account used as the administrator account.</p>
     */
    inline Master& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline Master& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline Master& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The value used to validate the administrator account to the member
     * account.</p>
     */
    inline Master& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline const Aws::String& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline void SetRelationshipStatus(const Aws::String& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline void SetRelationshipStatus(Aws::String&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline void SetRelationshipStatus(const char* value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus.assign(value); }

    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline Master& WithRelationshipStatus(const Aws::String& value) { SetRelationshipStatus(value); return *this;}

    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline Master& WithRelationshipStatus(Aws::String&& value) { SetRelationshipStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the relationship between the administrator and member
     * accounts.</p>
     */
    inline Master& WithRelationshipStatus(const char* value) { SetRelationshipStatus(value); return *this;}


    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline const Aws::String& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline void SetInvitedAt(const Aws::String& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline void SetInvitedAt(Aws::String&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline void SetInvitedAt(const char* value) { m_invitedAtHasBeenSet = true; m_invitedAt.assign(value); }

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline Master& WithInvitedAt(const Aws::String& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline Master& WithInvitedAt(Aws::String&& value) { SetInvitedAt(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline Master& WithInvitedAt(const char* value) { SetInvitedAt(value); return *this;}

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

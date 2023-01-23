/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/RelationshipStatus.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an Amazon Macie membership
   * invitation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Invitation">AWS
   * API Reference</a></p>
   */
  class Invitation
  {
  public:
    AWS_MACIE2_API Invitation();
    AWS_MACIE2_API Invitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline Invitation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline Invitation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline Invitation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline Invitation& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline Invitation& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline Invitation& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the invitation
     * was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the invitation
     * was sent.</p>
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the invitation
     * was sent.</p>
     */
    inline void SetInvitedAt(const Aws::Utils::DateTime& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the invitation
     * was sent.</p>
     */
    inline void SetInvitedAt(Aws::Utils::DateTime&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the invitation
     * was sent.</p>
     */
    inline Invitation& WithInvitedAt(const Aws::Utils::DateTime& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the invitation
     * was sent.</p>
     */
    inline Invitation& WithInvitedAt(Aws::Utils::DateTime&& value) { SetInvitedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the relationship between the account that sent the invitation
     * and the account that received the invitation.</p>
     */
    inline const RelationshipStatus& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * <p>The status of the relationship between the account that sent the invitation
     * and the account that received the invitation.</p>
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * <p>The status of the relationship between the account that sent the invitation
     * and the account that received the invitation.</p>
     */
    inline void SetRelationshipStatus(const RelationshipStatus& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * <p>The status of the relationship between the account that sent the invitation
     * and the account that received the invitation.</p>
     */
    inline void SetRelationshipStatus(RelationshipStatus&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * <p>The status of the relationship between the account that sent the invitation
     * and the account that received the invitation.</p>
     */
    inline Invitation& WithRelationshipStatus(const RelationshipStatus& value) { SetRelationshipStatus(value); return *this;}

    /**
     * <p>The status of the relationship between the account that sent the invitation
     * and the account that received the invitation.</p>
     */
    inline Invitation& WithRelationshipStatus(RelationshipStatus&& value) { SetRelationshipStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt;
    bool m_invitedAtHasBeenSet = false;

    RelationshipStatus m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

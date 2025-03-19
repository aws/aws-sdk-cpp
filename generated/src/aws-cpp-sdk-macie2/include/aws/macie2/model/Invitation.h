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
    AWS_MACIE2_API Invitation() = default;
    AWS_MACIE2_API Invitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Invitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that sent the
     * invitation.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Invitation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the invitation.</p>
     */
    inline const Aws::String& GetInvitationId() const { return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    template<typename InvitationIdT = Aws::String>
    void SetInvitationId(InvitationIdT&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::forward<InvitationIdT>(value); }
    template<typename InvitationIdT = Aws::String>
    Invitation& WithInvitationId(InvitationIdT&& value) { SetInvitationId(std::forward<InvitationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the invitation
     * was sent.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const { return m_invitedAt; }
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    void SetInvitedAt(InvitedAtT&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::forward<InvitedAtT>(value); }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    Invitation& WithInvitedAt(InvitedAtT&& value) { SetInvitedAt(std::forward<InvitedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the relationship between the account that sent the invitation
     * and the account that received the invitation.</p>
     */
    inline RelationshipStatus GetRelationshipStatus() const { return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    inline void SetRelationshipStatus(RelationshipStatus value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }
    inline Invitation& WithRelationshipStatus(RelationshipStatus value) { SetRelationshipStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt{};
    bool m_invitedAtHasBeenSet = false;

    RelationshipStatus m_relationshipStatus{RelationshipStatus::NOT_SET};
    bool m_relationshipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

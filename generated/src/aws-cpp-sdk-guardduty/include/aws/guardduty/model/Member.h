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
   * <p>Contains information about the member account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Member">AWS
   * API Reference</a></p>
   */
  class Member
  {
  public:
    AWS_GUARDDUTY_API Member() = default;
    AWS_GUARDDUTY_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Member& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detector ID of the member account.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    Member& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The administrator account ID.</p>
     */
    inline const Aws::String& GetMasterId() const { return m_masterId; }
    inline bool MasterIdHasBeenSet() const { return m_masterIdHasBeenSet; }
    template<typename MasterIdT = Aws::String>
    void SetMasterId(MasterIdT&& value) { m_masterIdHasBeenSet = true; m_masterId = std::forward<MasterIdT>(value); }
    template<typename MasterIdT = Aws::String>
    Member& WithMasterId(MasterIdT&& value) { SetMasterId(std::forward<MasterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the member account.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    Member& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline const Aws::String& GetRelationshipStatus() const { return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    template<typename RelationshipStatusT = Aws::String>
    void SetRelationshipStatus(RelationshipStatusT&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::forward<RelationshipStatusT>(value); }
    template<typename RelationshipStatusT = Aws::String>
    Member& WithRelationshipStatus(RelationshipStatusT&& value) { SetRelationshipStatus(std::forward<RelationshipStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline const Aws::String& GetInvitedAt() const { return m_invitedAt; }
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }
    template<typename InvitedAtT = Aws::String>
    void SetInvitedAt(InvitedAtT&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::forward<InvitedAtT>(value); }
    template<typename InvitedAtT = Aws::String>
    Member& WithInvitedAt(InvitedAtT&& value) { SetInvitedAt(std::forward<InvitedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::String>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::String>
    Member& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The administrator account ID.</p>
     */
    inline const Aws::String& GetAdministratorId() const { return m_administratorId; }
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }
    template<typename AdministratorIdT = Aws::String>
    void SetAdministratorId(AdministratorIdT&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::forward<AdministratorIdT>(value); }
    template<typename AdministratorIdT = Aws::String>
    Member& WithAdministratorId(AdministratorIdT&& value) { SetAdministratorId(std::forward<AdministratorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_masterId;
    bool m_masterIdHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet = false;

    Aws::String m_invitedAt;
    bool m_invitedAtHasBeenSet = false;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_administratorId;
    bool m_administratorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

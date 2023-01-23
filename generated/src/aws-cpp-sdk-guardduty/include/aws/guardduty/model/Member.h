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
    AWS_GUARDDUTY_API Member();
    AWS_GUARDDUTY_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the member account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the member account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the member account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the member account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the member account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the member account.</p>
     */
    inline Member& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the member account.</p>
     */
    inline Member& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the member account.</p>
     */
    inline Member& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The detector ID of the member account.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The detector ID of the member account.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The detector ID of the member account.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The detector ID of the member account.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The detector ID of the member account.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The detector ID of the member account.</p>
     */
    inline Member& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The detector ID of the member account.</p>
     */
    inline Member& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The detector ID of the member account.</p>
     */
    inline Member& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The administrator account ID.</p>
     */
    inline const Aws::String& GetMasterId() const{ return m_masterId; }

    /**
     * <p>The administrator account ID.</p>
     */
    inline bool MasterIdHasBeenSet() const { return m_masterIdHasBeenSet; }

    /**
     * <p>The administrator account ID.</p>
     */
    inline void SetMasterId(const Aws::String& value) { m_masterIdHasBeenSet = true; m_masterId = value; }

    /**
     * <p>The administrator account ID.</p>
     */
    inline void SetMasterId(Aws::String&& value) { m_masterIdHasBeenSet = true; m_masterId = std::move(value); }

    /**
     * <p>The administrator account ID.</p>
     */
    inline void SetMasterId(const char* value) { m_masterIdHasBeenSet = true; m_masterId.assign(value); }

    /**
     * <p>The administrator account ID.</p>
     */
    inline Member& WithMasterId(const Aws::String& value) { SetMasterId(value); return *this;}

    /**
     * <p>The administrator account ID.</p>
     */
    inline Member& WithMasterId(Aws::String&& value) { SetMasterId(std::move(value)); return *this;}

    /**
     * <p>The administrator account ID.</p>
     */
    inline Member& WithMasterId(const char* value) { SetMasterId(value); return *this;}


    /**
     * <p>The email address of the member account.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the member account.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the member account.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the member account.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the member account.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the member account.</p>
     */
    inline Member& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the member account.</p>
     */
    inline Member& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the member account.</p>
     */
    inline Member& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline const Aws::String& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline void SetRelationshipStatus(const Aws::String& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline void SetRelationshipStatus(Aws::String&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline void SetRelationshipStatus(const char* value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus.assign(value); }

    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline Member& WithRelationshipStatus(const Aws::String& value) { SetRelationshipStatus(value); return *this;}

    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline Member& WithRelationshipStatus(Aws::String&& value) { SetRelationshipStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the relationship between the member and the administrator.</p>
     */
    inline Member& WithRelationshipStatus(const char* value) { SetRelationshipStatus(value); return *this;}


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
    inline Member& WithInvitedAt(const Aws::String& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline Member& WithInvitedAt(Aws::String&& value) { SetInvitedAt(std::move(value)); return *this;}

    /**
     * <p>The timestamp when the invitation was sent.</p>
     */
    inline Member& WithInvitedAt(const char* value) { SetInvitedAt(value); return *this;}


    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline Member& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline Member& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>The last-updated timestamp of the member.</p>
     */
    inline Member& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}


    /**
     * <p>The administrator account ID.</p>
     */
    inline const Aws::String& GetAdministratorId() const{ return m_administratorId; }

    /**
     * <p>The administrator account ID.</p>
     */
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }

    /**
     * <p>The administrator account ID.</p>
     */
    inline void SetAdministratorId(const Aws::String& value) { m_administratorIdHasBeenSet = true; m_administratorId = value; }

    /**
     * <p>The administrator account ID.</p>
     */
    inline void SetAdministratorId(Aws::String&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::move(value); }

    /**
     * <p>The administrator account ID.</p>
     */
    inline void SetAdministratorId(const char* value) { m_administratorIdHasBeenSet = true; m_administratorId.assign(value); }

    /**
     * <p>The administrator account ID.</p>
     */
    inline Member& WithAdministratorId(const Aws::String& value) { SetAdministratorId(value); return *this;}

    /**
     * <p>The administrator account ID.</p>
     */
    inline Member& WithAdministratorId(Aws::String&& value) { SetAdministratorId(std::move(value)); return *this;}

    /**
     * <p>The administrator account ID.</p>
     */
    inline Member& WithAdministratorId(const char* value) { SetAdministratorId(value); return *this;}

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

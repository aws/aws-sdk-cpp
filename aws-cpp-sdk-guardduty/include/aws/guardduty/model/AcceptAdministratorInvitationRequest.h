/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AcceptAdministratorInvitationRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API AcceptAdministratorInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptAdministratorInvitation"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline const Aws::String& GetAdministratorId() const{ return m_administratorId; }

    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }

    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline void SetAdministratorId(const Aws::String& value) { m_administratorIdHasBeenSet = true; m_administratorId = value; }

    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline void SetAdministratorId(Aws::String&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::move(value); }

    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline void SetAdministratorId(const char* value) { m_administratorIdHasBeenSet = true; m_administratorId.assign(value); }

    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithAdministratorId(const Aws::String& value) { SetAdministratorId(value); return *this;}

    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithAdministratorId(Aws::String&& value) { SetAdministratorId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithAdministratorId(const char* value) { SetAdministratorId(value); return *this;}


    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline AcceptAdministratorInvitationRequest& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::String m_administratorId;
    bool m_administratorIdHasBeenSet = false;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

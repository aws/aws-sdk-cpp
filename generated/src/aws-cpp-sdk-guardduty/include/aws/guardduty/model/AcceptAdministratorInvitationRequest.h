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
    AWS_GUARDDUTY_API AcceptAdministratorInvitationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptAdministratorInvitation"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the detector of the GuardDuty member account.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    AcceptAdministratorInvitationRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the GuardDuty administrator account whose invitation you're
     * accepting.</p>
     */
    inline const Aws::String& GetAdministratorId() const { return m_administratorId; }
    inline bool AdministratorIdHasBeenSet() const { return m_administratorIdHasBeenSet; }
    template<typename AdministratorIdT = Aws::String>
    void SetAdministratorId(AdministratorIdT&& value) { m_administratorIdHasBeenSet = true; m_administratorId = std::forward<AdministratorIdT>(value); }
    template<typename AdministratorIdT = Aws::String>
    AcceptAdministratorInvitationRequest& WithAdministratorId(AdministratorIdT&& value) { SetAdministratorId(std::forward<AdministratorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that is used to validate the administrator account to the member
     * account.</p>
     */
    inline const Aws::String& GetInvitationId() const { return m_invitationId; }
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }
    template<typename InvitationIdT = Aws::String>
    void SetInvitationId(InvitationIdT&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::forward<InvitationIdT>(value); }
    template<typename InvitationIdT = Aws::String>
    AcceptAdministratorInvitationRequest& WithInvitationId(InvitationIdT&& value) { SetInvitationId(std::forward<InvitationIdT>(value)); return *this;}
    ///@}
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

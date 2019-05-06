/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * AcceptInvitation request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AcceptInvitationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API AcceptInvitationRequest : public GuardDutyRequest
  {
  public:
    AcceptInvitationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptInvitation"; }

    Aws::String SerializePayload() const override;


    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline AcceptInvitationRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline AcceptInvitationRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty member account.
     */
    inline AcceptInvitationRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * This value is used to validate the master account to the member account.
     */
    inline const Aws::String& GetInvitationId() const{ return m_invitationId; }

    /**
     * This value is used to validate the master account to the member account.
     */
    inline bool InvitationIdHasBeenSet() const { return m_invitationIdHasBeenSet; }

    /**
     * This value is used to validate the master account to the member account.
     */
    inline void SetInvitationId(const Aws::String& value) { m_invitationIdHasBeenSet = true; m_invitationId = value; }

    /**
     * This value is used to validate the master account to the member account.
     */
    inline void SetInvitationId(Aws::String&& value) { m_invitationIdHasBeenSet = true; m_invitationId = std::move(value); }

    /**
     * This value is used to validate the master account to the member account.
     */
    inline void SetInvitationId(const char* value) { m_invitationIdHasBeenSet = true; m_invitationId.assign(value); }

    /**
     * This value is used to validate the master account to the member account.
     */
    inline AcceptInvitationRequest& WithInvitationId(const Aws::String& value) { SetInvitationId(value); return *this;}

    /**
     * This value is used to validate the master account to the member account.
     */
    inline AcceptInvitationRequest& WithInvitationId(Aws::String&& value) { SetInvitationId(std::move(value)); return *this;}

    /**
     * This value is used to validate the master account to the member account.
     */
    inline AcceptInvitationRequest& WithInvitationId(const char* value) { SetInvitationId(value); return *this;}


    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline const Aws::String& GetMasterId() const{ return m_masterId; }

    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline bool MasterIdHasBeenSet() const { return m_masterIdHasBeenSet; }

    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline void SetMasterId(const Aws::String& value) { m_masterIdHasBeenSet = true; m_masterId = value; }

    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline void SetMasterId(Aws::String&& value) { m_masterIdHasBeenSet = true; m_masterId = std::move(value); }

    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline void SetMasterId(const char* value) { m_masterIdHasBeenSet = true; m_masterId.assign(value); }

    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline AcceptInvitationRequest& WithMasterId(const Aws::String& value) { SetMasterId(value); return *this;}

    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline AcceptInvitationRequest& WithMasterId(Aws::String&& value) { SetMasterId(std::move(value)); return *this;}

    /**
     * The account ID of the master GuardDuty account whose invitation you're
     * accepting.
     */
    inline AcceptInvitationRequest& WithMasterId(const char* value) { SetMasterId(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::String m_invitationId;
    bool m_invitationIdHasBeenSet;

    Aws::String m_masterId;
    bool m_masterIdHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

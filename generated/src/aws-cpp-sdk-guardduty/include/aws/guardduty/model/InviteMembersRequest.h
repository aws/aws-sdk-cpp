/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class InviteMembersRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API InviteMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InviteMembers"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline InviteMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline InviteMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * invite members with.</p>
     */
    inline InviteMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline InviteMembersRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline InviteMembersRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline InviteMembersRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline InviteMembersRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.</p>
     */
    inline InviteMembersRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * <p>A Boolean value that specifies whether you want to disable email notification
     * to the accounts that you are inviting to GuardDuty as members.</p>
     */
    inline bool GetDisableEmailNotification() const{ return m_disableEmailNotification; }

    /**
     * <p>A Boolean value that specifies whether you want to disable email notification
     * to the accounts that you are inviting to GuardDuty as members.</p>
     */
    inline bool DisableEmailNotificationHasBeenSet() const { return m_disableEmailNotificationHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether you want to disable email notification
     * to the accounts that you are inviting to GuardDuty as members.</p>
     */
    inline void SetDisableEmailNotification(bool value) { m_disableEmailNotificationHasBeenSet = true; m_disableEmailNotification = value; }

    /**
     * <p>A Boolean value that specifies whether you want to disable email notification
     * to the accounts that you are inviting to GuardDuty as members.</p>
     */
    inline InviteMembersRequest& WithDisableEmailNotification(bool value) { SetDisableEmailNotification(value); return *this;}


    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline InviteMembersRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline InviteMembersRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The invitation message that you want to send to the accounts that you're
     * inviting to GuardDuty as members.</p>
     */
    inline InviteMembersRequest& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    bool m_disableEmailNotification;
    bool m_disableEmailNotificationHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

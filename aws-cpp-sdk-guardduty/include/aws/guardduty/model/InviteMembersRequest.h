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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * InviteMembers request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InviteMembersRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API InviteMembersRequest : public GuardDutyRequest
  {
  public:
    InviteMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InviteMembers"; }

    Aws::String SerializePayload() const override;


    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline InviteMembersRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline InviteMembersRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline InviteMembersRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline InviteMembersRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * A list of account IDs of the accounts that you want to invite to GuardDuty as
     * members.
     */
    inline InviteMembersRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline InviteMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline InviteMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * invite members.
     */
    inline InviteMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * A boolean value that specifies whether you want to disable email notification to
     * the accounts that you’re inviting to GuardDuty as members.
     */
    inline bool GetDisableEmailNotification() const{ return m_disableEmailNotification; }

    /**
     * A boolean value that specifies whether you want to disable email notification to
     * the accounts that you’re inviting to GuardDuty as members.
     */
    inline bool DisableEmailNotificationHasBeenSet() const { return m_disableEmailNotificationHasBeenSet; }

    /**
     * A boolean value that specifies whether you want to disable email notification to
     * the accounts that you’re inviting to GuardDuty as members.
     */
    inline void SetDisableEmailNotification(bool value) { m_disableEmailNotificationHasBeenSet = true; m_disableEmailNotification = value; }

    /**
     * A boolean value that specifies whether you want to disable email notification to
     * the accounts that you’re inviting to GuardDuty as members.
     */
    inline InviteMembersRequest& WithDisableEmailNotification(bool value) { SetDisableEmailNotification(value); return *this;}


    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline InviteMembersRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline InviteMembersRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * The invitation message that you want to send to the accounts that you’re
     * inviting to GuardDuty as members.
     */
    inline InviteMembersRequest& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    bool m_disableEmailNotification;
    bool m_disableEmailNotificationHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

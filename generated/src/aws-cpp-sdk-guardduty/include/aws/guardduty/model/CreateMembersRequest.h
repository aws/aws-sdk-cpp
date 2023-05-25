/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/AccountDetail.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class CreateMembersRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API CreateMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembers"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline CreateMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline CreateMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account that you want to
     * associate member accounts with.</p>
     */
    inline CreateMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline const Aws::Vector<AccountDetail>& GetAccountDetails() const{ return m_accountDetails; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline bool AccountDetailsHasBeenSet() const { return m_accountDetailsHasBeenSet; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline void SetAccountDetails(const Aws::Vector<AccountDetail>& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = value; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline void SetAccountDetails(Aws::Vector<AccountDetail>&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = std::move(value); }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(const Aws::Vector<AccountDetail>& value) { SetAccountDetails(value); return *this;}

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(Aws::Vector<AccountDetail>&& value) { SetAccountDetails(std::move(value)); return *this;}

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(const AccountDetail& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(value); return *this; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(AccountDetail&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<AccountDetail> m_accountDetails;
    bool m_accountDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

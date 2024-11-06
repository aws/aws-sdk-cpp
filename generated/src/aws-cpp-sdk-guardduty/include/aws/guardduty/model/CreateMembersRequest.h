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


    ///@{
    /**
     * <p>The unique ID of the detector of the GuardDuty account for which you want to
     * associate member accounts.</p> <p>To find the <code>detectorId</code> in the
     * current Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline CreateMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline CreateMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline CreateMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the GuardDuty administrator account.</p>
     */
    inline const Aws::Vector<AccountDetail>& GetAccountDetails() const{ return m_accountDetails; }
    inline bool AccountDetailsHasBeenSet() const { return m_accountDetailsHasBeenSet; }
    inline void SetAccountDetails(const Aws::Vector<AccountDetail>& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = value; }
    inline void SetAccountDetails(Aws::Vector<AccountDetail>&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = std::move(value); }
    inline CreateMembersRequest& WithAccountDetails(const Aws::Vector<AccountDetail>& value) { SetAccountDetails(value); return *this;}
    inline CreateMembersRequest& WithAccountDetails(Aws::Vector<AccountDetail>&& value) { SetAccountDetails(std::move(value)); return *this;}
    inline CreateMembersRequest& AddAccountDetails(const AccountDetail& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(value); return *this; }
    inline CreateMembersRequest& AddAccountDetails(AccountDetail&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<AccountDetail> m_accountDetails;
    bool m_accountDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

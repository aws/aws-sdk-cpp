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
  class AWS_GUARDDUTY_API CreateMembersRequest : public GuardDutyRequest
  {
  public:
    CreateMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMembers"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline CreateMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline CreateMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.</p>
     */
    inline CreateMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline const Aws::Vector<AccountDetail>& GetAccountDetails() const{ return m_accountDetails; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline bool AccountDetailsHasBeenSet() const { return m_accountDetailsHasBeenSet; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline void SetAccountDetails(const Aws::Vector<AccountDetail>& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = value; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline void SetAccountDetails(Aws::Vector<AccountDetail>&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = std::move(value); }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(const Aws::Vector<AccountDetail>& value) { SetAccountDetails(value); return *this;}

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline CreateMembersRequest& WithAccountDetails(Aws::Vector<AccountDetail>&& value) { SetAccountDetails(std::move(value)); return *this;}

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(const AccountDetail& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(value); return *this; }

    /**
     * <p>A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.</p>
     */
    inline CreateMembersRequest& AddAccountDetails(AccountDetail&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::Vector<AccountDetail> m_accountDetails;
    bool m_accountDetailsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

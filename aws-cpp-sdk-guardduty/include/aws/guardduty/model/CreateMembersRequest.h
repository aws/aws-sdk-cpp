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
#include <aws/guardduty/model/AccountDetail.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * CreateMembers request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateMembersRequest">AWS
   * API Reference</a></p>
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
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline const Aws::Vector<AccountDetail>& GetAccountDetails() const{ return m_accountDetails; }

    /**
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline bool AccountDetailsHasBeenSet() const { return m_accountDetailsHasBeenSet; }

    /**
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline void SetAccountDetails(const Aws::Vector<AccountDetail>& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = value; }

    /**
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline void SetAccountDetails(Aws::Vector<AccountDetail>&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails = std::move(value); }

    /**
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline CreateMembersRequest& WithAccountDetails(const Aws::Vector<AccountDetail>& value) { SetAccountDetails(value); return *this;}

    /**
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline CreateMembersRequest& WithAccountDetails(Aws::Vector<AccountDetail>&& value) { SetAccountDetails(std::move(value)); return *this;}

    /**
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline CreateMembersRequest& AddAccountDetails(const AccountDetail& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(value); return *this; }

    /**
     * A list of account ID and email address pairs of the accounts that you want to
     * associate with the master GuardDuty account.
     */
    inline CreateMembersRequest& AddAccountDetails(AccountDetail&& value) { m_accountDetailsHasBeenSet = true; m_accountDetails.push_back(std::move(value)); return *this; }


    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline CreateMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline CreateMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account with which you want to
     * associate member accounts.
     */
    inline CreateMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}

  private:

    Aws::Vector<AccountDetail> m_accountDetails;
    bool m_accountDetailsHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

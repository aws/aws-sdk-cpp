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
   * DisassociateMembers request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DisassociateMembersRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API DisassociateMembersRequest : public GuardDutyRequest
  {
  public:
    DisassociateMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateMembers"; }

    Aws::String SerializePayload() const override;


    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * A list of account IDs of the GuardDuty member accounts that you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account whose members you want to
     * disassociate from master.
     */
    inline DisassociateMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

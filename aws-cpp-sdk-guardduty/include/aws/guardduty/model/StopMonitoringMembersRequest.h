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
   * StopMonitoringMembers request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/StopMonitoringMembersRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API StopMonitoringMembersRequest : public GuardDutyRequest
  {
  public:
    StopMonitoringMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopMonitoringMembers"; }

    Aws::String SerializePayload() const override;


    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline StopMonitoringMembersRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline StopMonitoringMembersRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline StopMonitoringMembersRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline StopMonitoringMembersRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * A list of account IDs of the GuardDuty member accounts whose findings you want
     * the master account to stop monitoring.
     */
    inline StopMonitoringMembersRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline StopMonitoringMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline StopMonitoringMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The unique ID of the detector of the GuardDuty account that you want to stop
     * from monitor members' findings.
     */
    inline StopMonitoringMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

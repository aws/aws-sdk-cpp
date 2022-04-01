﻿/**
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
  class AWS_GUARDDUTY_API GetMembersRequest : public GuardDutyRequest
  {
  public:
    GetMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMembers"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline GetMembersRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline GetMembersRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the detector of the GuardDuty account whose members you want
     * to retrieve.</p>
     */
    inline GetMembersRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline GetMembersRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline GetMembersRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline GetMembersRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline GetMembersRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of account IDs of the GuardDuty member accounts that you want to
     * describe.</p>
     */
    inline GetMembersRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

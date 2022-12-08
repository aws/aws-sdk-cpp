/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/snowball/model/LongTermPricingType.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{

  /**
   * <p>Each <code>LongTermPricingListEntry</code> object contains information about
   * a long-term pricing type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/LongTermPricingListEntry">AWS
   * API Reference</a></p>
   */
  class LongTermPricingListEntry
  {
  public:
    AWS_SNOWBALL_API LongTermPricingListEntry();
    AWS_SNOWBALL_API LongTermPricingListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API LongTermPricingListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const{ return m_longTermPricingId; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline bool LongTermPricingIdHasBeenSet() const { return m_longTermPricingIdHasBeenSet; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(const Aws::String& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = value; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(Aws::String&& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = std::move(value); }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(const char* value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId.assign(value); }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingId(const Aws::String& value) { SetLongTermPricingId(value); return *this;}

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingId(Aws::String&& value) { SetLongTermPricingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingId(const char* value) { SetLongTermPricingId(value); return *this;}


    /**
     * <p>The end date the long-term pricing contract.</p>
     */
    inline const Aws::Utils::DateTime& GetLongTermPricingEndDate() const{ return m_longTermPricingEndDate; }

    /**
     * <p>The end date the long-term pricing contract.</p>
     */
    inline bool LongTermPricingEndDateHasBeenSet() const { return m_longTermPricingEndDateHasBeenSet; }

    /**
     * <p>The end date the long-term pricing contract.</p>
     */
    inline void SetLongTermPricingEndDate(const Aws::Utils::DateTime& value) { m_longTermPricingEndDateHasBeenSet = true; m_longTermPricingEndDate = value; }

    /**
     * <p>The end date the long-term pricing contract.</p>
     */
    inline void SetLongTermPricingEndDate(Aws::Utils::DateTime&& value) { m_longTermPricingEndDateHasBeenSet = true; m_longTermPricingEndDate = std::move(value); }

    /**
     * <p>The end date the long-term pricing contract.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingEndDate(const Aws::Utils::DateTime& value) { SetLongTermPricingEndDate(value); return *this;}

    /**
     * <p>The end date the long-term pricing contract.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingEndDate(Aws::Utils::DateTime&& value) { SetLongTermPricingEndDate(std::move(value)); return *this;}


    /**
     * <p>The start date of the long-term pricing contract.</p>
     */
    inline const Aws::Utils::DateTime& GetLongTermPricingStartDate() const{ return m_longTermPricingStartDate; }

    /**
     * <p>The start date of the long-term pricing contract.</p>
     */
    inline bool LongTermPricingStartDateHasBeenSet() const { return m_longTermPricingStartDateHasBeenSet; }

    /**
     * <p>The start date of the long-term pricing contract.</p>
     */
    inline void SetLongTermPricingStartDate(const Aws::Utils::DateTime& value) { m_longTermPricingStartDateHasBeenSet = true; m_longTermPricingStartDate = value; }

    /**
     * <p>The start date of the long-term pricing contract.</p>
     */
    inline void SetLongTermPricingStartDate(Aws::Utils::DateTime&& value) { m_longTermPricingStartDateHasBeenSet = true; m_longTermPricingStartDate = std::move(value); }

    /**
     * <p>The start date of the long-term pricing contract.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingStartDate(const Aws::Utils::DateTime& value) { SetLongTermPricingStartDate(value); return *this;}

    /**
     * <p>The start date of the long-term pricing contract.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingStartDate(Aws::Utils::DateTime&& value) { SetLongTermPricingStartDate(std::move(value)); return *this;}


    /**
     * <p>The type of long-term pricing that was selected for the device.</p>
     */
    inline const LongTermPricingType& GetLongTermPricingType() const{ return m_longTermPricingType; }

    /**
     * <p>The type of long-term pricing that was selected for the device.</p>
     */
    inline bool LongTermPricingTypeHasBeenSet() const { return m_longTermPricingTypeHasBeenSet; }

    /**
     * <p>The type of long-term pricing that was selected for the device.</p>
     */
    inline void SetLongTermPricingType(const LongTermPricingType& value) { m_longTermPricingTypeHasBeenSet = true; m_longTermPricingType = value; }

    /**
     * <p>The type of long-term pricing that was selected for the device.</p>
     */
    inline void SetLongTermPricingType(LongTermPricingType&& value) { m_longTermPricingTypeHasBeenSet = true; m_longTermPricingType = std::move(value); }

    /**
     * <p>The type of long-term pricing that was selected for the device.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingType(const LongTermPricingType& value) { SetLongTermPricingType(value); return *this;}

    /**
     * <p>The type of long-term pricing that was selected for the device.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingType(LongTermPricingType&& value) { SetLongTermPricingType(std::move(value)); return *this;}


    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline const Aws::String& GetCurrentActiveJob() const{ return m_currentActiveJob; }

    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline bool CurrentActiveJobHasBeenSet() const { return m_currentActiveJobHasBeenSet; }

    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline void SetCurrentActiveJob(const Aws::String& value) { m_currentActiveJobHasBeenSet = true; m_currentActiveJob = value; }

    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline void SetCurrentActiveJob(Aws::String&& value) { m_currentActiveJobHasBeenSet = true; m_currentActiveJob = std::move(value); }

    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline void SetCurrentActiveJob(const char* value) { m_currentActiveJobHasBeenSet = true; m_currentActiveJob.assign(value); }

    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithCurrentActiveJob(const Aws::String& value) { SetCurrentActiveJob(value); return *this;}

    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithCurrentActiveJob(Aws::String&& value) { SetCurrentActiveJob(std::move(value)); return *this;}

    /**
     * <p>The current active jobs on the device the long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithCurrentActiveJob(const char* value) { SetCurrentActiveJob(value); return *this;}


    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline const Aws::String& GetReplacementJob() const{ return m_replacementJob; }

    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline bool ReplacementJobHasBeenSet() const { return m_replacementJobHasBeenSet; }

    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline void SetReplacementJob(const Aws::String& value) { m_replacementJobHasBeenSet = true; m_replacementJob = value; }

    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline void SetReplacementJob(Aws::String&& value) { m_replacementJobHasBeenSet = true; m_replacementJob = std::move(value); }

    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline void SetReplacementJob(const char* value) { m_replacementJobHasBeenSet = true; m_replacementJob.assign(value); }

    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline LongTermPricingListEntry& WithReplacementJob(const Aws::String& value) { SetReplacementJob(value); return *this;}

    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline LongTermPricingListEntry& WithReplacementJob(Aws::String&& value) { SetReplacementJob(std::move(value)); return *this;}

    /**
     * <p>A new device that replaces a device that is ordered with long-term
     * pricing.</p>
     */
    inline LongTermPricingListEntry& WithReplacementJob(const char* value) { SetReplacementJob(value); return *this;}


    /**
     * <p>If set to <code>true</code>, specifies that the current long-term pricing
     * type for the device should be automatically renewed before the long-term pricing
     * contract expires.</p>
     */
    inline bool GetIsLongTermPricingAutoRenew() const{ return m_isLongTermPricingAutoRenew; }

    /**
     * <p>If set to <code>true</code>, specifies that the current long-term pricing
     * type for the device should be automatically renewed before the long-term pricing
     * contract expires.</p>
     */
    inline bool IsLongTermPricingAutoRenewHasBeenSet() const { return m_isLongTermPricingAutoRenewHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, specifies that the current long-term pricing
     * type for the device should be automatically renewed before the long-term pricing
     * contract expires.</p>
     */
    inline void SetIsLongTermPricingAutoRenew(bool value) { m_isLongTermPricingAutoRenewHasBeenSet = true; m_isLongTermPricingAutoRenew = value; }

    /**
     * <p>If set to <code>true</code>, specifies that the current long-term pricing
     * type for the device should be automatically renewed before the long-term pricing
     * contract expires.</p>
     */
    inline LongTermPricingListEntry& WithIsLongTermPricingAutoRenew(bool value) { SetIsLongTermPricingAutoRenew(value); return *this;}


    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline const Aws::String& GetLongTermPricingStatus() const{ return m_longTermPricingStatus; }

    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline bool LongTermPricingStatusHasBeenSet() const { return m_longTermPricingStatusHasBeenSet; }

    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline void SetLongTermPricingStatus(const Aws::String& value) { m_longTermPricingStatusHasBeenSet = true; m_longTermPricingStatus = value; }

    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline void SetLongTermPricingStatus(Aws::String&& value) { m_longTermPricingStatusHasBeenSet = true; m_longTermPricingStatus = std::move(value); }

    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline void SetLongTermPricingStatus(const char* value) { m_longTermPricingStatusHasBeenSet = true; m_longTermPricingStatus.assign(value); }

    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingStatus(const Aws::String& value) { SetLongTermPricingStatus(value); return *this;}

    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingStatus(Aws::String&& value) { SetLongTermPricingStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithLongTermPricingStatus(const char* value) { SetLongTermPricingStatus(value); return *this;}


    /**
     * <p>The type of Snow Family devices associated with this long-term pricing
     * job.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }

    /**
     * <p>The type of Snow Family devices associated with this long-term pricing
     * job.</p>
     */
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }

    /**
     * <p>The type of Snow Family devices associated with this long-term pricing
     * job.</p>
     */
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }

    /**
     * <p>The type of Snow Family devices associated with this long-term pricing
     * job.</p>
     */
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }

    /**
     * <p>The type of Snow Family devices associated with this long-term pricing
     * job.</p>
     */
    inline LongTermPricingListEntry& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}

    /**
     * <p>The type of Snow Family devices associated with this long-term pricing
     * job.</p>
     */
    inline LongTermPricingListEntry& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}


    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobIds() const{ return m_jobIds; }

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline bool JobIdsHasBeenSet() const { return m_jobIdsHasBeenSet; }

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline void SetJobIds(const Aws::Vector<Aws::String>& value) { m_jobIdsHasBeenSet = true; m_jobIds = value; }

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline void SetJobIds(Aws::Vector<Aws::String>&& value) { m_jobIdsHasBeenSet = true; m_jobIds = std::move(value); }

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithJobIds(const Aws::Vector<Aws::String>& value) { SetJobIds(value); return *this;}

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& WithJobIds(Aws::Vector<Aws::String>&& value) { SetJobIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& AddJobIds(const Aws::String& value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& AddJobIds(Aws::String&& value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the jobs that are associated with a long-term pricing type.</p>
     */
    inline LongTermPricingListEntry& AddJobIds(const char* value) { m_jobIdsHasBeenSet = true; m_jobIds.push_back(value); return *this; }

  private:

    Aws::String m_longTermPricingId;
    bool m_longTermPricingIdHasBeenSet = false;

    Aws::Utils::DateTime m_longTermPricingEndDate;
    bool m_longTermPricingEndDateHasBeenSet = false;

    Aws::Utils::DateTime m_longTermPricingStartDate;
    bool m_longTermPricingStartDateHasBeenSet = false;

    LongTermPricingType m_longTermPricingType;
    bool m_longTermPricingTypeHasBeenSet = false;

    Aws::String m_currentActiveJob;
    bool m_currentActiveJobHasBeenSet = false;

    Aws::String m_replacementJob;
    bool m_replacementJobHasBeenSet = false;

    bool m_isLongTermPricingAutoRenew;
    bool m_isLongTermPricingAutoRenewHasBeenSet = false;

    Aws::String m_longTermPricingStatus;
    bool m_longTermPricingStatusHasBeenSet = false;

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_jobIds;
    bool m_jobIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws

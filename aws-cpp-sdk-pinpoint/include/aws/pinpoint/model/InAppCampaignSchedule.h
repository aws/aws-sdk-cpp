/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignEventFilter.h>
#include <aws/pinpoint/model/QuietTime.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Schedule of the campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppCampaignSchedule">AWS
   * API Reference</a></p>
   */
  class InAppCampaignSchedule
  {
  public:
    AWS_PINPOINT_API InAppCampaignSchedule();
    AWS_PINPOINT_API InAppCampaignSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppCampaignSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }

    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline InAppCampaignSchedule& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline InAppCampaignSchedule& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}

    /**
     * <p>The scheduled time after which the in-app message should not be shown.
     * Timestamp is in ISO 8601 format.</p>
     */
    inline InAppCampaignSchedule& WithEndDate(const char* value) { SetEndDate(value); return *this;}


    /**
     * <p>The event filter the SDK has to use to show the in-app message in the
     * application.</p>
     */
    inline const CampaignEventFilter& GetEventFilter() const{ return m_eventFilter; }

    /**
     * <p>The event filter the SDK has to use to show the in-app message in the
     * application.</p>
     */
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }

    /**
     * <p>The event filter the SDK has to use to show the in-app message in the
     * application.</p>
     */
    inline void SetEventFilter(const CampaignEventFilter& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }

    /**
     * <p>The event filter the SDK has to use to show the in-app message in the
     * application.</p>
     */
    inline void SetEventFilter(CampaignEventFilter&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }

    /**
     * <p>The event filter the SDK has to use to show the in-app message in the
     * application.</p>
     */
    inline InAppCampaignSchedule& WithEventFilter(const CampaignEventFilter& value) { SetEventFilter(value); return *this;}

    /**
     * <p>The event filter the SDK has to use to show the in-app message in the
     * application.</p>
     */
    inline InAppCampaignSchedule& WithEventFilter(CampaignEventFilter&& value) { SetEventFilter(std::move(value)); return *this;}


    /**
     * <p>Time during which the in-app message should not be shown to the user.</p>
     */
    inline const QuietTime& GetQuietTime() const{ return m_quietTime; }

    /**
     * <p>Time during which the in-app message should not be shown to the user.</p>
     */
    inline bool QuietTimeHasBeenSet() const { return m_quietTimeHasBeenSet; }

    /**
     * <p>Time during which the in-app message should not be shown to the user.</p>
     */
    inline void SetQuietTime(const QuietTime& value) { m_quietTimeHasBeenSet = true; m_quietTime = value; }

    /**
     * <p>Time during which the in-app message should not be shown to the user.</p>
     */
    inline void SetQuietTime(QuietTime&& value) { m_quietTimeHasBeenSet = true; m_quietTime = std::move(value); }

    /**
     * <p>Time during which the in-app message should not be shown to the user.</p>
     */
    inline InAppCampaignSchedule& WithQuietTime(const QuietTime& value) { SetQuietTime(value); return *this;}

    /**
     * <p>Time during which the in-app message should not be shown to the user.</p>
     */
    inline InAppCampaignSchedule& WithQuietTime(QuietTime&& value) { SetQuietTime(std::move(value)); return *this;}

  private:

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;

    CampaignEventFilter m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    QuietTime m_quietTime;
    bool m_quietTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

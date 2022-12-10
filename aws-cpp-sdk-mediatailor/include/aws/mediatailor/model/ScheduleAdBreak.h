/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The schedule's ad break properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ScheduleAdBreak">AWS
   * API Reference</a></p>
   */
  class ScheduleAdBreak
  {
  public:
    AWS_MEDIATAILOR_API ScheduleAdBreak();
    AWS_MEDIATAILOR_API ScheduleAdBreak(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ScheduleAdBreak& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The approximate duration of the ad break, in seconds.</p>
     */
    inline long long GetApproximateDurationSeconds() const{ return m_approximateDurationSeconds; }

    /**
     * <p>The approximate duration of the ad break, in seconds.</p>
     */
    inline bool ApproximateDurationSecondsHasBeenSet() const { return m_approximateDurationSecondsHasBeenSet; }

    /**
     * <p>The approximate duration of the ad break, in seconds.</p>
     */
    inline void SetApproximateDurationSeconds(long long value) { m_approximateDurationSecondsHasBeenSet = true; m_approximateDurationSeconds = value; }

    /**
     * <p>The approximate duration of the ad break, in seconds.</p>
     */
    inline ScheduleAdBreak& WithApproximateDurationSeconds(long long value) { SetApproximateDurationSeconds(value); return *this;}


    /**
     * <p>The approximate time that the ad will start playing.</p>
     */
    inline const Aws::Utils::DateTime& GetApproximateStartTime() const{ return m_approximateStartTime; }

    /**
     * <p>The approximate time that the ad will start playing.</p>
     */
    inline bool ApproximateStartTimeHasBeenSet() const { return m_approximateStartTimeHasBeenSet; }

    /**
     * <p>The approximate time that the ad will start playing.</p>
     */
    inline void SetApproximateStartTime(const Aws::Utils::DateTime& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = value; }

    /**
     * <p>The approximate time that the ad will start playing.</p>
     */
    inline void SetApproximateStartTime(Aws::Utils::DateTime&& value) { m_approximateStartTimeHasBeenSet = true; m_approximateStartTime = std::move(value); }

    /**
     * <p>The approximate time that the ad will start playing.</p>
     */
    inline ScheduleAdBreak& WithApproximateStartTime(const Aws::Utils::DateTime& value) { SetApproximateStartTime(value); return *this;}

    /**
     * <p>The approximate time that the ad will start playing.</p>
     */
    inline ScheduleAdBreak& WithApproximateStartTime(Aws::Utils::DateTime&& value) { SetApproximateStartTime(std::move(value)); return *this;}


    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline ScheduleAdBreak& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline ScheduleAdBreak& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location containing the VOD source used for the ad
     * break.</p>
     */
    inline ScheduleAdBreak& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}


    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline const Aws::String& GetVodSourceName() const{ return m_vodSourceName; }

    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline bool VodSourceNameHasBeenSet() const { return m_vodSourceNameHasBeenSet; }

    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline void SetVodSourceName(const Aws::String& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = value; }

    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline void SetVodSourceName(Aws::String&& value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName = std::move(value); }

    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline void SetVodSourceName(const char* value) { m_vodSourceNameHasBeenSet = true; m_vodSourceName.assign(value); }

    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline ScheduleAdBreak& WithVodSourceName(const Aws::String& value) { SetVodSourceName(value); return *this;}

    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline ScheduleAdBreak& WithVodSourceName(Aws::String&& value) { SetVodSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the VOD source used for the ad break.</p>
     */
    inline ScheduleAdBreak& WithVodSourceName(const char* value) { SetVodSourceName(value); return *this;}

  private:

    long long m_approximateDurationSeconds;
    bool m_approximateDurationSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_approximateStartTime;
    bool m_approximateStartTimeHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;

    Aws::String m_vodSourceName;
    bool m_vodSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws

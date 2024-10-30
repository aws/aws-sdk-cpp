/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>Components of the opening hours object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/OpeningHoursComponents">AWS
   * API Reference</a></p>
   */
  class OpeningHoursComponents
  {
  public:
    AWS_GEOPLACES_API OpeningHoursComponents();
    AWS_GEOPLACES_API OpeningHoursComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API OpeningHoursComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>String which represents the opening hours, such as
     * <code>"T070000"</code>.</p>
     */
    inline const Aws::String& GetOpenTime() const{ return m_openTime; }
    inline bool OpenTimeHasBeenSet() const { return m_openTimeHasBeenSet; }
    inline void SetOpenTime(const Aws::String& value) { m_openTimeHasBeenSet = true; m_openTime = value; }
    inline void SetOpenTime(Aws::String&& value) { m_openTimeHasBeenSet = true; m_openTime = std::move(value); }
    inline void SetOpenTime(const char* value) { m_openTimeHasBeenSet = true; m_openTime.assign(value); }
    inline OpeningHoursComponents& WithOpenTime(const Aws::String& value) { SetOpenTime(value); return *this;}
    inline OpeningHoursComponents& WithOpenTime(Aws::String&& value) { SetOpenTime(std::move(value)); return *this;}
    inline OpeningHoursComponents& WithOpenTime(const char* value) { SetOpenTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String which represents the duration of the opening period, such as
     * <code>"PT12H00M"</code>.</p>
     */
    inline const Aws::String& GetOpenDuration() const{ return m_openDuration; }
    inline bool OpenDurationHasBeenSet() const { return m_openDurationHasBeenSet; }
    inline void SetOpenDuration(const Aws::String& value) { m_openDurationHasBeenSet = true; m_openDuration = value; }
    inline void SetOpenDuration(Aws::String&& value) { m_openDurationHasBeenSet = true; m_openDuration = std::move(value); }
    inline void SetOpenDuration(const char* value) { m_openDurationHasBeenSet = true; m_openDuration.assign(value); }
    inline OpeningHoursComponents& WithOpenDuration(const Aws::String& value) { SetOpenDuration(value); return *this;}
    inline OpeningHoursComponents& WithOpenDuration(Aws::String&& value) { SetOpenDuration(std::move(value)); return *this;}
    inline OpeningHoursComponents& WithOpenDuration(const char* value) { SetOpenDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Days or periods when the provided opening hours are in affect. </p>
     * <p>Example: <code>FREQ:DAILY;BYDAY:MO,TU,WE,TH,SU</code> </p>
     */
    inline const Aws::String& GetRecurrence() const{ return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    inline void SetRecurrence(const Aws::String& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }
    inline void SetRecurrence(Aws::String&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }
    inline void SetRecurrence(const char* value) { m_recurrenceHasBeenSet = true; m_recurrence.assign(value); }
    inline OpeningHoursComponents& WithRecurrence(const Aws::String& value) { SetRecurrence(value); return *this;}
    inline OpeningHoursComponents& WithRecurrence(Aws::String&& value) { SetRecurrence(std::move(value)); return *this;}
    inline OpeningHoursComponents& WithRecurrence(const char* value) { SetRecurrence(value); return *this;}
    ///@}
  private:

    Aws::String m_openTime;
    bool m_openTimeHasBeenSet = false;

    Aws::String m_openDuration;
    bool m_openDurationHasBeenSet = false;

    Aws::String m_recurrence;
    bool m_recurrenceHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws

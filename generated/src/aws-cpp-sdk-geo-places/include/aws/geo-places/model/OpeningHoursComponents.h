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
    AWS_GEOPLACES_API OpeningHoursComponents() = default;
    AWS_GEOPLACES_API OpeningHoursComponents(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API OpeningHoursComponents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>String which represents the opening hours, such as
     * <code>"T070000"</code>.</p>
     */
    inline const Aws::String& GetOpenTime() const { return m_openTime; }
    inline bool OpenTimeHasBeenSet() const { return m_openTimeHasBeenSet; }
    template<typename OpenTimeT = Aws::String>
    void SetOpenTime(OpenTimeT&& value) { m_openTimeHasBeenSet = true; m_openTime = std::forward<OpenTimeT>(value); }
    template<typename OpenTimeT = Aws::String>
    OpeningHoursComponents& WithOpenTime(OpenTimeT&& value) { SetOpenTime(std::forward<OpenTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>String which represents the duration of the opening period, such as
     * <code>"PT12H00M"</code>.</p>
     */
    inline const Aws::String& GetOpenDuration() const { return m_openDuration; }
    inline bool OpenDurationHasBeenSet() const { return m_openDurationHasBeenSet; }
    template<typename OpenDurationT = Aws::String>
    void SetOpenDuration(OpenDurationT&& value) { m_openDurationHasBeenSet = true; m_openDuration = std::forward<OpenDurationT>(value); }
    template<typename OpenDurationT = Aws::String>
    OpeningHoursComponents& WithOpenDuration(OpenDurationT&& value) { SetOpenDuration(std::forward<OpenDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Days or periods when the provided opening hours are in affect. </p>
     * <p>Example: <code>FREQ:DAILY;BYDAY:MO,TU,WE,TH,SU</code> </p>
     */
    inline const Aws::String& GetRecurrence() const { return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    template<typename RecurrenceT = Aws::String>
    void SetRecurrence(RecurrenceT&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::forward<RecurrenceT>(value); }
    template<typename RecurrenceT = Aws::String>
    OpeningHoursComponents& WithRecurrence(RecurrenceT&& value) { SetRecurrence(std::forward<RecurrenceT>(value)); return *this;}
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

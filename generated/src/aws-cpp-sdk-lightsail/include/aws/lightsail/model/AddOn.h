/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes an add-on that is enabled for an Amazon Lightsail
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AddOn">AWS API
   * Reference</a></p>
   */
  class AddOn
  {
  public:
    AWS_LIGHTSAIL_API AddOn() = default;
    AWS_LIGHTSAIL_API AddOn(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AddOn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AddOn& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the add-on.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AddOn& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline const Aws::String& GetSnapshotTimeOfDay() const { return m_snapshotTimeOfDay; }
    inline bool SnapshotTimeOfDayHasBeenSet() const { return m_snapshotTimeOfDayHasBeenSet; }
    template<typename SnapshotTimeOfDayT = Aws::String>
    void SetSnapshotTimeOfDay(SnapshotTimeOfDayT&& value) { m_snapshotTimeOfDayHasBeenSet = true; m_snapshotTimeOfDay = std::forward<SnapshotTimeOfDayT>(value); }
    template<typename SnapshotTimeOfDayT = Aws::String>
    AddOn& WithSnapshotTimeOfDay(SnapshotTimeOfDayT&& value) { SetSnapshotTimeOfDay(std::forward<SnapshotTimeOfDayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline const Aws::String& GetNextSnapshotTimeOfDay() const { return m_nextSnapshotTimeOfDay; }
    inline bool NextSnapshotTimeOfDayHasBeenSet() const { return m_nextSnapshotTimeOfDayHasBeenSet; }
    template<typename NextSnapshotTimeOfDayT = Aws::String>
    void SetNextSnapshotTimeOfDay(NextSnapshotTimeOfDayT&& value) { m_nextSnapshotTimeOfDayHasBeenSet = true; m_nextSnapshotTimeOfDay = std::forward<NextSnapshotTimeOfDayT>(value); }
    template<typename NextSnapshotTimeOfDayT = Aws::String>
    AddOn& WithNextSnapshotTimeOfDay(NextSnapshotTimeOfDayT&& value) { SetNextSnapshotTimeOfDay(std::forward<NextSnapshotTimeOfDayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trigger threshold of the action.</p>  <p>This add-on only
     * applies to Lightsail for Research resources.</p> 
     */
    inline const Aws::String& GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    template<typename ThresholdT = Aws::String>
    void SetThreshold(ThresholdT&& value) { m_thresholdHasBeenSet = true; m_threshold = std::forward<ThresholdT>(value); }
    template<typename ThresholdT = Aws::String>
    AddOn& WithThreshold(ThresholdT&& value) { SetThreshold(std::forward<ThresholdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of idle time in minutes after which your virtual computer will
     * automatically stop.</p>  <p>This add-on only applies to Lightsail for
     * Research resources.</p> 
     */
    inline const Aws::String& GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    template<typename DurationT = Aws::String>
    void SetDuration(DurationT&& value) { m_durationHasBeenSet = true; m_duration = std::forward<DurationT>(value); }
    template<typename DurationT = Aws::String>
    AddOn& WithDuration(DurationT&& value) { SetDuration(std::forward<DurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_snapshotTimeOfDay;
    bool m_snapshotTimeOfDayHasBeenSet = false;

    Aws::String m_nextSnapshotTimeOfDay;
    bool m_nextSnapshotTimeOfDayHasBeenSet = false;

    Aws::String m_threshold;
    bool m_thresholdHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws

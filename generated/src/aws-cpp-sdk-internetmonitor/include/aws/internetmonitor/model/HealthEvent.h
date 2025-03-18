/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/internetmonitor/model/HealthEventStatus.h>
#include <aws/internetmonitor/model/HealthEventImpactType.h>
#include <aws/internetmonitor/model/ImpactedLocation.h>
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
namespace InternetMonitor
{
namespace Model
{

  /**
   * <p>Information about a health event created in a monitor in Amazon CloudWatch
   * Internet Monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/internetmonitor-2021-06-03/HealthEvent">AWS
   * API Reference</a></p>
   */
  class HealthEvent
  {
  public:
    AWS_INTERNETMONITOR_API HealthEvent() = default;
    AWS_INTERNETMONITOR_API HealthEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API HealthEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline const Aws::String& GetEventArn() const { return m_eventArn; }
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }
    template<typename EventArnT = Aws::String>
    void SetEventArn(EventArnT&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::forward<EventArnT>(value); }
    template<typename EventArnT = Aws::String>
    HealthEvent& WithEventArn(EventArnT&& value) { SetEventArn(std::forward<EventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    HealthEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a health event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    HealthEvent& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a health event ended. If the health event is still active, then
     * the end time is not set.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    HealthEvent& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the health event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    HealthEvent& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the health event was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    HealthEvent& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline const Aws::Vector<ImpactedLocation>& GetImpactedLocations() const { return m_impactedLocations; }
    inline bool ImpactedLocationsHasBeenSet() const { return m_impactedLocationsHasBeenSet; }
    template<typename ImpactedLocationsT = Aws::Vector<ImpactedLocation>>
    void SetImpactedLocations(ImpactedLocationsT&& value) { m_impactedLocationsHasBeenSet = true; m_impactedLocations = std::forward<ImpactedLocationsT>(value); }
    template<typename ImpactedLocationsT = Aws::Vector<ImpactedLocation>>
    HealthEvent& WithImpactedLocations(ImpactedLocationsT&& value) { SetImpactedLocations(std::forward<ImpactedLocationsT>(value)); return *this;}
    template<typename ImpactedLocationsT = ImpactedLocation>
    HealthEvent& AddImpactedLocations(ImpactedLocationsT&& value) { m_impactedLocationsHasBeenSet = true; m_impactedLocations.emplace_back(std::forward<ImpactedLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of a health event.</p>
     */
    inline HealthEventStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(HealthEventStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline HealthEvent& WithStatus(HealthEventStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p>
     */
    inline double GetPercentOfTotalTrafficImpacted() const { return m_percentOfTotalTrafficImpacted; }
    inline bool PercentOfTotalTrafficImpactedHasBeenSet() const { return m_percentOfTotalTrafficImpactedHasBeenSet; }
    inline void SetPercentOfTotalTrafficImpacted(double value) { m_percentOfTotalTrafficImpactedHasBeenSet = true; m_percentOfTotalTrafficImpacted = value; }
    inline HealthEvent& WithPercentOfTotalTrafficImpacted(double value) { SetPercentOfTotalTrafficImpacted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of impairment for a health event.</p>
     */
    inline HealthEventImpactType GetImpactType() const { return m_impactType; }
    inline bool ImpactTypeHasBeenSet() const { return m_impactTypeHasBeenSet; }
    inline void SetImpactType(HealthEventImpactType value) { m_impactTypeHasBeenSet = true; m_impactType = value; }
    inline HealthEvent& WithImpactType(HealthEventImpactType value) { SetImpactType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the threshold percentage for performance or availability that
     * was configured when Amazon CloudWatch Internet Monitor created the health
     * event.</p>
     */
    inline double GetHealthScoreThreshold() const { return m_healthScoreThreshold; }
    inline bool HealthScoreThresholdHasBeenSet() const { return m_healthScoreThresholdHasBeenSet; }
    inline void SetHealthScoreThreshold(double value) { m_healthScoreThresholdHasBeenSet = true; m_healthScoreThreshold = value; }
    inline HealthEvent& WithHealthScoreThreshold(double value) { SetHealthScoreThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<ImpactedLocation> m_impactedLocations;
    bool m_impactedLocationsHasBeenSet = false;

    HealthEventStatus m_status{HealthEventStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    double m_percentOfTotalTrafficImpacted{0.0};
    bool m_percentOfTotalTrafficImpactedHasBeenSet = false;

    HealthEventImpactType m_impactType{HealthEventImpactType::NOT_SET};
    bool m_impactTypeHasBeenSet = false;

    double m_healthScoreThreshold{0.0};
    bool m_healthScoreThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws

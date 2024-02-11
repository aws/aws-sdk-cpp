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
    AWS_INTERNETMONITOR_API HealthEvent();
    AWS_INTERNETMONITOR_API HealthEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API HealthEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INTERNETMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline bool EventArnHasBeenSet() const { return m_eventArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArnHasBeenSet = true; m_eventArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArnHasBeenSet = true; m_eventArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline void SetEventArn(const char* value) { m_eventArnHasBeenSet = true; m_eventArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline HealthEvent& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline HealthEvent& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline HealthEvent& WithEventArn(const char* value) { SetEventArn(value); return *this;}


    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline HealthEvent& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline HealthEvent& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The internally-generated identifier of a specific network traffic impairment
     * health event.</p>
     */
    inline HealthEvent& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>When a health event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>When a health event started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>When a health event started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>When a health event started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>When a health event started.</p>
     */
    inline HealthEvent& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>When a health event started.</p>
     */
    inline HealthEvent& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time when a health event ended. If the health event is still active, then
     * the end time is not set.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The time when a health event ended. If the health event is still active, then
     * the end time is not set.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The time when a health event ended. If the health event is still active, then
     * the end time is not set.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The time when a health event ended. If the health event is still active, then
     * the end time is not set.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The time when a health event ended. If the health event is still active, then
     * the end time is not set.</p>
     */
    inline HealthEvent& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The time when a health event ended. If the health event is still active, then
     * the end time is not set.</p>
     */
    inline HealthEvent& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>When the health event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>When the health event was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>When the health event was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>When the health event was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>When the health event was created.</p>
     */
    inline HealthEvent& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>When the health event was created.</p>
     */
    inline HealthEvent& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>When the health event was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>When the health event was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>When the health event was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>When the health event was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>When the health event was last updated.</p>
     */
    inline HealthEvent& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>When the health event was last updated.</p>
     */
    inline HealthEvent& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline const Aws::Vector<ImpactedLocation>& GetImpactedLocations() const{ return m_impactedLocations; }

    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline bool ImpactedLocationsHasBeenSet() const { return m_impactedLocationsHasBeenSet; }

    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline void SetImpactedLocations(const Aws::Vector<ImpactedLocation>& value) { m_impactedLocationsHasBeenSet = true; m_impactedLocations = value; }

    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline void SetImpactedLocations(Aws::Vector<ImpactedLocation>&& value) { m_impactedLocationsHasBeenSet = true; m_impactedLocations = std::move(value); }

    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline HealthEvent& WithImpactedLocations(const Aws::Vector<ImpactedLocation>& value) { SetImpactedLocations(value); return *this;}

    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline HealthEvent& WithImpactedLocations(Aws::Vector<ImpactedLocation>&& value) { SetImpactedLocations(std::move(value)); return *this;}

    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline HealthEvent& AddImpactedLocations(const ImpactedLocation& value) { m_impactedLocationsHasBeenSet = true; m_impactedLocations.push_back(value); return *this; }

    /**
     * <p>The locations impacted by the health event.</p>
     */
    inline HealthEvent& AddImpactedLocations(ImpactedLocation&& value) { m_impactedLocationsHasBeenSet = true; m_impactedLocations.push_back(std::move(value)); return *this; }


    /**
     * <p>Health event list member.</p>
     */
    inline const HealthEventStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Health event list member.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Health event list member.</p>
     */
    inline void SetStatus(const HealthEventStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Health event list member.</p>
     */
    inline void SetStatus(HealthEventStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Health event list member.</p>
     */
    inline HealthEvent& WithStatus(const HealthEventStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Health event list member.</p>
     */
    inline HealthEvent& WithStatus(HealthEventStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p>
     */
    inline double GetPercentOfTotalTrafficImpacted() const{ return m_percentOfTotalTrafficImpacted; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p>
     */
    inline bool PercentOfTotalTrafficImpactedHasBeenSet() const { return m_percentOfTotalTrafficImpactedHasBeenSet; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p>
     */
    inline void SetPercentOfTotalTrafficImpacted(double value) { m_percentOfTotalTrafficImpactedHasBeenSet = true; m_percentOfTotalTrafficImpacted = value; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p>
     */
    inline HealthEvent& WithPercentOfTotalTrafficImpacted(double value) { SetPercentOfTotalTrafficImpacted(value); return *this;}


    /**
     * <p>The type of impairment for a health event.</p>
     */
    inline const HealthEventImpactType& GetImpactType() const{ return m_impactType; }

    /**
     * <p>The type of impairment for a health event.</p>
     */
    inline bool ImpactTypeHasBeenSet() const { return m_impactTypeHasBeenSet; }

    /**
     * <p>The type of impairment for a health event.</p>
     */
    inline void SetImpactType(const HealthEventImpactType& value) { m_impactTypeHasBeenSet = true; m_impactType = value; }

    /**
     * <p>The type of impairment for a health event.</p>
     */
    inline void SetImpactType(HealthEventImpactType&& value) { m_impactTypeHasBeenSet = true; m_impactType = std::move(value); }

    /**
     * <p>The type of impairment for a health event.</p>
     */
    inline HealthEvent& WithImpactType(const HealthEventImpactType& value) { SetImpactType(value); return *this;}

    /**
     * <p>The type of impairment for a health event.</p>
     */
    inline HealthEvent& WithImpactType(HealthEventImpactType&& value) { SetImpactType(std::move(value)); return *this;}


    /**
     * <p>The value of the threshold percentage for performance or availability that
     * was configured when Amazon CloudWatch Internet Monitor created the health
     * event.</p>
     */
    inline double GetHealthScoreThreshold() const{ return m_healthScoreThreshold; }

    /**
     * <p>The value of the threshold percentage for performance or availability that
     * was configured when Amazon CloudWatch Internet Monitor created the health
     * event.</p>
     */
    inline bool HealthScoreThresholdHasBeenSet() const { return m_healthScoreThresholdHasBeenSet; }

    /**
     * <p>The value of the threshold percentage for performance or availability that
     * was configured when Amazon CloudWatch Internet Monitor created the health
     * event.</p>
     */
    inline void SetHealthScoreThreshold(double value) { m_healthScoreThresholdHasBeenSet = true; m_healthScoreThreshold = value; }

    /**
     * <p>The value of the threshold percentage for performance or availability that
     * was configured when Amazon CloudWatch Internet Monitor created the health
     * event.</p>
     */
    inline HealthEvent& WithHealthScoreThreshold(double value) { SetHealthScoreThreshold(value); return *this;}

  private:

    Aws::String m_eventArn;
    bool m_eventArnHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<ImpactedLocation> m_impactedLocations;
    bool m_impactedLocationsHasBeenSet = false;

    HealthEventStatus m_status;
    bool m_statusHasBeenSet = false;

    double m_percentOfTotalTrafficImpacted;
    bool m_percentOfTotalTrafficImpactedHasBeenSet = false;

    HealthEventImpactType m_impactType;
    bool m_impactTypeHasBeenSet = false;

    double m_healthScoreThreshold;
    bool m_healthScoreThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws

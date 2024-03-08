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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace InternetMonitor
{
namespace Model
{
  class GetHealthEventResult
  {
  public:
    AWS_INTERNETMONITOR_API GetHealthEventResult();
    AWS_INTERNETMONITOR_API GetHealthEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INTERNETMONITOR_API GetHealthEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline const Aws::String& GetEventArn() const{ return m_eventArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline void SetEventArn(const Aws::String& value) { m_eventArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline void SetEventArn(Aws::String&& value) { m_eventArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline void SetEventArn(const char* value) { m_eventArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline GetHealthEventResult& WithEventArn(const Aws::String& value) { SetEventArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline GetHealthEventResult& WithEventArn(Aws::String&& value) { SetEventArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event.</p>
     */
    inline GetHealthEventResult& WithEventArn(const char* value) { SetEventArn(value); return *this;}


    /**
     * <p>The internally-generated identifier of a health event.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The internally-generated identifier of a health event.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventId = value; }

    /**
     * <p>The internally-generated identifier of a health event.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventId = std::move(value); }

    /**
     * <p>The internally-generated identifier of a health event.</p>
     */
    inline void SetEventId(const char* value) { m_eventId.assign(value); }

    /**
     * <p>The internally-generated identifier of a health event.</p>
     */
    inline GetHealthEventResult& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The internally-generated identifier of a health event.</p>
     */
    inline GetHealthEventResult& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The internally-generated identifier of a health event.</p>
     */
    inline GetHealthEventResult& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The time when a health event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time when a health event started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The time when a health event started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The time when a health event started.</p>
     */
    inline GetHealthEventResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time when a health event started.</p>
     */
    inline GetHealthEventResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time when a health event was resolved. If the health event is still
     * active, the end time is not set.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The time when a health event was resolved. If the health event is still
     * active, the end time is not set.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }

    /**
     * <p>The time when a health event was resolved. If the health event is still
     * active, the end time is not set.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }

    /**
     * <p>The time when a health event was resolved. If the health event is still
     * active, the end time is not set.</p>
     */
    inline GetHealthEventResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The time when a health event was resolved. If the health event is still
     * active, the end time is not set.</p>
     */
    inline GetHealthEventResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The time when a health event was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when a health event was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time when a health event was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time when a health event was created.</p>
     */
    inline GetHealthEventResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when a health event was created.</p>
     */
    inline GetHealthEventResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when a health event was last updated or recalculated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time when a health event was last updated or recalculated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time when a health event was last updated or recalculated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time when a health event was last updated or recalculated.</p>
     */
    inline GetHealthEventResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time when a health event was last updated or recalculated.</p>
     */
    inline GetHealthEventResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The locations affected by a health event.</p>
     */
    inline const Aws::Vector<ImpactedLocation>& GetImpactedLocations() const{ return m_impactedLocations; }

    /**
     * <p>The locations affected by a health event.</p>
     */
    inline void SetImpactedLocations(const Aws::Vector<ImpactedLocation>& value) { m_impactedLocations = value; }

    /**
     * <p>The locations affected by a health event.</p>
     */
    inline void SetImpactedLocations(Aws::Vector<ImpactedLocation>&& value) { m_impactedLocations = std::move(value); }

    /**
     * <p>The locations affected by a health event.</p>
     */
    inline GetHealthEventResult& WithImpactedLocations(const Aws::Vector<ImpactedLocation>& value) { SetImpactedLocations(value); return *this;}

    /**
     * <p>The locations affected by a health event.</p>
     */
    inline GetHealthEventResult& WithImpactedLocations(Aws::Vector<ImpactedLocation>&& value) { SetImpactedLocations(std::move(value)); return *this;}

    /**
     * <p>The locations affected by a health event.</p>
     */
    inline GetHealthEventResult& AddImpactedLocations(const ImpactedLocation& value) { m_impactedLocations.push_back(value); return *this; }

    /**
     * <p>The locations affected by a health event.</p>
     */
    inline GetHealthEventResult& AddImpactedLocations(ImpactedLocation&& value) { m_impactedLocations.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of a health event.</p>
     */
    inline const HealthEventStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a health event.</p>
     */
    inline void SetStatus(const HealthEventStatus& value) { m_status = value; }

    /**
     * <p>The status of a health event.</p>
     */
    inline void SetStatus(HealthEventStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of a health event.</p>
     */
    inline GetHealthEventResult& WithStatus(const HealthEventStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a health event.</p>
     */
    inline GetHealthEventResult& WithStatus(HealthEventStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline void SetPercentOfTotalTrafficImpacted(double value) { m_percentOfTotalTrafficImpacted = value; }

    /**
     * <p>The impact on total traffic that a health event has, in increased latency or
     * reduced availability. This is the percentage of how much latency has increased
     * or availability has decreased during the event, compared to what is typical for
     * traffic from this client location to the Amazon Web Services location using this
     * client network.</p>
     */
    inline GetHealthEventResult& WithPercentOfTotalTrafficImpacted(double value) { SetPercentOfTotalTrafficImpacted(value); return *this;}


    /**
     * <p>The type of impairment of a specific health event.</p>
     */
    inline const HealthEventImpactType& GetImpactType() const{ return m_impactType; }

    /**
     * <p>The type of impairment of a specific health event.</p>
     */
    inline void SetImpactType(const HealthEventImpactType& value) { m_impactType = value; }

    /**
     * <p>The type of impairment of a specific health event.</p>
     */
    inline void SetImpactType(HealthEventImpactType&& value) { m_impactType = std::move(value); }

    /**
     * <p>The type of impairment of a specific health event.</p>
     */
    inline GetHealthEventResult& WithImpactType(const HealthEventImpactType& value) { SetImpactType(value); return *this;}

    /**
     * <p>The type of impairment of a specific health event.</p>
     */
    inline GetHealthEventResult& WithImpactType(HealthEventImpactType&& value) { SetImpactType(std::move(value)); return *this;}


    /**
     * <p>The threshold percentage for a health score that determines, along with other
     * configuration information, when Internet Monitor creates a health event when
     * there's an internet issue that affects your application end users.</p>
     */
    inline double GetHealthScoreThreshold() const{ return m_healthScoreThreshold; }

    /**
     * <p>The threshold percentage for a health score that determines, along with other
     * configuration information, when Internet Monitor creates a health event when
     * there's an internet issue that affects your application end users.</p>
     */
    inline void SetHealthScoreThreshold(double value) { m_healthScoreThreshold = value; }

    /**
     * <p>The threshold percentage for a health score that determines, along with other
     * configuration information, when Internet Monitor creates a health event when
     * there's an internet issue that affects your application end users.</p>
     */
    inline GetHealthEventResult& WithHealthScoreThreshold(double value) { SetHealthScoreThreshold(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetHealthEventResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetHealthEventResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetHealthEventResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_eventArn;

    Aws::String m_eventId;

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_endedAt;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Vector<ImpactedLocation> m_impactedLocations;

    HealthEventStatus m_status;

    double m_percentOfTotalTrafficImpacted;

    HealthEventImpactType m_impactType;

    double m_healthScoreThreshold;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws

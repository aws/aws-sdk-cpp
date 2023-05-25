/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ConfigurationEventStatus.h>
#include <aws/application-insights/model/ConfigurationEventResourceType.h>
#include <aws/core/utils/DateTime.h>
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
namespace ApplicationInsights
{
namespace Model
{

  /**
   * <p> The event information. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ConfigurationEvent">AWS
   * API Reference</a></p>
   */
  class ConfigurationEvent
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent();
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API ConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONINSIGHTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline const Aws::String& GetMonitoredResourceARN() const{ return m_monitoredResourceARN; }

    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline bool MonitoredResourceARNHasBeenSet() const { return m_monitoredResourceARNHasBeenSet; }

    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline void SetMonitoredResourceARN(const Aws::String& value) { m_monitoredResourceARNHasBeenSet = true; m_monitoredResourceARN = value; }

    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline void SetMonitoredResourceARN(Aws::String&& value) { m_monitoredResourceARNHasBeenSet = true; m_monitoredResourceARN = std::move(value); }

    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline void SetMonitoredResourceARN(const char* value) { m_monitoredResourceARNHasBeenSet = true; m_monitoredResourceARN.assign(value); }

    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline ConfigurationEvent& WithMonitoredResourceARN(const Aws::String& value) { SetMonitoredResourceARN(value); return *this;}

    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline ConfigurationEvent& WithMonitoredResourceARN(Aws::String&& value) { SetMonitoredResourceARN(std::move(value)); return *this;}

    /**
     * <p> The resource monitored by Application Insights. </p>
     */
    inline ConfigurationEvent& WithMonitoredResourceARN(const char* value) { SetMonitoredResourceARN(value); return *this;}


    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline const ConfigurationEventStatus& GetEventStatus() const{ return m_eventStatus; }

    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }

    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline void SetEventStatus(const ConfigurationEventStatus& value) { m_eventStatusHasBeenSet = true; m_eventStatus = value; }

    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline void SetEventStatus(ConfigurationEventStatus&& value) { m_eventStatusHasBeenSet = true; m_eventStatus = std::move(value); }

    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline ConfigurationEvent& WithEventStatus(const ConfigurationEventStatus& value) { SetEventStatus(value); return *this;}

    /**
     * <p> The status of the configuration update event. Possible values include INFO,
     * WARN, and ERROR. </p>
     */
    inline ConfigurationEvent& WithEventStatus(ConfigurationEventStatus&& value) { SetEventStatus(std::move(value)); return *this;}


    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline const ConfigurationEventResourceType& GetEventResourceType() const{ return m_eventResourceType; }

    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline bool EventResourceTypeHasBeenSet() const { return m_eventResourceTypeHasBeenSet; }

    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline void SetEventResourceType(const ConfigurationEventResourceType& value) { m_eventResourceTypeHasBeenSet = true; m_eventResourceType = value; }

    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline void SetEventResourceType(ConfigurationEventResourceType&& value) { m_eventResourceTypeHasBeenSet = true; m_eventResourceType = std::move(value); }

    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline ConfigurationEvent& WithEventResourceType(const ConfigurationEventResourceType& value) { SetEventResourceType(value); return *this;}

    /**
     * <p> The resource type that Application Insights attempted to configure, for
     * example, CLOUDWATCH_ALARM. </p>
     */
    inline ConfigurationEvent& WithEventResourceType(ConfigurationEventResourceType&& value) { SetEventResourceType(std::move(value)); return *this;}


    /**
     * <p> The timestamp of the event. </p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p> The timestamp of the event. </p>
     */
    inline ConfigurationEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}

    /**
     * <p> The timestamp of the event. </p>
     */
    inline ConfigurationEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}


    /**
     * <p> The details of the event in plain text. </p>
     */
    inline const Aws::String& GetEventDetail() const{ return m_eventDetail; }

    /**
     * <p> The details of the event in plain text. </p>
     */
    inline bool EventDetailHasBeenSet() const { return m_eventDetailHasBeenSet; }

    /**
     * <p> The details of the event in plain text. </p>
     */
    inline void SetEventDetail(const Aws::String& value) { m_eventDetailHasBeenSet = true; m_eventDetail = value; }

    /**
     * <p> The details of the event in plain text. </p>
     */
    inline void SetEventDetail(Aws::String&& value) { m_eventDetailHasBeenSet = true; m_eventDetail = std::move(value); }

    /**
     * <p> The details of the event in plain text. </p>
     */
    inline void SetEventDetail(const char* value) { m_eventDetailHasBeenSet = true; m_eventDetail.assign(value); }

    /**
     * <p> The details of the event in plain text. </p>
     */
    inline ConfigurationEvent& WithEventDetail(const Aws::String& value) { SetEventDetail(value); return *this;}

    /**
     * <p> The details of the event in plain text. </p>
     */
    inline ConfigurationEvent& WithEventDetail(Aws::String&& value) { SetEventDetail(std::move(value)); return *this;}

    /**
     * <p> The details of the event in plain text. </p>
     */
    inline ConfigurationEvent& WithEventDetail(const char* value) { SetEventDetail(value); return *this;}


    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline const Aws::String& GetEventResourceName() const{ return m_eventResourceName; }

    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline bool EventResourceNameHasBeenSet() const { return m_eventResourceNameHasBeenSet; }

    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline void SetEventResourceName(const Aws::String& value) { m_eventResourceNameHasBeenSet = true; m_eventResourceName = value; }

    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline void SetEventResourceName(Aws::String&& value) { m_eventResourceNameHasBeenSet = true; m_eventResourceName = std::move(value); }

    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline void SetEventResourceName(const char* value) { m_eventResourceNameHasBeenSet = true; m_eventResourceName.assign(value); }

    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline ConfigurationEvent& WithEventResourceName(const Aws::String& value) { SetEventResourceName(value); return *this;}

    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline ConfigurationEvent& WithEventResourceName(Aws::String&& value) { SetEventResourceName(std::move(value)); return *this;}

    /**
     * <p> The name of the resource Application Insights attempted to configure. </p>
     */
    inline ConfigurationEvent& WithEventResourceName(const char* value) { SetEventResourceName(value); return *this;}

  private:

    Aws::String m_monitoredResourceARN;
    bool m_monitoredResourceARNHasBeenSet = false;

    ConfigurationEventStatus m_eventStatus;
    bool m_eventStatusHasBeenSet = false;

    ConfigurationEventResourceType m_eventResourceType;
    bool m_eventResourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_eventDetail;
    bool m_eventDetailHasBeenSet = false;

    Aws::String m_eventResourceName;
    bool m_eventResourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws

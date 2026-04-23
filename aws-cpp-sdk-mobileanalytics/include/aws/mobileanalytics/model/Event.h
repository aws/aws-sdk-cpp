/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mobileanalytics/MobileAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mobileanalytics/model/Session.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MobileAnalytics
{
namespace Model
{

  /**
   * <p>A JSON object representing a batch of unique event occurrences in your
   * app.</p>
   */
  class AWS_MOBILEANALYTICS_API Event
  {
  public:
    Event();
    Event(Aws::Utils::Json::JsonView jsonValue);
    Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline Event& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline Event& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>A name signifying an event that occurred in your app. This is used for
     * grouping and aggregating like events together for reporting purposes.</p>
     */
    inline Event& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline Event& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline Event& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * <p>The time the event occurred in ISO 8601 standard date time format. For
     * example, 2014-06-30T19:07:47.885Z</p>
     */
    inline Event& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}


    /**
     * <p>The session the event occured within. </p>
     */
    inline const Session& GetSession() const{ return m_session; }

    /**
     * <p>The session the event occured within. </p>
     */
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }

    /**
     * <p>The session the event occured within. </p>
     */
    inline void SetSession(const Session& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * <p>The session the event occured within. </p>
     */
    inline void SetSession(Session&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }

    /**
     * <p>The session the event occured within. </p>
     */
    inline Event& WithSession(const Session& value) { SetSession(value); return *this;}

    /**
     * <p>The session the event occured within. </p>
     */
    inline Event& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}


    /**
     * <p>The version of the event.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the event.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the event.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the event.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the event.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the event.</p>
     */
    inline Event& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the event.</p>
     */
    inline Event& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the event.</p>
     */
    inline Event& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of key-value pairs that give additional context to the event.
     * The key-value pairs are specified by the developer.</p> <p>This collection can
     * be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline Event& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline Event& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of key-value pairs that gives additional, measurable context to
     * the event. The key-value pairs are specified by the developer.</p> <p>This
     * collection can be empty or the attribute object can be omitted.</p>
     */
    inline Event& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

  private:

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet;

    Session m_session;
    bool m_sessionHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet;
  };

} // namespace Model
} // namespace MobileAnalytics
} // namespace Aws

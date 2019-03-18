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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/SetDimension.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/AttributeDimension.h>
#include <aws/pinpoint/model/MetricDimension.h>
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
   * Event dimensions.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EventDimensions">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EventDimensions
  {
  public:
    EventDimensions();
    EventDimensions(Aws::Utils::Json::JsonView jsonValue);
    EventDimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const{ return m_attributes; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& WithAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { SetAttributes(value); return *this;}

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& WithAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddAttributes(const Aws::String& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddAttributes(Aws::String&& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddAttributes(const Aws::String& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddAttributes(Aws::String&& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddAttributes(const char* key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddAttributes(const char* key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * The name of the event that causes the campaign to be sent. This can be a
     * standard event type that Amazon Pinpoint generates, such as _session.start, or a
     * custom event that's specific to your app.
     */
    inline const SetDimension& GetEventType() const{ return m_eventType; }

    /**
     * The name of the event that causes the campaign to be sent. This can be a
     * standard event type that Amazon Pinpoint generates, such as _session.start, or a
     * custom event that's specific to your app.
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * The name of the event that causes the campaign to be sent. This can be a
     * standard event type that Amazon Pinpoint generates, such as _session.start, or a
     * custom event that's specific to your app.
     */
    inline void SetEventType(const SetDimension& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * The name of the event that causes the campaign to be sent. This can be a
     * standard event type that Amazon Pinpoint generates, such as _session.start, or a
     * custom event that's specific to your app.
     */
    inline void SetEventType(SetDimension&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * The name of the event that causes the campaign to be sent. This can be a
     * standard event type that Amazon Pinpoint generates, such as _session.start, or a
     * custom event that's specific to your app.
     */
    inline EventDimensions& WithEventType(const SetDimension& value) { SetEventType(value); return *this;}

    /**
     * The name of the event that causes the campaign to be sent. This can be a
     * standard event type that Amazon Pinpoint generates, such as _session.start, or a
     * custom event that's specific to your app.
     */
    inline EventDimensions& WithEventType(SetDimension&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline const Aws::Map<Aws::String, MetricDimension>& GetMetrics() const{ return m_metrics; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline void SetMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline void SetMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& WithMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { SetMetrics(value); return *this;}

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& WithMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddMetrics(const Aws::String& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddMetrics(Aws::String&& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddMetrics(const Aws::String& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddMetrics(Aws::String&& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddMetrics(const char* key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * Custom metrics that your app reports to Amazon Pinpoint. You can use these
     * attributes as selection criteria when you create an event filter.
     */
    inline EventDimensions& AddMetrics(const char* key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, AttributeDimension> m_attributes;
    bool m_attributesHasBeenSet;

    SetDimension m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::Map<Aws::String, MetricDimension> m_metrics;
    bool m_metricsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

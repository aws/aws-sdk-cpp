﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies the dimensions for an event filter that determines when a campaign
   * is sent or a journey activity is performed.</p><p><h3>See Also:</h3>   <a
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
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline const Aws::Map<Aws::String, AttributeDimension>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& WithAttributes(const Aws::Map<Aws::String, AttributeDimension>& value) { SetAttributes(value); return *this;}

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& WithAttributes(Aws::Map<Aws::String, AttributeDimension>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& AddAttributes(const Aws::String& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& AddAttributes(Aws::String&& key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& AddAttributes(const Aws::String& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& AddAttributes(Aws::String&& key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& AddAttributes(const char* key, AttributeDimension&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom attributes that your application reports to Amazon
     * Pinpoint. You can use these attributes as selection criteria when you create an
     * event filter.</p>
     */
    inline EventDimensions& AddAttributes(const char* key, const AttributeDimension& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The name of the event that causes the campaign to be sent or the journey
     * activity to be performed. This can be a standard event that Amazon Pinpoint
     * generates, such as _email.delivered. For campaigns, this can also be a custom
     * event that's specific to your application. For information about standard
     * events, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/event-streams.html">Streaming
     * Amazon Pinpoint Events</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p>
     */
    inline const SetDimension& GetEventType() const{ return m_eventType; }

    /**
     * <p>The name of the event that causes the campaign to be sent or the journey
     * activity to be performed. This can be a standard event that Amazon Pinpoint
     * generates, such as _email.delivered. For campaigns, this can also be a custom
     * event that's specific to your application. For information about standard
     * events, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/event-streams.html">Streaming
     * Amazon Pinpoint Events</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The name of the event that causes the campaign to be sent or the journey
     * activity to be performed. This can be a standard event that Amazon Pinpoint
     * generates, such as _email.delivered. For campaigns, this can also be a custom
     * event that's specific to your application. For information about standard
     * events, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/event-streams.html">Streaming
     * Amazon Pinpoint Events</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p>
     */
    inline void SetEventType(const SetDimension& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The name of the event that causes the campaign to be sent or the journey
     * activity to be performed. This can be a standard event that Amazon Pinpoint
     * generates, such as _email.delivered. For campaigns, this can also be a custom
     * event that's specific to your application. For information about standard
     * events, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/event-streams.html">Streaming
     * Amazon Pinpoint Events</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p>
     */
    inline void SetEventType(SetDimension&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The name of the event that causes the campaign to be sent or the journey
     * activity to be performed. This can be a standard event that Amazon Pinpoint
     * generates, such as _email.delivered. For campaigns, this can also be a custom
     * event that's specific to your application. For information about standard
     * events, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/event-streams.html">Streaming
     * Amazon Pinpoint Events</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p>
     */
    inline EventDimensions& WithEventType(const SetDimension& value) { SetEventType(value); return *this;}

    /**
     * <p>The name of the event that causes the campaign to be sent or the journey
     * activity to be performed. This can be a standard event that Amazon Pinpoint
     * generates, such as _email.delivered. For campaigns, this can also be a custom
     * event that's specific to your application. For information about standard
     * events, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/event-streams.html">Streaming
     * Amazon Pinpoint Events</a> in the <i>Amazon Pinpoint Developer Guide</i>.</p>
     */
    inline EventDimensions& WithEventType(SetDimension&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline const Aws::Map<Aws::String, MetricDimension>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline void SetMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline void SetMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline EventDimensions& WithMetrics(const Aws::Map<Aws::String, MetricDimension>& value) { SetMetrics(value); return *this;}

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline EventDimensions& WithMetrics(Aws::Map<Aws::String, MetricDimension>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline EventDimensions& AddMetrics(const Aws::String& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline EventDimensions& AddMetrics(Aws::String&& key, const MetricDimension& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline EventDimensions& AddMetrics(const Aws::String& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline EventDimensions& AddMetrics(Aws::String&& key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
     */
    inline EventDimensions& AddMetrics(const char* key, MetricDimension&& value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more custom metrics that your application reports to Amazon Pinpoint.
     * You can use these metrics as selection criteria when you create an event
     * filter.</p>
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

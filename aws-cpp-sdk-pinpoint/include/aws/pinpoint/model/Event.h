﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/Session.h>
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
   * Model for creating or updating events.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Event">AWS API
   * Reference</a></p>
   */
  class AWS_PINPOINT_API Event
  {
  public:
    Event();
    Event(Aws::Utils::Json::JsonView jsonValue);
    Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline Event& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * The version of the SDK that's running on the client device.
     */
    inline const Aws::String& GetClientSdkVersion() const{ return m_clientSdkVersion; }

    /**
     * The version of the SDK that's running on the client device.
     */
    inline void SetClientSdkVersion(const Aws::String& value) { m_clientSdkVersionHasBeenSet = true; m_clientSdkVersion = value; }

    /**
     * The version of the SDK that's running on the client device.
     */
    inline void SetClientSdkVersion(Aws::String&& value) { m_clientSdkVersionHasBeenSet = true; m_clientSdkVersion = std::move(value); }

    /**
     * The version of the SDK that's running on the client device.
     */
    inline void SetClientSdkVersion(const char* value) { m_clientSdkVersionHasBeenSet = true; m_clientSdkVersion.assign(value); }

    /**
     * The version of the SDK that's running on the client device.
     */
    inline Event& WithClientSdkVersion(const Aws::String& value) { SetClientSdkVersion(value); return *this;}

    /**
     * The version of the SDK that's running on the client device.
     */
    inline Event& WithClientSdkVersion(Aws::String&& value) { SetClientSdkVersion(std::move(value)); return *this;}

    /**
     * The version of the SDK that's running on the client device.
     */
    inline Event& WithClientSdkVersion(const char* value) { SetClientSdkVersion(value); return *this;}


    /**
     * The name of the custom event that you're recording.
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * The name of the custom event that you're recording.
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * The name of the custom event that you're recording.
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * The name of the custom event that you're recording.
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * The name of the custom event that you're recording.
     */
    inline Event& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * The name of the custom event that you're recording.
     */
    inline Event& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * The name of the custom event that you're recording.
     */
    inline Event& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * Event metrics
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * Event metrics
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * Event metrics
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * Event metrics
     */
    inline Event& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * Event metrics
     */
    inline Event& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * Event metrics
     */
    inline Event& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * Event metrics
     */
    inline Event& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * Event metrics
     */
    inline Event& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }


    /**
     * The session
     */
    inline const Session& GetSession() const{ return m_session; }

    /**
     * The session
     */
    inline void SetSession(const Session& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * The session
     */
    inline void SetSession(Session&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }

    /**
     * The session
     */
    inline Event& WithSession(const Session& value) { SetSession(value); return *this;}

    /**
     * The session
     */
    inline Event& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}


    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline void SetTimestamp(const Aws::String& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline void SetTimestamp(Aws::String&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline void SetTimestamp(const char* value) { m_timestampHasBeenSet = true; m_timestamp.assign(value); }

    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline Event& WithTimestamp(const Aws::String& value) { SetTimestamp(value); return *this;}

    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline Event& WithTimestamp(Aws::String&& value) { SetTimestamp(std::move(value)); return *this;}

    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline Event& WithTimestamp(const char* value) { SetTimestamp(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_clientSdkVersion;
    bool m_clientSdkVersionHasBeenSet;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet;

    Session m_session;
    bool m_sessionHasBeenSet;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
     * The package name associated with the app that's recording the event.
     */
    inline const Aws::String& GetAppPackageName() const{ return m_appPackageName; }

    /**
     * The package name associated with the app that's recording the event.
     */
    inline bool AppPackageNameHasBeenSet() const { return m_appPackageNameHasBeenSet; }

    /**
     * The package name associated with the app that's recording the event.
     */
    inline void SetAppPackageName(const Aws::String& value) { m_appPackageNameHasBeenSet = true; m_appPackageName = value; }

    /**
     * The package name associated with the app that's recording the event.
     */
    inline void SetAppPackageName(Aws::String&& value) { m_appPackageNameHasBeenSet = true; m_appPackageName = std::move(value); }

    /**
     * The package name associated with the app that's recording the event.
     */
    inline void SetAppPackageName(const char* value) { m_appPackageNameHasBeenSet = true; m_appPackageName.assign(value); }

    /**
     * The package name associated with the app that's recording the event.
     */
    inline Event& WithAppPackageName(const Aws::String& value) { SetAppPackageName(value); return *this;}

    /**
     * The package name associated with the app that's recording the event.
     */
    inline Event& WithAppPackageName(Aws::String&& value) { SetAppPackageName(std::move(value)); return *this;}

    /**
     * The package name associated with the app that's recording the event.
     */
    inline Event& WithAppPackageName(const char* value) { SetAppPackageName(value); return *this;}


    /**
     * The title of the app that's recording the event.
     */
    inline const Aws::String& GetAppTitle() const{ return m_appTitle; }

    /**
     * The title of the app that's recording the event.
     */
    inline bool AppTitleHasBeenSet() const { return m_appTitleHasBeenSet; }

    /**
     * The title of the app that's recording the event.
     */
    inline void SetAppTitle(const Aws::String& value) { m_appTitleHasBeenSet = true; m_appTitle = value; }

    /**
     * The title of the app that's recording the event.
     */
    inline void SetAppTitle(Aws::String&& value) { m_appTitleHasBeenSet = true; m_appTitle = std::move(value); }

    /**
     * The title of the app that's recording the event.
     */
    inline void SetAppTitle(const char* value) { m_appTitleHasBeenSet = true; m_appTitle.assign(value); }

    /**
     * The title of the app that's recording the event.
     */
    inline Event& WithAppTitle(const Aws::String& value) { SetAppTitle(value); return *this;}

    /**
     * The title of the app that's recording the event.
     */
    inline Event& WithAppTitle(Aws::String&& value) { SetAppTitle(std::move(value)); return *this;}

    /**
     * The title of the app that's recording the event.
     */
    inline Event& WithAppTitle(const char* value) { SetAppTitle(value); return *this;}


    /**
     * The version number of the app that's recording the event.
     */
    inline const Aws::String& GetAppVersionCode() const{ return m_appVersionCode; }

    /**
     * The version number of the app that's recording the event.
     */
    inline bool AppVersionCodeHasBeenSet() const { return m_appVersionCodeHasBeenSet; }

    /**
     * The version number of the app that's recording the event.
     */
    inline void SetAppVersionCode(const Aws::String& value) { m_appVersionCodeHasBeenSet = true; m_appVersionCode = value; }

    /**
     * The version number of the app that's recording the event.
     */
    inline void SetAppVersionCode(Aws::String&& value) { m_appVersionCodeHasBeenSet = true; m_appVersionCode = std::move(value); }

    /**
     * The version number of the app that's recording the event.
     */
    inline void SetAppVersionCode(const char* value) { m_appVersionCodeHasBeenSet = true; m_appVersionCode.assign(value); }

    /**
     * The version number of the app that's recording the event.
     */
    inline Event& WithAppVersionCode(const Aws::String& value) { SetAppVersionCode(value); return *this;}

    /**
     * The version number of the app that's recording the event.
     */
    inline Event& WithAppVersionCode(Aws::String&& value) { SetAppVersionCode(std::move(value)); return *this;}

    /**
     * The version number of the app that's recording the event.
     */
    inline Event& WithAppVersionCode(const char* value) { SetAppVersionCode(value); return *this;}


    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * Custom attributes that are associated with the event you're adding or updating.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

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
    inline bool ClientSdkVersionHasBeenSet() const { return m_clientSdkVersionHasBeenSet; }

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
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

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
     * Custom metrics related to the event.
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }

    /**
     * Custom metrics related to the event.
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * Custom metrics related to the event.
     */
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * Custom metrics related to the event.
     */
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * Custom metrics related to the event.
     */
    inline Event& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}

    /**
     * Custom metrics related to the event.
     */
    inline Event& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * Custom metrics related to the event.
     */
    inline Event& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }

    /**
     * Custom metrics related to the event.
     */
    inline Event& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }

    /**
     * Custom metrics related to the event.
     */
    inline Event& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }


    /**
     * The name of the SDK that's being used to record the event.
     */
    inline const Aws::String& GetSdkName() const{ return m_sdkName; }

    /**
     * The name of the SDK that's being used to record the event.
     */
    inline bool SdkNameHasBeenSet() const { return m_sdkNameHasBeenSet; }

    /**
     * The name of the SDK that's being used to record the event.
     */
    inline void SetSdkName(const Aws::String& value) { m_sdkNameHasBeenSet = true; m_sdkName = value; }

    /**
     * The name of the SDK that's being used to record the event.
     */
    inline void SetSdkName(Aws::String&& value) { m_sdkNameHasBeenSet = true; m_sdkName = std::move(value); }

    /**
     * The name of the SDK that's being used to record the event.
     */
    inline void SetSdkName(const char* value) { m_sdkNameHasBeenSet = true; m_sdkName.assign(value); }

    /**
     * The name of the SDK that's being used to record the event.
     */
    inline Event& WithSdkName(const Aws::String& value) { SetSdkName(value); return *this;}

    /**
     * The name of the SDK that's being used to record the event.
     */
    inline Event& WithSdkName(Aws::String&& value) { SetSdkName(std::move(value)); return *this;}

    /**
     * The name of the SDK that's being used to record the event.
     */
    inline Event& WithSdkName(const char* value) { SetSdkName(value); return *this;}


    /**
     * Information about the session in which the event occurred.
     */
    inline const Session& GetSession() const{ return m_session; }

    /**
     * Information about the session in which the event occurred.
     */
    inline bool SessionHasBeenSet() const { return m_sessionHasBeenSet; }

    /**
     * Information about the session in which the event occurred.
     */
    inline void SetSession(const Session& value) { m_sessionHasBeenSet = true; m_session = value; }

    /**
     * Information about the session in which the event occurred.
     */
    inline void SetSession(Session&& value) { m_sessionHasBeenSet = true; m_session = std::move(value); }

    /**
     * Information about the session in which the event occurred.
     */
    inline Event& WithSession(const Session& value) { SetSession(value); return *this;}

    /**
     * Information about the session in which the event occurred.
     */
    inline Event& WithSession(Session&& value) { SetSession(std::move(value)); return *this;}


    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline const Aws::String& GetTimestamp() const{ return m_timestamp; }

    /**
     * The date and time when the event occurred, in ISO 8601 format.
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

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

    Aws::String m_appPackageName;
    bool m_appPackageNameHasBeenSet;

    Aws::String m_appTitle;
    bool m_appTitleHasBeenSet;

    Aws::String m_appVersionCode;
    bool m_appVersionCodeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_clientSdkVersion;
    bool m_clientSdkVersionHasBeenSet;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet;

    Aws::String m_sdkName;
    bool m_sdkNameHasBeenSet;

    Session m_session;
    bool m_sessionHasBeenSet;

    Aws::String m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

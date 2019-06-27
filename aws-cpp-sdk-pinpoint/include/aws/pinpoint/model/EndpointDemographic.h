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
   * <p>Specifies demographic information about an endpoint, such as the applicable
   * time zone and platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointDemographic">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointDemographic
  {
  public:
    EndpointDemographic();
    EndpointDemographic(Aws::Utils::Json::JsonView jsonValue);
    EndpointDemographic& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }

    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }

    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }

    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }

    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline EndpointDemographic& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline EndpointDemographic& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the app that's associated with the endpoint.</p>
     */
    inline EndpointDemographic& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline EndpointDemographic& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline EndpointDemographic& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>The locale of the endpoint, in the following format: the ISO 639-1 alpha-2
     * code, followed by an underscore (_), followed by an ISO 3166-1 alpha-2
     * value.</p>
     */
    inline EndpointDemographic& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline const Aws::String& GetMake() const{ return m_make; }

    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline bool MakeHasBeenSet() const { return m_makeHasBeenSet; }

    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline void SetMake(const Aws::String& value) { m_makeHasBeenSet = true; m_make = value; }

    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline void SetMake(Aws::String&& value) { m_makeHasBeenSet = true; m_make = std::move(value); }

    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline void SetMake(const char* value) { m_makeHasBeenSet = true; m_make.assign(value); }

    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline EndpointDemographic& WithMake(const Aws::String& value) { SetMake(value); return *this;}

    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline EndpointDemographic& WithMake(Aws::String&& value) { SetMake(std::move(value)); return *this;}

    /**
     * <p>The manufacturer of the endpoint device, such as Apple or Samsung.</p>
     */
    inline EndpointDemographic& WithMake(const char* value) { SetMake(value); return *this;}


    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline EndpointDemographic& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline EndpointDemographic& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The model name or number of the endpoint device, such as iPhone.</p>
     */
    inline EndpointDemographic& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline EndpointDemographic& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline EndpointDemographic& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The model version of the endpoint device.</p>
     */
    inline EndpointDemographic& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline EndpointDemographic& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline EndpointDemographic& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform of the endpoint device, such as iOS or Android.</p>
     */
    inline EndpointDemographic& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline EndpointDemographic& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline EndpointDemographic& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The platform version of the endpoint device.</p>
     */
    inline EndpointDemographic& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline EndpointDemographic& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline EndpointDemographic& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone of the endpoint, specified as a tz database name value, such as
     * America/Los_Angeles.</p>
     */
    inline EndpointDemographic& WithTimezone(const char* value) { SetTimezone(value); return *this;}

  private:

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet;

    Aws::String m_locale;
    bool m_localeHasBeenSet;

    Aws::String m_make;
    bool m_makeHasBeenSet;

    Aws::String m_model;
    bool m_modelHasBeenSet;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet;

    Aws::String m_platform;
    bool m_platformHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

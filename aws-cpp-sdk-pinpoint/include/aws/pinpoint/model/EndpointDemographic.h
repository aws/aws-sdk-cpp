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
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Endpoint demographic data<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointDemographic">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EndpointDemographic
  {
  public:
    EndpointDemographic();
    EndpointDemographic(const Aws::Utils::Json::JsonValue& jsonValue);
    EndpointDemographic& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The version of the application associated with the endpoint.
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * The version of the application associated with the endpoint.
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }

    /**
     * The version of the application associated with the endpoint.
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }

    /**
     * The version of the application associated with the endpoint.
     */
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }

    /**
     * The version of the application associated with the endpoint.
     */
    inline EndpointDemographic& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * The version of the application associated with the endpoint.
     */
    inline EndpointDemographic& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * The version of the application associated with the endpoint.
     */
    inline EndpointDemographic& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    /**
     * The endpoint locale in the following format: The ISO 639-1 alpha-2 code,
     * followed by an underscore, followed by an ISO 3166-1 alpha-2 value.

     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * The endpoint locale in the following format: The ISO 639-1 alpha-2 code,
     * followed by an underscore, followed by an ISO 3166-1 alpha-2 value.

     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * The endpoint locale in the following format: The ISO 639-1 alpha-2 code,
     * followed by an underscore, followed by an ISO 3166-1 alpha-2 value.

     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * The endpoint locale in the following format: The ISO 639-1 alpha-2 code,
     * followed by an underscore, followed by an ISO 3166-1 alpha-2 value.

     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * The endpoint locale in the following format: The ISO 639-1 alpha-2 code,
     * followed by an underscore, followed by an ISO 3166-1 alpha-2 value.

     */
    inline EndpointDemographic& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * The endpoint locale in the following format: The ISO 639-1 alpha-2 code,
     * followed by an underscore, followed by an ISO 3166-1 alpha-2 value.

     */
    inline EndpointDemographic& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * The endpoint locale in the following format: The ISO 639-1 alpha-2 code,
     * followed by an underscore, followed by an ISO 3166-1 alpha-2 value.

     */
    inline EndpointDemographic& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * The endpoint make, such as such as Apple or Samsung.
     */
    inline const Aws::String& GetMake() const{ return m_make; }

    /**
     * The endpoint make, such as such as Apple or Samsung.
     */
    inline void SetMake(const Aws::String& value) { m_makeHasBeenSet = true; m_make = value; }

    /**
     * The endpoint make, such as such as Apple or Samsung.
     */
    inline void SetMake(Aws::String&& value) { m_makeHasBeenSet = true; m_make = std::move(value); }

    /**
     * The endpoint make, such as such as Apple or Samsung.
     */
    inline void SetMake(const char* value) { m_makeHasBeenSet = true; m_make.assign(value); }

    /**
     * The endpoint make, such as such as Apple or Samsung.
     */
    inline EndpointDemographic& WithMake(const Aws::String& value) { SetMake(value); return *this;}

    /**
     * The endpoint make, such as such as Apple or Samsung.
     */
    inline EndpointDemographic& WithMake(Aws::String&& value) { SetMake(std::move(value)); return *this;}

    /**
     * The endpoint make, such as such as Apple or Samsung.
     */
    inline EndpointDemographic& WithMake(const char* value) { SetMake(value); return *this;}


    /**
     * The endpoint model, such as iPhone.
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * The endpoint model, such as iPhone.
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * The endpoint model, such as iPhone.
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * The endpoint model, such as iPhone.
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * The endpoint model, such as iPhone.
     */
    inline EndpointDemographic& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * The endpoint model, such as iPhone.
     */
    inline EndpointDemographic& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * The endpoint model, such as iPhone.
     */
    inline EndpointDemographic& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * The endpoint model version.
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * The endpoint model version.
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * The endpoint model version.
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * The endpoint model version.
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * The endpoint model version.
     */
    inline EndpointDemographic& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * The endpoint model version.
     */
    inline EndpointDemographic& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * The endpoint model version.
     */
    inline EndpointDemographic& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * The endpoint platform, such as ios or android.
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * The endpoint platform, such as ios or android.
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * The endpoint platform, such as ios or android.
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * The endpoint platform, such as ios or android.
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * The endpoint platform, such as ios or android.
     */
    inline EndpointDemographic& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * The endpoint platform, such as ios or android.
     */
    inline EndpointDemographic& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * The endpoint platform, such as ios or android.
     */
    inline EndpointDemographic& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * The endpoint platform version.
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * The endpoint platform version.
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * The endpoint platform version.
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * The endpoint platform version.
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * The endpoint platform version.
     */
    inline EndpointDemographic& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * The endpoint platform version.
     */
    inline EndpointDemographic& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * The endpoint platform version.
     */
    inline EndpointDemographic& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * The timezone of the endpoint. Specified as a tz database value, such as
     * Americas/Los_Angeles.
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * The timezone of the endpoint. Specified as a tz database value, such as
     * Americas/Los_Angeles.
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * The timezone of the endpoint. Specified as a tz database value, such as
     * Americas/Los_Angeles.
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * The timezone of the endpoint. Specified as a tz database value, such as
     * Americas/Los_Angeles.
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * The timezone of the endpoint. Specified as a tz database value, such as
     * Americas/Los_Angeles.
     */
    inline EndpointDemographic& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * The timezone of the endpoint. Specified as a tz database value, such as
     * Americas/Los_Angeles.
     */
    inline EndpointDemographic& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * The timezone of the endpoint. Specified as a tz database value, such as
     * Americas/Los_Angeles.
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

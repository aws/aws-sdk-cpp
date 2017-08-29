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

#include <aws/pinpoint/model/EndpointDemographic.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EndpointDemographic::EndpointDemographic() : 
    m_appVersionHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_makeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
}

EndpointDemographic::EndpointDemographic(const JsonValue& jsonValue) : 
    m_appVersionHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_makeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_timezoneHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointDemographic& EndpointDemographic::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AppVersion"))
  {
    m_appVersion = jsonValue.GetString("AppVersion");

    m_appVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = jsonValue.GetString("Locale");

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Make"))
  {
    m_make = jsonValue.GetString("Make");

    m_makeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetString("Platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointDemographic::Jsonize() const
{
  JsonValue payload;

  if(m_appVersionHasBeenSet)
  {
   payload.WithString("AppVersion", m_appVersion);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", m_locale);

  }

  if(m_makeHasBeenSet)
  {
   payload.WithString("Make", m_make);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", m_platform);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

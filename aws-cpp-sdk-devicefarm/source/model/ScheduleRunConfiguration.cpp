/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/ScheduleRunConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

ScheduleRunConfiguration::ScheduleRunConfiguration() : 
    m_extraDataPackageArnHasBeenSet(false),
    m_networkProfileArnHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_radiosHasBeenSet(false),
    m_auxiliaryAppsHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false)
{
}

ScheduleRunConfiguration::ScheduleRunConfiguration(const JsonValue& jsonValue) : 
    m_extraDataPackageArnHasBeenSet(false),
    m_networkProfileArnHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_radiosHasBeenSet(false),
    m_auxiliaryAppsHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleRunConfiguration& ScheduleRunConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("extraDataPackageArn"))
  {
    m_extraDataPackageArn = jsonValue.GetString("extraDataPackageArn");

    m_extraDataPackageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkProfileArn"))
  {
    m_networkProfileArn = jsonValue.GetString("networkProfileArn");

    m_networkProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locale"))
  {
    m_locale = jsonValue.GetString("locale");

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("radios"))
  {
    m_radios = jsonValue.GetObject("radios");

    m_radiosHasBeenSet = true;
  }

  if(jsonValue.ValueExists("auxiliaryApps"))
  {
    Array<JsonValue> auxiliaryAppsJsonList = jsonValue.GetArray("auxiliaryApps");
    for(unsigned auxiliaryAppsIndex = 0; auxiliaryAppsIndex < auxiliaryAppsJsonList.GetLength(); ++auxiliaryAppsIndex)
    {
      m_auxiliaryApps.push_back(auxiliaryAppsJsonList[auxiliaryAppsIndex].AsString());
    }
    m_auxiliaryAppsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("billingMethod"))
  {
    m_billingMethod = BillingMethodMapper::GetBillingMethodForName(jsonValue.GetString("billingMethod"));

    m_billingMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleRunConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_extraDataPackageArnHasBeenSet)
  {
   payload.WithString("extraDataPackageArn", m_extraDataPackageArn);

  }

  if(m_networkProfileArnHasBeenSet)
  {
   payload.WithString("networkProfileArn", m_networkProfileArn);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_radiosHasBeenSet)
  {
   payload.WithObject("radios", m_radios.Jsonize());

  }

  if(m_auxiliaryAppsHasBeenSet)
  {
   Array<JsonValue> auxiliaryAppsJsonList(m_auxiliaryApps.size());
   for(unsigned auxiliaryAppsIndex = 0; auxiliaryAppsIndex < auxiliaryAppsJsonList.GetLength(); ++auxiliaryAppsIndex)
   {
     auxiliaryAppsJsonList[auxiliaryAppsIndex].AsString(m_auxiliaryApps[auxiliaryAppsIndex]);
   }
   payload.WithArray("auxiliaryApps", std::move(auxiliaryAppsJsonList));

  }

  if(m_billingMethodHasBeenSet)
  {
   payload.WithString("billingMethod", BillingMethodMapper::GetNameForBillingMethod(m_billingMethod));
  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_vpceConfigurationArnsHasBeenSet(false),
    m_customerArtifactPathsHasBeenSet(false),
    m_radiosHasBeenSet(false),
    m_auxiliaryAppsHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false)
{
}

ScheduleRunConfiguration::ScheduleRunConfiguration(JsonView jsonValue) : 
    m_extraDataPackageArnHasBeenSet(false),
    m_networkProfileArnHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_vpceConfigurationArnsHasBeenSet(false),
    m_customerArtifactPathsHasBeenSet(false),
    m_radiosHasBeenSet(false),
    m_auxiliaryAppsHasBeenSet(false),
    m_billingMethod(BillingMethod::NOT_SET),
    m_billingMethodHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleRunConfiguration& ScheduleRunConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("vpceConfigurationArns"))
  {
    Aws::Utils::Array<JsonView> vpceConfigurationArnsJsonList = jsonValue.GetArray("vpceConfigurationArns");
    for(unsigned vpceConfigurationArnsIndex = 0; vpceConfigurationArnsIndex < vpceConfigurationArnsJsonList.GetLength(); ++vpceConfigurationArnsIndex)
    {
      m_vpceConfigurationArns.push_back(vpceConfigurationArnsJsonList[vpceConfigurationArnsIndex].AsString());
    }
    m_vpceConfigurationArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerArtifactPaths"))
  {
    m_customerArtifactPaths = jsonValue.GetObject("customerArtifactPaths");

    m_customerArtifactPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("radios"))
  {
    m_radios = jsonValue.GetObject("radios");

    m_radiosHasBeenSet = true;
  }

  if(jsonValue.ValueExists("auxiliaryApps"))
  {
    Aws::Utils::Array<JsonView> auxiliaryAppsJsonList = jsonValue.GetArray("auxiliaryApps");
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

  if(m_vpceConfigurationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpceConfigurationArnsJsonList(m_vpceConfigurationArns.size());
   for(unsigned vpceConfigurationArnsIndex = 0; vpceConfigurationArnsIndex < vpceConfigurationArnsJsonList.GetLength(); ++vpceConfigurationArnsIndex)
   {
     vpceConfigurationArnsJsonList[vpceConfigurationArnsIndex].AsString(m_vpceConfigurationArns[vpceConfigurationArnsIndex]);
   }
   payload.WithArray("vpceConfigurationArns", std::move(vpceConfigurationArnsJsonList));

  }

  if(m_customerArtifactPathsHasBeenSet)
  {
   payload.WithObject("customerArtifactPaths", m_customerArtifactPaths.Jsonize());

  }

  if(m_radiosHasBeenSet)
  {
   payload.WithObject("radios", m_radios.Jsonize());

  }

  if(m_auxiliaryAppsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> auxiliaryAppsJsonList(m_auxiliaryApps.size());
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

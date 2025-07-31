/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ProjectCodeSecurityScanConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ProjectCodeSecurityScanConfiguration::ProjectCodeSecurityScanConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectCodeSecurityScanConfiguration& ProjectCodeSecurityScanConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("periodicScanConfigurations"))
  {
    Aws::Utils::Array<JsonView> periodicScanConfigurationsJsonList = jsonValue.GetArray("periodicScanConfigurations");
    for(unsigned periodicScanConfigurationsIndex = 0; periodicScanConfigurationsIndex < periodicScanConfigurationsJsonList.GetLength(); ++periodicScanConfigurationsIndex)
    {
      m_periodicScanConfigurations.push_back(periodicScanConfigurationsJsonList[periodicScanConfigurationsIndex].AsObject());
    }
    m_periodicScanConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("continuousIntegrationScanConfigurations"))
  {
    Aws::Utils::Array<JsonView> continuousIntegrationScanConfigurationsJsonList = jsonValue.GetArray("continuousIntegrationScanConfigurations");
    for(unsigned continuousIntegrationScanConfigurationsIndex = 0; continuousIntegrationScanConfigurationsIndex < continuousIntegrationScanConfigurationsJsonList.GetLength(); ++continuousIntegrationScanConfigurationsIndex)
    {
      m_continuousIntegrationScanConfigurations.push_back(continuousIntegrationScanConfigurationsJsonList[continuousIntegrationScanConfigurationsIndex].AsObject());
    }
    m_continuousIntegrationScanConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectCodeSecurityScanConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_periodicScanConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> periodicScanConfigurationsJsonList(m_periodicScanConfigurations.size());
   for(unsigned periodicScanConfigurationsIndex = 0; periodicScanConfigurationsIndex < periodicScanConfigurationsJsonList.GetLength(); ++periodicScanConfigurationsIndex)
   {
     periodicScanConfigurationsJsonList[periodicScanConfigurationsIndex].AsObject(m_periodicScanConfigurations[periodicScanConfigurationsIndex].Jsonize());
   }
   payload.WithArray("periodicScanConfigurations", std::move(periodicScanConfigurationsJsonList));

  }

  if(m_continuousIntegrationScanConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> continuousIntegrationScanConfigurationsJsonList(m_continuousIntegrationScanConfigurations.size());
   for(unsigned continuousIntegrationScanConfigurationsIndex = 0; continuousIntegrationScanConfigurationsIndex < continuousIntegrationScanConfigurationsJsonList.GetLength(); ++continuousIntegrationScanConfigurationsIndex)
   {
     continuousIntegrationScanConfigurationsJsonList[continuousIntegrationScanConfigurationsIndex].AsObject(m_continuousIntegrationScanConfigurations[continuousIntegrationScanConfigurationsIndex].Jsonize());
   }
   payload.WithArray("continuousIntegrationScanConfigurations", std::move(continuousIntegrationScanConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws

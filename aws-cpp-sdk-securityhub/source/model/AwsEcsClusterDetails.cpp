/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsClusterDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsClusterDetails::AwsEcsClusterDetails() : 
    m_capacityProvidersHasBeenSet(false),
    m_clusterSettingsHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false)
{
}

AwsEcsClusterDetails::AwsEcsClusterDetails(JsonView jsonValue) : 
    m_capacityProvidersHasBeenSet(false),
    m_clusterSettingsHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsClusterDetails& AwsEcsClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityProviders"))
  {
    Array<JsonView> capacityProvidersJsonList = jsonValue.GetArray("CapacityProviders");
    for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
    {
      m_capacityProviders.push_back(capacityProvidersJsonList[capacityProvidersIndex].AsString());
    }
    m_capacityProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterSettings"))
  {
    Array<JsonView> clusterSettingsJsonList = jsonValue.GetArray("ClusterSettings");
    for(unsigned clusterSettingsIndex = 0; clusterSettingsIndex < clusterSettingsJsonList.GetLength(); ++clusterSettingsIndex)
    {
      m_clusterSettings.push_back(clusterSettingsJsonList[clusterSettingsIndex].AsObject());
    }
    m_clusterSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultCapacityProviderStrategy"))
  {
    Array<JsonView> defaultCapacityProviderStrategyJsonList = jsonValue.GetArray("DefaultCapacityProviderStrategy");
    for(unsigned defaultCapacityProviderStrategyIndex = 0; defaultCapacityProviderStrategyIndex < defaultCapacityProviderStrategyJsonList.GetLength(); ++defaultCapacityProviderStrategyIndex)
    {
      m_defaultCapacityProviderStrategy.push_back(defaultCapacityProviderStrategyJsonList[defaultCapacityProviderStrategyIndex].AsObject());
    }
    m_defaultCapacityProviderStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_capacityProvidersHasBeenSet)
  {
   Array<JsonValue> capacityProvidersJsonList(m_capacityProviders.size());
   for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
   {
     capacityProvidersJsonList[capacityProvidersIndex].AsString(m_capacityProviders[capacityProvidersIndex]);
   }
   payload.WithArray("CapacityProviders", std::move(capacityProvidersJsonList));

  }

  if(m_clusterSettingsHasBeenSet)
  {
   Array<JsonValue> clusterSettingsJsonList(m_clusterSettings.size());
   for(unsigned clusterSettingsIndex = 0; clusterSettingsIndex < clusterSettingsJsonList.GetLength(); ++clusterSettingsIndex)
   {
     clusterSettingsJsonList[clusterSettingsIndex].AsObject(m_clusterSettings[clusterSettingsIndex].Jsonize());
   }
   payload.WithArray("ClusterSettings", std::move(clusterSettingsJsonList));

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_defaultCapacityProviderStrategyHasBeenSet)
  {
   Array<JsonValue> defaultCapacityProviderStrategyJsonList(m_defaultCapacityProviderStrategy.size());
   for(unsigned defaultCapacityProviderStrategyIndex = 0; defaultCapacityProviderStrategyIndex < defaultCapacityProviderStrategyJsonList.GetLength(); ++defaultCapacityProviderStrategyIndex)
   {
     defaultCapacityProviderStrategyJsonList[defaultCapacityProviderStrategyIndex].AsObject(m_defaultCapacityProviderStrategy[defaultCapacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("DefaultCapacityProviderStrategy", std::move(defaultCapacityProviderStrategyJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

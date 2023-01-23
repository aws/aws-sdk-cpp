/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonVersionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AddonVersionInfo::AddonVersionInfo() : 
    m_addonVersionHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_compatibilitiesHasBeenSet(false),
    m_requiresConfiguration(false),
    m_requiresConfigurationHasBeenSet(false)
{
}

AddonVersionInfo::AddonVersionInfo(JsonView jsonValue) : 
    m_addonVersionHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_compatibilitiesHasBeenSet(false),
    m_requiresConfiguration(false),
    m_requiresConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AddonVersionInfo& AddonVersionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addonVersion"))
  {
    m_addonVersion = jsonValue.GetString("addonVersion");

    m_addonVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    Aws::Utils::Array<JsonView> architectureJsonList = jsonValue.GetArray("architecture");
    for(unsigned architectureIndex = 0; architectureIndex < architectureJsonList.GetLength(); ++architectureIndex)
    {
      m_architecture.push_back(architectureJsonList[architectureIndex].AsString());
    }
    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compatibilities"))
  {
    Aws::Utils::Array<JsonView> compatibilitiesJsonList = jsonValue.GetArray("compatibilities");
    for(unsigned compatibilitiesIndex = 0; compatibilitiesIndex < compatibilitiesJsonList.GetLength(); ++compatibilitiesIndex)
    {
      m_compatibilities.push_back(compatibilitiesJsonList[compatibilitiesIndex].AsObject());
    }
    m_compatibilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requiresConfiguration"))
  {
    m_requiresConfiguration = jsonValue.GetBool("requiresConfiguration");

    m_requiresConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AddonVersionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_addonVersionHasBeenSet)
  {
   payload.WithString("addonVersion", m_addonVersion);

  }

  if(m_architectureHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> architectureJsonList(m_architecture.size());
   for(unsigned architectureIndex = 0; architectureIndex < architectureJsonList.GetLength(); ++architectureIndex)
   {
     architectureJsonList[architectureIndex].AsString(m_architecture[architectureIndex]);
   }
   payload.WithArray("architecture", std::move(architectureJsonList));

  }

  if(m_compatibilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> compatibilitiesJsonList(m_compatibilities.size());
   for(unsigned compatibilitiesIndex = 0; compatibilitiesIndex < compatibilitiesJsonList.GetLength(); ++compatibilitiesIndex)
   {
     compatibilitiesJsonList[compatibilitiesIndex].AsObject(m_compatibilities[compatibilitiesIndex].Jsonize());
   }
   payload.WithArray("compatibilities", std::move(compatibilitiesJsonList));

  }

  if(m_requiresConfigurationHasBeenSet)
  {
   payload.WithBool("requiresConfiguration", m_requiresConfiguration);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws

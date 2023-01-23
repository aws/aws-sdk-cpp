/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/ConfigurationOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

ConfigurationOverrides::ConfigurationOverrides() : 
    m_applicationConfigurationHasBeenSet(false),
    m_monitoringConfigurationHasBeenSet(false)
{
}

ConfigurationOverrides::ConfigurationOverrides(JsonView jsonValue) : 
    m_applicationConfigurationHasBeenSet(false),
    m_monitoringConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationOverrides& ConfigurationOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationConfiguration"))
  {
    Aws::Utils::Array<JsonView> applicationConfigurationJsonList = jsonValue.GetArray("applicationConfiguration");
    for(unsigned applicationConfigurationIndex = 0; applicationConfigurationIndex < applicationConfigurationJsonList.GetLength(); ++applicationConfigurationIndex)
    {
      m_applicationConfiguration.push_back(applicationConfigurationJsonList[applicationConfigurationIndex].AsObject());
    }
    m_applicationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("monitoringConfiguration"))
  {
    m_monitoringConfiguration = jsonValue.GetObject("monitoringConfiguration");

    m_monitoringConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_applicationConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationConfigurationJsonList(m_applicationConfiguration.size());
   for(unsigned applicationConfigurationIndex = 0; applicationConfigurationIndex < applicationConfigurationJsonList.GetLength(); ++applicationConfigurationIndex)
   {
     applicationConfigurationJsonList[applicationConfigurationIndex].AsObject(m_applicationConfiguration[applicationConfigurationIndex].Jsonize());
   }
   payload.WithArray("applicationConfiguration", std::move(applicationConfigurationJsonList));

  }

  if(m_monitoringConfigurationHasBeenSet)
  {
   payload.WithObject("monitoringConfiguration", m_monitoringConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws

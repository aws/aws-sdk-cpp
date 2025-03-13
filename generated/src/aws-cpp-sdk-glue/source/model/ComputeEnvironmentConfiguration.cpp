/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ComputeEnvironmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ComputeEnvironmentConfiguration::ComputeEnvironmentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeEnvironmentConfiguration& ComputeEnvironmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeEnvironment"))
  {
    m_computeEnvironment = ComputeEnvironmentMapper::GetComputeEnvironmentForName(jsonValue.GetString("ComputeEnvironment"));
    m_computeEnvironmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SupportedAuthenticationTypes"))
  {
    Aws::Utils::Array<JsonView> supportedAuthenticationTypesJsonList = jsonValue.GetArray("SupportedAuthenticationTypes");
    for(unsigned supportedAuthenticationTypesIndex = 0; supportedAuthenticationTypesIndex < supportedAuthenticationTypesJsonList.GetLength(); ++supportedAuthenticationTypesIndex)
    {
      m_supportedAuthenticationTypes.push_back(AuthenticationTypeMapper::GetAuthenticationTypeForName(supportedAuthenticationTypesJsonList[supportedAuthenticationTypesIndex].AsString()));
    }
    m_supportedAuthenticationTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionOptions"))
  {
    Aws::Map<Aws::String, JsonView> connectionOptionsJsonMap = jsonValue.GetObject("ConnectionOptions").GetAllObjects();
    for(auto& connectionOptionsItem : connectionOptionsJsonMap)
    {
      m_connectionOptions[connectionOptionsItem.first] = connectionOptionsItem.second.AsObject();
    }
    m_connectionOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionPropertyNameOverrides"))
  {
    Aws::Map<Aws::String, JsonView> connectionPropertyNameOverridesJsonMap = jsonValue.GetObject("ConnectionPropertyNameOverrides").GetAllObjects();
    for(auto& connectionPropertyNameOverridesItem : connectionPropertyNameOverridesJsonMap)
    {
      m_connectionPropertyNameOverrides[connectionPropertyNameOverridesItem.first] = connectionPropertyNameOverridesItem.second.AsString();
    }
    m_connectionPropertyNameOverridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionOptionNameOverrides"))
  {
    Aws::Map<Aws::String, JsonView> connectionOptionNameOverridesJsonMap = jsonValue.GetObject("ConnectionOptionNameOverrides").GetAllObjects();
    for(auto& connectionOptionNameOverridesItem : connectionOptionNameOverridesJsonMap)
    {
      m_connectionOptionNameOverrides[connectionOptionNameOverridesItem.first] = connectionOptionNameOverridesItem.second.AsString();
    }
    m_connectionOptionNameOverridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionPropertiesRequiredOverrides"))
  {
    Aws::Utils::Array<JsonView> connectionPropertiesRequiredOverridesJsonList = jsonValue.GetArray("ConnectionPropertiesRequiredOverrides");
    for(unsigned connectionPropertiesRequiredOverridesIndex = 0; connectionPropertiesRequiredOverridesIndex < connectionPropertiesRequiredOverridesJsonList.GetLength(); ++connectionPropertiesRequiredOverridesIndex)
    {
      m_connectionPropertiesRequiredOverrides.push_back(connectionPropertiesRequiredOverridesJsonList[connectionPropertiesRequiredOverridesIndex].AsString());
    }
    m_connectionPropertiesRequiredOverridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PhysicalConnectionPropertiesRequired"))
  {
    m_physicalConnectionPropertiesRequired = jsonValue.GetBool("PhysicalConnectionPropertiesRequired");
    m_physicalConnectionPropertiesRequiredHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeEnvironmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_computeEnvironmentHasBeenSet)
  {
   payload.WithString("ComputeEnvironment", ComputeEnvironmentMapper::GetNameForComputeEnvironment(m_computeEnvironment));
  }

  if(m_supportedAuthenticationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedAuthenticationTypesJsonList(m_supportedAuthenticationTypes.size());
   for(unsigned supportedAuthenticationTypesIndex = 0; supportedAuthenticationTypesIndex < supportedAuthenticationTypesJsonList.GetLength(); ++supportedAuthenticationTypesIndex)
   {
     supportedAuthenticationTypesJsonList[supportedAuthenticationTypesIndex].AsString(AuthenticationTypeMapper::GetNameForAuthenticationType(m_supportedAuthenticationTypes[supportedAuthenticationTypesIndex]));
   }
   payload.WithArray("SupportedAuthenticationTypes", std::move(supportedAuthenticationTypesJsonList));

  }

  if(m_connectionOptionsHasBeenSet)
  {
   JsonValue connectionOptionsJsonMap;
   for(auto& connectionOptionsItem : m_connectionOptions)
   {
     connectionOptionsJsonMap.WithObject(connectionOptionsItem.first, connectionOptionsItem.second.Jsonize());
   }
   payload.WithObject("ConnectionOptions", std::move(connectionOptionsJsonMap));

  }

  if(m_connectionPropertyNameOverridesHasBeenSet)
  {
   JsonValue connectionPropertyNameOverridesJsonMap;
   for(auto& connectionPropertyNameOverridesItem : m_connectionPropertyNameOverrides)
   {
     connectionPropertyNameOverridesJsonMap.WithString(connectionPropertyNameOverridesItem.first, connectionPropertyNameOverridesItem.second);
   }
   payload.WithObject("ConnectionPropertyNameOverrides", std::move(connectionPropertyNameOverridesJsonMap));

  }

  if(m_connectionOptionNameOverridesHasBeenSet)
  {
   JsonValue connectionOptionNameOverridesJsonMap;
   for(auto& connectionOptionNameOverridesItem : m_connectionOptionNameOverrides)
   {
     connectionOptionNameOverridesJsonMap.WithString(connectionOptionNameOverridesItem.first, connectionOptionNameOverridesItem.second);
   }
   payload.WithObject("ConnectionOptionNameOverrides", std::move(connectionOptionNameOverridesJsonMap));

  }

  if(m_connectionPropertiesRequiredOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectionPropertiesRequiredOverridesJsonList(m_connectionPropertiesRequiredOverrides.size());
   for(unsigned connectionPropertiesRequiredOverridesIndex = 0; connectionPropertiesRequiredOverridesIndex < connectionPropertiesRequiredOverridesJsonList.GetLength(); ++connectionPropertiesRequiredOverridesIndex)
   {
     connectionPropertiesRequiredOverridesJsonList[connectionPropertiesRequiredOverridesIndex].AsString(m_connectionPropertiesRequiredOverrides[connectionPropertiesRequiredOverridesIndex]);
   }
   payload.WithArray("ConnectionPropertiesRequiredOverrides", std::move(connectionPropertiesRequiredOverridesJsonList));

  }

  if(m_physicalConnectionPropertiesRequiredHasBeenSet)
  {
   payload.WithBool("PhysicalConnectionPropertiesRequired", m_physicalConnectionPropertiesRequired);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws

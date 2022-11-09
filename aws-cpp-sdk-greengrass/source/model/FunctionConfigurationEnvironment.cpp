/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/FunctionConfigurationEnvironment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

FunctionConfigurationEnvironment::FunctionConfigurationEnvironment() : 
    m_accessSysfs(false),
    m_accessSysfsHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_resourceAccessPoliciesHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
}

FunctionConfigurationEnvironment::FunctionConfigurationEnvironment(JsonView jsonValue) : 
    m_accessSysfs(false),
    m_accessSysfsHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_resourceAccessPoliciesHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionConfigurationEnvironment& FunctionConfigurationEnvironment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessSysfs"))
  {
    m_accessSysfs = jsonValue.GetBool("AccessSysfs");

    m_accessSysfsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Execution"))
  {
    m_execution = jsonValue.GetObject("Execution");

    m_executionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAccessPolicies"))
  {
    Aws::Utils::Array<JsonView> resourceAccessPoliciesJsonList = jsonValue.GetArray("ResourceAccessPolicies");
    for(unsigned resourceAccessPoliciesIndex = 0; resourceAccessPoliciesIndex < resourceAccessPoliciesJsonList.GetLength(); ++resourceAccessPoliciesIndex)
    {
      m_resourceAccessPolicies.push_back(resourceAccessPoliciesJsonList[resourceAccessPoliciesIndex].AsObject());
    }
    m_resourceAccessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Variables"))
  {
    Aws::Map<Aws::String, JsonView> variablesJsonMap = jsonValue.GetObject("Variables").GetAllObjects();
    for(auto& variablesItem : variablesJsonMap)
    {
      m_variables[variablesItem.first] = variablesItem.second.AsString();
    }
    m_variablesHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionConfigurationEnvironment::Jsonize() const
{
  JsonValue payload;

  if(m_accessSysfsHasBeenSet)
  {
   payload.WithBool("AccessSysfs", m_accessSysfs);

  }

  if(m_executionHasBeenSet)
  {
   payload.WithObject("Execution", m_execution.Jsonize());

  }

  if(m_resourceAccessPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAccessPoliciesJsonList(m_resourceAccessPolicies.size());
   for(unsigned resourceAccessPoliciesIndex = 0; resourceAccessPoliciesIndex < resourceAccessPoliciesJsonList.GetLength(); ++resourceAccessPoliciesIndex)
   {
     resourceAccessPoliciesJsonList[resourceAccessPoliciesIndex].AsObject(m_resourceAccessPolicies[resourceAccessPoliciesIndex].Jsonize());
   }
   payload.WithArray("ResourceAccessPolicies", std::move(resourceAccessPoliciesJsonList));

  }

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithString(variablesItem.first, variablesItem.second);
   }
   payload.WithObject("Variables", std::move(variablesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws

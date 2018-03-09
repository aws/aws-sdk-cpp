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
    m_resourceAccessPoliciesHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
}

FunctionConfigurationEnvironment::FunctionConfigurationEnvironment(const JsonValue& jsonValue) : 
    m_accessSysfs(false),
    m_accessSysfsHasBeenSet(false),
    m_resourceAccessPoliciesHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionConfigurationEnvironment& FunctionConfigurationEnvironment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AccessSysfs"))
  {
    m_accessSysfs = jsonValue.GetBool("AccessSysfs");

    m_accessSysfsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceAccessPolicies"))
  {
    Array<JsonValue> resourceAccessPoliciesJsonList = jsonValue.GetArray("ResourceAccessPolicies");
    for(unsigned resourceAccessPoliciesIndex = 0; resourceAccessPoliciesIndex < resourceAccessPoliciesJsonList.GetLength(); ++resourceAccessPoliciesIndex)
    {
      m_resourceAccessPolicies.push_back(resourceAccessPoliciesJsonList[resourceAccessPoliciesIndex].AsObject());
    }
    m_resourceAccessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Variables"))
  {
    Aws::Map<Aws::String, JsonValue> variablesJsonMap = jsonValue.GetObject("Variables").GetAllObjects();
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

  if(m_resourceAccessPoliciesHasBeenSet)
  {
   Array<JsonValue> resourceAccessPoliciesJsonList(m_resourceAccessPolicies.size());
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

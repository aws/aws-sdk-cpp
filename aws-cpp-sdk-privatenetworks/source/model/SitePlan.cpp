/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/SitePlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

SitePlan::SitePlan() : 
    m_optionsHasBeenSet(false),
    m_resourceDefinitionsHasBeenSet(false)
{
}

SitePlan::SitePlan(JsonView jsonValue) : 
    m_optionsHasBeenSet(false),
    m_resourceDefinitionsHasBeenSet(false)
{
  *this = jsonValue;
}

SitePlan& SitePlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(optionsJsonList[optionsIndex].AsObject());
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceDefinitions"))
  {
    Aws::Utils::Array<JsonView> resourceDefinitionsJsonList = jsonValue.GetArray("resourceDefinitions");
    for(unsigned resourceDefinitionsIndex = 0; resourceDefinitionsIndex < resourceDefinitionsJsonList.GetLength(); ++resourceDefinitionsIndex)
    {
      m_resourceDefinitions.push_back(resourceDefinitionsJsonList[resourceDefinitionsIndex].AsObject());
    }
    m_resourceDefinitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SitePlan::Jsonize() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
   }
   payload.WithArray("options", std::move(optionsJsonList));

  }

  if(m_resourceDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceDefinitionsJsonList(m_resourceDefinitions.size());
   for(unsigned resourceDefinitionsIndex = 0; resourceDefinitionsIndex < resourceDefinitionsJsonList.GetLength(); ++resourceDefinitionsIndex)
   {
     resourceDefinitionsJsonList[resourceDefinitionsIndex].AsObject(m_resourceDefinitions[resourceDefinitionsIndex].Jsonize());
   }
   payload.WithArray("resourceDefinitions", std::move(resourceDefinitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

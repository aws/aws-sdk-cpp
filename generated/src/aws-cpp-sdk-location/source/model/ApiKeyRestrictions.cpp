/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ApiKeyRestrictions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

ApiKeyRestrictions::ApiKeyRestrictions() : 
    m_allowActionsHasBeenSet(false),
    m_allowReferersHasBeenSet(false),
    m_allowResourcesHasBeenSet(false)
{
}

ApiKeyRestrictions::ApiKeyRestrictions(JsonView jsonValue) : 
    m_allowActionsHasBeenSet(false),
    m_allowReferersHasBeenSet(false),
    m_allowResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ApiKeyRestrictions& ApiKeyRestrictions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowActions"))
  {
    Aws::Utils::Array<JsonView> allowActionsJsonList = jsonValue.GetArray("AllowActions");
    for(unsigned allowActionsIndex = 0; allowActionsIndex < allowActionsJsonList.GetLength(); ++allowActionsIndex)
    {
      m_allowActions.push_back(allowActionsJsonList[allowActionsIndex].AsString());
    }
    m_allowActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowReferers"))
  {
    Aws::Utils::Array<JsonView> allowReferersJsonList = jsonValue.GetArray("AllowReferers");
    for(unsigned allowReferersIndex = 0; allowReferersIndex < allowReferersJsonList.GetLength(); ++allowReferersIndex)
    {
      m_allowReferers.push_back(allowReferersJsonList[allowReferersIndex].AsString());
    }
    m_allowReferersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowResources"))
  {
    Aws::Utils::Array<JsonView> allowResourcesJsonList = jsonValue.GetArray("AllowResources");
    for(unsigned allowResourcesIndex = 0; allowResourcesIndex < allowResourcesJsonList.GetLength(); ++allowResourcesIndex)
    {
      m_allowResources.push_back(allowResourcesJsonList[allowResourcesIndex].AsString());
    }
    m_allowResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiKeyRestrictions::Jsonize() const
{
  JsonValue payload;

  if(m_allowActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowActionsJsonList(m_allowActions.size());
   for(unsigned allowActionsIndex = 0; allowActionsIndex < allowActionsJsonList.GetLength(); ++allowActionsIndex)
   {
     allowActionsJsonList[allowActionsIndex].AsString(m_allowActions[allowActionsIndex]);
   }
   payload.WithArray("AllowActions", std::move(allowActionsJsonList));

  }

  if(m_allowReferersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowReferersJsonList(m_allowReferers.size());
   for(unsigned allowReferersIndex = 0; allowReferersIndex < allowReferersJsonList.GetLength(); ++allowReferersIndex)
   {
     allowReferersJsonList[allowReferersIndex].AsString(m_allowReferers[allowReferersIndex]);
   }
   payload.WithArray("AllowReferers", std::move(allowReferersJsonList));

  }

  if(m_allowResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowResourcesJsonList(m_allowResources.size());
   for(unsigned allowResourcesIndex = 0; allowResourcesIndex < allowResourcesJsonList.GetLength(); ++allowResourcesIndex)
   {
     allowResourcesJsonList[allowResourcesIndex].AsString(m_allowResources[allowResourcesIndex]);
   }
   payload.WithArray("AllowResources", std::move(allowResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws

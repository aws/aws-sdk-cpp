/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/Location.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

Location::Location() : 
    m_locationCodeHasBeenSet(false),
    m_locationNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availablePortSpeedsHasBeenSet(false),
    m_availableProvidersHasBeenSet(false),
    m_availableMacSecPortSpeedsHasBeenSet(false)
{
}

Location::Location(JsonView jsonValue) : 
    m_locationCodeHasBeenSet(false),
    m_locationNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_availablePortSpeedsHasBeenSet(false),
    m_availableProvidersHasBeenSet(false),
    m_availableMacSecPortSpeedsHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("locationCode"))
  {
    m_locationCode = jsonValue.GetString("locationCode");

    m_locationCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locationName"))
  {
    m_locationName = jsonValue.GetString("locationName");

    m_locationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availablePortSpeeds"))
  {
    Aws::Utils::Array<JsonView> availablePortSpeedsJsonList = jsonValue.GetArray("availablePortSpeeds");
    for(unsigned availablePortSpeedsIndex = 0; availablePortSpeedsIndex < availablePortSpeedsJsonList.GetLength(); ++availablePortSpeedsIndex)
    {
      m_availablePortSpeeds.push_back(availablePortSpeedsJsonList[availablePortSpeedsIndex].AsString());
    }
    m_availablePortSpeedsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availableProviders"))
  {
    Aws::Utils::Array<JsonView> availableProvidersJsonList = jsonValue.GetArray("availableProviders");
    for(unsigned availableProvidersIndex = 0; availableProvidersIndex < availableProvidersJsonList.GetLength(); ++availableProvidersIndex)
    {
      m_availableProviders.push_back(availableProvidersJsonList[availableProvidersIndex].AsString());
    }
    m_availableProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availableMacSecPortSpeeds"))
  {
    Aws::Utils::Array<JsonView> availableMacSecPortSpeedsJsonList = jsonValue.GetArray("availableMacSecPortSpeeds");
    for(unsigned availableMacSecPortSpeedsIndex = 0; availableMacSecPortSpeedsIndex < availableMacSecPortSpeedsJsonList.GetLength(); ++availableMacSecPortSpeedsIndex)
    {
      m_availableMacSecPortSpeeds.push_back(availableMacSecPortSpeedsJsonList[availableMacSecPortSpeedsIndex].AsString());
    }
    m_availableMacSecPortSpeedsHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_locationCodeHasBeenSet)
  {
   payload.WithString("locationCode", m_locationCode);

  }

  if(m_locationNameHasBeenSet)
  {
   payload.WithString("locationName", m_locationName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_availablePortSpeedsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availablePortSpeedsJsonList(m_availablePortSpeeds.size());
   for(unsigned availablePortSpeedsIndex = 0; availablePortSpeedsIndex < availablePortSpeedsJsonList.GetLength(); ++availablePortSpeedsIndex)
   {
     availablePortSpeedsJsonList[availablePortSpeedsIndex].AsString(m_availablePortSpeeds[availablePortSpeedsIndex]);
   }
   payload.WithArray("availablePortSpeeds", std::move(availablePortSpeedsJsonList));

  }

  if(m_availableProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availableProvidersJsonList(m_availableProviders.size());
   for(unsigned availableProvidersIndex = 0; availableProvidersIndex < availableProvidersJsonList.GetLength(); ++availableProvidersIndex)
   {
     availableProvidersJsonList[availableProvidersIndex].AsString(m_availableProviders[availableProvidersIndex]);
   }
   payload.WithArray("availableProviders", std::move(availableProvidersJsonList));

  }

  if(m_availableMacSecPortSpeedsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availableMacSecPortSpeedsJsonList(m_availableMacSecPortSpeeds.size());
   for(unsigned availableMacSecPortSpeedsIndex = 0; availableMacSecPortSpeedsIndex < availableMacSecPortSpeedsJsonList.GetLength(); ++availableMacSecPortSpeedsIndex)
   {
     availableMacSecPortSpeedsJsonList[availableMacSecPortSpeedsIndex].AsString(m_availableMacSecPortSpeeds[availableMacSecPortSpeedsIndex]);
   }
   payload.WithArray("availableMacSecPortSpeeds", std::move(availableMacSecPortSpeedsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws

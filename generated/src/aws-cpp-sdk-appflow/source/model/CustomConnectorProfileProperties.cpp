/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CustomConnectorProfileProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

CustomConnectorProfileProperties::CustomConnectorProfileProperties() : 
    m_profilePropertiesHasBeenSet(false),
    m_oAuth2PropertiesHasBeenSet(false)
{
}

CustomConnectorProfileProperties::CustomConnectorProfileProperties(JsonView jsonValue) : 
    m_profilePropertiesHasBeenSet(false),
    m_oAuth2PropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

CustomConnectorProfileProperties& CustomConnectorProfileProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profileProperties"))
  {
    Aws::Map<Aws::String, JsonView> profilePropertiesJsonMap = jsonValue.GetObject("profileProperties").GetAllObjects();
    for(auto& profilePropertiesItem : profilePropertiesJsonMap)
    {
      m_profileProperties[profilePropertiesItem.first] = profilePropertiesItem.second.AsString();
    }
    m_profilePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuth2Properties"))
  {
    m_oAuth2Properties = jsonValue.GetObject("oAuth2Properties");

    m_oAuth2PropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  if(m_profilePropertiesHasBeenSet)
  {
   JsonValue profilePropertiesJsonMap;
   for(auto& profilePropertiesItem : m_profileProperties)
   {
     profilePropertiesJsonMap.WithString(profilePropertiesItem.first, profilePropertiesItem.second);
   }
   payload.WithObject("profileProperties", std::move(profilePropertiesJsonMap));

  }

  if(m_oAuth2PropertiesHasBeenSet)
  {
   payload.WithObject("oAuth2Properties", m_oAuth2Properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws

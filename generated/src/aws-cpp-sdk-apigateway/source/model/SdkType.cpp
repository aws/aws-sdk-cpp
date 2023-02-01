/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/SdkType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

SdkType::SdkType() : 
    m_idHasBeenSet(false),
    m_friendlyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configurationPropertiesHasBeenSet(false)
{
}

SdkType::SdkType(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_friendlyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configurationPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

SdkType& SdkType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("friendlyName"))
  {
    m_friendlyName = jsonValue.GetString("friendlyName");

    m_friendlyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationProperties"))
  {
    Aws::Utils::Array<JsonView> configurationPropertiesJsonList = jsonValue.GetArray("configurationProperties");
    for(unsigned configurationPropertiesIndex = 0; configurationPropertiesIndex < configurationPropertiesJsonList.GetLength(); ++configurationPropertiesIndex)
    {
      m_configurationProperties.push_back(configurationPropertiesJsonList[configurationPropertiesIndex].AsObject());
    }
    m_configurationPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue SdkType::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_friendlyNameHasBeenSet)
  {
   payload.WithString("friendlyName", m_friendlyName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_configurationPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationPropertiesJsonList(m_configurationProperties.size());
   for(unsigned configurationPropertiesIndex = 0; configurationPropertiesIndex < configurationPropertiesJsonList.GetLength(); ++configurationPropertiesIndex)
   {
     configurationPropertiesJsonList[configurationPropertiesIndex].AsObject(m_configurationProperties[configurationPropertiesIndex].Jsonize());
   }
   payload.WithArray("configurationProperties", std::move(configurationPropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws

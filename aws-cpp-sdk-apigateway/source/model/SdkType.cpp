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

SdkType::SdkType(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_friendlyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configurationPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

SdkType& SdkType::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> configurationPropertiesJsonList = jsonValue.GetArray("configurationProperties");
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
   Array<JsonValue> configurationPropertiesJsonList(m_configurationProperties.size());
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
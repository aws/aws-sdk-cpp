/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/DeviceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

DeviceType::DeviceType() : 
    m_deviceKeyHasBeenSet(false),
    m_deviceAttributesHasBeenSet(false),
    m_deviceCreateDateHasBeenSet(false),
    m_deviceLastModifiedDateHasBeenSet(false),
    m_deviceLastAuthenticatedDateHasBeenSet(false)
{
}

DeviceType::DeviceType(const JsonValue& jsonValue) : 
    m_deviceKeyHasBeenSet(false),
    m_deviceAttributesHasBeenSet(false),
    m_deviceCreateDateHasBeenSet(false),
    m_deviceLastModifiedDateHasBeenSet(false),
    m_deviceLastAuthenticatedDateHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceType& DeviceType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DeviceKey"))
  {
    m_deviceKey = jsonValue.GetString("DeviceKey");

    m_deviceKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceAttributes"))
  {
    Array<JsonValue> deviceAttributesJsonList = jsonValue.GetArray("DeviceAttributes");
    for(unsigned deviceAttributesIndex = 0; deviceAttributesIndex < deviceAttributesJsonList.GetLength(); ++deviceAttributesIndex)
    {
      m_deviceAttributes.push_back(deviceAttributesJsonList[deviceAttributesIndex].AsObject());
    }
    m_deviceAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceCreateDate"))
  {
    m_deviceCreateDate = jsonValue.GetDouble("DeviceCreateDate");

    m_deviceCreateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceLastModifiedDate"))
  {
    m_deviceLastModifiedDate = jsonValue.GetDouble("DeviceLastModifiedDate");

    m_deviceLastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceLastAuthenticatedDate"))
  {
    m_deviceLastAuthenticatedDate = jsonValue.GetDouble("DeviceLastAuthenticatedDate");

    m_deviceLastAuthenticatedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceType::Jsonize() const
{
  JsonValue payload;

  if(m_deviceKeyHasBeenSet)
  {
   payload.WithString("DeviceKey", m_deviceKey);

  }

  if(m_deviceAttributesHasBeenSet)
  {
   Array<JsonValue> deviceAttributesJsonList(m_deviceAttributes.size());
   for(unsigned deviceAttributesIndex = 0; deviceAttributesIndex < deviceAttributesJsonList.GetLength(); ++deviceAttributesIndex)
   {
     deviceAttributesJsonList[deviceAttributesIndex].AsObject(m_deviceAttributes[deviceAttributesIndex].Jsonize());
   }
   payload.WithArray("DeviceAttributes", std::move(deviceAttributesJsonList));

  }

  if(m_deviceCreateDateHasBeenSet)
  {
   payload.WithDouble("DeviceCreateDate", m_deviceCreateDate.SecondsWithMSPrecision());
  }

  if(m_deviceLastModifiedDateHasBeenSet)
  {
   payload.WithDouble("DeviceLastModifiedDate", m_deviceLastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_deviceLastAuthenticatedDateHasBeenSet)
  {
   payload.WithDouble("DeviceLastAuthenticatedDate", m_deviceLastAuthenticatedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
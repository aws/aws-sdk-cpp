/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DeviceType::DeviceType(JsonView jsonValue) : 
    m_deviceKeyHasBeenSet(false),
    m_deviceAttributesHasBeenSet(false),
    m_deviceCreateDateHasBeenSet(false),
    m_deviceLastModifiedDateHasBeenSet(false),
    m_deviceLastAuthenticatedDateHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceType& DeviceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceKey"))
  {
    m_deviceKey = jsonValue.GetString("DeviceKey");

    m_deviceKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceAttributes"))
  {
    Aws::Utils::Array<JsonView> deviceAttributesJsonList = jsonValue.GetArray("DeviceAttributes");
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
   Aws::Utils::Array<JsonValue> deviceAttributesJsonList(m_deviceAttributes.size());
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

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
#include <aws/cognito-idp/model/NewDeviceMetadataType.h>
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

NewDeviceMetadataType::NewDeviceMetadataType() : 
    m_deviceKeyHasBeenSet(false),
    m_deviceGroupKeyHasBeenSet(false)
{
}

NewDeviceMetadataType::NewDeviceMetadataType(const JsonValue& jsonValue) : 
    m_deviceKeyHasBeenSet(false),
    m_deviceGroupKeyHasBeenSet(false)
{
  *this = jsonValue;
}

NewDeviceMetadataType& NewDeviceMetadataType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DeviceKey"))
  {
    m_deviceKey = jsonValue.GetString("DeviceKey");

    m_deviceKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceGroupKey"))
  {
    m_deviceGroupKey = jsonValue.GetString("DeviceGroupKey");

    m_deviceGroupKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue NewDeviceMetadataType::Jsonize() const
{
  JsonValue payload;

  if(m_deviceKeyHasBeenSet)
  {
   payload.WithString("DeviceKey", m_deviceKey);

  }

  if(m_deviceGroupKeyHasBeenSet)
  {
   payload.WithString("DeviceGroupKey", m_deviceGroupKey);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
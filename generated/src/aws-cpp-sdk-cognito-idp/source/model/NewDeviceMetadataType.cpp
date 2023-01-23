/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

NewDeviceMetadataType::NewDeviceMetadataType(JsonView jsonValue) : 
    m_deviceKeyHasBeenSet(false),
    m_deviceGroupKeyHasBeenSet(false)
{
  *this = jsonValue;
}

NewDeviceMetadataType& NewDeviceMetadataType::operator =(JsonView jsonValue)
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

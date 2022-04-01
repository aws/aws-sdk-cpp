/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionInferenceAcceleratorsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionInferenceAcceleratorsDetails::AwsEcsTaskDefinitionInferenceAcceleratorsDetails() : 
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

AwsEcsTaskDefinitionInferenceAcceleratorsDetails::AwsEcsTaskDefinitionInferenceAcceleratorsDetails(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionInferenceAcceleratorsDetails& AwsEcsTaskDefinitionInferenceAcceleratorsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceType"))
  {
    m_deviceType = jsonValue.GetString("DeviceType");

    m_deviceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionInferenceAcceleratorsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("DeviceType", m_deviceType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

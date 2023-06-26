/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/DeviceUnderTest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

DeviceUnderTest::DeviceUnderTest() : 
    m_thingArnHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_deviceRoleArnHasBeenSet(false)
{
}

DeviceUnderTest::DeviceUnderTest(JsonView jsonValue) : 
    m_thingArnHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_deviceRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceUnderTest& DeviceUnderTest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingArn"))
  {
    m_thingArn = jsonValue.GetString("thingArn");

    m_thingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceRoleArn"))
  {
    m_deviceRoleArn = jsonValue.GetString("deviceRoleArn");

    m_deviceRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceUnderTest::Jsonize() const
{
  JsonValue payload;

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_deviceRoleArnHasBeenSet)
  {
   payload.WithString("deviceRoleArn", m_deviceRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws

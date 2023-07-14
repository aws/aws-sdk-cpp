/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/SuiteDefinitionConfiguration.h>
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

SuiteDefinitionConfiguration::SuiteDefinitionConfiguration() : 
    m_suiteDefinitionNameHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_intendedForQualification(false),
    m_intendedForQualificationHasBeenSet(false),
    m_rootGroupHasBeenSet(false),
    m_devicePermissionRoleArnHasBeenSet(false)
{
}

SuiteDefinitionConfiguration::SuiteDefinitionConfiguration(JsonView jsonValue) : 
    m_suiteDefinitionNameHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_intendedForQualification(false),
    m_intendedForQualificationHasBeenSet(false),
    m_rootGroupHasBeenSet(false),
    m_devicePermissionRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

SuiteDefinitionConfiguration& SuiteDefinitionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("suiteDefinitionName"))
  {
    m_suiteDefinitionName = jsonValue.GetString("suiteDefinitionName");

    m_suiteDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("devices"))
  {
    Array<JsonView> devicesJsonList = jsonValue.GetArray("devices");
    for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
    {
      m_devices.push_back(devicesJsonList[devicesIndex].AsObject());
    }
    m_devicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intendedForQualification"))
  {
    m_intendedForQualification = jsonValue.GetBool("intendedForQualification");

    m_intendedForQualificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rootGroup"))
  {
    m_rootGroup = jsonValue.GetString("rootGroup");

    m_rootGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("devicePermissionRoleArn"))
  {
    m_devicePermissionRoleArn = jsonValue.GetString("devicePermissionRoleArn");

    m_devicePermissionRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SuiteDefinitionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_suiteDefinitionNameHasBeenSet)
  {
   payload.WithString("suiteDefinitionName", m_suiteDefinitionName);

  }

  if(m_devicesHasBeenSet)
  {
   Array<JsonValue> devicesJsonList(m_devices.size());
   for(unsigned devicesIndex = 0; devicesIndex < devicesJsonList.GetLength(); ++devicesIndex)
   {
     devicesJsonList[devicesIndex].AsObject(m_devices[devicesIndex].Jsonize());
   }
   payload.WithArray("devices", std::move(devicesJsonList));

  }

  if(m_intendedForQualificationHasBeenSet)
  {
   payload.WithBool("intendedForQualification", m_intendedForQualification);

  }

  if(m_rootGroupHasBeenSet)
  {
   payload.WithString("rootGroup", m_rootGroup);

  }

  if(m_devicePermissionRoleArnHasBeenSet)
  {
   payload.WithString("devicePermissionRoleArn", m_devicePermissionRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws

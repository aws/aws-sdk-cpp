/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/SuiteDefinitionInformation.h>
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

SuiteDefinitionInformation::SuiteDefinitionInformation() : 
    m_suiteDefinitionIdHasBeenSet(false),
    m_suiteDefinitionNameHasBeenSet(false),
    m_defaultDevicesHasBeenSet(false),
    m_intendedForQualification(false),
    m_intendedForQualificationHasBeenSet(false),
    m_isLongDurationTest(false),
    m_isLongDurationTestHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

SuiteDefinitionInformation::SuiteDefinitionInformation(JsonView jsonValue) : 
    m_suiteDefinitionIdHasBeenSet(false),
    m_suiteDefinitionNameHasBeenSet(false),
    m_defaultDevicesHasBeenSet(false),
    m_intendedForQualification(false),
    m_intendedForQualificationHasBeenSet(false),
    m_isLongDurationTest(false),
    m_isLongDurationTestHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

SuiteDefinitionInformation& SuiteDefinitionInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("suiteDefinitionId"))
  {
    m_suiteDefinitionId = jsonValue.GetString("suiteDefinitionId");

    m_suiteDefinitionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suiteDefinitionName"))
  {
    m_suiteDefinitionName = jsonValue.GetString("suiteDefinitionName");

    m_suiteDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultDevices"))
  {
    Aws::Utils::Array<JsonView> defaultDevicesJsonList = jsonValue.GetArray("defaultDevices");
    for(unsigned defaultDevicesIndex = 0; defaultDevicesIndex < defaultDevicesJsonList.GetLength(); ++defaultDevicesIndex)
    {
      m_defaultDevices.push_back(defaultDevicesJsonList[defaultDevicesIndex].AsObject());
    }
    m_defaultDevicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intendedForQualification"))
  {
    m_intendedForQualification = jsonValue.GetBool("intendedForQualification");

    m_intendedForQualificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isLongDurationTest"))
  {
    m_isLongDurationTest = jsonValue.GetBool("isLongDurationTest");

    m_isLongDurationTestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("protocol"));

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SuiteDefinitionInformation::Jsonize() const
{
  JsonValue payload;

  if(m_suiteDefinitionIdHasBeenSet)
  {
   payload.WithString("suiteDefinitionId", m_suiteDefinitionId);

  }

  if(m_suiteDefinitionNameHasBeenSet)
  {
   payload.WithString("suiteDefinitionName", m_suiteDefinitionName);

  }

  if(m_defaultDevicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultDevicesJsonList(m_defaultDevices.size());
   for(unsigned defaultDevicesIndex = 0; defaultDevicesIndex < defaultDevicesJsonList.GetLength(); ++defaultDevicesIndex)
   {
     defaultDevicesJsonList[defaultDevicesIndex].AsObject(m_defaultDevices[defaultDevicesIndex].Jsonize());
   }
   payload.WithArray("defaultDevices", std::move(defaultDevicesJsonList));

  }

  if(m_intendedForQualificationHasBeenSet)
  {
   payload.WithBool("intendedForQualification", m_intendedForQualification);

  }

  if(m_isLongDurationTestHasBeenSet)
  {
   payload.WithBool("isLongDurationTest", m_isLongDurationTest);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws

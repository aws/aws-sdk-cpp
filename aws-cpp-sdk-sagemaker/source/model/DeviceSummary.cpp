/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DeviceSummary::DeviceSummary() : 
    m_deviceNameHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_iotThingNameHasBeenSet(false),
    m_registrationTimeHasBeenSet(false),
    m_latestHeartbeatHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_agentVersionHasBeenSet(false)
{
}

DeviceSummary::DeviceSummary(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_iotThingNameHasBeenSet(false),
    m_registrationTimeHasBeenSet(false),
    m_latestHeartbeatHasBeenSet(false),
    m_modelsHasBeenSet(false),
    m_agentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSummary& DeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceArn"))
  {
    m_deviceArn = jsonValue.GetString("DeviceArn");

    m_deviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");

    m_deviceFleetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IotThingName"))
  {
    m_iotThingName = jsonValue.GetString("IotThingName");

    m_iotThingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationTime"))
  {
    m_registrationTime = jsonValue.GetDouble("RegistrationTime");

    m_registrationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestHeartbeat"))
  {
    m_latestHeartbeat = jsonValue.GetDouble("LatestHeartbeat");

    m_latestHeartbeatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("Models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
    m_modelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");

    m_agentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("DeviceArn", m_deviceArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_iotThingNameHasBeenSet)
  {
   payload.WithString("IotThingName", m_iotThingName);

  }

  if(m_registrationTimeHasBeenSet)
  {
   payload.WithDouble("RegistrationTime", m_registrationTime.SecondsWithMSPrecision());
  }

  if(m_latestHeartbeatHasBeenSet)
  {
   payload.WithDouble("LatestHeartbeat", m_latestHeartbeat.SecondsWithMSPrecision());
  }

  if(m_modelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelsJsonList(m_models.size());
   for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
   {
     modelsJsonList[modelsIndex].AsObject(m_models[modelsIndex].Jsonize());
   }
   payload.WithArray("Models", std::move(modelsJsonList));

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DeviceInstance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

DeviceInstance::DeviceInstance() : 
    m_arnHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_status(InstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_udidHasBeenSet(false),
    m_instanceProfileHasBeenSet(false)
{
}

DeviceInstance::DeviceInstance(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_deviceArnHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_status(InstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_udidHasBeenSet(false),
    m_instanceProfileHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceInstance& DeviceInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceArn"))
  {
    m_deviceArn = jsonValue.GetString("deviceArn");

    m_deviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = InstanceStatusMapper::GetInstanceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("udid"))
  {
    m_udid = jsonValue.GetString("udid");

    m_udidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceProfile"))
  {
    m_instanceProfile = jsonValue.GetObject("instanceProfile");

    m_instanceProfileHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceInstance::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_deviceArnHasBeenSet)
  {
   payload.WithString("deviceArn", m_deviceArn);

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("labels", std::move(labelsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", InstanceStatusMapper::GetNameForInstanceStatus(m_status));
  }

  if(m_udidHasBeenSet)
  {
   payload.WithString("udid", m_udid);

  }

  if(m_instanceProfileHasBeenSet)
  {
   payload.WithObject("instanceProfile", m_instanceProfile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws

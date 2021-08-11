/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/EbsInstanceBlockDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

EbsInstanceBlockDevice::EbsInstanceBlockDevice() : 
    m_attachTimeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_status(AttachmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
}

EbsInstanceBlockDevice::EbsInstanceBlockDevice(JsonView jsonValue) : 
    m_attachTimeHasBeenSet(false),
    m_deleteOnTermination(false),
    m_deleteOnTerminationHasBeenSet(false),
    m_status(AttachmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_volumeIdHasBeenSet(false)
{
  *this = jsonValue;
}

EbsInstanceBlockDevice& EbsInstanceBlockDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachTime"))
  {
    m_attachTime = jsonValue.GetDouble("attachTime");

    m_attachTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deleteOnTermination"))
  {
    m_deleteOnTermination = jsonValue.GetBool("deleteOnTermination");

    m_deleteOnTerminationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AttachmentStatusMapper::GetAttachmentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeId"))
  {
    m_volumeId = jsonValue.GetString("volumeId");

    m_volumeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsInstanceBlockDevice::Jsonize() const
{
  JsonValue payload;

  if(m_attachTimeHasBeenSet)
  {
   payload.WithDouble("attachTime", m_attachTime.SecondsWithMSPrecision());
  }

  if(m_deleteOnTerminationHasBeenSet)
  {
   payload.WithBool("deleteOnTermination", m_deleteOnTermination);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AttachmentStatusMapper::GetNameForAttachmentStatus(m_status));
  }

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("volumeId", m_volumeId);

  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws

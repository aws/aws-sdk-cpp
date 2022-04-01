/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDisk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

RecoveryInstanceDisk::RecoveryInstanceDisk() : 
    m_bytes(0),
    m_bytesHasBeenSet(false),
    m_ebsVolumeIDHasBeenSet(false),
    m_internalDeviceNameHasBeenSet(false)
{
}

RecoveryInstanceDisk::RecoveryInstanceDisk(JsonView jsonValue) : 
    m_bytes(0),
    m_bytesHasBeenSet(false),
    m_ebsVolumeIDHasBeenSet(false),
    m_internalDeviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstanceDisk& RecoveryInstanceDisk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bytes"))
  {
    m_bytes = jsonValue.GetInt64("bytes");

    m_bytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebsVolumeID"))
  {
    m_ebsVolumeID = jsonValue.GetString("ebsVolumeID");

    m_ebsVolumeIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("internalDeviceName"))
  {
    m_internalDeviceName = jsonValue.GetString("internalDeviceName");

    m_internalDeviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstanceDisk::Jsonize() const
{
  JsonValue payload;

  if(m_bytesHasBeenSet)
  {
   payload.WithInt64("bytes", m_bytes);

  }

  if(m_ebsVolumeIDHasBeenSet)
  {
   payload.WithString("ebsVolumeID", m_ebsVolumeID);

  }

  if(m_internalDeviceNameHasBeenSet)
  {
   payload.WithString("internalDeviceName", m_internalDeviceName);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws

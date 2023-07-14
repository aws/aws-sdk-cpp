/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/VolumeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

VolumeInfo::VolumeInfo() : 
    m_volumeARNHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_volumeSizeInBytes(0),
    m_volumeSizeInBytesHasBeenSet(false),
    m_volumeAttachmentStatusHasBeenSet(false)
{
}

VolumeInfo::VolumeInfo(JsonView jsonValue) : 
    m_volumeARNHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_volumeSizeInBytes(0),
    m_volumeSizeInBytesHasBeenSet(false),
    m_volumeAttachmentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeInfo& VolumeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeARN"))
  {
    m_volumeARN = jsonValue.GetString("VolumeARN");

    m_volumeARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");

    m_volumeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInBytes"))
  {
    m_volumeSizeInBytes = jsonValue.GetInt64("VolumeSizeInBytes");

    m_volumeSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeAttachmentStatus"))
  {
    m_volumeAttachmentStatus = jsonValue.GetString("VolumeAttachmentStatus");

    m_volumeAttachmentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_volumeARNHasBeenSet)
  {
   payload.WithString("VolumeARN", m_volumeARN);

  }

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  if(m_volumeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("VolumeSizeInBytes", m_volumeSizeInBytes);

  }

  if(m_volumeAttachmentStatusHasBeenSet)
  {
   payload.WithString("VolumeAttachmentStatus", m_volumeAttachmentStatus);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

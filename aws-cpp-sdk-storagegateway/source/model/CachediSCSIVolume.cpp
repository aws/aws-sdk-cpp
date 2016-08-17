/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/storagegateway/model/CachediSCSIVolume.h>
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

CachediSCSIVolume::CachediSCSIVolume() : 
    m_volumeARNHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_volumeStatusHasBeenSet(false),
    m_volumeSizeInBytes(0),
    m_volumeSizeInBytesHasBeenSet(false),
    m_volumeProgress(0.0),
    m_volumeProgressHasBeenSet(false),
    m_sourceSnapshotIdHasBeenSet(false),
    m_volumeiSCSIAttributesHasBeenSet(false)
{
}

CachediSCSIVolume::CachediSCSIVolume(const JsonValue& jsonValue) : 
    m_volumeARNHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_volumeTypeHasBeenSet(false),
    m_volumeStatusHasBeenSet(false),
    m_volumeSizeInBytes(0),
    m_volumeSizeInBytesHasBeenSet(false),
    m_volumeProgress(0.0),
    m_volumeProgressHasBeenSet(false),
    m_sourceSnapshotIdHasBeenSet(false),
    m_volumeiSCSIAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

CachediSCSIVolume& CachediSCSIVolume::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");

    m_volumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeStatus"))
  {
    m_volumeStatus = jsonValue.GetString("VolumeStatus");

    m_volumeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInBytes"))
  {
    m_volumeSizeInBytes = jsonValue.GetInt64("VolumeSizeInBytes");

    m_volumeSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeProgress"))
  {
    m_volumeProgress = jsonValue.GetDouble("VolumeProgress");

    m_volumeProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceSnapshotId"))
  {
    m_sourceSnapshotId = jsonValue.GetString("SourceSnapshotId");

    m_sourceSnapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeiSCSIAttributes"))
  {
    m_volumeiSCSIAttributes = jsonValue.GetObject("VolumeiSCSIAttributes");

    m_volumeiSCSIAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue CachediSCSIVolume::Jsonize() const
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

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  if(m_volumeStatusHasBeenSet)
  {
   payload.WithString("VolumeStatus", m_volumeStatus);

  }

  if(m_volumeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("VolumeSizeInBytes", m_volumeSizeInBytes);

  }

  if(m_volumeProgressHasBeenSet)
  {
   payload.WithDouble("VolumeProgress", m_volumeProgress);

  }

  if(m_sourceSnapshotIdHasBeenSet)
  {
   payload.WithString("SourceSnapshotId", m_sourceSnapshotId);

  }

  if(m_volumeiSCSIAttributesHasBeenSet)
  {
   payload.WithObject("VolumeiSCSIAttributes", m_volumeiSCSIAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
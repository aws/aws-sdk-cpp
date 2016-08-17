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
#include <aws/storagegateway/model/VolumeRecoveryPointInfo.h>
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

VolumeRecoveryPointInfo::VolumeRecoveryPointInfo() : 
    m_volumeARNHasBeenSet(false),
    m_volumeSizeInBytes(0),
    m_volumeSizeInBytesHasBeenSet(false),
    m_volumeUsageInBytes(0),
    m_volumeUsageInBytesHasBeenSet(false),
    m_volumeRecoveryPointTimeHasBeenSet(false)
{
}

VolumeRecoveryPointInfo::VolumeRecoveryPointInfo(const JsonValue& jsonValue) : 
    m_volumeARNHasBeenSet(false),
    m_volumeSizeInBytes(0),
    m_volumeSizeInBytesHasBeenSet(false),
    m_volumeUsageInBytes(0),
    m_volumeUsageInBytesHasBeenSet(false),
    m_volumeRecoveryPointTimeHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeRecoveryPointInfo& VolumeRecoveryPointInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("VolumeARN"))
  {
    m_volumeARN = jsonValue.GetString("VolumeARN");

    m_volumeARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInBytes"))
  {
    m_volumeSizeInBytes = jsonValue.GetInt64("VolumeSizeInBytes");

    m_volumeSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeUsageInBytes"))
  {
    m_volumeUsageInBytes = jsonValue.GetInt64("VolumeUsageInBytes");

    m_volumeUsageInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeRecoveryPointTime"))
  {
    m_volumeRecoveryPointTime = jsonValue.GetString("VolumeRecoveryPointTime");

    m_volumeRecoveryPointTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeRecoveryPointInfo::Jsonize() const
{
  JsonValue payload;

  if(m_volumeARNHasBeenSet)
  {
   payload.WithString("VolumeARN", m_volumeARN);

  }

  if(m_volumeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("VolumeSizeInBytes", m_volumeSizeInBytes);

  }

  if(m_volumeUsageInBytesHasBeenSet)
  {
   payload.WithInt64("VolumeUsageInBytes", m_volumeUsageInBytes);

  }

  if(m_volumeRecoveryPointTimeHasBeenSet)
  {
   payload.WithString("VolumeRecoveryPointTime", m_volumeRecoveryPointTime);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
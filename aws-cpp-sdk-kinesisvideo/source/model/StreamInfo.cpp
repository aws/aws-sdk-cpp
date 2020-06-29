/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/StreamInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

StreamInfo::StreamInfo() : 
    m_deviceNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false)
{
}

StreamInfo::StreamInfo(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_streamARNHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false)
{
  *this = jsonValue;
}

StreamInfo& StreamInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceName"))
  {
    m_deviceName = jsonValue.GetString("DeviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamARN"))
  {
    m_streamARN = jsonValue.GetString("StreamARN");

    m_streamARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaType"))
  {
    m_mediaType = jsonValue.GetString("MediaType");

    m_mediaTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRetentionInHours"))
  {
    m_dataRetentionInHours = jsonValue.GetInteger("DataRetentionInHours");

    m_dataRetentionInHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamInfo::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("DeviceName", m_deviceName);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  if(m_streamARNHasBeenSet)
  {
   payload.WithString("StreamARN", m_streamARN);

  }

  if(m_mediaTypeHasBeenSet)
  {
   payload.WithString("MediaType", m_mediaType);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_dataRetentionInHoursHasBeenSet)
  {
   payload.WithInteger("DataRetentionInHours", m_dataRetentionInHours);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws

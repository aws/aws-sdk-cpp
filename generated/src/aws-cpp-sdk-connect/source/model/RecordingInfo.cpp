/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RecordingInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RecordingInfo::RecordingInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

RecordingInfo& RecordingInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("StorageType"));
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MediaStreamType"))
  {
    m_mediaStreamType = MediaStreamTypeMapper::GetMediaStreamTypeForName(jsonValue.GetString("MediaStreamType"));
    m_mediaStreamTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParticipantType"))
  {
    m_participantType = ParticipantTypeMapper::GetParticipantTypeForName(jsonValue.GetString("ParticipantType"));
    m_participantTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FragmentStartNumber"))
  {
    m_fragmentStartNumber = jsonValue.GetString("FragmentStartNumber");
    m_fragmentStartNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FragmentStopNumber"))
  {
    m_fragmentStopNumber = jsonValue.GetString("FragmentStopNumber");
    m_fragmentStopNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StopTimestamp"))
  {
    m_stopTimestamp = jsonValue.GetDouble("StopTimestamp");
    m_stopTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = RecordingStatusMapper::GetRecordingStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeletionReason"))
  {
    m_deletionReason = jsonValue.GetString("DeletionReason");
    m_deletionReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordingInfo::Jsonize() const
{
  JsonValue payload;

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", StorageTypeMapper::GetNameForStorageType(m_storageType));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_mediaStreamTypeHasBeenSet)
  {
   payload.WithString("MediaStreamType", MediaStreamTypeMapper::GetNameForMediaStreamType(m_mediaStreamType));
  }

  if(m_participantTypeHasBeenSet)
  {
   payload.WithString("ParticipantType", ParticipantTypeMapper::GetNameForParticipantType(m_participantType));
  }

  if(m_fragmentStartNumberHasBeenSet)
  {
   payload.WithString("FragmentStartNumber", m_fragmentStartNumber);

  }

  if(m_fragmentStopNumberHasBeenSet)
  {
   payload.WithString("FragmentStopNumber", m_fragmentStopNumber);

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_stopTimestampHasBeenSet)
  {
   payload.WithDouble("StopTimestamp", m_stopTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", RecordingStatusMapper::GetNameForRecordingStatus(m_status));
  }

  if(m_deletionReasonHasBeenSet)
  {
   payload.WithString("DeletionReason", m_deletionReason);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws

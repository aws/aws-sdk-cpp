/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/Archive.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

Archive::Archive() : 
    m_archiveNameHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_state(ArchiveState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_retentionDays(0),
    m_retentionDaysHasBeenSet(false),
    m_sizeBytes(0),
    m_sizeBytesHasBeenSet(false),
    m_eventCount(0),
    m_eventCountHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

Archive::Archive(JsonView jsonValue) : 
    m_archiveNameHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_state(ArchiveState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_retentionDays(0),
    m_retentionDaysHasBeenSet(false),
    m_sizeBytes(0),
    m_sizeBytesHasBeenSet(false),
    m_eventCount(0),
    m_eventCountHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Archive& Archive::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArchiveName"))
  {
    m_archiveName = jsonValue.GetString("ArchiveName");

    m_archiveNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");

    m_eventSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ArchiveStateMapper::GetArchiveStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionDays"))
  {
    m_retentionDays = jsonValue.GetInteger("RetentionDays");

    m_retentionDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeBytes"))
  {
    m_sizeBytes = jsonValue.GetInt64("SizeBytes");

    m_sizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventCount"))
  {
    m_eventCount = jsonValue.GetInt64("EventCount");

    m_eventCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Archive::Jsonize() const
{
  JsonValue payload;

  if(m_archiveNameHasBeenSet)
  {
   payload.WithString("ArchiveName", m_archiveName);

  }

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ArchiveStateMapper::GetNameForArchiveState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_retentionDaysHasBeenSet)
  {
   payload.WithInteger("RetentionDays", m_retentionDays);

  }

  if(m_sizeBytesHasBeenSet)
  {
   payload.WithInt64("SizeBytes", m_sizeBytes);

  }

  if(m_eventCountHasBeenSet)
  {
   payload.WithInt64("EventCount", m_eventCount);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws

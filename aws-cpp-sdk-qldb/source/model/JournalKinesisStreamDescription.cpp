/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/JournalKinesisStreamDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDB
{
namespace Model
{

JournalKinesisStreamDescription::JournalKinesisStreamDescription() : 
    m_ledgerNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_inclusiveStartTimeHasBeenSet(false),
    m_exclusiveEndTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(StreamStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_kinesisConfigurationHasBeenSet(false),
    m_errorCause(ErrorCause::NOT_SET),
    m_errorCauseHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

JournalKinesisStreamDescription::JournalKinesisStreamDescription(JsonView jsonValue) : 
    m_ledgerNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_inclusiveStartTimeHasBeenSet(false),
    m_exclusiveEndTimeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(StreamStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_kinesisConfigurationHasBeenSet(false),
    m_errorCause(ErrorCause::NOT_SET),
    m_errorCauseHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
  *this = jsonValue;
}

JournalKinesisStreamDescription& JournalKinesisStreamDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LedgerName"))
  {
    m_ledgerName = jsonValue.GetString("LedgerName");

    m_ledgerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusiveStartTime"))
  {
    m_inclusiveStartTime = jsonValue.GetDouble("InclusiveStartTime");

    m_inclusiveStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusiveEndTime"))
  {
    m_exclusiveEndTime = jsonValue.GetDouble("ExclusiveEndTime");

    m_exclusiveEndTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamId"))
  {
    m_streamId = jsonValue.GetString("StreamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamStatusMapper::GetStreamStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisConfiguration"))
  {
    m_kinesisConfiguration = jsonValue.GetObject("KinesisConfiguration");

    m_kinesisConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCause"))
  {
    m_errorCause = ErrorCauseMapper::GetErrorCauseForName(jsonValue.GetString("ErrorCause"));

    m_errorCauseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

    m_streamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue JournalKinesisStreamDescription::Jsonize() const
{
  JsonValue payload;

  if(m_ledgerNameHasBeenSet)
  {
   payload.WithString("LedgerName", m_ledgerName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_inclusiveStartTimeHasBeenSet)
  {
   payload.WithDouble("InclusiveStartTime", m_inclusiveStartTime.SecondsWithMSPrecision());
  }

  if(m_exclusiveEndTimeHasBeenSet)
  {
   payload.WithDouble("ExclusiveEndTime", m_exclusiveEndTime.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("StreamId", m_streamId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StreamStatusMapper::GetNameForStreamStatus(m_status));
  }

  if(m_kinesisConfigurationHasBeenSet)
  {
   payload.WithObject("KinesisConfiguration", m_kinesisConfiguration.Jsonize());

  }

  if(m_errorCauseHasBeenSet)
  {
   payload.WithString("ErrorCause", ErrorCauseMapper::GetNameForErrorCause(m_errorCause));
  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  return payload;
}

} // namespace Model
} // namespace QLDB
} // namespace Aws

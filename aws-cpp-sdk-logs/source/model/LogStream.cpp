/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LogStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

LogStream::LogStream() : 
    m_logStreamNameHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_firstEventTimestamp(0),
    m_firstEventTimestampHasBeenSet(false),
    m_lastEventTimestamp(0),
    m_lastEventTimestampHasBeenSet(false),
    m_lastIngestionTime(0),
    m_lastIngestionTimeHasBeenSet(false),
    m_uploadSequenceTokenHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

LogStream::LogStream(JsonView jsonValue) : 
    m_logStreamNameHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_firstEventTimestamp(0),
    m_firstEventTimestampHasBeenSet(false),
    m_lastEventTimestamp(0),
    m_lastEventTimestampHasBeenSet(false),
    m_lastIngestionTime(0),
    m_lastIngestionTimeHasBeenSet(false),
    m_uploadSequenceTokenHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

LogStream& LogStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logStreamName"))
  {
    m_logStreamName = jsonValue.GetString("logStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetInt64("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstEventTimestamp"))
  {
    m_firstEventTimestamp = jsonValue.GetInt64("firstEventTimestamp");

    m_firstEventTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastEventTimestamp"))
  {
    m_lastEventTimestamp = jsonValue.GetInt64("lastEventTimestamp");

    m_lastEventTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastIngestionTime"))
  {
    m_lastIngestionTime = jsonValue.GetInt64("lastIngestionTime");

    m_lastIngestionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uploadSequenceToken"))
  {
    m_uploadSequenceToken = jsonValue.GetString("uploadSequenceToken");

    m_uploadSequenceTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue LogStream::Jsonize() const
{
  JsonValue payload;

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("creationTime", m_creationTime);

  }

  if(m_firstEventTimestampHasBeenSet)
  {
   payload.WithInt64("firstEventTimestamp", m_firstEventTimestamp);

  }

  if(m_lastEventTimestampHasBeenSet)
  {
   payload.WithInt64("lastEventTimestamp", m_lastEventTimestamp);

  }

  if(m_lastIngestionTimeHasBeenSet)
  {
   payload.WithInt64("lastIngestionTime", m_lastIngestionTime);

  }

  if(m_uploadSequenceTokenHasBeenSet)
  {
   payload.WithString("uploadSequenceToken", m_uploadSequenceToken);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

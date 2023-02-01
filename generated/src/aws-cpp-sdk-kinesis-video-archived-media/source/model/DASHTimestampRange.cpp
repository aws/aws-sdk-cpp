/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/model/DASHTimestampRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideoArchivedMedia
{
namespace Model
{

DASHTimestampRange::DASHTimestampRange() : 
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
}

DASHTimestampRange::DASHTimestampRange(JsonView jsonValue) : 
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

DASHTimestampRange& DASHTimestampRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimestamp"))
  {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");

    m_endTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue DASHTimestampRange::Jsonize() const
{
  JsonValue payload;

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_endTimestampHasBeenSet)
  {
   payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws

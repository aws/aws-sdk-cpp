/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/TimeSpan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

TimeSpan::TimeSpan() : 
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

TimeSpan::TimeSpan(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSpan& TimeSpan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetString("Duration");

    m_durationHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSpan::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithString("Duration", m_duration);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

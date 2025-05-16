/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/TimestampSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{

TimestampSegment::TimestampSegment(JsonView jsonValue)
{
  *this = jsonValue;
}

TimestampSegment& TimestampSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTimeMillis"))
  {
    m_startTimeMillis = jsonValue.GetInt64("startTimeMillis");
    m_startTimeMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTimeMillis"))
  {
    m_endTimeMillis = jsonValue.GetInt64("endTimeMillis");
    m_endTimeMillisHasBeenSet = true;
  }
  return *this;
}

JsonValue TimestampSegment::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeMillisHasBeenSet)
  {
   payload.WithInt64("startTimeMillis", m_startTimeMillis);

  }

  if(m_endTimeMillisHasBeenSet)
  {
   payload.WithInt64("endTimeMillis", m_endTimeMillis);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws

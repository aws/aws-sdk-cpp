/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LiveTailSessionMetadata.h>
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

LiveTailSessionMetadata::LiveTailSessionMetadata() : 
    m_sampled(false),
    m_sampledHasBeenSet(false)
{
}

LiveTailSessionMetadata::LiveTailSessionMetadata(JsonView jsonValue) : 
    m_sampled(false),
    m_sampledHasBeenSet(false)
{
  *this = jsonValue;
}

LiveTailSessionMetadata& LiveTailSessionMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sampled"))
  {
    m_sampled = jsonValue.GetBool("sampled");

    m_sampledHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveTailSessionMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_sampledHasBeenSet)
  {
   payload.WithBool("sampled", m_sampled);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws

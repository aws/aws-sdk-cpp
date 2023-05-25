/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/TimeToLive.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

TimeToLive::TimeToLive() : 
    m_status(TimeToLiveStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

TimeToLive::TimeToLive(JsonView jsonValue) : 
    m_status(TimeToLiveStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

TimeToLive& TimeToLive::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = TimeToLiveStatusMapper::GetTimeToLiveStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeToLive::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TimeToLiveStatusMapper::GetNameForTimeToLiveStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws

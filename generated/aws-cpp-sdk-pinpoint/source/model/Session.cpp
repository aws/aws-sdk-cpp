/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Session.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

Session::Session() : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_idHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_stopTimestampHasBeenSet(false)
{
}

Session::Session(JsonView jsonValue) : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_idHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_stopTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetString("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopTimestamp"))
  {
    m_stopTimestamp = jsonValue.GetString("StopTimestamp");

    m_stopTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Session::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithString("StartTimestamp", m_startTimestamp);

  }

  if(m_stopTimestampHasBeenSet)
  {
   payload.WithString("StopTimestamp", m_stopTimestamp);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

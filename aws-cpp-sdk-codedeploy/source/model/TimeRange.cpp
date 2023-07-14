/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TimeRange::TimeRange() : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

TimeRange::TimeRange(JsonView jsonValue) : 
    m_startHasBeenSet(false),
    m_endHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRange& TimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetDouble("start");

    m_startHasBeenSet = true;
  }

  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetDouble("end");

    m_endHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithDouble("start", m_start.SecondsWithMSPrecision());
  }

  if(m_endHasBeenSet)
  {
   payload.WithDouble("end", m_end.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

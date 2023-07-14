/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/EventTimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

EventTimeRange::EventTimeRange() : 
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false)
{
}

EventTimeRange::EventTimeRange(JsonView jsonValue) : 
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EventTimeRange& EventTimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromTime"))
  {
    m_fromTime = jsonValue.GetDouble("FromTime");

    m_fromTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToTime"))
  {
    m_toTime = jsonValue.GetDouble("ToTime");

    m_toTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EventTimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromTimeHasBeenSet)
  {
   payload.WithDouble("FromTime", m_fromTime.SecondsWithMSPrecision());
  }

  if(m_toTimeHasBeenSet)
  {
   payload.WithDouble("ToTime", m_toTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

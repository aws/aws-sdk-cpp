/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ScheduleConfiguration::ScheduleConfiguration() : 
    m_scheduleExpressionHasBeenSet(false)
{
}

ScheduleConfiguration::ScheduleConfiguration(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleConfiguration& ScheduleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws

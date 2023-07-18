/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ScheduleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

ScheduleConfiguration::ScheduleConfiguration() : 
    m_firstExecutionFromHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false)
{
}

ScheduleConfiguration::ScheduleConfiguration(JsonView jsonValue) : 
    m_firstExecutionFromHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_scheduleExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleConfiguration& ScheduleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirstExecutionFrom"))
  {
    m_firstExecutionFrom = jsonValue.GetString("FirstExecutionFrom");

    m_firstExecutionFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Object"))
  {
    m_object = jsonValue.GetString("Object");

    m_objectHasBeenSet = true;
  }

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

  if(m_firstExecutionFromHasBeenSet)
  {
   payload.WithString("FirstExecutionFrom", m_firstExecutionFrom);

  }

  if(m_objectHasBeenSet)
  {
   payload.WithString("Object", m_object);

  }

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws

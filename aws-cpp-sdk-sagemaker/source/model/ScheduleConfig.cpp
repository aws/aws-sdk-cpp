/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ScheduleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ScheduleConfig::ScheduleConfig() : 
    m_scheduleExpressionHasBeenSet(false)
{
}

ScheduleConfig::ScheduleConfig(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleConfig& ScheduleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AbortCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AbortCriteria::AbortCriteria() : 
    m_failureType(JobExecutionFailureType::NOT_SET),
    m_failureTypeHasBeenSet(false),
    m_action(AbortAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_thresholdPercentage(0.0),
    m_thresholdPercentageHasBeenSet(false),
    m_minNumberOfExecutedThings(0),
    m_minNumberOfExecutedThingsHasBeenSet(false)
{
}

AbortCriteria::AbortCriteria(JsonView jsonValue) : 
    m_failureType(JobExecutionFailureType::NOT_SET),
    m_failureTypeHasBeenSet(false),
    m_action(AbortAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_thresholdPercentage(0.0),
    m_thresholdPercentageHasBeenSet(false),
    m_minNumberOfExecutedThings(0),
    m_minNumberOfExecutedThingsHasBeenSet(false)
{
  *this = jsonValue;
}

AbortCriteria& AbortCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureType"))
  {
    m_failureType = JobExecutionFailureTypeMapper::GetJobExecutionFailureTypeForName(jsonValue.GetString("failureType"));

    m_failureTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = AbortActionMapper::GetAbortActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thresholdPercentage"))
  {
    m_thresholdPercentage = jsonValue.GetDouble("thresholdPercentage");

    m_thresholdPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minNumberOfExecutedThings"))
  {
    m_minNumberOfExecutedThings = jsonValue.GetInteger("minNumberOfExecutedThings");

    m_minNumberOfExecutedThingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AbortCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_failureTypeHasBeenSet)
  {
   payload.WithString("failureType", JobExecutionFailureTypeMapper::GetNameForJobExecutionFailureType(m_failureType));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", AbortActionMapper::GetNameForAbortAction(m_action));
  }

  if(m_thresholdPercentageHasBeenSet)
  {
   payload.WithDouble("thresholdPercentage", m_thresholdPercentage);

  }

  if(m_minNumberOfExecutedThingsHasBeenSet)
  {
   payload.WithInteger("minNumberOfExecutedThings", m_minNumberOfExecutedThings);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws

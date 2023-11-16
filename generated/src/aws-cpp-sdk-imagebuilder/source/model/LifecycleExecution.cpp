/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecycleExecution::LifecycleExecution() : 
    m_lifecycleExecutionIdHasBeenSet(false),
    m_lifecyclePolicyArnHasBeenSet(false),
    m_resourcesImpactedSummaryHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

LifecycleExecution::LifecycleExecution(JsonView jsonValue) : 
    m_lifecycleExecutionIdHasBeenSet(false),
    m_lifecyclePolicyArnHasBeenSet(false),
    m_resourcesImpactedSummaryHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleExecution& LifecycleExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lifecycleExecutionId"))
  {
    m_lifecycleExecutionId = jsonValue.GetString("lifecycleExecutionId");

    m_lifecycleExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecyclePolicyArn"))
  {
    m_lifecyclePolicyArn = jsonValue.GetString("lifecyclePolicyArn");

    m_lifecyclePolicyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesImpactedSummary"))
  {
    m_resourcesImpactedSummary = jsonValue.GetObject("resourcesImpactedSummary");

    m_resourcesImpactedSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleExecution::Jsonize() const
{
  JsonValue payload;

  if(m_lifecycleExecutionIdHasBeenSet)
  {
   payload.WithString("lifecycleExecutionId", m_lifecycleExecutionId);

  }

  if(m_lifecyclePolicyArnHasBeenSet)
  {
   payload.WithString("lifecyclePolicyArn", m_lifecyclePolicyArn);

  }

  if(m_resourcesImpactedSummaryHasBeenSet)
  {
   payload.WithObject("resourcesImpactedSummary", m_resourcesImpactedSummary.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

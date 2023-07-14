/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AppflowIntegrationWorkflowMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

AppflowIntegrationWorkflowMetrics::AppflowIntegrationWorkflowMetrics() : 
    m_recordsProcessed(0),
    m_recordsProcessedHasBeenSet(false),
    m_stepsCompleted(0),
    m_stepsCompletedHasBeenSet(false),
    m_totalSteps(0),
    m_totalStepsHasBeenSet(false)
{
}

AppflowIntegrationWorkflowMetrics::AppflowIntegrationWorkflowMetrics(JsonView jsonValue) : 
    m_recordsProcessed(0),
    m_recordsProcessedHasBeenSet(false),
    m_stepsCompleted(0),
    m_stepsCompletedHasBeenSet(false),
    m_totalSteps(0),
    m_totalStepsHasBeenSet(false)
{
  *this = jsonValue;
}

AppflowIntegrationWorkflowMetrics& AppflowIntegrationWorkflowMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordsProcessed"))
  {
    m_recordsProcessed = jsonValue.GetInt64("RecordsProcessed");

    m_recordsProcessedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepsCompleted"))
  {
    m_stepsCompleted = jsonValue.GetInt64("StepsCompleted");

    m_stepsCompletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalSteps"))
  {
    m_totalSteps = jsonValue.GetInt64("TotalSteps");

    m_totalStepsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppflowIntegrationWorkflowMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_recordsProcessedHasBeenSet)
  {
   payload.WithInt64("RecordsProcessed", m_recordsProcessed);

  }

  if(m_stepsCompletedHasBeenSet)
  {
   payload.WithInt64("StepsCompleted", m_stepsCompleted);

  }

  if(m_totalStepsHasBeenSet)
  {
   payload.WithInt64("TotalSteps", m_totalSteps);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

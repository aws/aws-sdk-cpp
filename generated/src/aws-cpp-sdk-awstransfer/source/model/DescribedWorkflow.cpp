/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedWorkflow.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedWorkflow::DescribedWorkflow() : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_onExceptionStepsHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DescribedWorkflow::DescribedWorkflow(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_onExceptionStepsHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribedWorkflow& DescribedWorkflow::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnExceptionSteps"))
  {
    Aws::Utils::Array<JsonView> onExceptionStepsJsonList = jsonValue.GetArray("OnExceptionSteps");
    for(unsigned onExceptionStepsIndex = 0; onExceptionStepsIndex < onExceptionStepsJsonList.GetLength(); ++onExceptionStepsIndex)
    {
      m_onExceptionSteps.push_back(onExceptionStepsJsonList[onExceptionStepsIndex].AsObject());
    }
    m_onExceptionStepsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowId"))
  {
    m_workflowId = jsonValue.GetString("WorkflowId");

    m_workflowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribedWorkflow::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_onExceptionStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> onExceptionStepsJsonList(m_onExceptionSteps.size());
   for(unsigned onExceptionStepsIndex = 0; onExceptionStepsIndex < onExceptionStepsJsonList.GetLength(); ++onExceptionStepsIndex)
   {
     onExceptionStepsJsonList[onExceptionStepsIndex].AsObject(m_onExceptionSteps[onExceptionStepsIndex].Jsonize());
   }
   payload.WithArray("OnExceptionSteps", std::move(onExceptionStepsJsonList));

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("WorkflowId", m_workflowId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws

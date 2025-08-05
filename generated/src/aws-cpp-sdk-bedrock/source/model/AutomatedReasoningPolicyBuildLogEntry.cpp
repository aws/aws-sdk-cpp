/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildLogEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyBuildLogEntry::AutomatedReasoningPolicyBuildLogEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildLogEntry& AutomatedReasoningPolicyBuildLogEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("annotation"))
  {
    m_annotation = jsonValue.GetObject("annotation");
    m_annotationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = AutomatedReasoningPolicyAnnotationStatusMapper::GetAutomatedReasoningPolicyAnnotationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildSteps"))
  {
    Aws::Utils::Array<JsonView> buildStepsJsonList = jsonValue.GetArray("buildSteps");
    for(unsigned buildStepsIndex = 0; buildStepsIndex < buildStepsJsonList.GetLength(); ++buildStepsIndex)
    {
      m_buildSteps.push_back(buildStepsJsonList[buildStepsIndex].AsObject());
    }
    m_buildStepsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildLogEntry::Jsonize() const
{
  JsonValue payload;

  if(m_annotationHasBeenSet)
  {
   payload.WithObject("annotation", m_annotation.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AutomatedReasoningPolicyAnnotationStatusMapper::GetNameForAutomatedReasoningPolicyAnnotationStatus(m_status));
  }

  if(m_buildStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> buildStepsJsonList(m_buildSteps.size());
   for(unsigned buildStepsIndex = 0; buildStepsIndex < buildStepsJsonList.GetLength(); ++buildStepsIndex)
   {
     buildStepsJsonList[buildStepsIndex].AsObject(m_buildSteps[buildStepsIndex].Jsonize());
   }
   payload.WithArray("buildSteps", std::move(buildStepsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws

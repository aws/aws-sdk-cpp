/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowRepairContent.h>
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

AutomatedReasoningPolicyBuildWorkflowRepairContent::AutomatedReasoningPolicyBuildWorkflowRepairContent(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildWorkflowRepairContent& AutomatedReasoningPolicyBuildWorkflowRepairContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("annotations"))
  {
    Aws::Utils::Array<JsonView> annotationsJsonList = jsonValue.GetArray("annotations");
    for(unsigned annotationsIndex = 0; annotationsIndex < annotationsJsonList.GetLength(); ++annotationsIndex)
    {
      m_annotations.push_back(annotationsJsonList[annotationsIndex].AsObject());
    }
    m_annotationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildWorkflowRepairContent::Jsonize() const
{
  JsonValue payload;

  if(m_annotationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> annotationsJsonList(m_annotations.size());
   for(unsigned annotationsIndex = 0; annotationsIndex < annotationsJsonList.GetLength(); ++annotationsIndex)
   {
     annotationsJsonList[annotationsIndex].AsObject(m_annotations[annotationsIndex].Jsonize());
   }
   payload.WithArray("annotations", std::move(annotationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws

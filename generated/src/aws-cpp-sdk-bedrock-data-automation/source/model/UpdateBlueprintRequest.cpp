/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/UpdateBlueprintRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBlueprintRequest::UpdateBlueprintRequest() : 
    m_blueprintArnHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_blueprintStage(BlueprintStage::NOT_SET),
    m_blueprintStageHasBeenSet(false)
{
}

Aws::String UpdateBlueprintRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_blueprintStageHasBeenSet)
  {
   payload.WithString("blueprintStage", BlueprintStageMapper::GetNameForBlueprintStage(m_blueprintStage));
  }

  return payload.View().WriteReadable();
}





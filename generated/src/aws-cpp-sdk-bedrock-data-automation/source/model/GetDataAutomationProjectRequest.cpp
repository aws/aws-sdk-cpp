/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/GetDataAutomationProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDataAutomationProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectStageHasBeenSet)
  {
   payload.WithString("projectStage", DataAutomationProjectStageMapper::GetNameForDataAutomationProjectStage(m_projectStage));
  }

  return payload.View().WriteReadable();
}





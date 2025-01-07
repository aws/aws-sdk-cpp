/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/UpdateDataAutomationProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataAutomationProjectRequest::UpdateDataAutomationProjectRequest() : 
    m_projectArnHasBeenSet(false),
    m_projectStage(DataAutomationProjectStage::NOT_SET),
    m_projectStageHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_standardOutputConfigurationHasBeenSet(false),
    m_customOutputConfigurationHasBeenSet(false),
    m_overrideConfigurationHasBeenSet(false)
{
}

Aws::String UpdateDataAutomationProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectStageHasBeenSet)
  {
   payload.WithString("projectStage", DataAutomationProjectStageMapper::GetNameForDataAutomationProjectStage(m_projectStage));
  }

  if(m_projectDescriptionHasBeenSet)
  {
   payload.WithString("projectDescription", m_projectDescription);

  }

  if(m_standardOutputConfigurationHasBeenSet)
  {
   payload.WithObject("standardOutputConfiguration", m_standardOutputConfiguration.Jsonize());

  }

  if(m_customOutputConfigurationHasBeenSet)
  {
   payload.WithObject("customOutputConfiguration", m_customOutputConfiguration.Jsonize());

  }

  if(m_overrideConfigurationHasBeenSet)
  {
   payload.WithObject("overrideConfiguration", m_overrideConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}





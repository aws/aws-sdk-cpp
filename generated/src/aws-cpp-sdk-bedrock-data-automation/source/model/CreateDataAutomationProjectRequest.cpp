/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataAutomationProjectRequest::CreateDataAutomationProjectRequest() : 
    m_projectNameHasBeenSet(false),
    m_projectDescriptionHasBeenSet(false),
    m_projectStage(DataAutomationProjectStage::NOT_SET),
    m_projectStageHasBeenSet(false),
    m_standardOutputConfigurationHasBeenSet(false),
    m_customOutputConfigurationHasBeenSet(false),
    m_overrideConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_encryptionConfigurationHasBeenSet(false)
{
}

Aws::String CreateDataAutomationProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_projectDescriptionHasBeenSet)
  {
   payload.WithString("projectDescription", m_projectDescription);

  }

  if(m_projectStageHasBeenSet)
  {
   payload.WithString("projectStage", DataAutomationProjectStageMapper::GetNameForDataAutomationProjectStage(m_projectStage));
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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}





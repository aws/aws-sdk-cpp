/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/CreateBlueprintRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBlueprintRequest::CreateBlueprintRequest() : 
    m_blueprintNameHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_blueprintStage(BlueprintStage::NOT_SET),
    m_blueprintStageHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_encryptionConfigurationHasBeenSet(false)
{
}

Aws::String CreateBlueprintRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("blueprintName", m_blueprintName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  if(m_blueprintStageHasBeenSet)
  {
   payload.WithString("blueprintStage", BlueprintStageMapper::GetNameForBlueprintStage(m_blueprintStage));
  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

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





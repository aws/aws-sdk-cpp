/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UpdatePromptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePromptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_customerEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyArn", m_customerEncryptionKeyArn);

  }

  if(m_defaultVariantHasBeenSet)
  {
   payload.WithString("defaultVariant", m_defaultVariant);

  }

  if(m_variantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variantsJsonList(m_variants.size());
   for(unsigned variantsIndex = 0; variantsIndex < variantsJsonList.GetLength(); ++variantsIndex)
   {
     variantsJsonList[variantsIndex].AsObject(m_variants[variantsIndex].Jsonize());
   }
   payload.WithArray("variants", std::move(variantsJsonList));

  }

  return payload.View().WriteReadable();
}





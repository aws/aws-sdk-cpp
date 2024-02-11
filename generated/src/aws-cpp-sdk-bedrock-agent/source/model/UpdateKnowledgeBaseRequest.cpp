/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UpdateKnowledgeBaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateKnowledgeBaseRequest::UpdateKnowledgeBaseRequest() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_knowledgeBaseConfigurationHasBeenSet(false),
    m_storageConfigurationHasBeenSet(false)
{
}

Aws::String UpdateKnowledgeBaseRequest::SerializePayload() const
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_knowledgeBaseConfigurationHasBeenSet)
  {
   payload.WithObject("knowledgeBaseConfiguration", m_knowledgeBaseConfiguration.Jsonize());

  }

  if(m_storageConfigurationHasBeenSet)
  {
   payload.WithObject("storageConfiguration", m_storageConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}





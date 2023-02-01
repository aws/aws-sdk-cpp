/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateIntegrationAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIntegrationAssociationRequest::CreateIntegrationAssociationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_integrationType(IntegrationType::NOT_SET),
    m_integrationTypeHasBeenSet(false),
    m_integrationArnHasBeenSet(false),
    m_sourceApplicationUrlHasBeenSet(false),
    m_sourceApplicationNameHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateIntegrationAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationTypeHasBeenSet)
  {
   payload.WithString("IntegrationType", IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType));
  }

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("IntegrationArn", m_integrationArn);

  }

  if(m_sourceApplicationUrlHasBeenSet)
  {
   payload.WithString("SourceApplicationUrl", m_sourceApplicationUrl);

  }

  if(m_sourceApplicationNameHasBeenSet)
  {
   payload.WithString("SourceApplicationName", m_sourceApplicationName);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}





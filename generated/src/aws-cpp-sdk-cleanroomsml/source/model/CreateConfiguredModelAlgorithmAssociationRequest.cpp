/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CreateConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfiguredModelAlgorithmAssociationRequest::CreateConfiguredModelAlgorithmAssociationRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_configuredModelAlgorithmArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_privacyConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConfiguredModelAlgorithmAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configuredModelAlgorithmArnHasBeenSet)
  {
   payload.WithString("configuredModelAlgorithmArn", m_configuredModelAlgorithmArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_privacyConfigurationHasBeenSet)
  {
   payload.WithObject("privacyConfiguration", m_privacyConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}





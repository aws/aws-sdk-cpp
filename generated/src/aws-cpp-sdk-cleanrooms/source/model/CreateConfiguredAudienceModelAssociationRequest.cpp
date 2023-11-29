/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateConfiguredAudienceModelAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfiguredAudienceModelAssociationRequest::CreateConfiguredAudienceModelAssociationRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_configuredAudienceModelAssociationNameHasBeenSet(false),
    m_manageResourcePolicies(false),
    m_manageResourcePoliciesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Aws::String CreateConfiguredAudienceModelAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configuredAudienceModelArnHasBeenSet)
  {
   payload.WithString("configuredAudienceModelArn", m_configuredAudienceModelArn);

  }

  if(m_configuredAudienceModelAssociationNameHasBeenSet)
  {
   payload.WithString("configuredAudienceModelAssociationName", m_configuredAudienceModelAssociationName);

  }

  if(m_manageResourcePoliciesHasBeenSet)
  {
   payload.WithBool("manageResourcePolicies", m_manageResourcePolicies);

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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload.View().WriteReadable();
}





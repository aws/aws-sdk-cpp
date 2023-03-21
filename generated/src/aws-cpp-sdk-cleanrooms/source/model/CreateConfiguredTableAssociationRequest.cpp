/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CreateConfiguredTableAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfiguredTableAssociationRequest::CreateConfiguredTableAssociationRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_membershipIdentifierHasBeenSet(false),
    m_configuredTableIdentifierHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConfiguredTableAssociationRequest::SerializePayload() const
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

  if(m_configuredTableIdentifierHasBeenSet)
  {
   payload.WithString("configuredTableIdentifier", m_configuredTableIdentifier);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UpdateIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIndexRequest::UpdateIndexRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_documentMetadataConfigurationUpdatesHasBeenSet(false),
    m_capacityUnitsHasBeenSet(false),
    m_userTokenConfigurationsHasBeenSet(false),
    m_userContextPolicy(UserContextPolicy::NOT_SET),
    m_userContextPolicyHasBeenSet(false),
    m_userGroupResolutionConfigurationHasBeenSet(false)
{
}

Aws::String UpdateIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_documentMetadataConfigurationUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> documentMetadataConfigurationUpdatesJsonList(m_documentMetadataConfigurationUpdates.size());
   for(unsigned documentMetadataConfigurationUpdatesIndex = 0; documentMetadataConfigurationUpdatesIndex < documentMetadataConfigurationUpdatesJsonList.GetLength(); ++documentMetadataConfigurationUpdatesIndex)
   {
     documentMetadataConfigurationUpdatesJsonList[documentMetadataConfigurationUpdatesIndex].AsObject(m_documentMetadataConfigurationUpdates[documentMetadataConfigurationUpdatesIndex].Jsonize());
   }
   payload.WithArray("DocumentMetadataConfigurationUpdates", std::move(documentMetadataConfigurationUpdatesJsonList));

  }

  if(m_capacityUnitsHasBeenSet)
  {
   payload.WithObject("CapacityUnits", m_capacityUnits.Jsonize());

  }

  if(m_userTokenConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userTokenConfigurationsJsonList(m_userTokenConfigurations.size());
   for(unsigned userTokenConfigurationsIndex = 0; userTokenConfigurationsIndex < userTokenConfigurationsJsonList.GetLength(); ++userTokenConfigurationsIndex)
   {
     userTokenConfigurationsJsonList[userTokenConfigurationsIndex].AsObject(m_userTokenConfigurations[userTokenConfigurationsIndex].Jsonize());
   }
   payload.WithArray("UserTokenConfigurations", std::move(userTokenConfigurationsJsonList));

  }

  if(m_userContextPolicyHasBeenSet)
  {
   payload.WithString("UserContextPolicy", UserContextPolicyMapper::GetNameForUserContextPolicy(m_userContextPolicy));
  }

  if(m_userGroupResolutionConfigurationHasBeenSet)
  {
   payload.WithObject("UserGroupResolutionConfiguration", m_userGroupResolutionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateIndexRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.UpdateIndex"));
  return headers;

}





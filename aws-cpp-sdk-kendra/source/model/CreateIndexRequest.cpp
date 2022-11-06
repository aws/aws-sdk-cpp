/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/CreateIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIndexRequest::CreateIndexRequest() : 
    m_nameHasBeenSet(false),
    m_edition(IndexEdition::NOT_SET),
    m_editionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false),
    m_userTokenConfigurationsHasBeenSet(false),
    m_userContextPolicy(UserContextPolicy::NOT_SET),
    m_userContextPolicyHasBeenSet(false),
    m_userGroupResolutionConfigurationHasBeenSet(false)
{
}

Aws::String CreateIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", IndexEditionMapper::GetNameForIndexEdition(m_edition));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("ServerSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

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

Aws::Http::HeaderValueCollection CreateIndexRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.CreateIndex"));
  return headers;

}





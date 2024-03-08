/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CreateAccessEntryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAccessEntryRequest::CreateAccessEntryRequest() : 
    m_clusterNameHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_kubernetesGroupsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_usernameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateAccessEntryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("principalArn", m_principalArn);

  }

  if(m_kubernetesGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kubernetesGroupsJsonList(m_kubernetesGroups.size());
   for(unsigned kubernetesGroupsIndex = 0; kubernetesGroupsIndex < kubernetesGroupsJsonList.GetLength(); ++kubernetesGroupsIndex)
   {
     kubernetesGroupsJsonList[kubernetesGroupsIndex].AsString(m_kubernetesGroups[kubernetesGroupsIndex]);
   }
   payload.WithArray("kubernetesGroups", std::move(kubernetesGroupsJsonList));

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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload.View().WriteReadable();
}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UpdateAccessEntryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccessEntryRequest::UpdateAccessEntryRequest() : 
    m_clusterNameHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_kubernetesGroupsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_usernameHasBeenSet(false)
{
}

Aws::String UpdateAccessEntryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_kubernetesGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kubernetesGroupsJsonList(m_kubernetesGroups.size());
   for(unsigned kubernetesGroupsIndex = 0; kubernetesGroupsIndex < kubernetesGroupsJsonList.GetLength(); ++kubernetesGroupsIndex)
   {
     kubernetesGroupsJsonList[kubernetesGroupsIndex].AsString(m_kubernetesGroups[kubernetesGroupsIndex]);
   }
   payload.WithArray("kubernetesGroups", std::move(kubernetesGroupsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload.View().WriteReadable();
}





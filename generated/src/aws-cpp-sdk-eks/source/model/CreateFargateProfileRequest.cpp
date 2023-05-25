/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CreateFargateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFargateProfileRequest::CreateFargateProfileRequest() : 
    m_fargateProfileNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_podExecutionRoleArnHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_selectorsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFargateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fargateProfileNameHasBeenSet)
  {
   payload.WithString("fargateProfileName", m_fargateProfileName);

  }

  if(m_podExecutionRoleArnHasBeenSet)
  {
   payload.WithString("podExecutionRoleArn", m_podExecutionRoleArn);

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_selectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectorsJsonList(m_selectors.size());
   for(unsigned selectorsIndex = 0; selectorsIndex < selectorsJsonList.GetLength(); ++selectorsIndex)
   {
     selectorsJsonList[selectorsIndex].AsObject(m_selectors[selectorsIndex].Jsonize());
   }
   payload.WithArray("selectors", std::move(selectorsJsonList));

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

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





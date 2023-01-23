/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/CreateAddonRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAddonRequest::CreateAddonRequest() : 
    m_clusterNameHasBeenSet(false),
    m_addonNameHasBeenSet(false),
    m_addonVersionHasBeenSet(false),
    m_serviceAccountRoleArnHasBeenSet(false),
    m_resolveConflicts(ResolveConflicts::NOT_SET),
    m_resolveConflictsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_tagsHasBeenSet(false),
    m_configurationValuesHasBeenSet(false)
{
}

Aws::String CreateAddonRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addonNameHasBeenSet)
  {
   payload.WithString("addonName", m_addonName);

  }

  if(m_addonVersionHasBeenSet)
  {
   payload.WithString("addonVersion", m_addonVersion);

  }

  if(m_serviceAccountRoleArnHasBeenSet)
  {
   payload.WithString("serviceAccountRoleArn", m_serviceAccountRoleArn);

  }

  if(m_resolveConflictsHasBeenSet)
  {
   payload.WithString("resolveConflicts", ResolveConflictsMapper::GetNameForResolveConflicts(m_resolveConflicts));
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

  if(m_configurationValuesHasBeenSet)
  {
   payload.WithString("configurationValues", m_configurationValues);

  }

  return payload.View().WriteReadable();
}





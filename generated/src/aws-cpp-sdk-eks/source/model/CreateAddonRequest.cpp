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

  if(m_podIdentityAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> podIdentityAssociationsJsonList(m_podIdentityAssociations.size());
   for(unsigned podIdentityAssociationsIndex = 0; podIdentityAssociationsIndex < podIdentityAssociationsJsonList.GetLength(); ++podIdentityAssociationsIndex)
   {
     podIdentityAssociationsJsonList[podIdentityAssociationsIndex].AsObject(m_podIdentityAssociations[podIdentityAssociationsIndex].Jsonize());
   }
   payload.WithArray("podIdentityAssociations", std::move(podIdentityAssociationsJsonList));

  }

  if(m_namespaceConfigHasBeenSet)
  {
   payload.WithObject("namespaceConfig", m_namespaceConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}





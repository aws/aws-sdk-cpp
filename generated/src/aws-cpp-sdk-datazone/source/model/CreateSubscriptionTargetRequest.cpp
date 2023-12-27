/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateSubscriptionTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSubscriptionTargetRequest::CreateSubscriptionTargetRequest() : 
    m_applicableAssetTypesHasBeenSet(false),
    m_authorizedPrincipalsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_manageAccessRoleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_subscriptionTargetConfigHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateSubscriptionTargetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicableAssetTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicableAssetTypesJsonList(m_applicableAssetTypes.size());
   for(unsigned applicableAssetTypesIndex = 0; applicableAssetTypesIndex < applicableAssetTypesJsonList.GetLength(); ++applicableAssetTypesIndex)
   {
     applicableAssetTypesJsonList[applicableAssetTypesIndex].AsString(m_applicableAssetTypes[applicableAssetTypesIndex]);
   }
   payload.WithArray("applicableAssetTypes", std::move(applicableAssetTypesJsonList));

  }

  if(m_authorizedPrincipalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedPrincipalsJsonList(m_authorizedPrincipals.size());
   for(unsigned authorizedPrincipalsIndex = 0; authorizedPrincipalsIndex < authorizedPrincipalsJsonList.GetLength(); ++authorizedPrincipalsIndex)
   {
     authorizedPrincipalsJsonList[authorizedPrincipalsIndex].AsString(m_authorizedPrincipals[authorizedPrincipalsIndex]);
   }
   payload.WithArray("authorizedPrincipals", std::move(authorizedPrincipalsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_manageAccessRoleHasBeenSet)
  {
   payload.WithString("manageAccessRole", m_manageAccessRole);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_subscriptionTargetConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscriptionTargetConfigJsonList(m_subscriptionTargetConfig.size());
   for(unsigned subscriptionTargetConfigIndex = 0; subscriptionTargetConfigIndex < subscriptionTargetConfigJsonList.GetLength(); ++subscriptionTargetConfigIndex)
   {
     subscriptionTargetConfigJsonList[subscriptionTargetConfigIndex].AsObject(m_subscriptionTargetConfig[subscriptionTargetConfigIndex].Jsonize());
   }
   payload.WithArray("subscriptionTargetConfig", std::move(subscriptionTargetConfigJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload.View().WriteReadable();
}





/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionTargetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SubscriptionTargetSummary::SubscriptionTargetSummary() : 
    m_applicableAssetTypesHasBeenSet(false),
    m_authorizedPrincipalsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_manageAccessRoleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_subscriptionTargetConfigHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

SubscriptionTargetSummary::SubscriptionTargetSummary(JsonView jsonValue) : 
    m_applicableAssetTypesHasBeenSet(false),
    m_authorizedPrincipalsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_manageAccessRoleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_subscriptionTargetConfigHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionTargetSummary& SubscriptionTargetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicableAssetTypes"))
  {
    Aws::Utils::Array<JsonView> applicableAssetTypesJsonList = jsonValue.GetArray("applicableAssetTypes");
    for(unsigned applicableAssetTypesIndex = 0; applicableAssetTypesIndex < applicableAssetTypesJsonList.GetLength(); ++applicableAssetTypesIndex)
    {
      m_applicableAssetTypes.push_back(applicableAssetTypesJsonList[applicableAssetTypesIndex].AsString());
    }
    m_applicableAssetTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizedPrincipals"))
  {
    Aws::Utils::Array<JsonView> authorizedPrincipalsJsonList = jsonValue.GetArray("authorizedPrincipals");
    for(unsigned authorizedPrincipalsIndex = 0; authorizedPrincipalsIndex < authorizedPrincipalsJsonList.GetLength(); ++authorizedPrincipalsIndex)
    {
      m_authorizedPrincipals.push_back(authorizedPrincipalsJsonList[authorizedPrincipalsIndex].AsString());
    }
    m_authorizedPrincipalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manageAccessRole"))
  {
    m_manageAccessRole = jsonValue.GetString("manageAccessRole");

    m_manageAccessRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionTargetConfig"))
  {
    Aws::Utils::Array<JsonView> subscriptionTargetConfigJsonList = jsonValue.GetArray("subscriptionTargetConfig");
    for(unsigned subscriptionTargetConfigIndex = 0; subscriptionTargetConfigIndex < subscriptionTargetConfigJsonList.GetLength(); ++subscriptionTargetConfigIndex)
    {
      m_subscriptionTargetConfig.push_back(subscriptionTargetConfigJsonList[subscriptionTargetConfigIndex].AsObject());
    }
    m_subscriptionTargetConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscriptionTargetSummary::Jsonize() const
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_manageAccessRoleHasBeenSet)
  {
   payload.WithString("manageAccessRole", m_manageAccessRole);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

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

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws

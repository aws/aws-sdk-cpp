/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateSubscriptionTargetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSubscriptionTargetResult::UpdateSubscriptionTargetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateSubscriptionTargetResult& UpdateSubscriptionTargetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

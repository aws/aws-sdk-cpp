/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserAssociationsResult::ListUserAssociationsResult()
{
}

ListUserAssociationsResult::ListUserAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUserAssociationsResult& ListUserAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceUserSummaries"))
  {
    Aws::Utils::Array<JsonView> instanceUserSummariesJsonList = jsonValue.GetArray("InstanceUserSummaries");
    for(unsigned instanceUserSummariesIndex = 0; instanceUserSummariesIndex < instanceUserSummariesJsonList.GetLength(); ++instanceUserSummariesIndex)
    {
      m_instanceUserSummaries.push_back(instanceUserSummariesJsonList[instanceUserSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

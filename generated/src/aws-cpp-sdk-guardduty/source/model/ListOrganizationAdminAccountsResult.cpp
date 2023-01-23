/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ListOrganizationAdminAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOrganizationAdminAccountsResult::ListOrganizationAdminAccountsResult()
{
}

ListOrganizationAdminAccountsResult::ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrganizationAdminAccountsResult& ListOrganizationAdminAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("adminAccounts"))
  {
    Aws::Utils::Array<JsonView> adminAccountsJsonList = jsonValue.GetArray("adminAccounts");
    for(unsigned adminAccountsIndex = 0; adminAccountsIndex < adminAccountsJsonList.GetLength(); ++adminAccountsIndex)
    {
      m_adminAccounts.push_back(adminAccountsJsonList[adminAccountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

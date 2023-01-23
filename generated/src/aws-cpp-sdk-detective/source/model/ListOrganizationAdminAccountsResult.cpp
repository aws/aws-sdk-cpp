/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/ListOrganizationAdminAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Detective::Model;
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
  if(jsonValue.ValueExists("Administrators"))
  {
    Aws::Utils::Array<JsonView> administratorsJsonList = jsonValue.GetArray("Administrators");
    for(unsigned administratorsIndex = 0; administratorsIndex < administratorsJsonList.GetLength(); ++administratorsIndex)
    {
      m_administrators.push_back(administratorsJsonList[administratorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

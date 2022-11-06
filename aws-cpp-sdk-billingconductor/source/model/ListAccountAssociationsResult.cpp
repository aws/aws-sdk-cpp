/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListAccountAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccountAssociationsResult::ListAccountAssociationsResult()
{
}

ListAccountAssociationsResult::ListAccountAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccountAssociationsResult& ListAccountAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LinkedAccounts"))
  {
    Aws::Utils::Array<JsonView> linkedAccountsJsonList = jsonValue.GetArray("LinkedAccounts");
    for(unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex)
    {
      m_linkedAccounts.push_back(linkedAccountsJsonList[linkedAccountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeAffectedAccountsForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAffectedAccountsForOrganizationResult::DescribeAffectedAccountsForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAffectedAccountsForOrganizationResult& DescribeAffectedAccountsForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("affectedAccounts"))
  {
    Aws::Utils::Array<JsonView> affectedAccountsJsonList = jsonValue.GetArray("affectedAccounts");
    for(unsigned affectedAccountsIndex = 0; affectedAccountsIndex < affectedAccountsJsonList.GetLength(); ++affectedAccountsIndex)
    {
      m_affectedAccounts.push_back(affectedAccountsJsonList[affectedAccountsIndex].AsString());
    }
    m_affectedAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventScopeCode"))
  {
    m_eventScopeCode = EventScopeCodeMapper::GetEventScopeCodeForName(jsonValue.GetString("eventScopeCode"));
    m_eventScopeCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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

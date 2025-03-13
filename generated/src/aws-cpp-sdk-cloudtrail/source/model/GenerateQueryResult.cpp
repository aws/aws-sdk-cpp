/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GenerateQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GenerateQueryResult::GenerateQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GenerateQueryResult& GenerateQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryStatement"))
  {
    m_queryStatement = jsonValue.GetString("QueryStatement");
    m_queryStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryAlias"))
  {
    m_queryAlias = jsonValue.GetString("QueryAlias");
    m_queryAliasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventDataStoreOwnerAccountId"))
  {
    m_eventDataStoreOwnerAccountId = jsonValue.GetString("EventDataStoreOwnerAccountId");
    m_eventDataStoreOwnerAccountIdHasBeenSet = true;
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

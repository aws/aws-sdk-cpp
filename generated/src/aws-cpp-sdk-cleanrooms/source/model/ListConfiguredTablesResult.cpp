/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListConfiguredTablesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfiguredTablesResult::ListConfiguredTablesResult()
{
}

ListConfiguredTablesResult::ListConfiguredTablesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfiguredTablesResult& ListConfiguredTablesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configuredTableSummaries"))
  {
    Aws::Utils::Array<JsonView> configuredTableSummariesJsonList = jsonValue.GetArray("configuredTableSummaries");
    for(unsigned configuredTableSummariesIndex = 0; configuredTableSummariesIndex < configuredTableSummariesJsonList.GetLength(); ++configuredTableSummariesIndex)
    {
      m_configuredTableSummaries.push_back(configuredTableSummariesJsonList[configuredTableSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

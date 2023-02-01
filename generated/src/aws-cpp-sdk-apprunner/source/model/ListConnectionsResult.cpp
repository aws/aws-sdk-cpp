/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConnectionsResult::ListConnectionsResult()
{
}

ListConnectionsResult::ListConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConnectionsResult& ListConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectionSummaryList"))
  {
    Aws::Utils::Array<JsonView> connectionSummaryListJsonList = jsonValue.GetArray("ConnectionSummaryList");
    for(unsigned connectionSummaryListIndex = 0; connectionSummaryListIndex < connectionSummaryListJsonList.GetLength(); ++connectionSummaryListIndex)
    {
      m_connectionSummaryList.push_back(connectionSummaryListJsonList[connectionSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

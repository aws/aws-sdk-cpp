/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ListLogSubscriptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLogSubscriptionsResult::ListLogSubscriptionsResult()
{
}

ListLogSubscriptionsResult::ListLogSubscriptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLogSubscriptionsResult& ListLogSubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LogSubscriptions"))
  {
    Aws::Utils::Array<JsonView> logSubscriptionsJsonList = jsonValue.GetArray("LogSubscriptions");
    for(unsigned logSubscriptionsIndex = 0; logSubscriptionsIndex < logSubscriptionsJsonList.GetLength(); ++logSubscriptionsIndex)
    {
      m_logSubscriptions.push_back(logSubscriptionsJsonList[logSubscriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

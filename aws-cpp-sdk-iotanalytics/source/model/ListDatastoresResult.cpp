/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ListDatastoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDatastoresResult::ListDatastoresResult()
{
}

ListDatastoresResult::ListDatastoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDatastoresResult& ListDatastoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datastoreSummaries"))
  {
    Aws::Utils::Array<JsonView> datastoreSummariesJsonList = jsonValue.GetArray("datastoreSummaries");
    for(unsigned datastoreSummariesIndex = 0; datastoreSummariesIndex < datastoreSummariesJsonList.GetLength(); ++datastoreSummariesIndex)
    {
      m_datastoreSummaries.push_back(datastoreSummariesJsonList[datastoreSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

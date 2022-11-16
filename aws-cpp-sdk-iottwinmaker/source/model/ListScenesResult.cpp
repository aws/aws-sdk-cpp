/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListScenesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListScenesResult::ListScenesResult()
{
}

ListScenesResult::ListScenesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListScenesResult& ListScenesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sceneSummaries"))
  {
    Aws::Utils::Array<JsonView> sceneSummariesJsonList = jsonValue.GetArray("sceneSummaries");
    for(unsigned sceneSummariesIndex = 0; sceneSummariesIndex < sceneSummariesJsonList.GetLength(); ++sceneSummariesIndex)
    {
      m_sceneSummaries.push_back(sceneSummariesJsonList[sceneSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

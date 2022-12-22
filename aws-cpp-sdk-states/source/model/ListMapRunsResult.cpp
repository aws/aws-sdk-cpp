/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ListMapRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMapRunsResult::ListMapRunsResult()
{
}

ListMapRunsResult::ListMapRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMapRunsResult& ListMapRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("mapRuns"))
  {
    Aws::Utils::Array<JsonView> mapRunsJsonList = jsonValue.GetArray("mapRuns");
    for(unsigned mapRunsIndex = 0; mapRunsIndex < mapRunsJsonList.GetLength(); ++mapRunsIndex)
    {
      m_mapRuns.push_back(mapRunsJsonList[mapRunsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

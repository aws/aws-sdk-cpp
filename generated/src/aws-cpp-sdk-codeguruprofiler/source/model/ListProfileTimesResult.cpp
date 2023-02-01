/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/ListProfileTimesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProfileTimesResult::ListProfileTimesResult()
{
}

ListProfileTimesResult::ListProfileTimesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProfileTimesResult& ListProfileTimesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("profileTimes"))
  {
    Aws::Utils::Array<JsonView> profileTimesJsonList = jsonValue.GetArray("profileTimes");
    for(unsigned profileTimesIndex = 0; profileTimesIndex < profileTimesJsonList.GetLength(); ++profileTimesIndex)
    {
      m_profileTimes.push_back(profileTimesJsonList[profileTimesIndex].AsObject());
    }
  }



  return *this;
}

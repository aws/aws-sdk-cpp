/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ListLaunchesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLaunchesResult::ListLaunchesResult()
{
}

ListLaunchesResult::ListLaunchesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLaunchesResult& ListLaunchesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("launches"))
  {
    Aws::Utils::Array<JsonView> launchesJsonList = jsonValue.GetArray("launches");
    for(unsigned launchesIndex = 0; launchesIndex < launchesJsonList.GetLength(); ++launchesIndex)
    {
      m_launches.push_back(launchesJsonList[launchesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

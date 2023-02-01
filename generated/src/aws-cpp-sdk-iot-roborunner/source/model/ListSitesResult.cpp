/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/ListSitesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSitesResult::ListSitesResult()
{
}

ListSitesResult::ListSitesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSitesResult& ListSitesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("sites"))
  {
    Aws::Utils::Array<JsonView> sitesJsonList = jsonValue.GetArray("sites");
    for(unsigned sitesIndex = 0; sitesIndex < sitesJsonList.GetLength(); ++sitesIndex)
    {
      m_sites.push_back(sitesJsonList[sitesIndex].AsObject());
    }
  }



  return *this;
}

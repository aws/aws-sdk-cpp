/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListOTAUpdatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOTAUpdatesResult::ListOTAUpdatesResult()
{
}

ListOTAUpdatesResult::ListOTAUpdatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOTAUpdatesResult& ListOTAUpdatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("otaUpdates"))
  {
    Aws::Utils::Array<JsonView> otaUpdatesJsonList = jsonValue.GetArray("otaUpdates");
    for(unsigned otaUpdatesIndex = 0; otaUpdatesIndex < otaUpdatesJsonList.GetLength(); ++otaUpdatesIndex)
    {
      m_otaUpdates.push_back(otaUpdatesJsonList[otaUpdatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

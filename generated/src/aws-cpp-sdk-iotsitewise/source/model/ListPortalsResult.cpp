/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListPortalsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPortalsResult::ListPortalsResult()
{
}

ListPortalsResult::ListPortalsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPortalsResult& ListPortalsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("portalSummaries"))
  {
    Aws::Utils::Array<JsonView> portalSummariesJsonList = jsonValue.GetArray("portalSummaries");
    for(unsigned portalSummariesIndex = 0; portalSummariesIndex < portalSummariesJsonList.GetLength(); ++portalSummariesIndex)
    {
      m_portalSummaries.push_back(portalSummariesJsonList[portalSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/ListPlacementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT1ClickProjects::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPlacementsResult::ListPlacementsResult()
{
}

ListPlacementsResult::ListPlacementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPlacementsResult& ListPlacementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("placements"))
  {
    Aws::Utils::Array<JsonView> placementsJsonList = jsonValue.GetArray("placements");
    for(unsigned placementsIndex = 0; placementsIndex < placementsJsonList.GetLength(); ++placementsIndex)
    {
      m_placements.push_back(placementsJsonList[placementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

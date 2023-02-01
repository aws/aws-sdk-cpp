/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ListLocationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLocationsResult::ListLocationsResult()
{
}

ListLocationsResult::ListLocationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLocationsResult& ListLocationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Locations"))
  {
    Aws::Utils::Array<JsonView> locationsJsonList = jsonValue.GetArray("Locations");
    for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
    {
      m_locations.push_back(locationsJsonList[locationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

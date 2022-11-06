/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchRoutingProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchRoutingProfilesResult::SearchRoutingProfilesResult() : 
    m_approximateTotalCount(0)
{
}

SearchRoutingProfilesResult::SearchRoutingProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_approximateTotalCount(0)
{
  *this = result;
}

SearchRoutingProfilesResult& SearchRoutingProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RoutingProfiles"))
  {
    Aws::Utils::Array<JsonView> routingProfilesJsonList = jsonValue.GetArray("RoutingProfiles");
    for(unsigned routingProfilesIndex = 0; routingProfilesIndex < routingProfilesJsonList.GetLength(); ++routingProfilesIndex)
    {
      m_routingProfiles.push_back(routingProfilesJsonList[routingProfilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }



  return *this;
}

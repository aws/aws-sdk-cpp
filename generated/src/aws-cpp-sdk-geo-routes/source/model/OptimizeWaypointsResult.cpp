/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/OptimizeWaypointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoRoutes::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

OptimizeWaypointsResult::OptimizeWaypointsResult() : 
    m_distance(0),
    m_duration(0)
{
}

OptimizeWaypointsResult::OptimizeWaypointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : OptimizeWaypointsResult()
{
  *this = result;
}

OptimizeWaypointsResult& OptimizeWaypointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Connections"))
  {
    Aws::Utils::Array<JsonView> connectionsJsonList = jsonValue.GetArray("Connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");

  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");

  }

  if(jsonValue.ValueExists("ImpedingWaypoints"))
  {
    Aws::Utils::Array<JsonView> impedingWaypointsJsonList = jsonValue.GetArray("ImpedingWaypoints");
    for(unsigned impedingWaypointsIndex = 0; impedingWaypointsIndex < impedingWaypointsJsonList.GetLength(); ++impedingWaypointsIndex)
    {
      m_impedingWaypoints.push_back(impedingWaypointsJsonList[impedingWaypointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OptimizedWaypoints"))
  {
    Aws::Utils::Array<JsonView> optimizedWaypointsJsonList = jsonValue.GetArray("OptimizedWaypoints");
    for(unsigned optimizedWaypointsIndex = 0; optimizedWaypointsIndex < optimizedWaypointsJsonList.GetLength(); ++optimizedWaypointsIndex)
    {
      m_optimizedWaypoints.push_back(optimizedWaypointsJsonList[optimizedWaypointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TimeBreakdown"))
  {
    m_timeBreakdown = jsonValue.GetObject("TimeBreakdown");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& pricingBucketIter = headers.find("x-amz-geo-pricing-bucket");
  if(pricingBucketIter != headers.end())
  {
    m_pricingBucket = pricingBucketIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

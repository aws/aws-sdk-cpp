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

OptimizeWaypointsResult::OptimizeWaypointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
    m_connectionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Distance"))
  {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImpedingWaypoints"))
  {
    Aws::Utils::Array<JsonView> impedingWaypointsJsonList = jsonValue.GetArray("ImpedingWaypoints");
    for(unsigned impedingWaypointsIndex = 0; impedingWaypointsIndex < impedingWaypointsJsonList.GetLength(); ++impedingWaypointsIndex)
    {
      m_impedingWaypoints.push_back(impedingWaypointsJsonList[impedingWaypointsIndex].AsObject());
    }
    m_impedingWaypointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptimizedWaypoints"))
  {
    Aws::Utils::Array<JsonView> optimizedWaypointsJsonList = jsonValue.GetArray("OptimizedWaypoints");
    for(unsigned optimizedWaypointsIndex = 0; optimizedWaypointsIndex < optimizedWaypointsJsonList.GetLength(); ++optimizedWaypointsIndex)
    {
      m_optimizedWaypoints.push_back(optimizedWaypointsJsonList[optimizedWaypointsIndex].AsObject());
    }
    m_optimizedWaypointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeBreakdown"))
  {
    m_timeBreakdown = jsonValue.GetObject("TimeBreakdown");
    m_timeBreakdownHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& pricingBucketIter = headers.find("x-amz-geo-pricing-bucket");
  if(pricingBucketIter != headers.end())
  {
    m_pricingBucket = pricingBucketIter->second;
    m_pricingBucketHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/CalculateRouteMatrixResult.h>
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

CalculateRouteMatrixResult::CalculateRouteMatrixResult() : 
    m_errorCount(0)
{
}

CalculateRouteMatrixResult::CalculateRouteMatrixResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CalculateRouteMatrixResult()
{
  *this = result;
}

CalculateRouteMatrixResult& CalculateRouteMatrixResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ErrorCount"))
  {
    m_errorCount = jsonValue.GetInteger("ErrorCount");

  }

  if(jsonValue.ValueExists("RouteMatrix"))
  {
    Aws::Utils::Array<JsonView> routeMatrixJsonList = jsonValue.GetArray("RouteMatrix");
    for(unsigned routeMatrixIndex = 0; routeMatrixIndex < routeMatrixJsonList.GetLength(); ++routeMatrixIndex)
    {
      Aws::Utils::Array<JsonView> routeMatrixRowJsonList = routeMatrixJsonList[routeMatrixIndex].AsArray();
      Aws::Vector<RouteMatrixEntry> routeMatrixRowList;
      routeMatrixRowList.reserve((size_t)routeMatrixRowJsonList.GetLength());
      for(unsigned routeMatrixRowIndex = 0; routeMatrixRowIndex < routeMatrixRowJsonList.GetLength(); ++routeMatrixRowIndex)
      {
        routeMatrixRowList.push_back(routeMatrixRowJsonList[routeMatrixRowIndex].AsObject());
      }
      m_routeMatrix.push_back(std::move(routeMatrixRowList));
    }
  }

  if(jsonValue.ValueExists("RoutingBoundary"))
  {
    m_routingBoundary = jsonValue.GetObject("RoutingBoundary");

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

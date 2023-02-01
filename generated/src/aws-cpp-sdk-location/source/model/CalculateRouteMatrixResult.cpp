/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteMatrixResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CalculateRouteMatrixResult::CalculateRouteMatrixResult()
{
}

CalculateRouteMatrixResult::CalculateRouteMatrixResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CalculateRouteMatrixResult& CalculateRouteMatrixResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("SnappedDeparturePositions"))
  {
    Aws::Utils::Array<JsonView> snappedDeparturePositionsJsonList = jsonValue.GetArray("SnappedDeparturePositions");
    for(unsigned snappedDeparturePositionsIndex = 0; snappedDeparturePositionsIndex < snappedDeparturePositionsJsonList.GetLength(); ++snappedDeparturePositionsIndex)
    {
      Aws::Utils::Array<JsonView> positionJsonList = snappedDeparturePositionsJsonList[snappedDeparturePositionsIndex].AsArray();
      Aws::Vector<double> positionList;
      positionList.reserve((size_t)positionJsonList.GetLength());
      for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
      {
        positionList.push_back(positionJsonList[positionIndex].AsDouble());
      }
      m_snappedDeparturePositions.push_back(std::move(positionList));
    }
  }

  if(jsonValue.ValueExists("SnappedDestinationPositions"))
  {
    Aws::Utils::Array<JsonView> snappedDestinationPositionsJsonList = jsonValue.GetArray("SnappedDestinationPositions");
    for(unsigned snappedDestinationPositionsIndex = 0; snappedDestinationPositionsIndex < snappedDestinationPositionsJsonList.GetLength(); ++snappedDestinationPositionsIndex)
    {
      Aws::Utils::Array<JsonView> positionJsonList = snappedDestinationPositionsJsonList[snappedDestinationPositionsIndex].AsArray();
      Aws::Vector<double> positionList;
      positionList.reserve((size_t)positionJsonList.GetLength());
      for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
      {
        positionList.push_back(positionJsonList[positionIndex].AsDouble());
      }
      m_snappedDestinationPositions.push_back(std::move(positionList));
    }
  }

  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetObject("Summary");

  }



  return *this;
}

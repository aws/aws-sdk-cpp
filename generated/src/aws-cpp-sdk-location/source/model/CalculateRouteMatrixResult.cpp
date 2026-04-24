/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/location/model/CalculateRouteMatrixResult.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CalculateRouteMatrixResult::CalculateRouteMatrixResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CalculateRouteMatrixResult& CalculateRouteMatrixResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RouteMatrix")) {
    Aws::Utils::Array<JsonView> routeMatrixJsonList = jsonValue.GetArray("RouteMatrix");
    for (unsigned routeMatrixIndex = 0; routeMatrixIndex < routeMatrixJsonList.GetLength(); ++routeMatrixIndex) {
      Aws::Utils::Array<JsonView> routeMatrixRow2JsonList = routeMatrixJsonList[routeMatrixIndex].AsArray();
      Aws::Vector<RouteMatrixEntry> routeMatrixRow2List;
      routeMatrixRow2List.reserve((size_t)routeMatrixRow2JsonList.GetLength());
      for (unsigned routeMatrixRow2Index = 0; routeMatrixRow2Index < routeMatrixRow2JsonList.GetLength(); ++routeMatrixRow2Index) {
        routeMatrixRow2List.push_back(routeMatrixRow2JsonList[routeMatrixRow2Index].AsObject());
      }
      m_routeMatrix.push_back(std::move(routeMatrixRow2List));
    }
    m_routeMatrixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnappedDeparturePositions")) {
    Aws::Utils::Array<JsonView> snappedDeparturePositionsJsonList = jsonValue.GetArray("SnappedDeparturePositions");
    for (unsigned snappedDeparturePositionsIndex = 0; snappedDeparturePositionsIndex < snappedDeparturePositionsJsonList.GetLength();
         ++snappedDeparturePositionsIndex) {
      Aws::Utils::Array<JsonView> position2JsonList = snappedDeparturePositionsJsonList[snappedDeparturePositionsIndex].AsArray();
      Aws::Vector<double> position2List;
      position2List.reserve((size_t)position2JsonList.GetLength());
      for (unsigned position2Index = 0; position2Index < position2JsonList.GetLength(); ++position2Index) {
        position2List.push_back(position2JsonList[position2Index].AsDouble());
      }
      m_snappedDeparturePositions.push_back(std::move(position2List));
    }
    m_snappedDeparturePositionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnappedDestinationPositions")) {
    Aws::Utils::Array<JsonView> snappedDestinationPositionsJsonList = jsonValue.GetArray("SnappedDestinationPositions");
    for (unsigned snappedDestinationPositionsIndex = 0; snappedDestinationPositionsIndex < snappedDestinationPositionsJsonList.GetLength();
         ++snappedDestinationPositionsIndex) {
      Aws::Utils::Array<JsonView> position2JsonList = snappedDestinationPositionsJsonList[snappedDestinationPositionsIndex].AsArray();
      Aws::Vector<double> position2List;
      position2List.reserve((size_t)position2JsonList.GetLength());
      for (unsigned position2Index = 0; position2Index < position2JsonList.GetLength(); ++position2Index) {
        position2List.push_back(position2JsonList[position2Index].AsDouble());
      }
      m_snappedDestinationPositions.push_back(std::move(position2List));
    }
    m_snappedDestinationPositionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Summary")) {
    m_summary = jsonValue.GetObject("Summary");
    m_summaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

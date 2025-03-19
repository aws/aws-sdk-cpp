/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/CalculateIsolinesResult.h>
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

CalculateIsolinesResult::CalculateIsolinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CalculateIsolinesResult& CalculateIsolinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ArrivalTime"))
  {
    m_arrivalTime = jsonValue.GetString("ArrivalTime");
    m_arrivalTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DepartureTime"))
  {
    m_departureTime = jsonValue.GetString("DepartureTime");
    m_departureTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsolineGeometryFormat"))
  {
    m_isolineGeometryFormat = GeometryFormatMapper::GetGeometryFormatForName(jsonValue.GetString("IsolineGeometryFormat"));
    m_isolineGeometryFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Isolines"))
  {
    Aws::Utils::Array<JsonView> isolinesJsonList = jsonValue.GetArray("Isolines");
    for(unsigned isolinesIndex = 0; isolinesIndex < isolinesJsonList.GetLength(); ++isolinesIndex)
    {
      m_isolines.push_back(isolinesJsonList[isolinesIndex].AsObject());
    }
    m_isolinesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnappedDestination"))
  {
    Aws::Utils::Array<JsonView> snappedDestinationJsonList = jsonValue.GetArray("SnappedDestination");
    for(unsigned snappedDestinationIndex = 0; snappedDestinationIndex < snappedDestinationJsonList.GetLength(); ++snappedDestinationIndex)
    {
      m_snappedDestination.push_back(snappedDestinationJsonList[snappedDestinationIndex].AsDouble());
    }
    m_snappedDestinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnappedOrigin"))
  {
    Aws::Utils::Array<JsonView> snappedOriginJsonList = jsonValue.GetArray("SnappedOrigin");
    for(unsigned snappedOriginIndex = 0; snappedOriginIndex < snappedOriginJsonList.GetLength(); ++snappedOriginIndex)
    {
      m_snappedOrigin.push_back(snappedOriginJsonList[snappedOriginIndex].AsDouble());
    }
    m_snappedOriginHasBeenSet = true;
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

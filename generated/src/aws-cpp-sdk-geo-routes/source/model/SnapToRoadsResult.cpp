/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/SnapToRoadsResult.h>
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

SnapToRoadsResult::SnapToRoadsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SnapToRoadsResult& SnapToRoadsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Notices"))
  {
    Aws::Utils::Array<JsonView> noticesJsonList = jsonValue.GetArray("Notices");
    for(unsigned noticesIndex = 0; noticesIndex < noticesJsonList.GetLength(); ++noticesIndex)
    {
      m_notices.push_back(noticesJsonList[noticesIndex].AsObject());
    }
    m_noticesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnappedGeometry"))
  {
    m_snappedGeometry = jsonValue.GetObject("SnappedGeometry");
    m_snappedGeometryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnappedGeometryFormat"))
  {
    m_snappedGeometryFormat = GeometryFormatMapper::GetGeometryFormatForName(jsonValue.GetString("SnappedGeometryFormat"));
    m_snappedGeometryFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnappedTracePoints"))
  {
    Aws::Utils::Array<JsonView> snappedTracePointsJsonList = jsonValue.GetArray("SnappedTracePoints");
    for(unsigned snappedTracePointsIndex = 0; snappedTracePointsIndex < snappedTracePointsJsonList.GetLength(); ++snappedTracePointsIndex)
    {
      m_snappedTracePoints.push_back(snappedTracePointsJsonList[snappedTracePointsIndex].AsObject());
    }
    m_snappedTracePointsHasBeenSet = true;
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

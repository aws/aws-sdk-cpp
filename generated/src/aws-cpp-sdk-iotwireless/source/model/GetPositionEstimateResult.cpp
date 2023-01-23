/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetPositionEstimateResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetPositionEstimateResult::GetPositionEstimateResult()
{
}

GetPositionEstimateResult::GetPositionEstimateResult(GetPositionEstimateResult&& toMove) : 
    m_geoJsonPayload(std::move(toMove.m_geoJsonPayload))
{
}

GetPositionEstimateResult& GetPositionEstimateResult::operator=(GetPositionEstimateResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_geoJsonPayload = std::move(toMove.m_geoJsonPayload);

   return *this;
}

GetPositionEstimateResult::GetPositionEstimateResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetPositionEstimateResult& GetPositionEstimateResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_geoJsonPayload = result.TakeOwnershipOfPayload();

   return *this;
}

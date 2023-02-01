/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetResourcePositionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetResourcePositionResult::GetResourcePositionResult()
{
}

GetResourcePositionResult::GetResourcePositionResult(GetResourcePositionResult&& toMove) : 
    m_geoJsonPayload(std::move(toMove.m_geoJsonPayload))
{
}

GetResourcePositionResult& GetResourcePositionResult::operator=(GetResourcePositionResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_geoJsonPayload = std::move(toMove.m_geoJsonPayload);

   return *this;
}

GetResourcePositionResult::GetResourcePositionResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetResourcePositionResult& GetResourcePositionResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_geoJsonPayload = result.TakeOwnershipOfPayload();

   return *this;
}

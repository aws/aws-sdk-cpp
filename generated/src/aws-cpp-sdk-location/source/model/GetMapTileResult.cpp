/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetMapTileResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetMapTileResult::GetMapTileResult()
{
}

GetMapTileResult::GetMapTileResult(GetMapTileResult&& toMove) : 
    m_blob(std::move(toMove.m_blob)),
    m_cacheControl(std::move(toMove.m_cacheControl)),
    m_contentType(std::move(toMove.m_contentType)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetMapTileResult& GetMapTileResult::operator=(GetMapTileResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_blob = std::move(toMove.m_blob);
   m_cacheControl = std::move(toMove.m_cacheControl);
   m_contentType = std::move(toMove.m_contentType);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetMapTileResult::GetMapTileResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetMapTileResult& GetMapTileResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_blob = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& cacheControlIter = headers.find("cache-control");
  if(cacheControlIter != headers.end())
  {
    m_cacheControl = cacheControlIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}

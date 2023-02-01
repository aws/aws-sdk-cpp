/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GetMapGlyphsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetMapGlyphsResult::GetMapGlyphsResult()
{
}

GetMapGlyphsResult::GetMapGlyphsResult(GetMapGlyphsResult&& toMove) : 
    m_blob(std::move(toMove.m_blob)),
    m_contentType(std::move(toMove.m_contentType))
{
}

GetMapGlyphsResult& GetMapGlyphsResult::operator=(GetMapGlyphsResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_blob = std::move(toMove.m_blob);
   m_contentType = std::move(toMove.m_contentType);

   return *this;
}

GetMapGlyphsResult::GetMapGlyphsResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetMapGlyphsResult& GetMapGlyphsResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_blob = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

   return *this;
}

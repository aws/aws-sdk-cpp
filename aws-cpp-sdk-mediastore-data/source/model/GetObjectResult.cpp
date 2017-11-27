/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediastore-data/model/GetObjectResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetObjectResult::GetObjectResult() : 
    m_contentLength(0),
    m_statusCode(0)
{
}

GetObjectResult::GetObjectResult(GetObjectResult&& toMove) : 
    m_body(std::move(toMove.m_body)),
    m_cacheControl(std::move(toMove.m_cacheControl)),
    m_contentRange(std::move(toMove.m_contentRange)),
    m_contentLength(toMove.m_contentLength),
    m_contentType(std::move(toMove.m_contentType)),
    m_eTag(std::move(toMove.m_eTag)),
    m_lastModified(std::move(toMove.m_lastModified)),
    m_statusCode(toMove.m_statusCode)
{
}

GetObjectResult& GetObjectResult::operator=(GetObjectResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_body = std::move(toMove.m_body);
   m_cacheControl = std::move(toMove.m_cacheControl);
   m_contentRange = std::move(toMove.m_contentRange);
   m_contentLength = toMove.m_contentLength;
   m_contentType = std::move(toMove.m_contentType);
   m_eTag = std::move(toMove.m_eTag);
   m_lastModified = std::move(toMove.m_lastModified);
   m_statusCode = toMove.m_statusCode;

   return *this;
}

GetObjectResult::GetObjectResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_contentLength(0),
    m_statusCode(0)
{
  *this = std::move(result);
}

GetObjectResult& GetObjectResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& cacheControlIter = headers.find("cache-control");
  if(cacheControlIter != headers.end())
  {
    m_cacheControl = cacheControlIter->second;
  }

  const auto& contentRangeIter = headers.find("content-range");
  if(contentRangeIter != headers.end())
  {
    m_contentRange = contentRangeIter->second;
  }

  const auto& contentLengthIter = headers.find("content-length");
  if(contentLengthIter != headers.end())
  {
     m_contentLength = StringUtils::ConvertToInt64(contentLengthIter->second.c_str());
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
  }

  const auto& lastModifiedIter = headers.find("last-modified");
  if(lastModifiedIter != headers.end())
  {
    m_lastModified = DateTime(lastModifiedIter->second, DateFormat::RFC822);
  }

  m_statusCode = static_cast<int>(result.GetResponseCode());

   return *this;
}

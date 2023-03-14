/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/GetFunction2020_05_31Result.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetFunction2020_05_31Result::GetFunction2020_05_31Result()
{
}

GetFunction2020_05_31Result::GetFunction2020_05_31Result(GetFunction2020_05_31Result&& toMove) : 
    m_functionCode(std::move(toMove.m_functionCode)),
    m_eTag(std::move(toMove.m_eTag)),
    m_contentType(std::move(toMove.m_contentType)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetFunction2020_05_31Result& GetFunction2020_05_31Result::operator=(GetFunction2020_05_31Result&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_functionCode = std::move(toMove.m_functionCode);
   m_eTag = std::move(toMove.m_eTag);
   m_contentType = std::move(toMove.m_contentType);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetFunction2020_05_31Result::GetFunction2020_05_31Result(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetFunction2020_05_31Result& GetFunction2020_05_31Result::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_functionCode = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-media/model/GetMediaResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KinesisVideoMedia::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetMediaResult::GetMediaResult()
{
}

GetMediaResult::GetMediaResult(GetMediaResult&& toMove) : 
    m_contentType(std::move(toMove.m_contentType)),
    m_payload(std::move(toMove.m_payload))
{
}

GetMediaResult& GetMediaResult::operator=(GetMediaResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentType = std::move(toMove.m_contentType);
   m_payload = std::move(toMove.m_payload);

   return *this;
}

GetMediaResult::GetMediaResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetMediaResult& GetMediaResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_payload = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

   return *this;
}

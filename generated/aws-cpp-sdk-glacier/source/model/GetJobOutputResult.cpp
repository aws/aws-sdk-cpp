/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/GetJobOutputResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetJobOutputResult::GetJobOutputResult() : 
    m_status(0)
{
}

GetJobOutputResult::GetJobOutputResult(GetJobOutputResult&& toMove) : 
    m_body(std::move(toMove.m_body)),
    m_checksum(std::move(toMove.m_checksum)),
    m_status(toMove.m_status),
    m_contentRange(std::move(toMove.m_contentRange)),
    m_acceptRanges(std::move(toMove.m_acceptRanges)),
    m_contentType(std::move(toMove.m_contentType)),
    m_archiveDescription(std::move(toMove.m_archiveDescription))
{
}

GetJobOutputResult& GetJobOutputResult::operator=(GetJobOutputResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_body = std::move(toMove.m_body);
   m_checksum = std::move(toMove.m_checksum);
   m_status = toMove.m_status;
   m_contentRange = std::move(toMove.m_contentRange);
   m_acceptRanges = std::move(toMove.m_acceptRanges);
   m_contentType = std::move(toMove.m_contentType);
   m_archiveDescription = std::move(toMove.m_archiveDescription);

   return *this;
}

GetJobOutputResult::GetJobOutputResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_status(0)
{
  *this = std::move(result);
}

GetJobOutputResult& GetJobOutputResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& checksumIter = headers.find("x-amz-sha256-tree-hash");
  if(checksumIter != headers.end())
  {
    m_checksum = checksumIter->second;
  }

  const auto& contentRangeIter = headers.find("content-range");
  if(contentRangeIter != headers.end())
  {
    m_contentRange = contentRangeIter->second;
  }

  const auto& acceptRangesIter = headers.find("accept-ranges");
  if(acceptRangesIter != headers.end())
  {
    m_acceptRanges = acceptRangesIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& archiveDescriptionIter = headers.find("x-amz-archive-description");
  if(archiveDescriptionIter != headers.end())
  {
    m_archiveDescription = archiveDescriptionIter->second;
  }

  m_status = static_cast<int>(result.GetResponseCode());

   return *this;
}

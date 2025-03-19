/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetLineageEventResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetLineageEventResult::GetLineageEventResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetLineageEventResult& GetLineageEventResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_event = result.TakeOwnershipOfPayload();
  m_eventHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& createdAtIter = headers.find("created-at");
  if(createdAtIter != headers.end())
  {
    m_createdAt = DateTime(createdAtIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_createdAt.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("DataZone::GetLineageEventResult", "Failed to parse createdAt header as an RFC822 timestamp: " << createdAtIter->second.c_str());
    }
    m_createdAtHasBeenSet = true;
  }

  const auto& createdByIter = headers.find("created-by");
  if(createdByIter != headers.end())
  {
    m_createdBy = createdByIter->second;
    m_createdByHasBeenSet = true;
  }

  const auto& domainIdIter = headers.find("domain-id");
  if(domainIdIter != headers.end())
  {
    m_domainId = domainIdIter->second;
    m_domainIdHasBeenSet = true;
  }

  const auto& eventTimeIter = headers.find("event-time");
  if(eventTimeIter != headers.end())
  {
    m_eventTime = DateTime(eventTimeIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_eventTime.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("DataZone::GetLineageEventResult", "Failed to parse eventTime header as an RFC822 timestamp: " << eventTimeIter->second.c_str());
    }
    m_eventTimeHasBeenSet = true;
  }

  const auto& idIter = headers.find("id");
  if(idIter != headers.end())
  {
    m_id = idIter->second;
    m_idHasBeenSet = true;
  }

  const auto& processingStatusIter = headers.find("processing-status");
  if(processingStatusIter != headers.end())
  {
    m_processingStatus = LineageEventProcessingStatusMapper::GetLineageEventProcessingStatusForName(processingStatusIter->second);
    m_processingStatusHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}

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

GetLineageEventResult::GetLineageEventResult() : 
    m_processingStatus(LineageEventProcessingStatus::NOT_SET)
{
}

GetLineageEventResult::GetLineageEventResult(GetLineageEventResult&& toMove) : 
    m_createdAt(std::move(toMove.m_createdAt)),
    m_createdBy(std::move(toMove.m_createdBy)),
    m_domainId(std::move(toMove.m_domainId)),
    m_event(std::move(toMove.m_event)),
    m_eventTime(std::move(toMove.m_eventTime)),
    m_id(std::move(toMove.m_id)),
    m_processingStatus(toMove.m_processingStatus),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetLineageEventResult& GetLineageEventResult::operator=(GetLineageEventResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_createdAt = std::move(toMove.m_createdAt);
   m_createdBy = std::move(toMove.m_createdBy);
   m_domainId = std::move(toMove.m_domainId);
   m_event = std::move(toMove.m_event);
   m_eventTime = std::move(toMove.m_eventTime);
   m_id = std::move(toMove.m_id);
   m_processingStatus = toMove.m_processingStatus;
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetLineageEventResult::GetLineageEventResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
  : GetLineageEventResult()
{
  *this = std::move(result);
}

GetLineageEventResult& GetLineageEventResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_event = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& createdAtIter = headers.find("created-at");
  if(createdAtIter != headers.end())
  {
    m_createdAt = DateTime(createdAtIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_createdAt.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("DataZone::GetLineageEventResult", "Failed to parse createdAt header as an RFC822 timestamp: " << createdAtIter->second.c_str());
    }
  }

  const auto& createdByIter = headers.find("created-by");
  if(createdByIter != headers.end())
  {
    m_createdBy = createdByIter->second;
  }

  const auto& domainIdIter = headers.find("domain-id");
  if(domainIdIter != headers.end())
  {
    m_domainId = domainIdIter->second;
  }

  const auto& eventTimeIter = headers.find("event-time");
  if(eventTimeIter != headers.end())
  {
    m_eventTime = DateTime(eventTimeIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_eventTime.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("DataZone::GetLineageEventResult", "Failed to parse eventTime header as an RFC822 timestamp: " << eventTimeIter->second.c_str());
    }
  }

  const auto& idIter = headers.find("id");
  if(idIter != headers.end())
  {
    m_id = idIter->second;
  }

  const auto& processingStatusIter = headers.find("processing-status");
  if(processingStatusIter != headers.end())
  {
    m_processingStatus = LineageEventProcessingStatusMapper::GetLineageEventProcessingStatusForName(processingStatusIter->second);
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}

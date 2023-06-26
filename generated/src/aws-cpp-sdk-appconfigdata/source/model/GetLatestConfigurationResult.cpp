/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/GetLatestConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::AppConfigData::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetLatestConfigurationResult::GetLatestConfigurationResult() : 
    m_nextPollIntervalInSeconds(0)
{
}

GetLatestConfigurationResult::GetLatestConfigurationResult(GetLatestConfigurationResult&& toMove) : 
    m_nextPollConfigurationToken(std::move(toMove.m_nextPollConfigurationToken)),
    m_nextPollIntervalInSeconds(toMove.m_nextPollIntervalInSeconds),
    m_contentType(std::move(toMove.m_contentType)),
    m_configuration(std::move(toMove.m_configuration)),
    m_versionLabel(std::move(toMove.m_versionLabel)),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetLatestConfigurationResult& GetLatestConfigurationResult::operator=(GetLatestConfigurationResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_nextPollConfigurationToken = std::move(toMove.m_nextPollConfigurationToken);
   m_nextPollIntervalInSeconds = toMove.m_nextPollIntervalInSeconds;
   m_contentType = std::move(toMove.m_contentType);
   m_configuration = std::move(toMove.m_configuration);
   m_versionLabel = std::move(toMove.m_versionLabel);
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetLatestConfigurationResult::GetLatestConfigurationResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_nextPollIntervalInSeconds(0)
{
  *this = std::move(result);
}

GetLatestConfigurationResult& GetLatestConfigurationResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_configuration = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& nextPollConfigurationTokenIter = headers.find("next-poll-configuration-token");
  if(nextPollConfigurationTokenIter != headers.end())
  {
    m_nextPollConfigurationToken = nextPollConfigurationTokenIter->second;
  }

  const auto& nextPollIntervalInSecondsIter = headers.find("next-poll-interval-in-seconds");
  if(nextPollIntervalInSecondsIter != headers.end())
  {
     m_nextPollIntervalInSeconds = StringUtils::ConvertToInt32(nextPollIntervalInSecondsIter->second.c_str());
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& versionLabelIter = headers.find("version-label");
  if(versionLabelIter != headers.end())
  {
    m_versionLabel = versionLabelIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}

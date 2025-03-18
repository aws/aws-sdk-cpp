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

GetLatestConfigurationResult::GetLatestConfigurationResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetLatestConfigurationResult& GetLatestConfigurationResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_configuration = result.TakeOwnershipOfPayload();
  m_configurationHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& nextPollConfigurationTokenIter = headers.find("next-poll-configuration-token");
  if(nextPollConfigurationTokenIter != headers.end())
  {
    m_nextPollConfigurationToken = nextPollConfigurationTokenIter->second;
    m_nextPollConfigurationTokenHasBeenSet = true;
  }

  const auto& nextPollIntervalInSecondsIter = headers.find("next-poll-interval-in-seconds");
  if(nextPollIntervalInSecondsIter != headers.end())
  {
    m_nextPollIntervalInSeconds = StringUtils::ConvertToInt32(nextPollIntervalInSecondsIter->second.c_str());
    m_nextPollIntervalInSecondsHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& versionLabelIter = headers.find("version-label");
  if(versionLabelIter != headers.end())
  {
    m_versionLabel = versionLabelIter->second;
    m_versionLabelHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}

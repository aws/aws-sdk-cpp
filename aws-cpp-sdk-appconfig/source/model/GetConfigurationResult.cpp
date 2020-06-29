/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationResult::GetConfigurationResult()
{
}

GetConfigurationResult::GetConfigurationResult(GetConfigurationResult&& toMove) : 
    m_content(std::move(toMove.m_content)),
    m_configurationVersion(std::move(toMove.m_configurationVersion)),
    m_contentType(std::move(toMove.m_contentType))
{
}

GetConfigurationResult& GetConfigurationResult::operator=(GetConfigurationResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_content = std::move(toMove.m_content);
   m_configurationVersion = std::move(toMove.m_configurationVersion);
   m_contentType = std::move(toMove.m_contentType);

   return *this;
}

GetConfigurationResult::GetConfigurationResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetConfigurationResult& GetConfigurationResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_content = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& configurationVersionIter = headers.find("configuration-version");
  if(configurationVersionIter != headers.end())
  {
    m_configurationVersion = configurationVersionIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

   return *this;
}

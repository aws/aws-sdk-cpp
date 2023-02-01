/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetHostedConfigurationVersionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetHostedConfigurationVersionResult::GetHostedConfigurationVersionResult() : 
    m_versionNumber(0)
{
}

GetHostedConfigurationVersionResult::GetHostedConfigurationVersionResult(GetHostedConfigurationVersionResult&& toMove) : 
    m_applicationId(std::move(toMove.m_applicationId)),
    m_configurationProfileId(std::move(toMove.m_configurationProfileId)),
    m_versionNumber(toMove.m_versionNumber),
    m_description(std::move(toMove.m_description)),
    m_content(std::move(toMove.m_content)),
    m_contentType(std::move(toMove.m_contentType))
{
}

GetHostedConfigurationVersionResult& GetHostedConfigurationVersionResult::operator=(GetHostedConfigurationVersionResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_applicationId = std::move(toMove.m_applicationId);
   m_configurationProfileId = std::move(toMove.m_configurationProfileId);
   m_versionNumber = toMove.m_versionNumber;
   m_description = std::move(toMove.m_description);
   m_content = std::move(toMove.m_content);
   m_contentType = std::move(toMove.m_contentType);

   return *this;
}

GetHostedConfigurationVersionResult::GetHostedConfigurationVersionResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_versionNumber(0)
{
  *this = std::move(result);
}

GetHostedConfigurationVersionResult& GetHostedConfigurationVersionResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_content = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& applicationIdIter = headers.find("application-id");
  if(applicationIdIter != headers.end())
  {
    m_applicationId = applicationIdIter->second;
  }

  const auto& configurationProfileIdIter = headers.find("configuration-profile-id");
  if(configurationProfileIdIter != headers.end())
  {
    m_configurationProfileId = configurationProfileIdIter->second;
  }

  const auto& versionNumberIter = headers.find("version-number");
  if(versionNumberIter != headers.end())
  {
     m_versionNumber = StringUtils::ConvertToInt32(versionNumberIter->second.c_str());
  }

  const auto& descriptionIter = headers.find("description");
  if(descriptionIter != headers.end())
  {
    m_description = descriptionIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

   return *this;
}

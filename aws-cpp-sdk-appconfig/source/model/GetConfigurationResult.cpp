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

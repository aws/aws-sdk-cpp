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

#include <aws/codeguruprofiler/model/GetProfileResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetProfileResult::GetProfileResult()
{
}

GetProfileResult::GetProfileResult(GetProfileResult&& toMove) : 
    m_contentEncoding(std::move(toMove.m_contentEncoding)),
    m_contentType(std::move(toMove.m_contentType)),
    m_profile(std::move(toMove.m_profile))
{
}

GetProfileResult& GetProfileResult::operator=(GetProfileResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_contentEncoding = std::move(toMove.m_contentEncoding);
   m_contentType = std::move(toMove.m_contentType);
   m_profile = std::move(toMove.m_profile);

   return *this;
}

GetProfileResult::GetProfileResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetProfileResult& GetProfileResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_profile = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentEncodingIter = headers.find("content-encoding");
  if(contentEncodingIter != headers.end())
  {
    m_contentEncoding = contentEncodingIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

   return *this;
}

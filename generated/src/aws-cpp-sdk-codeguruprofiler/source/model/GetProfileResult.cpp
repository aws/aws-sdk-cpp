/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

GetProfileResult::GetProfileResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetProfileResult& GetProfileResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_profile = result.TakeOwnershipOfPayload();
  m_profileHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentEncodingIter = headers.find("content-encoding");
  if(contentEncodingIter != headers.end())
  {
    m_contentEncoding = contentEncodingIter->second;
    m_contentEncodingHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}

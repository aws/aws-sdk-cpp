/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/DescribeObjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeObjectResult::DescribeObjectResult() : 
    m_contentLength(0)
{
}

DescribeObjectResult::DescribeObjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_contentLength(0)
{
  *this = result;
}

DescribeObjectResult& DescribeObjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& contentLengthIter = headers.find("content-length");
  if(contentLengthIter != headers.end())
  {
     m_contentLength = StringUtils::ConvertToInt64(contentLengthIter->second.c_str());
  }

  const auto& cacheControlIter = headers.find("cache-control");
  if(cacheControlIter != headers.end())
  {
    m_cacheControl = cacheControlIter->second;
  }

  const auto& lastModifiedIter = headers.find("last-modified");
  if(lastModifiedIter != headers.end())
  {
    m_lastModified = DateTime(lastModifiedIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
  }


  return *this;
}

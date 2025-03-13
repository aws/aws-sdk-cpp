/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/SendApiAssetResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

SendApiAssetResult::SendApiAssetResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

SendApiAssetResult& SendApiAssetResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();
  m_bodyHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  std::size_t prefixSize = sizeof("") - 1; //subtract the NULL terminator out
  for(const auto& item : headers)
  {
    std::size_t foundPrefix = item.first.find("");

    if(foundPrefix != std::string::npos)
    {
      m_responseHeaders[item.first.substr(prefixSize)] = item.second;
      m_responseHeadersHasBeenSet = true;
    }
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}

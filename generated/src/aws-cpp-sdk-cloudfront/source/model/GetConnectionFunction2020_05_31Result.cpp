/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/GetConnectionFunction2020_05_31Result.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionFunction2020_05_31Result::GetConnectionFunction2020_05_31Result(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  *this = std::move(result);
}

GetConnectionFunction2020_05_31Result& GetConnectionFunction2020_05_31Result::operator=(
    Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_connectionFunctionCode = result.TakeOwnershipOfPayload();
  m_connectionFunctionCodeHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& eTagIter = headers.find("etag");
  if (eTagIter != headers.end()) {
    m_eTag = eTagIter->second;
    m_eTagHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if (contentTypeIter != headers.end()) {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

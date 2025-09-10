/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpPayloadTraitsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpPayloadTraitsResult::HttpPayloadTraitsResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }

HttpPayloadTraitsResult& HttpPayloadTraitsResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_blob = result.TakeOwnershipOfPayload();
  m_blobHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& fooIter = headers.find("x-foo");
  if (fooIter != headers.end()) {
    m_foo = fooIter->second;
    m_fooHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/TestPayloadBlobResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

TestPayloadBlobResult::TestPayloadBlobResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }

TestPayloadBlobResult& TestPayloadBlobResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_data = result.TakeOwnershipOfPayload();
  m_dataHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

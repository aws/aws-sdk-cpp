/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpStringPayloadResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

HttpStringPayloadResult::HttpStringPayloadResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) { *this = std::move(result); }

HttpStringPayloadResult& HttpStringPayloadResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_payload = result.TakeOwnershipOfPayload();
  m_payloadHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

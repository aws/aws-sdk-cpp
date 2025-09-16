/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/ResponseCodeHttpFallbackResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResponseCodeHttpFallbackResult::ResponseCodeHttpFallbackResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ResponseCodeHttpFallbackResult& ResponseCodeHttpFallbackResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

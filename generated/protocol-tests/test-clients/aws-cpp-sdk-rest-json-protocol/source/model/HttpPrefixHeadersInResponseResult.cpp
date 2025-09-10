/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersInResponseResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

HttpPrefixHeadersInResponseResult::HttpPrefixHeadersInResponseResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

HttpPrefixHeadersInResponseResult& HttpPrefixHeadersInResponseResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  std::size_t prefixSize = sizeof("") - 1;  // subtract the NULL terminator out
  for (const auto& item : headers) {
    std::size_t foundPrefix = item.first.find("");

    if (foundPrefix != std::string::npos) {
      m_prefixHeaders[item.first.substr(prefixSize)] = item.second;
      m_prefixHeadersHasBeenSet = true;
    }
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

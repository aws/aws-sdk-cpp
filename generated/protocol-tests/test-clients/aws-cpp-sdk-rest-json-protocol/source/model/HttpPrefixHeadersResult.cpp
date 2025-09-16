/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

HttpPrefixHeadersResult::HttpPrefixHeadersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

HttpPrefixHeadersResult& HttpPrefixHeadersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& fooIter = headers.find("x-foo");
  if (fooIter != headers.end()) {
    m_foo = fooIter->second;
    m_fooHasBeenSet = true;
  }

  std::size_t prefixSize = sizeof("x-foo-") - 1;  // subtract the NULL terminator out
  for (const auto& item : headers) {
    std::size_t foundPrefix = item.first.find("x-foo-");

    if (foundPrefix != std::string::npos) {
      m_fooMap[item.first.substr(prefixSize)] = item.second;
      m_fooMapHasBeenSet = true;
    }
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

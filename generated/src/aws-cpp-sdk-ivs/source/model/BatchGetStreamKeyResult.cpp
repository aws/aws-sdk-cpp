/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ivs/model/BatchGetStreamKeyResult.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetStreamKeyResult::BatchGetStreamKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetStreamKeyResult& BatchGetStreamKeyResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("streamKeys")) {
    Aws::Utils::Array<JsonView> streamKeysJsonList = jsonValue.GetArray("streamKeys");
    for (unsigned streamKeysIndex = 0; streamKeysIndex < streamKeysJsonList.GetLength(); ++streamKeysIndex) {
      m_streamKeys.push_back(streamKeysJsonList[streamKeysIndex].AsObject());
    }
    m_streamKeysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& accessControlAllowOriginIter = headers.find("access-control-allow-origin");
  if (accessControlAllowOriginIter != headers.end()) {
    m_accessControlAllowOrigin = accessControlAllowOriginIter->second;
    m_accessControlAllowOriginHasBeenSet = true;
  }

  const auto& accessControlExposeHeadersIter = headers.find("access-control-expose-headers");
  if (accessControlExposeHeadersIter != headers.end()) {
    m_accessControlExposeHeaders = accessControlExposeHeadersIter->second;
    m_accessControlExposeHeadersHasBeenSet = true;
  }

  const auto& cacheControlIter = headers.find("cache-control");
  if (cacheControlIter != headers.end()) {
    m_cacheControl = cacheControlIter->second;
    m_cacheControlHasBeenSet = true;
  }

  const auto& contentSecurityPolicyIter = headers.find("content-security-policy");
  if (contentSecurityPolicyIter != headers.end()) {
    m_contentSecurityPolicy = contentSecurityPolicyIter->second;
    m_contentSecurityPolicyHasBeenSet = true;
  }

  const auto& strictTransportSecurityIter = headers.find("strict-transport-security");
  if (strictTransportSecurityIter != headers.end()) {
    m_strictTransportSecurity = strictTransportSecurityIter->second;
    m_strictTransportSecurityHasBeenSet = true;
  }

  const auto& xContentTypeOptionsIter = headers.find("x-content-type-options");
  if (xContentTypeOptionsIter != headers.end()) {
    m_xContentTypeOptions = xContentTypeOptionsIter->second;
    m_xContentTypeOptionsHasBeenSet = true;
  }

  const auto& xFrameOptionsIter = headers.find("x-frame-options");
  if (xFrameOptionsIter != headers.end()) {
    m_xFrameOptions = xFrameOptionsIter->second;
    m_xFrameOptionsHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

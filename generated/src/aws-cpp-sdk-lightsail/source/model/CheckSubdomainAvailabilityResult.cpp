/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lightsail/model/CheckSubdomainAvailabilityResult.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CheckSubdomainAvailabilityResult::CheckSubdomainAvailabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CheckSubdomainAvailabilityResult& CheckSubdomainAvailabilityResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("available")) {
    m_available = jsonValue.GetBool("available");
    m_availableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reservationExpiresAt")) {
    m_reservationExpiresAt = jsonValue.GetDouble("reservationExpiresAt");
    m_reservationExpiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subdomainName")) {
    m_subdomainName = jsonValue.GetString("subdomainName");
    m_subdomainNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

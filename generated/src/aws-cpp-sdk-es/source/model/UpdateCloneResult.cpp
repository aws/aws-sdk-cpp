/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/es/model/UpdateCloneResult.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateCloneResult::UpdateCloneResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateCloneResult& UpdateCloneResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DomainName")) {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChangeId")) {
    m_changeId = jsonValue.GetString("ChangeId");
    m_changeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CutoverOptions")) {
    m_cutoverOptions = jsonValue.GetObject("CutoverOptions");
    m_cutoverOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrafficSplitOptions")) {
    m_trafficSplitOptions = jsonValue.GetObject("TrafficSplitOptions");
    m_trafficSplitOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetentionOptions")) {
    m_retentionOptions = jsonValue.GetObject("RetentionOptions");
    m_retentionOptionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

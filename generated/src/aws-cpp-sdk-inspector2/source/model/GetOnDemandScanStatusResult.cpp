/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/inspector2/model/GetOnDemandScanStatusResult.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOnDemandScanStatusResult::GetOnDemandScanStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetOnDemandScanStatusResult& GetOnDemandScanStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("scanId")) {
    m_scanId = jsonValue.GetString("scanId");
    m_scanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = OnDemandResourceTypeMapper::GetOnDemandResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanStatus")) {
    m_scanStatus = OnDemandScanStatusMapper::GetOnDemandScanStatusForName(jsonValue.GetString("scanStatus"));
    m_scanStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanStatusReason")) {
    m_scanStatusReason = OnDemandScanStatusReasonMapper::GetOnDemandScanStatusReasonForName(jsonValue.GetString("scanStatusReason"));
    m_scanStatusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

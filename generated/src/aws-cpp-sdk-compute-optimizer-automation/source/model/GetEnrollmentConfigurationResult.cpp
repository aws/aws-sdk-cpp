/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/GetEnrollmentConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEnrollmentConfigurationResult::GetEnrollmentConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetEnrollmentConfigurationResult& GetEnrollmentConfigurationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("status")) {
    m_status = EnrollmentStatusMapper::GetEnrollmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationRuleMode")) {
    m_organizationRuleMode = OrganizationRuleModeMapper::GetOrganizationRuleModeForName(jsonValue.GetString("organizationRuleMode"));
    m_organizationRuleModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTimestamp")) {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("lastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

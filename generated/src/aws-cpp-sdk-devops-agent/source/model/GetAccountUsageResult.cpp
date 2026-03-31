/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/devops-agent/model/GetAccountUsageResult.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccountUsageResult::GetAccountUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAccountUsageResult& GetAccountUsageResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("monthlyAccountInvestigationHours")) {
    m_monthlyAccountInvestigationHours = jsonValue.GetObject("monthlyAccountInvestigationHours");
    m_monthlyAccountInvestigationHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("monthlyAccountEvaluationHours")) {
    m_monthlyAccountEvaluationHours = jsonValue.GetObject("monthlyAccountEvaluationHours");
    m_monthlyAccountEvaluationHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("monthlyAccountSystemLearningHours")) {
    m_monthlyAccountSystemLearningHours = jsonValue.GetObject("monthlyAccountSystemLearningHours");
    m_monthlyAccountSystemLearningHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("monthlyAccountOnDemandHours")) {
    m_monthlyAccountOnDemandHours = jsonValue.GetObject("monthlyAccountOnDemandHours");
    m_monthlyAccountOnDemandHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usagePeriodStartTime")) {
    m_usagePeriodStartTime = jsonValue.GetString("usagePeriodStartTime");
    m_usagePeriodStartTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usagePeriodEndTime")) {
    m_usagePeriodEndTime = jsonValue.GetString("usagePeriodEndTime");
    m_usagePeriodEndTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

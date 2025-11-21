/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/cost-optimization-hub/model/ListEfficiencyMetricsResult.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEfficiencyMetricsResult::ListEfficiencyMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListEfficiencyMetricsResult& ListEfficiencyMetricsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("efficiencyMetricsByGroup")) {
    Aws::Utils::Array<JsonView> efficiencyMetricsByGroupJsonList = jsonValue.GetArray("efficiencyMetricsByGroup");
    for (unsigned efficiencyMetricsByGroupIndex = 0; efficiencyMetricsByGroupIndex < efficiencyMetricsByGroupJsonList.GetLength();
         ++efficiencyMetricsByGroupIndex) {
      m_efficiencyMetricsByGroup.push_back(efficiencyMetricsByGroupJsonList[efficiencyMetricsByGroupIndex].AsObject());
    }
    m_efficiencyMetricsByGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

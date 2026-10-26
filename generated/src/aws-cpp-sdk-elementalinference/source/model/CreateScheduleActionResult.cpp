/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elementalinference/model/CreateScheduleActionResult.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateScheduleActionResult::CreateScheduleActionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateScheduleActionResult& CreateScheduleActionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("actionName")) {
    m_actionName = jsonValue.GetString("actionName");
    m_actionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startConfiguration")) {
    m_startConfiguration = jsonValue.GetObject("startConfiguration");
    m_startConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operations")) {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("operations");
    for (unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex) {
      m_operations.push_back(operationsJsonList[operationsIndex].AsObject());
    }
    m_operationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ScheduleActionStatusMapper::GetScheduleActionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

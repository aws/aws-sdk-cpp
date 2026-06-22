/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/logs/model/ListSyslogConfigurationsResult.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSyslogConfigurationsResult::ListSyslogConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSyslogConfigurationsResult& ListSyslogConfigurationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("syslogConfigurations")) {
    Aws::Utils::Array<JsonView> syslogConfigurationsJsonList = jsonValue.GetArray("syslogConfigurations");
    for (unsigned syslogConfigurationsIndex = 0; syslogConfigurationsIndex < syslogConfigurationsJsonList.GetLength();
         ++syslogConfigurationsIndex) {
      m_syslogConfigurations.push_back(syslogConfigurationsJsonList[syslogConfigurationsIndex].AsObject());
    }
    m_syslogConfigurationsHasBeenSet = true;
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

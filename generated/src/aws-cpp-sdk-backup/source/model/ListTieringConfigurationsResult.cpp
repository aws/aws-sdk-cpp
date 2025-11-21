/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListTieringConfigurationsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTieringConfigurationsResult::ListTieringConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListTieringConfigurationsResult& ListTieringConfigurationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("TieringConfigurations")) {
    Aws::Utils::Array<JsonView> tieringConfigurationsJsonList = jsonValue.GetArray("TieringConfigurations");
    for (unsigned tieringConfigurationsIndex = 0; tieringConfigurationsIndex < tieringConfigurationsJsonList.GetLength();
         ++tieringConfigurationsIndex) {
      m_tieringConfigurations.push_back(tieringConfigurationsJsonList[tieringConfigurationsIndex].AsObject());
    }
    m_tieringConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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

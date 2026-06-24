/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ListInstrumentationConfigurationsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstrumentationConfigurationsResult::ListInstrumentationConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListInstrumentationConfigurationsResult& ListInstrumentationConfigurationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Service")) {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Environment")) {
    m_environment = jsonValue.GetString("Environment");
    m_environmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Changed")) {
    m_changed = jsonValue.GetBool("Changed");
    m_changedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestConfigurations")) {
    Aws::Utils::Array<JsonView> latestConfigurationsJsonList = jsonValue.GetArray("LatestConfigurations");
    for (unsigned latestConfigurationsIndex = 0; latestConfigurationsIndex < latestConfigurationsJsonList.GetLength();
         ++latestConfigurationsIndex) {
      m_latestConfigurations.push_back(latestConfigurationsJsonList[latestConfigurationsIndex].AsObject());
    }
    m_latestConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SyncedAt")) {
    m_syncedAt = jsonValue.GetDouble("SyncedAt");
    m_syncedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SyncInterval")) {
    m_syncInterval = jsonValue.GetInteger("SyncInterval");
    m_syncIntervalHasBeenSet = true;
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

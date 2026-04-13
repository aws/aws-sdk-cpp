/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/deadline/model/GetMonitorSettingsResult.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMonitorSettingsResult::GetMonitorSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetMonitorSettingsResult& GetMonitorSettingsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("settings")) {
    Aws::Map<Aws::String, JsonView> settingsJsonMap = jsonValue.GetObject("settings").GetAllObjects();
    for (auto& settingsItem : settingsJsonMap) {
      m_settings[settingsItem.first] = settingsItem.second.AsString();
    }
    m_settingsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

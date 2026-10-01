/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/endusermessaging/model/ListNotifyCodeConfigurationsResult.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotifyCodeConfigurationsResult::ListNotifyCodeConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListNotifyCodeConfigurationsResult& ListNotifyCodeConfigurationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("notifyCodeConfigurations")) {
    Aws::Utils::Array<JsonView> notifyCodeConfigurationsJsonList = jsonValue.GetArray("notifyCodeConfigurations");
    for (unsigned notifyCodeConfigurationsIndex = 0; notifyCodeConfigurationsIndex < notifyCodeConfigurationsJsonList.GetLength();
         ++notifyCodeConfigurationsIndex) {
      m_notifyCodeConfigurations.push_back(notifyCodeConfigurationsJsonList[notifyCodeConfigurationsIndex].AsObject());
    }
    m_notifyCodeConfigurationsHasBeenSet = true;
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

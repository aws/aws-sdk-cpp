/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-web/model/GetWebAccountSettingsResult.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWebAccountSettingsResult::GetWebAccountSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetWebAccountSettingsResult& GetWebAccountSettingsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("accountQuotas")) {
    m_accountQuotas = jsonValue.GetObject("accountQuotas");
    m_accountQuotasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountUsage")) {
    m_accountUsage = jsonValue.GetObject("accountUsage");
    m_accountUsageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

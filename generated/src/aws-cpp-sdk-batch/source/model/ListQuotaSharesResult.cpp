/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ListQuotaSharesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQuotaSharesResult::ListQuotaSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListQuotaSharesResult& ListQuotaSharesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("quotaShares")) {
    Aws::Utils::Array<JsonView> quotaSharesJsonList = jsonValue.GetArray("quotaShares");
    for (unsigned quotaSharesIndex = 0; quotaSharesIndex < quotaSharesJsonList.GetLength(); ++quotaSharesIndex) {
      m_quotaShares.push_back(quotaSharesJsonList[quotaSharesIndex].AsObject());
    }
    m_quotaSharesHasBeenSet = true;
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

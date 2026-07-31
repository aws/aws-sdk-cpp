/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ListEnterpriseSupportLinkedAccountChargesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnterpriseSupportLinkedAccountChargesResult::ListEnterpriseSupportLinkedAccountChargesResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListEnterpriseSupportLinkedAccountChargesResult& ListEnterpriseSupportLinkedAccountChargesResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("linkedAccount")) {
    Aws::Utils::Array<JsonView> linkedAccountJsonList = jsonValue.GetArray("linkedAccount");
    for (unsigned linkedAccountIndex = 0; linkedAccountIndex < linkedAccountJsonList.GetLength(); ++linkedAccountIndex) {
      m_linkedAccount.push_back(linkedAccountJsonList[linkedAccountIndex].AsObject());
    }
    m_linkedAccountHasBeenSet = true;
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

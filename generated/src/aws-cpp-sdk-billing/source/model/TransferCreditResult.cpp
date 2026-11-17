/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/TransferCreditResult.h>
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

TransferCreditResult::TransferCreditResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

TransferCreditResult& TransferCreditResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sourceCreditId")) {
    m_sourceCreditId = jsonValue.GetString("sourceCreditId");
    m_sourceCreditIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("newCreditId")) {
    m_newCreditId = jsonValue.GetString("newCreditId");
    m_newCreditIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationAccountId")) {
    m_destinationAccountId = jsonValue.GetString("destinationAccountId");
    m_destinationAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dryRun")) {
    m_dryRun = jsonValue.GetBool("dryRun");
    m_dryRunHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

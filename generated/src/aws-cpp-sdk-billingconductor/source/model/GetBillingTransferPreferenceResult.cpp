/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/GetBillingTransferPreferenceResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBillingTransferPreferenceResult::GetBillingTransferPreferenceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetBillingTransferPreferenceResult& GetBillingTransferPreferenceResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ResponsibilityTransferArn")) {
    m_responsibilityTransferArn = jsonValue.GetString("ResponsibilityTransferArn");
    m_responsibilityTransferArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoBillingTransferBillingGroupCreation")) {
    m_autoBillingTransferBillingGroupCreation = jsonValue.GetObject("AutoBillingTransferBillingGroupCreation");
    m_autoBillingTransferBillingGroupCreationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetInt64("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

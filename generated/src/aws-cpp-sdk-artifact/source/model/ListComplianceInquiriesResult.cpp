/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/ListComplianceInquiriesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Artifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComplianceInquiriesResult::ListComplianceInquiriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListComplianceInquiriesResult& ListComplianceInquiriesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("complianceInquiries")) {
    Aws::Utils::Array<JsonView> complianceInquiriesJsonList = jsonValue.GetArray("complianceInquiries");
    for (unsigned complianceInquiriesIndex = 0; complianceInquiriesIndex < complianceInquiriesJsonList.GetLength();
         ++complianceInquiriesIndex) {
      m_complianceInquiries.push_back(complianceInquiriesJsonList[complianceInquiriesIndex].AsObject());
    }
    m_complianceInquiriesHasBeenSet = true;
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListAcmeDomainValidationsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAcmeDomainValidationsResult::ListAcmeDomainValidationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAcmeDomainValidationsResult& ListAcmeDomainValidationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AcmeDomainValidations")) {
    Aws::Utils::Array<JsonView> acmeDomainValidationsJsonList = jsonValue.GetArray("AcmeDomainValidations");
    for (unsigned acmeDomainValidationsIndex = 0; acmeDomainValidationsIndex < acmeDomainValidationsJsonList.GetLength();
         ++acmeDomainValidationsIndex) {
      m_acmeDomainValidations.push_back(acmeDomainValidationsJsonList[acmeDomainValidationsIndex].AsObject());
    }
    m_acmeDomainValidationsHasBeenSet = true;
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

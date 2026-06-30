/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListAcmeExternalAccountBindingsResult.h>
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

ListAcmeExternalAccountBindingsResult::ListAcmeExternalAccountBindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListAcmeExternalAccountBindingsResult& ListAcmeExternalAccountBindingsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ExternalAccountBindings")) {
    Aws::Utils::Array<JsonView> externalAccountBindingsJsonList = jsonValue.GetArray("ExternalAccountBindings");
    for (unsigned externalAccountBindingsIndex = 0; externalAccountBindingsIndex < externalAccountBindingsJsonList.GetLength();
         ++externalAccountBindingsIndex) {
      m_externalAccountBindings.push_back(externalAccountBindingsJsonList[externalAccountBindingsIndex].AsObject());
    }
    m_externalAccountBindingsHasBeenSet = true;
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

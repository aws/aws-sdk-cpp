/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ListClientMetadataURLsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClientMetadataURLsResult::ListClientMetadataURLsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListClientMetadataURLsResult& ListClientMetadataURLsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientMetadataURLs")) {
    Aws::Utils::Array<JsonView> clientMetadataURLsJsonList = jsonValue.GetArray("ClientMetadataURLs");
    for (unsigned clientMetadataURLsIndex = 0; clientMetadataURLsIndex < clientMetadataURLsJsonList.GetLength();
         ++clientMetadataURLsIndex) {
      m_clientMetadataURLs.push_back(clientMetadataURLsJsonList[clientMetadataURLsIndex].AsObject());
    }
    m_clientMetadataURLsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

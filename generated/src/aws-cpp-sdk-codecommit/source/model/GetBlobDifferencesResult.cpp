/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetBlobDifferencesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBlobDifferencesResult::GetBlobDifferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBlobDifferencesResult& GetBlobDifferencesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("hunks")) {
    Aws::Utils::Array<JsonView> hunksJsonList = jsonValue.GetArray("hunks");
    for (unsigned hunksIndex = 0; hunksIndex < hunksJsonList.GetLength(); ++hunksIndex) {
      m_hunks.push_back(hunksJsonList[hunksIndex].AsObject());
    }
    m_hunksHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isBinary")) {
    m_isBinary = jsonValue.GetBool("isBinary");
    m_isBinaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("beforeBlobSize")) {
    m_beforeBlobSize = jsonValue.GetInt64("beforeBlobSize");
    m_beforeBlobSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterBlobSize")) {
    m_afterBlobSize = jsonValue.GetInt64("afterBlobSize");
    m_afterBlobSizeHasBeenSet = true;
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

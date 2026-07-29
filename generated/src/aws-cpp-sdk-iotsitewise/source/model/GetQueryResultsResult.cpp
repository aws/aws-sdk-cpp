/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/GetQueryResultsResult.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueryResultsResult::GetQueryResultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetQueryResultsResult& GetQueryResultsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("columnInfo")) {
    Aws::Utils::Array<JsonView> columnInfoJsonList = jsonValue.GetArray("columnInfo");
    for (unsigned columnInfoIndex = 0; columnInfoIndex < columnInfoJsonList.GetLength(); ++columnInfoIndex) {
      m_columnInfo.push_back(columnInfoJsonList[columnInfoIndex].AsObject());
    }
    m_columnInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rows")) {
    Aws::Utils::Array<JsonView> rowsJsonList = jsonValue.GetArray("rows");
    for (unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex) {
      Aws::Utils::Array<JsonView> result2JsonList = rowsJsonList[rowsIndex].AsArray();
      Aws::Vector<Aws::Crt::Optional<Aws::String>> result2List;
      result2List.reserve((size_t)result2JsonList.GetLength());
      for (unsigned result2Index = 0; result2Index < result2JsonList.GetLength(); ++result2Index) {
        if (result2JsonList[result2Index].IsNull()) {
          result2List.emplace_back();
          continue;
        }
        result2List.emplace_back(result2JsonList[result2Index].AsString());
      }
      m_rows.push_back(std::move(result2List));
    }
    m_rowsHasBeenSet = true;
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

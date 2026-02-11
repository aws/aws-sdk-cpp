/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetUsageResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsageResult::GetUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetUsageResult& GetUsageResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("usagePlanId")) {
    m_usagePlanId = jsonValue.GetString("usagePlanId");
    m_usagePlanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetString("startDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDate")) {
    m_endDate = jsonValue.GetString("endDate");
    m_endDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("position")) {
    m_position = jsonValue.GetString("position");
    m_positionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Map<Aws::String, JsonView> valuesJsonMap = jsonValue.GetObject("values").GetAllObjects();
    for (auto& valuesItem : valuesJsonMap) {
      Aws::Utils::Array<JsonView> listOfUsage2JsonList = valuesItem.second.AsArray();
      Aws::Vector<Aws::Vector<long long>> listOfUsage2List;
      listOfUsage2List.reserve((size_t)listOfUsage2JsonList.GetLength());
      for (unsigned listOfUsage2Index = 0; listOfUsage2Index < listOfUsage2JsonList.GetLength(); ++listOfUsage2Index) {
        Aws::Utils::Array<JsonView> listOfLong3JsonList = listOfUsage2JsonList[listOfUsage2Index].AsArray();
        Aws::Vector<long long> listOfLong3List;
        listOfLong3List.reserve((size_t)listOfLong3JsonList.GetLength());
        for (unsigned listOfLong3Index = 0; listOfLong3Index < listOfLong3JsonList.GetLength(); ++listOfLong3Index) {
          listOfLong3List.push_back(listOfLong3JsonList[listOfLong3Index].AsInt64());
        }
        listOfUsage2List.push_back(std::move(listOfLong3List));
      }
      m_items[valuesItem.first] = std::move(listOfUsage2List);
    }
    m_itemsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

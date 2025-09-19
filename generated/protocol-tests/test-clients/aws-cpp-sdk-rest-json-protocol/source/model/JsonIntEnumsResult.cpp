/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonIntEnumsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonIntEnumsResult::JsonIntEnumsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonIntEnumsResult& JsonIntEnumsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("integerEnum1")) {
    m_integerEnum1 = jsonValue.GetInteger("integerEnum1");
    m_integerEnum1HasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerEnum2")) {
    m_integerEnum2 = jsonValue.GetInteger("integerEnum2");
    m_integerEnum2HasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerEnum3")) {
    m_integerEnum3 = jsonValue.GetInteger("integerEnum3");
    m_integerEnum3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerEnumList")) {
    Aws::Utils::Array<JsonView> integerEnumListJsonList = jsonValue.GetArray("integerEnumList");
    for (unsigned integerEnumListIndex = 0; integerEnumListIndex < integerEnumListJsonList.GetLength(); ++integerEnumListIndex) {
      m_integerEnumList.push_back(integerEnumListJsonList[integerEnumListIndex].AsInteger());
    }
    m_integerEnumListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerEnumSet")) {
    Aws::Utils::Array<JsonView> integerEnumSetJsonList = jsonValue.GetArray("integerEnumSet");
    for (unsigned integerEnumSetIndex = 0; integerEnumSetIndex < integerEnumSetJsonList.GetLength(); ++integerEnumSetIndex) {
      m_integerEnumSet.push_back(integerEnumSetJsonList[integerEnumSetIndex].AsInteger());
    }
    m_integerEnumSetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerEnumMap")) {
    Aws::Map<Aws::String, JsonView> integerEnumMapJsonMap = jsonValue.GetObject("integerEnumMap").GetAllObjects();
    for (auto& integerEnumMapItem : integerEnumMapJsonMap) {
      m_integerEnumMap[integerEnumMapItem.first] = integerEnumMapItem.second.AsInteger();
    }
    m_integerEnumMapHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

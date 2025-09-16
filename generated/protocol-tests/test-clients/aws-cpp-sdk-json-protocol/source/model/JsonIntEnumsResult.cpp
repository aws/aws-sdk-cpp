/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/JsonIntEnumsResult.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonIntEnumsResult::JsonIntEnumsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonIntEnumsResult& JsonIntEnumsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("intEnum1")) {
    m_intEnum1 = jsonValue.GetInteger("intEnum1");
    m_intEnum1HasBeenSet = true;
  }
  if (jsonValue.ValueExists("intEnum2")) {
    m_intEnum2 = jsonValue.GetInteger("intEnum2");
    m_intEnum2HasBeenSet = true;
  }
  if (jsonValue.ValueExists("intEnum3")) {
    m_intEnum3 = jsonValue.GetInteger("intEnum3");
    m_intEnum3HasBeenSet = true;
  }
  if (jsonValue.ValueExists("intEnumList")) {
    Aws::Utils::Array<JsonView> intEnumListJsonList = jsonValue.GetArray("intEnumList");
    for (unsigned intEnumListIndex = 0; intEnumListIndex < intEnumListJsonList.GetLength(); ++intEnumListIndex) {
      m_intEnumList.push_back(intEnumListJsonList[intEnumListIndex].AsInteger());
    }
    m_intEnumListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intEnumSet")) {
    Aws::Utils::Array<JsonView> intEnumSetJsonList = jsonValue.GetArray("intEnumSet");
    for (unsigned intEnumSetIndex = 0; intEnumSetIndex < intEnumSetJsonList.GetLength(); ++intEnumSetIndex) {
      m_intEnumSet.push_back(intEnumSetJsonList[intEnumSetIndex].AsInteger());
    }
    m_intEnumSetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intEnumMap")) {
    Aws::Map<Aws::String, JsonView> intEnumMapJsonMap = jsonValue.GetObject("intEnumMap").GetAllObjects();
    for (auto& intEnumMapItem : intEnumMapJsonMap) {
      m_intEnumMap[intEnumMapItem.first] = intEnumMapItem.second.AsInteger();
    }
    m_intEnumMapHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

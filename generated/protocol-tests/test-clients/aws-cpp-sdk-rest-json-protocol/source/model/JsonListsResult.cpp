/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonListsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonListsResult::JsonListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonListsResult& JsonListsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("stringList")) {
    Aws::Utils::Array<JsonView> stringListJsonList = jsonValue.GetArray("stringList");
    for (unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex) {
      m_stringList.push_back(stringListJsonList[stringListIndex].AsString());
    }
    m_stringListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stringSet")) {
    Aws::Utils::Array<JsonView> stringSetJsonList = jsonValue.GetArray("stringSet");
    for (unsigned stringSetIndex = 0; stringSetIndex < stringSetJsonList.GetLength(); ++stringSetIndex) {
      m_stringSet.push_back(stringSetJsonList[stringSetIndex].AsString());
    }
    m_stringSetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integerList")) {
    Aws::Utils::Array<JsonView> integerListJsonList = jsonValue.GetArray("integerList");
    for (unsigned integerListIndex = 0; integerListIndex < integerListJsonList.GetLength(); ++integerListIndex) {
      m_integerList.push_back(integerListJsonList[integerListIndex].AsInteger());
    }
    m_integerListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("booleanList")) {
    Aws::Utils::Array<JsonView> booleanListJsonList = jsonValue.GetArray("booleanList");
    for (unsigned booleanListIndex = 0; booleanListIndex < booleanListJsonList.GetLength(); ++booleanListIndex) {
      m_booleanList.push_back(booleanListJsonList[booleanListIndex].AsBool());
    }
    m_booleanListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestampList")) {
    Aws::Utils::Array<JsonView> timestampListJsonList = jsonValue.GetArray("timestampList");
    for (unsigned timestampListIndex = 0; timestampListIndex < timestampListJsonList.GetLength(); ++timestampListIndex) {
      m_timestampList.push_back(timestampListJsonList[timestampListIndex].AsDouble());
    }
    m_timestampListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enumList")) {
    Aws::Utils::Array<JsonView> enumListJsonList = jsonValue.GetArray("enumList");
    for (unsigned enumListIndex = 0; enumListIndex < enumListJsonList.GetLength(); ++enumListIndex) {
      m_enumList.push_back(FooEnumMapper::GetFooEnumForName(enumListJsonList[enumListIndex].AsString()));
    }
    m_enumListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intEnumList")) {
    Aws::Utils::Array<JsonView> intEnumListJsonList = jsonValue.GetArray("intEnumList");
    for (unsigned intEnumListIndex = 0; intEnumListIndex < intEnumListJsonList.GetLength(); ++intEnumListIndex) {
      m_intEnumList.push_back(intEnumListJsonList[intEnumListIndex].AsInteger());
    }
    m_intEnumListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nestedStringList")) {
    Aws::Utils::Array<JsonView> nestedStringListJsonList = jsonValue.GetArray("nestedStringList");
    for (unsigned nestedStringListIndex = 0; nestedStringListIndex < nestedStringListJsonList.GetLength(); ++nestedStringListIndex) {
      Aws::Utils::Array<JsonView> stringListJsonList = nestedStringListJsonList[nestedStringListIndex].AsArray();
      Aws::Vector<Aws::String> stringListList;
      stringListList.reserve((size_t)stringListJsonList.GetLength());
      for (unsigned stringListIndex = 0; stringListIndex < stringListJsonList.GetLength(); ++stringListIndex) {
        stringListList.push_back(stringListJsonList[stringListIndex].AsString());
      }
      m_nestedStringList.push_back(std::move(stringListList));
    }
    m_nestedStringListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("myStructureList")) {
    Aws::Utils::Array<JsonView> myStructureListJsonList = jsonValue.GetArray("myStructureList");
    for (unsigned myStructureListIndex = 0; myStructureListIndex < myStructureListJsonList.GetLength(); ++myStructureListIndex) {
      m_structureList.push_back(myStructureListJsonList[myStructureListIndex].AsObject());
    }
    m_structureListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

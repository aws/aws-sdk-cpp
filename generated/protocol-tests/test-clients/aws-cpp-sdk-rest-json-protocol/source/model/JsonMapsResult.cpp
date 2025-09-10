/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonMapsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonMapsResult::JsonMapsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonMapsResult& JsonMapsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("denseStructMap")) {
    Aws::Map<Aws::String, JsonView> denseStructMapJsonMap = jsonValue.GetObject("denseStructMap").GetAllObjects();
    for (auto& denseStructMapItem : denseStructMapJsonMap) {
      m_denseStructMap[denseStructMapItem.first] = denseStructMapItem.second.AsObject();
    }
    m_denseStructMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("denseNumberMap")) {
    Aws::Map<Aws::String, JsonView> denseNumberMapJsonMap = jsonValue.GetObject("denseNumberMap").GetAllObjects();
    for (auto& denseNumberMapItem : denseNumberMapJsonMap) {
      m_denseNumberMap[denseNumberMapItem.first] = denseNumberMapItem.second.AsInteger();
    }
    m_denseNumberMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("denseBooleanMap")) {
    Aws::Map<Aws::String, JsonView> denseBooleanMapJsonMap = jsonValue.GetObject("denseBooleanMap").GetAllObjects();
    for (auto& denseBooleanMapItem : denseBooleanMapJsonMap) {
      m_denseBooleanMap[denseBooleanMapItem.first] = denseBooleanMapItem.second.AsBool();
    }
    m_denseBooleanMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("denseStringMap")) {
    Aws::Map<Aws::String, JsonView> denseStringMapJsonMap = jsonValue.GetObject("denseStringMap").GetAllObjects();
    for (auto& denseStringMapItem : denseStringMapJsonMap) {
      m_denseStringMap[denseStringMapItem.first] = denseStringMapItem.second.AsString();
    }
    m_denseStringMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("denseSetMap")) {
    Aws::Map<Aws::String, JsonView> denseSetMapJsonMap = jsonValue.GetObject("denseSetMap").GetAllObjects();
    for (auto& denseSetMapItem : denseSetMapJsonMap) {
      Aws::Utils::Array<JsonView> stringSetJsonList = denseSetMapItem.second.AsArray();
      Aws::Vector<Aws::String> stringSetList;
      stringSetList.reserve((size_t)stringSetJsonList.GetLength());
      for (unsigned stringSetIndex = 0; stringSetIndex < stringSetJsonList.GetLength(); ++stringSetIndex) {
        stringSetList.push_back(stringSetJsonList[stringSetIndex].AsString());
      }
      m_denseSetMap[denseSetMapItem.first] = std::move(stringSetList);
    }
    m_denseSetMapHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

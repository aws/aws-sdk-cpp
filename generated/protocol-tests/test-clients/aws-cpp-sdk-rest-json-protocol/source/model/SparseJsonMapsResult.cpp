/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/SparseJsonMapsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SparseJsonMapsResult::SparseJsonMapsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SparseJsonMapsResult& SparseJsonMapsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sparseStructMap")) {
    Aws::Map<Aws::String, JsonView> sparseStructMapJsonMap = jsonValue.GetObject("sparseStructMap").GetAllObjects();
    for (auto& sparseStructMapItem : sparseStructMapJsonMap) {
      if (sparseStructMapItem.second.IsNull()) {
        m_sparseStructMap[sparseStructMapItem.first];
        continue;
      }
      m_sparseStructMap[sparseStructMapItem.first] = sparseStructMapItem.second.AsObject();
    }
    m_sparseStructMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sparseNumberMap")) {
    Aws::Map<Aws::String, JsonView> sparseNumberMapJsonMap = jsonValue.GetObject("sparseNumberMap").GetAllObjects();
    for (auto& sparseNumberMapItem : sparseNumberMapJsonMap) {
      if (sparseNumberMapItem.second.IsNull()) {
        m_sparseNumberMap[sparseNumberMapItem.first];
        continue;
      }
      m_sparseNumberMap[sparseNumberMapItem.first] = sparseNumberMapItem.second.AsInteger();
    }
    m_sparseNumberMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sparseBooleanMap")) {
    Aws::Map<Aws::String, JsonView> sparseBooleanMapJsonMap = jsonValue.GetObject("sparseBooleanMap").GetAllObjects();
    for (auto& sparseBooleanMapItem : sparseBooleanMapJsonMap) {
      if (sparseBooleanMapItem.second.IsNull()) {
        m_sparseBooleanMap[sparseBooleanMapItem.first];
        continue;
      }
      m_sparseBooleanMap[sparseBooleanMapItem.first] = sparseBooleanMapItem.second.AsBool();
    }
    m_sparseBooleanMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sparseStringMap")) {
    Aws::Map<Aws::String, JsonView> sparseStringMapJsonMap = jsonValue.GetObject("sparseStringMap").GetAllObjects();
    for (auto& sparseStringMapItem : sparseStringMapJsonMap) {
      if (sparseStringMapItem.second.IsNull()) {
        m_sparseStringMap[sparseStringMapItem.first];
        continue;
      }
      m_sparseStringMap[sparseStringMapItem.first] = sparseStringMapItem.second.AsString();
    }
    m_sparseStringMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sparseSetMap")) {
    Aws::Map<Aws::String, JsonView> sparseSetMapJsonMap = jsonValue.GetObject("sparseSetMap").GetAllObjects();
    for (auto& sparseSetMapItem : sparseSetMapJsonMap) {
      if (sparseSetMapItem.second.IsNull()) {
        m_sparseSetMap[sparseSetMapItem.first];
        continue;
      }
      Aws::Utils::Array<JsonView> stringSet2JsonList = sparseSetMapItem.second.AsArray();
      Aws::Vector<Aws::String> stringSet2List;
      stringSet2List.reserve((size_t)stringSet2JsonList.GetLength());
      for (unsigned stringSet2Index = 0; stringSet2Index < stringSet2JsonList.GetLength(); ++stringSet2Index) {
        stringSet2List.push_back(stringSet2JsonList[stringSet2Index].AsString());
      }
      m_sparseSetMap[sparseSetMapItem.first] = std::move(stringSet2List);
    }
    m_sparseSetMapHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

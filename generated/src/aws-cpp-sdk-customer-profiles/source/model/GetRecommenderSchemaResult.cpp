/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/GetRecommenderSchemaResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommenderSchemaResult::GetRecommenderSchemaResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRecommenderSchemaResult& GetRecommenderSchemaResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RecommenderSchemaName")) {
    m_recommenderSchemaName = jsonValue.GetString("RecommenderSchemaName");
    m_recommenderSchemaNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Fields")) {
    Aws::Map<Aws::String, JsonView> fieldsJsonMap = jsonValue.GetObject("Fields").GetAllObjects();
    for (auto& fieldsItem : fieldsJsonMap) {
      Aws::Utils::Array<JsonView> recommenderSchemaFieldList2JsonList = fieldsItem.second.AsArray();
      Aws::Vector<RecommenderSchemaField> recommenderSchemaFieldList2List;
      recommenderSchemaFieldList2List.reserve((size_t)recommenderSchemaFieldList2JsonList.GetLength());
      for (unsigned recommenderSchemaFieldList2Index = 0;
           recommenderSchemaFieldList2Index < recommenderSchemaFieldList2JsonList.GetLength(); ++recommenderSchemaFieldList2Index) {
        recommenderSchemaFieldList2List.push_back(recommenderSchemaFieldList2JsonList[recommenderSchemaFieldList2Index].AsObject());
      }
      m_fields[fieldsItem.first] = std::move(recommenderSchemaFieldList2List);
    }
    m_fieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RecommenderSchemaStatusMapper::GetRecommenderSchemaStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

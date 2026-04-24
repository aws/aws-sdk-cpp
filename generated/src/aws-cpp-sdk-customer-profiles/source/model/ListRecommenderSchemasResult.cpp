/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/ListRecommenderSchemasResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecommenderSchemasResult::ListRecommenderSchemasResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListRecommenderSchemasResult& ListRecommenderSchemasResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommenderSchemas")) {
    Aws::Utils::Array<JsonView> recommenderSchemasJsonList = jsonValue.GetArray("RecommenderSchemas");
    for (unsigned recommenderSchemasIndex = 0; recommenderSchemasIndex < recommenderSchemasJsonList.GetLength();
         ++recommenderSchemasIndex) {
      m_recommenderSchemas.push_back(recommenderSchemasJsonList[recommenderSchemasIndex].AsObject());
    }
    m_recommenderSchemasHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

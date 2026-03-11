/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/ListRecommenderFiltersResult.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecommenderFiltersResult::ListRecommenderFiltersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListRecommenderFiltersResult& ListRecommenderFiltersResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommenderFilters")) {
    Aws::Utils::Array<JsonView> recommenderFiltersJsonList = jsonValue.GetArray("RecommenderFilters");
    for (unsigned recommenderFiltersIndex = 0; recommenderFiltersIndex < recommenderFiltersJsonList.GetLength();
         ++recommenderFiltersIndex) {
      m_recommenderFilters.push_back(recommenderFiltersJsonList[recommenderFiltersIndex].AsObject());
    }
    m_recommenderFiltersHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elementalinference/model/ListQuestionSetsResult.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQuestionSetsResult::ListQuestionSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListQuestionSetsResult& ListQuestionSetsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("questionSets")) {
    Aws::Utils::Array<JsonView> questionSetsJsonList = jsonValue.GetArray("questionSets");
    for (unsigned questionSetsIndex = 0; questionSetsIndex < questionSetsJsonList.GetLength(); ++questionSetsIndex) {
      m_questionSets.push_back(questionSetsJsonList[questionSetsIndex].AsObject());
    }
    m_questionSetsHasBeenSet = true;
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationDetailsResult.h>

#include <utility>

using namespace Aws::IAMToolbox::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRequestAuthorizationDetailsResult::GetRequestAuthorizationDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetRequestAuthorizationDetailsResult& GetRequestAuthorizationDetailsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("requestContext")) {
    Aws::Map<Aws::String, JsonView> requestContextJsonMap = jsonValue.GetObject("requestContext").GetAllObjects();
    for (auto& requestContextItem : requestContextJsonMap) {
      m_requestContext[requestContextItem.first] = requestContextItem.second.AsObject();
    }
    m_requestContextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("evaluations")) {
    Aws::Utils::Array<JsonView> evaluationsJsonList = jsonValue.GetArray("evaluations");
    for (unsigned evaluationsIndex = 0; evaluationsIndex < evaluationsJsonList.GetLength(); ++evaluationsIndex) {
      m_evaluations.push_back(evaluationsJsonList[evaluationsIndex].AsObject());
    }
    m_evaluationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policies")) {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("policies");
    for (unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex) {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
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

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListClassificationScopesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClassificationScopesResult::ListClassificationScopesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClassificationScopesResult& ListClassificationScopesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("classificationScopes"))
  {
    Aws::Utils::Array<JsonView> classificationScopesJsonList = jsonValue.GetArray("classificationScopes");
    for(unsigned classificationScopesIndex = 0; classificationScopesIndex < classificationScopesJsonList.GetLength(); ++classificationScopesIndex)
    {
      m_classificationScopes.push_back(classificationScopesJsonList[classificationScopesIndex].AsObject());
    }
    m_classificationScopesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

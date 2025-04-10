﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GetQuerySuggestionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQuerySuggestionsResult::GetQuerySuggestionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQuerySuggestionsResult& GetQuerySuggestionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QuerySuggestionsId"))
  {
    m_querySuggestionsId = jsonValue.GetString("QuerySuggestionsId");
    m_querySuggestionsIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Suggestions"))
  {
    Aws::Utils::Array<JsonView> suggestionsJsonList = jsonValue.GetArray("Suggestions");
    for(unsigned suggestionsIndex = 0; suggestionsIndex < suggestionsJsonList.GetLength(); ++suggestionsIndex)
    {
      m_suggestions.push_back(suggestionsJsonList[suggestionsIndex].AsObject());
    }
    m_suggestionsHasBeenSet = true;
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

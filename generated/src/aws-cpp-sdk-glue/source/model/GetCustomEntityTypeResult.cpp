﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetCustomEntityTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomEntityTypeResult::GetCustomEntityTypeResult()
{
}

GetCustomEntityTypeResult::GetCustomEntityTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCustomEntityTypeResult& GetCustomEntityTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("RegexString"))
  {
    m_regexString = jsonValue.GetString("RegexString");

  }

  if(jsonValue.ValueExists("ContextWords"))
  {
    Aws::Utils::Array<JsonView> contextWordsJsonList = jsonValue.GetArray("ContextWords");
    for(unsigned contextWordsIndex = 0; contextWordsIndex < contextWordsJsonList.GetLength(); ++contextWordsIndex)
    {
      m_contextWords.push_back(contextWordsJsonList[contextWordsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

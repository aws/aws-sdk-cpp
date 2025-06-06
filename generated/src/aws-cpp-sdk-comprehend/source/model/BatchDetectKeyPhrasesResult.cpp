﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BatchDetectKeyPhrasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDetectKeyPhrasesResult::BatchDetectKeyPhrasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDetectKeyPhrasesResult& BatchDetectKeyPhrasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResultList"))
  {
    Aws::Utils::Array<JsonView> resultListJsonList = jsonValue.GetArray("ResultList");
    for(unsigned resultListIndex = 0; resultListIndex < resultListJsonList.GetLength(); ++resultListIndex)
    {
      m_resultList.push_back(resultListJsonList[resultListIndex].AsObject());
    }
    m_resultListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorList"))
  {
    Aws::Utils::Array<JsonView> errorListJsonList = jsonValue.GetArray("ErrorList");
    for(unsigned errorListIndex = 0; errorListIndex < errorListJsonList.GetLength(); ++errorListIndex)
    {
      m_errorList.push_back(errorListJsonList[errorListIndex].AsObject());
    }
    m_errorListHasBeenSet = true;
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

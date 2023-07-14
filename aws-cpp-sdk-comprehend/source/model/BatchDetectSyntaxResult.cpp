﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BatchDetectSyntaxResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDetectSyntaxResult::BatchDetectSyntaxResult()
{
}

BatchDetectSyntaxResult::BatchDetectSyntaxResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDetectSyntaxResult& BatchDetectSyntaxResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResultList"))
  {
    Array<JsonView> resultListJsonList = jsonValue.GetArray("ResultList");
    for(unsigned resultListIndex = 0; resultListIndex < resultListJsonList.GetLength(); ++resultListIndex)
    {
      m_resultList.push_back(resultListJsonList[resultListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ErrorList"))
  {
    Array<JsonView> errorListJsonList = jsonValue.GetArray("ErrorList");
    for(unsigned errorListIndex = 0; errorListIndex < errorListJsonList.GetLength(); ++errorListIndex)
    {
      m_errorList.push_back(errorListJsonList[errorListIndex].AsObject());
    }
  }



  return *this;
}

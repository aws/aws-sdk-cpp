/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/BatchDetectDominantLanguageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDetectDominantLanguageResult::BatchDetectDominantLanguageResult()
{
}

BatchDetectDominantLanguageResult::BatchDetectDominantLanguageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDetectDominantLanguageResult& BatchDetectDominantLanguageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResultList"))
  {
    Aws::Utils::Array<JsonView> resultListJsonList = jsonValue.GetArray("ResultList");
    for(unsigned resultListIndex = 0; resultListIndex < resultListJsonList.GetLength(); ++resultListIndex)
    {
      m_resultList.push_back(resultListJsonList[resultListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ErrorList"))
  {
    Aws::Utils::Array<JsonView> errorListJsonList = jsonValue.GetArray("ErrorList");
    for(unsigned errorListIndex = 0; errorListIndex < errorListJsonList.GetLength(); ++errorListIndex)
    {
      m_errorList.push_back(errorListJsonList[errorListIndex].AsObject());
    }
  }



  return *this;
}

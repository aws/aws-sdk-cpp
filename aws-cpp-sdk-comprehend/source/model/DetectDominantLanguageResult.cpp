/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectDominantLanguageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectDominantLanguageResult::DetectDominantLanguageResult()
{
}

DetectDominantLanguageResult::DetectDominantLanguageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectDominantLanguageResult& DetectDominantLanguageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Languages"))
  {
    Aws::Utils::Array<JsonView> languagesJsonList = jsonValue.GetArray("Languages");
    for(unsigned languagesIndex = 0; languagesIndex < languagesJsonList.GetLength(); ++languagesIndex)
    {
      m_languages.push_back(languagesJsonList[languagesIndex].AsObject());
    }
  }



  return *this;
}

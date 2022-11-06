/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DetectKeyPhrasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectKeyPhrasesResult::DetectKeyPhrasesResult()
{
}

DetectKeyPhrasesResult::DetectKeyPhrasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectKeyPhrasesResult& DetectKeyPhrasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyPhrases"))
  {
    Aws::Utils::Array<JsonView> keyPhrasesJsonList = jsonValue.GetArray("KeyPhrases");
    for(unsigned keyPhrasesIndex = 0; keyPhrasesIndex < keyPhrasesJsonList.GetLength(); ++keyPhrasesIndex)
    {
      m_keyPhrases.push_back(keyPhrasesJsonList[keyPhrasesIndex].AsObject());
    }
  }



  return *this;
}

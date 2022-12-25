/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListDefaultVocabulariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDefaultVocabulariesResult::ListDefaultVocabulariesResult()
{
}

ListDefaultVocabulariesResult::ListDefaultVocabulariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDefaultVocabulariesResult& ListDefaultVocabulariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DefaultVocabularyList"))
  {
    Aws::Utils::Array<JsonView> defaultVocabularyListJsonList = jsonValue.GetArray("DefaultVocabularyList");
    for(unsigned defaultVocabularyListIndex = 0; defaultVocabularyListIndex < defaultVocabularyListJsonList.GetLength(); ++defaultVocabularyListIndex)
    {
      m_defaultVocabularyList.push_back(defaultVocabularyListJsonList[defaultVocabularyListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

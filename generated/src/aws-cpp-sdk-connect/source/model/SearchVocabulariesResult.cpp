/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchVocabulariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchVocabulariesResult::SearchVocabulariesResult()
{
}

SearchVocabulariesResult::SearchVocabulariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchVocabulariesResult& SearchVocabulariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VocabularySummaryList"))
  {
    Aws::Utils::Array<JsonView> vocabularySummaryListJsonList = jsonValue.GetArray("VocabularySummaryList");
    for(unsigned vocabularySummaryListIndex = 0; vocabularySummaryListIndex < vocabularySummaryListJsonList.GetLength(); ++vocabularySummaryListIndex)
    {
      m_vocabularySummaryList.push_back(vocabularySummaryListJsonList[vocabularySummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

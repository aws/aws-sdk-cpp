/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/ListLexiconsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLexiconsResult::ListLexiconsResult()
{
}

ListLexiconsResult::ListLexiconsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLexiconsResult& ListLexiconsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Lexicons"))
  {
    Aws::Utils::Array<JsonView> lexiconsJsonList = jsonValue.GetArray("Lexicons");
    for(unsigned lexiconsIndex = 0; lexiconsIndex < lexiconsJsonList.GetLength(); ++lexiconsIndex)
    {
      m_lexicons.push_back(lexiconsJsonList[lexiconsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

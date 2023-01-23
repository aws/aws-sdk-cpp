/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListEntityRecognizerSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEntityRecognizerSummariesResult::ListEntityRecognizerSummariesResult()
{
}

ListEntityRecognizerSummariesResult::ListEntityRecognizerSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEntityRecognizerSummariesResult& ListEntityRecognizerSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntityRecognizerSummariesList"))
  {
    Aws::Utils::Array<JsonView> entityRecognizerSummariesListJsonList = jsonValue.GetArray("EntityRecognizerSummariesList");
    for(unsigned entityRecognizerSummariesListIndex = 0; entityRecognizerSummariesListIndex < entityRecognizerSummariesListJsonList.GetLength(); ++entityRecognizerSummariesListIndex)
    {
      m_entityRecognizerSummariesList.push_back(entityRecognizerSummariesListJsonList[entityRecognizerSummariesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

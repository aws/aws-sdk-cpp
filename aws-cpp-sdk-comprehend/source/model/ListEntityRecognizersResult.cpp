/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListEntityRecognizersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEntityRecognizersResult::ListEntityRecognizersResult()
{
}

ListEntityRecognizersResult::ListEntityRecognizersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEntityRecognizersResult& ListEntityRecognizersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntityRecognizerPropertiesList"))
  {
    Aws::Utils::Array<JsonView> entityRecognizerPropertiesListJsonList = jsonValue.GetArray("EntityRecognizerPropertiesList");
    for(unsigned entityRecognizerPropertiesListIndex = 0; entityRecognizerPropertiesListIndex < entityRecognizerPropertiesListJsonList.GetLength(); ++entityRecognizerPropertiesListIndex)
    {
      m_entityRecognizerPropertiesList.push_back(entityRecognizerPropertiesListJsonList[entityRecognizerPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

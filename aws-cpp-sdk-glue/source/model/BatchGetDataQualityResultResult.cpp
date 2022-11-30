/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetDataQualityResultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDataQualityResultResult::BatchGetDataQualityResultResult()
{
}

BatchGetDataQualityResultResult::BatchGetDataQualityResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDataQualityResultResult& BatchGetDataQualityResultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Results"))
  {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("Results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      m_results.push_back(resultsJsonList[resultsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ResultsNotFound"))
  {
    Aws::Utils::Array<JsonView> resultsNotFoundJsonList = jsonValue.GetArray("ResultsNotFound");
    for(unsigned resultsNotFoundIndex = 0; resultsNotFoundIndex < resultsNotFoundJsonList.GetLength(); ++resultsNotFoundIndex)
    {
      m_resultsNotFound.push_back(resultsNotFoundJsonList[resultsNotFoundIndex].AsString());
    }
  }



  return *this;
}

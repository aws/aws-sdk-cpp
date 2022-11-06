/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/BatchEvaluateFeatureResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchEvaluateFeatureResult::BatchEvaluateFeatureResult()
{
}

BatchEvaluateFeatureResult::BatchEvaluateFeatureResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchEvaluateFeatureResult& BatchEvaluateFeatureResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("results"))
  {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      m_results.push_back(resultsJsonList[resultsIndex].AsObject());
    }
  }



  return *this;
}

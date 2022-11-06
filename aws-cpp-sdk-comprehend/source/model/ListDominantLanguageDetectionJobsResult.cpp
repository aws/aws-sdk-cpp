/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListDominantLanguageDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDominantLanguageDetectionJobsResult::ListDominantLanguageDetectionJobsResult()
{
}

ListDominantLanguageDetectionJobsResult::ListDominantLanguageDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDominantLanguageDetectionJobsResult& ListDominantLanguageDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DominantLanguageDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> dominantLanguageDetectionJobPropertiesListJsonList = jsonValue.GetArray("DominantLanguageDetectionJobPropertiesList");
    for(unsigned dominantLanguageDetectionJobPropertiesListIndex = 0; dominantLanguageDetectionJobPropertiesListIndex < dominantLanguageDetectionJobPropertiesListJsonList.GetLength(); ++dominantLanguageDetectionJobPropertiesListIndex)
    {
      m_dominantLanguageDetectionJobPropertiesList.push_back(dominantLanguageDetectionJobPropertiesListJsonList[dominantLanguageDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

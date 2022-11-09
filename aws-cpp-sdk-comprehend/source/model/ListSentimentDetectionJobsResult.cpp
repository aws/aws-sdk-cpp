/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListSentimentDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSentimentDetectionJobsResult::ListSentimentDetectionJobsResult()
{
}

ListSentimentDetectionJobsResult::ListSentimentDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSentimentDetectionJobsResult& ListSentimentDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SentimentDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> sentimentDetectionJobPropertiesListJsonList = jsonValue.GetArray("SentimentDetectionJobPropertiesList");
    for(unsigned sentimentDetectionJobPropertiesListIndex = 0; sentimentDetectionJobPropertiesListIndex < sentimentDetectionJobPropertiesListJsonList.GetLength(); ++sentimentDetectionJobPropertiesListIndex)
    {
      m_sentimentDetectionJobPropertiesList.push_back(sentimentDetectionJobPropertiesListJsonList[sentimentDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

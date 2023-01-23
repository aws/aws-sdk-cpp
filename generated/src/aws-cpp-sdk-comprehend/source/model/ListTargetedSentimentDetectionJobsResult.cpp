/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListTargetedSentimentDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTargetedSentimentDetectionJobsResult::ListTargetedSentimentDetectionJobsResult()
{
}

ListTargetedSentimentDetectionJobsResult::ListTargetedSentimentDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTargetedSentimentDetectionJobsResult& ListTargetedSentimentDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TargetedSentimentDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> targetedSentimentDetectionJobPropertiesListJsonList = jsonValue.GetArray("TargetedSentimentDetectionJobPropertiesList");
    for(unsigned targetedSentimentDetectionJobPropertiesListIndex = 0; targetedSentimentDetectionJobPropertiesListIndex < targetedSentimentDetectionJobPropertiesListJsonList.GetLength(); ++targetedSentimentDetectionJobPropertiesListIndex)
    {
      m_targetedSentimentDetectionJobPropertiesList.push_back(targetedSentimentDetectionJobPropertiesListJsonList[targetedSentimentDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListTopicsDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTopicsDetectionJobsResult::ListTopicsDetectionJobsResult()
{
}

ListTopicsDetectionJobsResult::ListTopicsDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTopicsDetectionJobsResult& ListTopicsDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TopicsDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> topicsDetectionJobPropertiesListJsonList = jsonValue.GetArray("TopicsDetectionJobPropertiesList");
    for(unsigned topicsDetectionJobPropertiesListIndex = 0; topicsDetectionJobPropertiesListIndex < topicsDetectionJobPropertiesListJsonList.GetLength(); ++topicsDetectionJobPropertiesListIndex)
    {
      m_topicsDetectionJobPropertiesList.push_back(topicsDetectionJobPropertiesListJsonList[topicsDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

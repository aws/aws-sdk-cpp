/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListEventsDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventsDetectionJobsResult::ListEventsDetectionJobsResult()
{
}

ListEventsDetectionJobsResult::ListEventsDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventsDetectionJobsResult& ListEventsDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventsDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> eventsDetectionJobPropertiesListJsonList = jsonValue.GetArray("EventsDetectionJobPropertiesList");
    for(unsigned eventsDetectionJobPropertiesListIndex = 0; eventsDetectionJobPropertiesListIndex < eventsDetectionJobPropertiesListJsonList.GetLength(); ++eventsDetectionJobPropertiesListIndex)
    {
      m_eventsDetectionJobPropertiesList.push_back(eventsDetectionJobPropertiesListJsonList[eventsDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

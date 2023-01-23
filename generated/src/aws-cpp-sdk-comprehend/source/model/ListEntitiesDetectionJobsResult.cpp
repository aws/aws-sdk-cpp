/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListEntitiesDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEntitiesDetectionJobsResult::ListEntitiesDetectionJobsResult()
{
}

ListEntitiesDetectionJobsResult::ListEntitiesDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEntitiesDetectionJobsResult& ListEntitiesDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntitiesDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> entitiesDetectionJobPropertiesListJsonList = jsonValue.GetArray("EntitiesDetectionJobPropertiesList");
    for(unsigned entitiesDetectionJobPropertiesListIndex = 0; entitiesDetectionJobPropertiesListIndex < entitiesDetectionJobPropertiesListJsonList.GetLength(); ++entitiesDetectionJobPropertiesListIndex)
    {
      m_entitiesDetectionJobPropertiesList.push_back(entitiesDetectionJobPropertiesListJsonList[entitiesDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

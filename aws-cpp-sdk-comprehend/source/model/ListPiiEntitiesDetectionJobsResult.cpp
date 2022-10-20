/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPiiEntitiesDetectionJobsResult::ListPiiEntitiesDetectionJobsResult()
{
}

ListPiiEntitiesDetectionJobsResult::ListPiiEntitiesDetectionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPiiEntitiesDetectionJobsResult& ListPiiEntitiesDetectionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PiiEntitiesDetectionJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> piiEntitiesDetectionJobPropertiesListJsonList = jsonValue.GetArray("PiiEntitiesDetectionJobPropertiesList");
    for(unsigned piiEntitiesDetectionJobPropertiesListIndex = 0; piiEntitiesDetectionJobPropertiesListIndex < piiEntitiesDetectionJobPropertiesListJsonList.GetLength(); ++piiEntitiesDetectionJobPropertiesListIndex)
    {
      m_piiEntitiesDetectionJobPropertiesList.push_back(piiEntitiesDetectionJobPropertiesListJsonList[piiEntitiesDetectionJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}

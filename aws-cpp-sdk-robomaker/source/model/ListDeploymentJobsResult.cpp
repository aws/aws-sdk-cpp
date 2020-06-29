/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListDeploymentJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeploymentJobsResult::ListDeploymentJobsResult()
{
}

ListDeploymentJobsResult::ListDeploymentJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeploymentJobsResult& ListDeploymentJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentJobs"))
  {
    Array<JsonView> deploymentJobsJsonList = jsonValue.GetArray("deploymentJobs");
    for(unsigned deploymentJobsIndex = 0; deploymentJobsIndex < deploymentJobsJsonList.GetLength(); ++deploymentJobsIndex)
    {
      m_deploymentJobs.push_back(deploymentJobsJsonList[deploymentJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

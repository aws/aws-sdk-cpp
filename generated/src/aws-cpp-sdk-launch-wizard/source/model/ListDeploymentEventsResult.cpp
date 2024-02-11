/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/ListDeploymentEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LaunchWizard::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeploymentEventsResult::ListDeploymentEventsResult()
{
}

ListDeploymentEventsResult::ListDeploymentEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeploymentEventsResult& ListDeploymentEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentEvents"))
  {
    Aws::Utils::Array<JsonView> deploymentEventsJsonList = jsonValue.GetArray("deploymentEvents");
    for(unsigned deploymentEventsIndex = 0; deploymentEventsIndex < deploymentEventsJsonList.GetLength(); ++deploymentEventsIndex)
    {
      m_deploymentEvents.push_back(deploymentEventsJsonList[deploymentEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsResult.h>
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

ListWorkloadDeploymentPatternsResult::ListWorkloadDeploymentPatternsResult()
{
}

ListWorkloadDeploymentPatternsResult::ListWorkloadDeploymentPatternsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkloadDeploymentPatternsResult& ListWorkloadDeploymentPatternsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workloadDeploymentPatterns"))
  {
    Aws::Utils::Array<JsonView> workloadDeploymentPatternsJsonList = jsonValue.GetArray("workloadDeploymentPatterns");
    for(unsigned workloadDeploymentPatternsIndex = 0; workloadDeploymentPatternsIndex < workloadDeploymentPatternsJsonList.GetLength(); ++workloadDeploymentPatternsIndex)
    {
      m_workloadDeploymentPatterns.push_back(workloadDeploymentPatternsJsonList[workloadDeploymentPatternsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

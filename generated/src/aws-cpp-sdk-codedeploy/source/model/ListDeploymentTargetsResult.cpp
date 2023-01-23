/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ListDeploymentTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeploymentTargetsResult::ListDeploymentTargetsResult()
{
}

ListDeploymentTargetsResult::ListDeploymentTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeploymentTargetsResult& ListDeploymentTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("targetIds"))
  {
    Aws::Utils::Array<JsonView> targetIdsJsonList = jsonValue.GetArray("targetIds");
    for(unsigned targetIdsIndex = 0; targetIdsIndex < targetIdsJsonList.GetLength(); ++targetIdsIndex)
    {
      m_targetIds.push_back(targetIdsJsonList[targetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

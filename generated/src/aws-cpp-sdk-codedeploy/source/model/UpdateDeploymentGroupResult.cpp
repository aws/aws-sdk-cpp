/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/UpdateDeploymentGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDeploymentGroupResult::UpdateDeploymentGroupResult()
{
}

UpdateDeploymentGroupResult::UpdateDeploymentGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateDeploymentGroupResult& UpdateDeploymentGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("hooksNotCleanedUp"))
  {
    Aws::Utils::Array<JsonView> hooksNotCleanedUpJsonList = jsonValue.GetArray("hooksNotCleanedUp");
    for(unsigned hooksNotCleanedUpIndex = 0; hooksNotCleanedUpIndex < hooksNotCleanedUpJsonList.GetLength(); ++hooksNotCleanedUpIndex)
    {
      m_hooksNotCleanedUp.push_back(hooksNotCleanedUpJsonList[hooksNotCleanedUpIndex].AsObject());
    }
  }



  return *this;
}

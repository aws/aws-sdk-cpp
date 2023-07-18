/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/GetStageDeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStageDeploymentResult::GetStageDeploymentResult()
{
}

GetStageDeploymentResult::GetStageDeploymentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStageDeploymentResult& GetStageDeploymentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StageDeployment"))
  {
    m_stageDeployment = jsonValue.GetObject("StageDeployment");

  }



  return *this;
}

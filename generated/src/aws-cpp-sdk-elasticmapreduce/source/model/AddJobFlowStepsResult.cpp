/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AddJobFlowStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddJobFlowStepsResult::AddJobFlowStepsResult()
{
}

AddJobFlowStepsResult::AddJobFlowStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddJobFlowStepsResult& AddJobFlowStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StepIds"))
  {
    Aws::Utils::Array<JsonView> stepIdsJsonList = jsonValue.GetArray("StepIds");
    for(unsigned stepIdsIndex = 0; stepIdsIndex < stepIdsJsonList.GetLength(); ++stepIdsIndex)
    {
      m_stepIds.push_back(stepIdsJsonList[stepIdsIndex].AsString());
    }
  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEC2InstanceRecommendationsResult::GetEC2InstanceRecommendationsResult()
{
}

GetEC2InstanceRecommendationsResult::GetEC2InstanceRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEC2InstanceRecommendationsResult& GetEC2InstanceRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("instanceRecommendations"))
  {
    Aws::Utils::Array<JsonView> instanceRecommendationsJsonList = jsonValue.GetArray("instanceRecommendations");
    for(unsigned instanceRecommendationsIndex = 0; instanceRecommendationsIndex < instanceRecommendationsJsonList.GetLength(); ++instanceRecommendationsIndex)
    {
      m_instanceRecommendations.push_back(instanceRecommendationsJsonList[instanceRecommendationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}

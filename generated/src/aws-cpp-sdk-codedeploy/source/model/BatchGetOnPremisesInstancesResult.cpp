/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetOnPremisesInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetOnPremisesInstancesResult::BatchGetOnPremisesInstancesResult()
{
}

BatchGetOnPremisesInstancesResult::BatchGetOnPremisesInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetOnPremisesInstancesResult& BatchGetOnPremisesInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("instanceInfos"))
  {
    Aws::Utils::Array<JsonView> instanceInfosJsonList = jsonValue.GetArray("instanceInfos");
    for(unsigned instanceInfosIndex = 0; instanceInfosIndex < instanceInfosJsonList.GetLength(); ++instanceInfosIndex)
    {
      m_instanceInfos.push_back(instanceInfosJsonList[instanceInfosIndex].AsObject());
    }
  }



  return *this;
}

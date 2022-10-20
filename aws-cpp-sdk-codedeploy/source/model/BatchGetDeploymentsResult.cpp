/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetDeploymentsResult::BatchGetDeploymentsResult()
{
}

BatchGetDeploymentsResult::BatchGetDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetDeploymentsResult& BatchGetDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentsInfo"))
  {
    Aws::Utils::Array<JsonView> deploymentsInfoJsonList = jsonValue.GetArray("deploymentsInfo");
    for(unsigned deploymentsInfoIndex = 0; deploymentsInfoIndex < deploymentsInfoJsonList.GetLength(); ++deploymentsInfoIndex)
    {
      m_deploymentsInfo.push_back(deploymentsInfoJsonList[deploymentsInfoIndex].AsObject());
    }
  }



  return *this;
}

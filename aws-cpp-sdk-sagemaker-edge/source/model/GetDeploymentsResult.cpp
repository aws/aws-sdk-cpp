﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/GetDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SagemakerEdgeManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDeploymentsResult::GetDeploymentsResult()
{
}

GetDeploymentsResult::GetDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDeploymentsResult& GetDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Deployments"))
  {
    Array<JsonView> deploymentsJsonList = jsonValue.GetArray("Deployments");
    for(unsigned deploymentsIndex = 0; deploymentsIndex < deploymentsJsonList.GetLength(); ++deploymentsIndex)
    {
      m_deployments.push_back(deploymentsJsonList[deploymentsIndex].AsObject());
    }
  }



  return *this;
}

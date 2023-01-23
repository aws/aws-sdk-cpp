/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/PutClusterCapacityProvidersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutClusterCapacityProvidersResult::PutClusterCapacityProvidersResult()
{
}

PutClusterCapacityProvidersResult::PutClusterCapacityProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutClusterCapacityProvidersResult& PutClusterCapacityProvidersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cluster"))
  {
    m_cluster = jsonValue.GetObject("cluster");

  }



  return *this;
}

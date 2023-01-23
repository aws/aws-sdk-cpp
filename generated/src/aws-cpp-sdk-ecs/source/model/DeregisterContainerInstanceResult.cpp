/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DeregisterContainerInstanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeregisterContainerInstanceResult::DeregisterContainerInstanceResult()
{
}

DeregisterContainerInstanceResult::DeregisterContainerInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeregisterContainerInstanceResult& DeregisterContainerInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("containerInstance"))
  {
    m_containerInstance = jsonValue.GetObject("containerInstance");

  }



  return *this;
}

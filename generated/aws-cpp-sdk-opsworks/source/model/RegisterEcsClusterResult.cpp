/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/RegisterEcsClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterEcsClusterResult::RegisterEcsClusterResult()
{
}

RegisterEcsClusterResult::RegisterEcsClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterEcsClusterResult& RegisterEcsClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EcsClusterArn"))
  {
    m_ecsClusterArn = jsonValue.GetString("EcsClusterArn");

  }



  return *this;
}

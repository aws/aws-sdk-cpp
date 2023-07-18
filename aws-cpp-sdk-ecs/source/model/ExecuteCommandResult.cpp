/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ExecuteCommandResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteCommandResult::ExecuteCommandResult() : 
    m_interactive(false)
{
}

ExecuteCommandResult::ExecuteCommandResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_interactive(false)
{
  *this = result;
}

ExecuteCommandResult& ExecuteCommandResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

  }

  if(jsonValue.ValueExists("containerArn"))
  {
    m_containerArn = jsonValue.GetString("containerArn");

  }

  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

  }

  if(jsonValue.ValueExists("interactive"))
  {
    m_interactive = jsonValue.GetBool("interactive");

  }

  if(jsonValue.ValueExists("session"))
  {
    m_session = jsonValue.GetObject("session");

  }

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

  }



  return *this;
}

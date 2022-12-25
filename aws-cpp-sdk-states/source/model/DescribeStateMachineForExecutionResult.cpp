/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeStateMachineForExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStateMachineForExecutionResult::DescribeStateMachineForExecutionResult()
{
}

DescribeStateMachineForExecutionResult::DescribeStateMachineForExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeStateMachineForExecutionResult& DescribeStateMachineForExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("stateMachineArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("updateDate"))
  {
    m_updateDate = jsonValue.GetDouble("updateDate");

  }

  if(jsonValue.ValueExists("loggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("loggingConfiguration");

  }

  if(jsonValue.ValueExists("tracingConfiguration"))
  {
    m_tracingConfiguration = jsonValue.GetObject("tracingConfiguration");

  }

  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");

  }

  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");

  }



  return *this;
}

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeStateMachineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStateMachineResult::DescribeStateMachineResult() : 
    m_status(StateMachineStatus::NOT_SET),
    m_type(StateMachineType::NOT_SET)
{
}

DescribeStateMachineResult::DescribeStateMachineResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(StateMachineStatus::NOT_SET),
    m_type(StateMachineType::NOT_SET)
{
  *this = result;
}

DescribeStateMachineResult& DescribeStateMachineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = StateMachineStatusMapper::GetStateMachineStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = StateMachineTypeMapper::GetStateMachineTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("loggingConfiguration"))
  {
    m_loggingConfiguration = jsonValue.GetObject("loggingConfiguration");

  }

  if(jsonValue.ValueExists("tracingConfiguration"))
  {
    m_tracingConfiguration = jsonValue.GetObject("tracingConfiguration");

  }

  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");

  }



  return *this;
}

/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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



  return *this;
}

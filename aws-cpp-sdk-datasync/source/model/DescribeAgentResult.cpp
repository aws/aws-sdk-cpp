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

#include <aws/datasync/model/DescribeAgentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAgentResult::DescribeAgentResult() : 
    m_status(AgentStatus::NOT_SET)
{
}

DescribeAgentResult::DescribeAgentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AgentStatus::NOT_SET)
{
  *this = result;
}

DescribeAgentResult& DescribeAgentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AgentArn"))
  {
    m_agentArn = jsonValue.GetString("AgentArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LastConnectionTime"))
  {
    m_lastConnectionTime = jsonValue.GetDouble("LastConnectionTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("EndpointOptions"))
  {
    m_endpointOptions = jsonValue.GetObject("EndpointOptions");

  }

  if(jsonValue.ValueExists("PrivateLinkConfig"))
  {
    m_privateLinkConfig = jsonValue.GetObject("PrivateLinkConfig");

  }



  return *this;
}

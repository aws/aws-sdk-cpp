/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_status(AgentStatus::NOT_SET),
    m_endpointType(EndpointType::NOT_SET)
{
}

DescribeAgentResult::DescribeAgentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(AgentStatus::NOT_SET),
    m_endpointType(EndpointType::NOT_SET)
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

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("EndpointType"));

  }

  if(jsonValue.ValueExists("PrivateLinkConfig"))
  {
    m_privateLinkConfig = jsonValue.GetObject("PrivateLinkConfig");

  }



  return *this;
}

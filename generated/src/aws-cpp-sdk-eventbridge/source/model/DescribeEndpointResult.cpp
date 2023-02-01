/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEndpointResult::DescribeEndpointResult() : 
    m_state(EndpointState::NOT_SET)
{
}

DescribeEndpointResult::DescribeEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(EndpointState::NOT_SET)
{
  *this = result;
}

DescribeEndpointResult& DescribeEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("RoutingConfig"))
  {
    m_routingConfig = jsonValue.GetObject("RoutingConfig");

  }

  if(jsonValue.ValueExists("ReplicationConfig"))
  {
    m_replicationConfig = jsonValue.GetObject("ReplicationConfig");

  }

  if(jsonValue.ValueExists("EventBuses"))
  {
    Aws::Utils::Array<JsonView> eventBusesJsonList = jsonValue.GetArray("EventBuses");
    for(unsigned eventBusesIndex = 0; eventBusesIndex < eventBusesJsonList.GetLength(); ++eventBusesIndex)
    {
      m_eventBuses.push_back(eventBusesJsonList[eventBusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");

  }

  if(jsonValue.ValueExists("EndpointUrl"))
  {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EndpointStateMapper::GetEndpointStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }



  return *this;
}

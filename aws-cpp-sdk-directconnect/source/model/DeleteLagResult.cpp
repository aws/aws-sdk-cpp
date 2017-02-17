/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/model/DeleteLagResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteLagResult::DeleteLagResult() : 
    m_numberOfConnections(0),
    m_lagState(LagState::NOT_SET),
    m_minimumLinks(0),
    m_allowsHostedConnections(false)
{
}

DeleteLagResult::DeleteLagResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfConnections(0),
    m_lagState(LagState::NOT_SET),
    m_minimumLinks(0),
    m_allowsHostedConnections(false)
{
  *this = result;
}

DeleteLagResult& DeleteLagResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("connectionsBandwidth"))
  {
    m_connectionsBandwidth = jsonValue.GetString("connectionsBandwidth");

  }

  if(jsonValue.ValueExists("numberOfConnections"))
  {
    m_numberOfConnections = jsonValue.GetInteger("numberOfConnections");

  }

  if(jsonValue.ValueExists("lagId"))
  {
    m_lagId = jsonValue.GetString("lagId");

  }

  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

  }

  if(jsonValue.ValueExists("lagName"))
  {
    m_lagName = jsonValue.GetString("lagName");

  }

  if(jsonValue.ValueExists("lagState"))
  {
    m_lagState = LagStateMapper::GetLagStateForName(jsonValue.GetString("lagState"));

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

  }

  if(jsonValue.ValueExists("minimumLinks"))
  {
    m_minimumLinks = jsonValue.GetInteger("minimumLinks");

  }

  if(jsonValue.ValueExists("awsDevice"))
  {
    m_awsDevice = jsonValue.GetString("awsDevice");

  }

  if(jsonValue.ValueExists("connections"))
  {
    Array<JsonValue> connectionsJsonList = jsonValue.GetArray("connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("allowsHostedConnections"))
  {
    m_allowsHostedConnections = jsonValue.GetBool("allowsHostedConnections");

  }



  return *this;
}

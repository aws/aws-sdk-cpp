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

#include <aws/directconnect/model/CreateLagResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateLagResult::CreateLagResult() : 
    m_numberOfConnections(0),
    m_lagState(LagState::NOT_SET),
    m_minimumLinks(0),
    m_allowsHostedConnections(false),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET)
{
}

CreateLagResult::CreateLagResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfConnections(0),
    m_lagState(LagState::NOT_SET),
    m_minimumLinks(0),
    m_allowsHostedConnections(false),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET)
{
  *this = result;
}

CreateLagResult& CreateLagResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("awsDeviceV2"))
  {
    m_awsDeviceV2 = jsonValue.GetString("awsDeviceV2");

  }

  if(jsonValue.ValueExists("connections"))
  {
    Array<JsonView> connectionsJsonList = jsonValue.GetArray("connections");
    for(unsigned connectionsIndex = 0; connectionsIndex < connectionsJsonList.GetLength(); ++connectionsIndex)
    {
      m_connections.push_back(connectionsJsonList[connectionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("allowsHostedConnections"))
  {
    m_allowsHostedConnections = jsonValue.GetBool("allowsHostedConnections");

  }

  if(jsonValue.ValueExists("jumboFrameCapable"))
  {
    m_jumboFrameCapable = jsonValue.GetBool("jumboFrameCapable");

  }

  if(jsonValue.ValueExists("hasLogicalRedundancy"))
  {
    m_hasLogicalRedundancy = HasLogicalRedundancyMapper::GetHasLogicalRedundancyForName(jsonValue.GetString("hasLogicalRedundancy"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}

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

#include <aws/directconnect/model/AllocateHostedConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AllocateHostedConnectionResult::AllocateHostedConnectionResult() : 
    m_connectionState(ConnectionState::NOT_SET),
    m_vlan(0),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET)
{
}

AllocateHostedConnectionResult::AllocateHostedConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectionState(ConnectionState::NOT_SET),
    m_vlan(0),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET)
{
  *this = result;
}

AllocateHostedConnectionResult& AllocateHostedConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");

  }

  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");

  }

  if(jsonValue.ValueExists("connectionName"))
  {
    m_connectionName = jsonValue.GetString("connectionName");

  }

  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("connectionState"));

  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

  }

  if(jsonValue.ValueExists("bandwidth"))
  {
    m_bandwidth = jsonValue.GetString("bandwidth");

  }

  if(jsonValue.ValueExists("vlan"))
  {
    m_vlan = jsonValue.GetInteger("vlan");

  }

  if(jsonValue.ValueExists("partnerName"))
  {
    m_partnerName = jsonValue.GetString("partnerName");

  }

  if(jsonValue.ValueExists("loaIssueTime"))
  {
    m_loaIssueTime = jsonValue.GetDouble("loaIssueTime");

  }

  if(jsonValue.ValueExists("lagId"))
  {
    m_lagId = jsonValue.GetString("lagId");

  }

  if(jsonValue.ValueExists("awsDevice"))
  {
    m_awsDevice = jsonValue.GetString("awsDevice");

  }

  if(jsonValue.ValueExists("jumboFrameCapable"))
  {
    m_jumboFrameCapable = jsonValue.GetBool("jumboFrameCapable");

  }

  if(jsonValue.ValueExists("awsDeviceV2"))
  {
    m_awsDeviceV2 = jsonValue.GetString("awsDeviceV2");

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

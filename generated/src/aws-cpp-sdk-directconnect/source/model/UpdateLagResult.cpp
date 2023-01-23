/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/UpdateLagResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLagResult::UpdateLagResult() : 
    m_numberOfConnections(0),
    m_lagState(LagState::NOT_SET),
    m_minimumLinks(0),
    m_allowsHostedConnections(false),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_macSecCapable(false)
{
}

UpdateLagResult::UpdateLagResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numberOfConnections(0),
    m_lagState(LagState::NOT_SET),
    m_minimumLinks(0),
    m_allowsHostedConnections(false),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_macSecCapable(false)
{
  *this = result;
}

UpdateLagResult& UpdateLagResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("awsLogicalDeviceId"))
  {
    m_awsLogicalDeviceId = jsonValue.GetString("awsLogicalDeviceId");

  }

  if(jsonValue.ValueExists("connections"))
  {
    Aws::Utils::Array<JsonView> connectionsJsonList = jsonValue.GetArray("connections");
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
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");

  }

  if(jsonValue.ValueExists("macSecCapable"))
  {
    m_macSecCapable = jsonValue.GetBool("macSecCapable");

  }

  if(jsonValue.ValueExists("encryptionMode"))
  {
    m_encryptionMode = jsonValue.GetString("encryptionMode");

  }

  if(jsonValue.ValueExists("macSecKeys"))
  {
    Aws::Utils::Array<JsonView> macSecKeysJsonList = jsonValue.GetArray("macSecKeys");
    for(unsigned macSecKeysIndex = 0; macSecKeysIndex < macSecKeysJsonList.GetLength(); ++macSecKeysIndex)
    {
      m_macSecKeys.push_back(macSecKeysJsonList[macSecKeysIndex].AsObject());
    }
  }



  return *this;
}

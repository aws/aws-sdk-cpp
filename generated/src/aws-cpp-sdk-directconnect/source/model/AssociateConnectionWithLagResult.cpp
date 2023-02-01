/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AssociateConnectionWithLagResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateConnectionWithLagResult::AssociateConnectionWithLagResult() : 
    m_connectionState(ConnectionState::NOT_SET),
    m_vlan(0),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_macSecCapable(false)
{
}

AssociateConnectionWithLagResult::AssociateConnectionWithLagResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectionState(ConnectionState::NOT_SET),
    m_vlan(0),
    m_jumboFrameCapable(false),
    m_hasLogicalRedundancy(HasLogicalRedundancy::NOT_SET),
    m_macSecCapable(false)
{
  *this = result;
}

AssociateConnectionWithLagResult& AssociateConnectionWithLagResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("awsLogicalDeviceId"))
  {
    m_awsLogicalDeviceId = jsonValue.GetString("awsLogicalDeviceId");

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

  if(jsonValue.ValueExists("portEncryptionStatus"))
  {
    m_portEncryptionStatus = jsonValue.GetString("portEncryptionStatus");

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

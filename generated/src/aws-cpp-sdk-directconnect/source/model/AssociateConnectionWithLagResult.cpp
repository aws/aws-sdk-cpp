/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AssociateConnectionWithLagResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateConnectionWithLagResult::AssociateConnectionWithLagResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateConnectionWithLagResult& AssociateConnectionWithLagResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ownerAccount"))
  {
    m_ownerAccount = jsonValue.GetString("ownerAccount");
    m_ownerAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");
    m_connectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionName"))
  {
    m_connectionName = jsonValue.GetString("connectionName");
    m_connectionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("connectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bandwidth"))
  {
    m_bandwidth = jsonValue.GetString("bandwidth");
    m_bandwidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vlan"))
  {
    m_vlan = jsonValue.GetInteger("vlan");
    m_vlanHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partnerName"))
  {
    m_partnerName = jsonValue.GetString("partnerName");
    m_partnerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loaIssueTime"))
  {
    m_loaIssueTime = jsonValue.GetDouble("loaIssueTime");
    m_loaIssueTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lagId"))
  {
    m_lagId = jsonValue.GetString("lagId");
    m_lagIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsDevice"))
  {
    m_awsDevice = jsonValue.GetString("awsDevice");
    m_awsDeviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jumboFrameCapable"))
  {
    m_jumboFrameCapable = jsonValue.GetBool("jumboFrameCapable");
    m_jumboFrameCapableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsDeviceV2"))
  {
    m_awsDeviceV2 = jsonValue.GetString("awsDeviceV2");
    m_awsDeviceV2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsLogicalDeviceId"))
  {
    m_awsLogicalDeviceId = jsonValue.GetString("awsLogicalDeviceId");
    m_awsLogicalDeviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hasLogicalRedundancy"))
  {
    m_hasLogicalRedundancy = HasLogicalRedundancyMapper::GetHasLogicalRedundancyForName(jsonValue.GetString("hasLogicalRedundancy"));
    m_hasLogicalRedundancyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerName"))
  {
    m_providerName = jsonValue.GetString("providerName");
    m_providerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("macSecCapable"))
  {
    m_macSecCapable = jsonValue.GetBool("macSecCapable");
    m_macSecCapableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("portEncryptionStatus"))
  {
    m_portEncryptionStatus = jsonValue.GetString("portEncryptionStatus");
    m_portEncryptionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionMode"))
  {
    m_encryptionMode = jsonValue.GetString("encryptionMode");
    m_encryptionModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("macSecKeys"))
  {
    Aws::Utils::Array<JsonView> macSecKeysJsonList = jsonValue.GetArray("macSecKeys");
    for(unsigned macSecKeysIndex = 0; macSecKeysIndex < macSecKeysJsonList.GetLength(); ++macSecKeysIndex)
    {
      m_macSecKeys.push_back(macSecKeysJsonList[macSecKeysIndex].AsObject());
    }
    m_macSecKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partnerInterconnectMacSecCapable"))
  {
    m_partnerInterconnectMacSecCapable = jsonValue.GetBool("partnerInterconnectMacSecCapable");
    m_partnerInterconnectMacSecCapableHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}

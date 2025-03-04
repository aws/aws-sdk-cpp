/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetManagedThingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetManagedThingResult::GetManagedThingResult() : 
    m_role(Role::NOT_SET),
    m_provisioningStatus(ProvisioningStatus::NOT_SET),
    m_hubNetworkMode(HubNetworkMode::NOT_SET)
{
}

GetManagedThingResult::GetManagedThingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetManagedThingResult()
{
  *this = result;
}

GetManagedThingResult& GetManagedThingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

  }

  if(jsonValue.ValueExists("CredentialLockerId"))
  {
    m_credentialLockerId = jsonValue.GetString("CredentialLockerId");

  }

  if(jsonValue.ValueExists("AdvertisedProductId"))
  {
    m_advertisedProductId = jsonValue.GetString("AdvertisedProductId");

  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoleMapper::GetRoleForName(jsonValue.GetString("Role"));

  }

  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = ProvisioningStatusMapper::GetProvisioningStatusForName(jsonValue.GetString("ProvisioningStatus"));

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");

  }

  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = jsonValue.GetString("Brand");

  }

  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");

  }

  if(jsonValue.ValueExists("UniversalProductCode"))
  {
    m_universalProductCode = jsonValue.GetString("UniversalProductCode");

  }

  if(jsonValue.ValueExists("InternationalArticleNumber"))
  {
    m_internationalArticleNumber = jsonValue.GetString("InternationalArticleNumber");

  }

  if(jsonValue.ValueExists("ConnectorPolicyId"))
  {
    m_connectorPolicyId = jsonValue.GetString("ConnectorPolicyId");

  }

  if(jsonValue.ValueExists("ConnectorDeviceId"))
  {
    m_connectorDeviceId = jsonValue.GetString("ConnectorDeviceId");

  }

  if(jsonValue.ValueExists("DeviceSpecificKey"))
  {
    m_deviceSpecificKey = jsonValue.GetString("DeviceSpecificKey");

  }

  if(jsonValue.ValueExists("MacAddress"))
  {
    m_macAddress = jsonValue.GetString("MacAddress");

  }

  if(jsonValue.ValueExists("ParentControllerId"))
  {
    m_parentControllerId = jsonValue.GetString("ParentControllerId");

  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }

  if(jsonValue.ValueExists("ActivatedAt"))
  {
    m_activatedAt = jsonValue.GetDouble("ActivatedAt");

  }

  if(jsonValue.ValueExists("HubNetworkMode"))
  {
    m_hubNetworkMode = HubNetworkModeMapper::GetHubNetworkModeForName(jsonValue.GetString("HubNetworkMode"));

  }

  if(jsonValue.ValueExists("MetaData"))
  {
    Aws::Map<Aws::String, JsonView> metaDataJsonMap = jsonValue.GetObject("MetaData").GetAllObjects();
    for(auto& metaDataItem : metaDataJsonMap)
    {
      m_metaData[metaDataItem.first] = metaDataItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}

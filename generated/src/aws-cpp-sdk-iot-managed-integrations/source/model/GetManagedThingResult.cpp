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

GetManagedThingResult::GetManagedThingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetManagedThingResult& GetManagedThingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CredentialLockerId"))
  {
    m_credentialLockerId = jsonValue.GetString("CredentialLockerId");
    m_credentialLockerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdvertisedProductId"))
  {
    m_advertisedProductId = jsonValue.GetString("AdvertisedProductId");
    m_advertisedProductIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoleMapper::GetRoleForName(jsonValue.GetString("Role"));
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = ProvisioningStatusMapper::GetProvisioningStatusForName(jsonValue.GetString("ProvisioningStatus"));
    m_provisioningStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");
    m_modelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = jsonValue.GetString("Brand");
    m_brandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");
    m_serialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UniversalProductCode"))
  {
    m_universalProductCode = jsonValue.GetString("UniversalProductCode");
    m_universalProductCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InternationalArticleNumber"))
  {
    m_internationalArticleNumber = jsonValue.GetString("InternationalArticleNumber");
    m_internationalArticleNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorDestinationId"))
  {
    m_connectorDestinationId = jsonValue.GetString("ConnectorDestinationId");
    m_connectorDestinationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorDeviceId"))
  {
    m_connectorDeviceId = jsonValue.GetString("ConnectorDeviceId");
    m_connectorDeviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeviceSpecificKey"))
  {
    m_deviceSpecificKey = jsonValue.GetString("DeviceSpecificKey");
    m_deviceSpecificKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MacAddress"))
  {
    m_macAddress = jsonValue.GetString("MacAddress");
    m_macAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParentControllerId"))
  {
    m_parentControllerId = jsonValue.GetString("ParentControllerId");
    m_parentControllerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");
    m_classificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActivatedAt"))
  {
    m_activatedAt = jsonValue.GetDouble("ActivatedAt");
    m_activatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HubNetworkMode"))
  {
    m_hubNetworkMode = HubNetworkModeMapper::GetHubNetworkModeForName(jsonValue.GetString("HubNetworkMode"));
    m_hubNetworkModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetaData"))
  {
    Aws::Map<Aws::String, JsonView> metaDataJsonMap = jsonValue.GetObject("MetaData").GetAllObjects();
    for(auto& metaDataItem : metaDataJsonMap)
    {
      m_metaData[metaDataItem.first] = metaDataItem.second.AsString();
    }
    m_metaDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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

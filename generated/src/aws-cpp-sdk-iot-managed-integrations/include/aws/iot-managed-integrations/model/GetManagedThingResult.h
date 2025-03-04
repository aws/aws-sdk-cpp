/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/Role.h>
#include <aws/iot-managed-integrations/model/ProvisioningStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot-managed-integrations/model/HubNetworkMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetManagedThingResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the managed thing.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetManagedThingResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetManagedThingResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetManagedThingResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the managed thing.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetManagedThingResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetManagedThingResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetManagedThingResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Owner of the device, usually an indication of whom the device belongs to.
     * This value should not contain personal identifiable information.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline void SetOwner(const Aws::String& value) { m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_owner.assign(value); }
    inline GetManagedThingResult& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline GetManagedThingResult& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline GetManagedThingResult& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the credential locker for the managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerId() const{ return m_credentialLockerId; }
    inline void SetCredentialLockerId(const Aws::String& value) { m_credentialLockerId = value; }
    inline void SetCredentialLockerId(Aws::String&& value) { m_credentialLockerId = std::move(value); }
    inline void SetCredentialLockerId(const char* value) { m_credentialLockerId.assign(value); }
    inline GetManagedThingResult& WithCredentialLockerId(const Aws::String& value) { SetCredentialLockerId(value); return *this;}
    inline GetManagedThingResult& WithCredentialLockerId(Aws::String&& value) { SetCredentialLockerId(std::move(value)); return *this;}
    inline GetManagedThingResult& WithCredentialLockerId(const char* value) { SetCredentialLockerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the advertised product.</p>
     */
    inline const Aws::String& GetAdvertisedProductId() const{ return m_advertisedProductId; }
    inline void SetAdvertisedProductId(const Aws::String& value) { m_advertisedProductId = value; }
    inline void SetAdvertisedProductId(Aws::String&& value) { m_advertisedProductId = std::move(value); }
    inline void SetAdvertisedProductId(const char* value) { m_advertisedProductId.assign(value); }
    inline GetManagedThingResult& WithAdvertisedProductId(const Aws::String& value) { SetAdvertisedProductId(value); return *this;}
    inline GetManagedThingResult& WithAdvertisedProductId(Aws::String&& value) { SetAdvertisedProductId(std::move(value)); return *this;}
    inline GetManagedThingResult& WithAdvertisedProductId(const char* value) { SetAdvertisedProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device used. This will be the Amazon Web Services hub controller,
     * cloud device, or IoT device.</p>
     */
    inline const Role& GetRole() const{ return m_role; }
    inline void SetRole(const Role& value) { m_role = value; }
    inline void SetRole(Role&& value) { m_role = std::move(value); }
    inline GetManagedThingResult& WithRole(const Role& value) { SetRole(value); return *this;}
    inline GetManagedThingResult& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the device in the provisioning workflow for
     * onboarding to IoT managed integrations.</p>
     */
    inline const ProvisioningStatus& GetProvisioningStatus() const{ return m_provisioningStatus; }
    inline void SetProvisioningStatus(const ProvisioningStatus& value) { m_provisioningStatus = value; }
    inline void SetProvisioningStatus(ProvisioningStatus&& value) { m_provisioningStatus = std::move(value); }
    inline GetManagedThingResult& WithProvisioningStatus(const ProvisioningStatus& value) { SetProvisioningStatus(value); return *this;}
    inline GetManagedThingResult& WithProvisioningStatus(ProvisioningStatus&& value) { SetProvisioningStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed thing representing the physical device.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetManagedThingResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetManagedThingResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetManagedThingResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model of the device.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline void SetModel(const Aws::String& value) { m_model = value; }
    inline void SetModel(Aws::String&& value) { m_model = std::move(value); }
    inline void SetModel(const char* value) { m_model.assign(value); }
    inline GetManagedThingResult& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline GetManagedThingResult& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline GetManagedThingResult& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brand of the device.</p>
     */
    inline const Aws::String& GetBrand() const{ return m_brand; }
    inline void SetBrand(const Aws::String& value) { m_brand = value; }
    inline void SetBrand(Aws::String&& value) { m_brand = std::move(value); }
    inline void SetBrand(const char* value) { m_brand.assign(value); }
    inline GetManagedThingResult& WithBrand(const Aws::String& value) { SetBrand(value); return *this;}
    inline GetManagedThingResult& WithBrand(Aws::String&& value) { SetBrand(std::move(value)); return *this;}
    inline GetManagedThingResult& WithBrand(const char* value) { SetBrand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumber.assign(value); }
    inline GetManagedThingResult& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline GetManagedThingResult& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline GetManagedThingResult& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universal product code (UPC) of the device model. The UPC is typically
     * used in the United States of America and Canada.</p>
     */
    inline const Aws::String& GetUniversalProductCode() const{ return m_universalProductCode; }
    inline void SetUniversalProductCode(const Aws::String& value) { m_universalProductCode = value; }
    inline void SetUniversalProductCode(Aws::String&& value) { m_universalProductCode = std::move(value); }
    inline void SetUniversalProductCode(const char* value) { m_universalProductCode.assign(value); }
    inline GetManagedThingResult& WithUniversalProductCode(const Aws::String& value) { SetUniversalProductCode(value); return *this;}
    inline GetManagedThingResult& WithUniversalProductCode(Aws::String&& value) { SetUniversalProductCode(std::move(value)); return *this;}
    inline GetManagedThingResult& WithUniversalProductCode(const char* value) { SetUniversalProductCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique 13 digit number that identifies the managed thing.</p>
     */
    inline const Aws::String& GetInternationalArticleNumber() const{ return m_internationalArticleNumber; }
    inline void SetInternationalArticleNumber(const Aws::String& value) { m_internationalArticleNumber = value; }
    inline void SetInternationalArticleNumber(Aws::String&& value) { m_internationalArticleNumber = std::move(value); }
    inline void SetInternationalArticleNumber(const char* value) { m_internationalArticleNumber.assign(value); }
    inline GetManagedThingResult& WithInternationalArticleNumber(const Aws::String& value) { SetInternationalArticleNumber(value); return *this;}
    inline GetManagedThingResult& WithInternationalArticleNumber(Aws::String&& value) { SetInternationalArticleNumber(std::move(value)); return *this;}
    inline GetManagedThingResult& WithInternationalArticleNumber(const char* value) { SetInternationalArticleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the connector policy.</p>  <p>This parameter is used for
     * cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorPolicyId() const{ return m_connectorPolicyId; }
    inline void SetConnectorPolicyId(const Aws::String& value) { m_connectorPolicyId = value; }
    inline void SetConnectorPolicyId(Aws::String&& value) { m_connectorPolicyId = std::move(value); }
    inline void SetConnectorPolicyId(const char* value) { m_connectorPolicyId.assign(value); }
    inline GetManagedThingResult& WithConnectorPolicyId(const Aws::String& value) { SetConnectorPolicyId(value); return *this;}
    inline GetManagedThingResult& WithConnectorPolicyId(Aws::String&& value) { SetConnectorPolicyId(std::move(value)); return *this;}
    inline GetManagedThingResult& WithConnectorPolicyId(const char* value) { SetConnectorPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third-party device id as defined by the connector. This device id must
     * not contain personal identifiable information (PII).</p>  <p>This
     * parameter is used for cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorDeviceId() const{ return m_connectorDeviceId; }
    inline void SetConnectorDeviceId(const Aws::String& value) { m_connectorDeviceId = value; }
    inline void SetConnectorDeviceId(Aws::String&& value) { m_connectorDeviceId = std::move(value); }
    inline void SetConnectorDeviceId(const char* value) { m_connectorDeviceId.assign(value); }
    inline GetManagedThingResult& WithConnectorDeviceId(const Aws::String& value) { SetConnectorDeviceId(value); return *this;}
    inline GetManagedThingResult& WithConnectorDeviceId(Aws::String&& value) { SetConnectorDeviceId(std::move(value)); return *this;}
    inline GetManagedThingResult& WithConnectorDeviceId(const char* value) { SetConnectorDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Zwave device-specific key used during device activation.</p>  <p>This
     * parameter is used for Zwave devices only.</p> 
     */
    inline const Aws::String& GetDeviceSpecificKey() const{ return m_deviceSpecificKey; }
    inline void SetDeviceSpecificKey(const Aws::String& value) { m_deviceSpecificKey = value; }
    inline void SetDeviceSpecificKey(Aws::String&& value) { m_deviceSpecificKey = std::move(value); }
    inline void SetDeviceSpecificKey(const char* value) { m_deviceSpecificKey.assign(value); }
    inline GetManagedThingResult& WithDeviceSpecificKey(const Aws::String& value) { SetDeviceSpecificKey(value); return *this;}
    inline GetManagedThingResult& WithDeviceSpecificKey(Aws::String&& value) { SetDeviceSpecificKey(std::move(value)); return *this;}
    inline GetManagedThingResult& WithDeviceSpecificKey(const char* value) { SetDeviceSpecificKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media access control (MAC) address for the device represented by the
     * managed thing.</p>  <p>This parameter is used for Zigbee devices only.</p>
     * 
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }
    inline void SetMacAddress(const Aws::String& value) { m_macAddress = value; }
    inline void SetMacAddress(Aws::String&& value) { m_macAddress = std::move(value); }
    inline void SetMacAddress(const char* value) { m_macAddress.assign(value); }
    inline GetManagedThingResult& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}
    inline GetManagedThingResult& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}
    inline GetManagedThingResult& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Id of the controller device used for the discovery job.</p>
     */
    inline const Aws::String& GetParentControllerId() const{ return m_parentControllerId; }
    inline void SetParentControllerId(const Aws::String& value) { m_parentControllerId = value; }
    inline void SetParentControllerId(Aws::String&& value) { m_parentControllerId = std::move(value); }
    inline void SetParentControllerId(const char* value) { m_parentControllerId.assign(value); }
    inline GetManagedThingResult& WithParentControllerId(const Aws::String& value) { SetParentControllerId(value); return *this;}
    inline GetManagedThingResult& WithParentControllerId(Aws::String&& value) { SetParentControllerId(std::move(value)); return *this;}
    inline GetManagedThingResult& WithParentControllerId(const char* value) { SetParentControllerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classification of the managed thing such as light bulb or thermostat.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }
    inline void SetClassification(const Aws::String& value) { m_classification = value; }
    inline void SetClassification(Aws::String&& value) { m_classification = std::move(value); }
    inline void SetClassification(const char* value) { m_classification.assign(value); }
    inline GetManagedThingResult& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}
    inline GetManagedThingResult& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}
    inline GetManagedThingResult& WithClassification(const char* value) { SetClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the device creation request occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetManagedThingResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetManagedThingResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the managed thing was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetManagedThingResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetManagedThingResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestampe value of when the device was activated.</p>
     */
    inline const Aws::Utils::DateTime& GetActivatedAt() const{ return m_activatedAt; }
    inline void SetActivatedAt(const Aws::Utils::DateTime& value) { m_activatedAt = value; }
    inline void SetActivatedAt(Aws::Utils::DateTime&& value) { m_activatedAt = std::move(value); }
    inline GetManagedThingResult& WithActivatedAt(const Aws::Utils::DateTime& value) { SetActivatedAt(value); return *this;}
    inline GetManagedThingResult& WithActivatedAt(Aws::Utils::DateTime&& value) { SetActivatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network mode for the hub-connected device.</p>
     */
    inline const HubNetworkMode& GetHubNetworkMode() const{ return m_hubNetworkMode; }
    inline void SetHubNetworkMode(const HubNetworkMode& value) { m_hubNetworkMode = value; }
    inline void SetHubNetworkMode(HubNetworkMode&& value) { m_hubNetworkMode = std::move(value); }
    inline GetManagedThingResult& WithHubNetworkMode(const HubNetworkMode& value) { SetHubNetworkMode(value); return *this;}
    inline GetManagedThingResult& WithHubNetworkMode(HubNetworkMode&& value) { SetHubNetworkMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetaData() const{ return m_metaData; }
    inline void SetMetaData(const Aws::Map<Aws::String, Aws::String>& value) { m_metaData = value; }
    inline void SetMetaData(Aws::Map<Aws::String, Aws::String>&& value) { m_metaData = std::move(value); }
    inline GetManagedThingResult& WithMetaData(const Aws::Map<Aws::String, Aws::String>& value) { SetMetaData(value); return *this;}
    inline GetManagedThingResult& WithMetaData(Aws::Map<Aws::String, Aws::String>&& value) { SetMetaData(std::move(value)); return *this;}
    inline GetManagedThingResult& AddMetaData(const Aws::String& key, const Aws::String& value) { m_metaData.emplace(key, value); return *this; }
    inline GetManagedThingResult& AddMetaData(Aws::String&& key, const Aws::String& value) { m_metaData.emplace(std::move(key), value); return *this; }
    inline GetManagedThingResult& AddMetaData(const Aws::String& key, Aws::String&& value) { m_metaData.emplace(key, std::move(value)); return *this; }
    inline GetManagedThingResult& AddMetaData(Aws::String&& key, Aws::String&& value) { m_metaData.emplace(std::move(key), std::move(value)); return *this; }
    inline GetManagedThingResult& AddMetaData(const char* key, Aws::String&& value) { m_metaData.emplace(key, std::move(value)); return *this; }
    inline GetManagedThingResult& AddMetaData(Aws::String&& key, const char* value) { m_metaData.emplace(std::move(key), value); return *this; }
    inline GetManagedThingResult& AddMetaData(const char* key, const char* value) { m_metaData.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetManagedThingResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetManagedThingResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetManagedThingResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetManagedThingResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetManagedThingResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetManagedThingResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetManagedThingResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetManagedThingResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetManagedThingResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedThingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedThingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedThingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_owner;

    Aws::String m_credentialLockerId;

    Aws::String m_advertisedProductId;

    Role m_role;

    ProvisioningStatus m_provisioningStatus;

    Aws::String m_name;

    Aws::String m_model;

    Aws::String m_brand;

    Aws::String m_serialNumber;

    Aws::String m_universalProductCode;

    Aws::String m_internationalArticleNumber;

    Aws::String m_connectorPolicyId;

    Aws::String m_connectorDeviceId;

    Aws::String m_deviceSpecificKey;

    Aws::String m_macAddress;

    Aws::String m_parentControllerId;

    Aws::String m_classification;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Utils::DateTime m_activatedAt;

    HubNetworkMode m_hubNetworkMode;

    Aws::Map<Aws::String, Aws::String> m_metaData;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

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
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the managed thing.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetManagedThingResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the managed thing.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetManagedThingResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Owner of the device, usually an indication of whom the device belongs to.
     * This value should not contain personal identifiable information.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    GetManagedThingResult& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the credential locker for the managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerId() const { return m_credentialLockerId; }
    template<typename CredentialLockerIdT = Aws::String>
    void SetCredentialLockerId(CredentialLockerIdT&& value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId = std::forward<CredentialLockerIdT>(value); }
    template<typename CredentialLockerIdT = Aws::String>
    GetManagedThingResult& WithCredentialLockerId(CredentialLockerIdT&& value) { SetCredentialLockerId(std::forward<CredentialLockerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the advertised product.</p>
     */
    inline const Aws::String& GetAdvertisedProductId() const { return m_advertisedProductId; }
    template<typename AdvertisedProductIdT = Aws::String>
    void SetAdvertisedProductId(AdvertisedProductIdT&& value) { m_advertisedProductIdHasBeenSet = true; m_advertisedProductId = std::forward<AdvertisedProductIdT>(value); }
    template<typename AdvertisedProductIdT = Aws::String>
    GetManagedThingResult& WithAdvertisedProductId(AdvertisedProductIdT&& value) { SetAdvertisedProductId(std::forward<AdvertisedProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device used. This will be the Amazon Web Services hub controller,
     * cloud device, or IoT device.</p>
     */
    inline Role GetRole() const { return m_role; }
    inline void SetRole(Role value) { m_roleHasBeenSet = true; m_role = value; }
    inline GetManagedThingResult& WithRole(Role value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the device in the provisioning workflow for
     * onboarding to IoT managed integrations.</p>
     */
    inline ProvisioningStatus GetProvisioningStatus() const { return m_provisioningStatus; }
    inline void SetProvisioningStatus(ProvisioningStatus value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline GetManagedThingResult& WithProvisioningStatus(ProvisioningStatus value) { SetProvisioningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed thing representing the physical device.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetManagedThingResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model of the device.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    GetManagedThingResult& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brand of the device.</p>
     */
    inline const Aws::String& GetBrand() const { return m_brand; }
    template<typename BrandT = Aws::String>
    void SetBrand(BrandT&& value) { m_brandHasBeenSet = true; m_brand = std::forward<BrandT>(value); }
    template<typename BrandT = Aws::String>
    GetManagedThingResult& WithBrand(BrandT&& value) { SetBrand(std::forward<BrandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    GetManagedThingResult& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The universal product code (UPC) of the device model. The UPC is typically
     * used in the United States of America and Canada.</p>
     */
    inline const Aws::String& GetUniversalProductCode() const { return m_universalProductCode; }
    template<typename UniversalProductCodeT = Aws::String>
    void SetUniversalProductCode(UniversalProductCodeT&& value) { m_universalProductCodeHasBeenSet = true; m_universalProductCode = std::forward<UniversalProductCodeT>(value); }
    template<typename UniversalProductCodeT = Aws::String>
    GetManagedThingResult& WithUniversalProductCode(UniversalProductCodeT&& value) { SetUniversalProductCode(std::forward<UniversalProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique 13 digit number that identifies the managed thing.</p>
     */
    inline const Aws::String& GetInternationalArticleNumber() const { return m_internationalArticleNumber; }
    template<typename InternationalArticleNumberT = Aws::String>
    void SetInternationalArticleNumber(InternationalArticleNumberT&& value) { m_internationalArticleNumberHasBeenSet = true; m_internationalArticleNumber = std::forward<InternationalArticleNumberT>(value); }
    template<typename InternationalArticleNumberT = Aws::String>
    GetManagedThingResult& WithInternationalArticleNumber(InternationalArticleNumberT&& value) { SetInternationalArticleNumber(std::forward<InternationalArticleNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the connector destination associated with this managed
     * thing.</p>
     */
    inline const Aws::String& GetConnectorDestinationId() const { return m_connectorDestinationId; }
    template<typename ConnectorDestinationIdT = Aws::String>
    void SetConnectorDestinationId(ConnectorDestinationIdT&& value) { m_connectorDestinationIdHasBeenSet = true; m_connectorDestinationId = std::forward<ConnectorDestinationIdT>(value); }
    template<typename ConnectorDestinationIdT = Aws::String>
    GetManagedThingResult& WithConnectorDestinationId(ConnectorDestinationIdT&& value) { SetConnectorDestinationId(std::forward<ConnectorDestinationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third-party device id as defined by the connector. This device id must
     * not contain personal identifiable information (PII).</p>  <p>This
     * parameter is used for cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorDeviceId() const { return m_connectorDeviceId; }
    template<typename ConnectorDeviceIdT = Aws::String>
    void SetConnectorDeviceId(ConnectorDeviceIdT&& value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId = std::forward<ConnectorDeviceIdT>(value); }
    template<typename ConnectorDeviceIdT = Aws::String>
    GetManagedThingResult& WithConnectorDeviceId(ConnectorDeviceIdT&& value) { SetConnectorDeviceId(std::forward<ConnectorDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Zwave device-specific key used during device activation.</p>  <p>This
     * parameter is used for Zwave devices only.</p> 
     */
    inline const Aws::String& GetDeviceSpecificKey() const { return m_deviceSpecificKey; }
    template<typename DeviceSpecificKeyT = Aws::String>
    void SetDeviceSpecificKey(DeviceSpecificKeyT&& value) { m_deviceSpecificKeyHasBeenSet = true; m_deviceSpecificKey = std::forward<DeviceSpecificKeyT>(value); }
    template<typename DeviceSpecificKeyT = Aws::String>
    GetManagedThingResult& WithDeviceSpecificKey(DeviceSpecificKeyT&& value) { SetDeviceSpecificKey(std::forward<DeviceSpecificKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media access control (MAC) address for the device represented by the
     * managed thing.</p>  <p>This parameter is used for Zigbee devices only.</p>
     * 
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    GetManagedThingResult& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Id of the controller device used for the discovery job.</p>
     */
    inline const Aws::String& GetParentControllerId() const { return m_parentControllerId; }
    template<typename ParentControllerIdT = Aws::String>
    void SetParentControllerId(ParentControllerIdT&& value) { m_parentControllerIdHasBeenSet = true; m_parentControllerId = std::forward<ParentControllerIdT>(value); }
    template<typename ParentControllerIdT = Aws::String>
    GetManagedThingResult& WithParentControllerId(ParentControllerIdT&& value) { SetParentControllerId(std::forward<ParentControllerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classification of the managed thing such as light bulb or thermostat.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    GetManagedThingResult& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the device creation request occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetManagedThingResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the managed thing was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetManagedThingResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestampe value of when the device was activated.</p>
     */
    inline const Aws::Utils::DateTime& GetActivatedAt() const { return m_activatedAt; }
    template<typename ActivatedAtT = Aws::Utils::DateTime>
    void SetActivatedAt(ActivatedAtT&& value) { m_activatedAtHasBeenSet = true; m_activatedAt = std::forward<ActivatedAtT>(value); }
    template<typename ActivatedAtT = Aws::Utils::DateTime>
    GetManagedThingResult& WithActivatedAt(ActivatedAtT&& value) { SetActivatedAt(std::forward<ActivatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network mode for the hub-connected device.</p>
     */
    inline HubNetworkMode GetHubNetworkMode() const { return m_hubNetworkMode; }
    inline void SetHubNetworkMode(HubNetworkMode value) { m_hubNetworkModeHasBeenSet = true; m_hubNetworkMode = value; }
    inline GetManagedThingResult& WithHubNetworkMode(HubNetworkMode value) { SetHubNetworkMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetaData() const { return m_metaData; }
    template<typename MetaDataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetaData(MetaDataT&& value) { m_metaDataHasBeenSet = true; m_metaData = std::forward<MetaDataT>(value); }
    template<typename MetaDataT = Aws::Map<Aws::String, Aws::String>>
    GetManagedThingResult& WithMetaData(MetaDataT&& value) { SetMetaData(std::forward<MetaDataT>(value)); return *this;}
    template<typename MetaDataKeyT = Aws::String, typename MetaDataValueT = Aws::String>
    GetManagedThingResult& AddMetaData(MetaDataKeyT&& key, MetaDataValueT&& value) {
      m_metaDataHasBeenSet = true; m_metaData.emplace(std::forward<MetaDataKeyT>(key), std::forward<MetaDataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetManagedThingResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetManagedThingResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetManagedThingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_credentialLockerId;
    bool m_credentialLockerIdHasBeenSet = false;

    Aws::String m_advertisedProductId;
    bool m_advertisedProductIdHasBeenSet = false;

    Role m_role{Role::NOT_SET};
    bool m_roleHasBeenSet = false;

    ProvisioningStatus m_provisioningStatus{ProvisioningStatus::NOT_SET};
    bool m_provisioningStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_brand;
    bool m_brandHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::String m_universalProductCode;
    bool m_universalProductCodeHasBeenSet = false;

    Aws::String m_internationalArticleNumber;
    bool m_internationalArticleNumberHasBeenSet = false;

    Aws::String m_connectorDestinationId;
    bool m_connectorDestinationIdHasBeenSet = false;

    Aws::String m_connectorDeviceId;
    bool m_connectorDeviceIdHasBeenSet = false;

    Aws::String m_deviceSpecificKey;
    bool m_deviceSpecificKeyHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_parentControllerId;
    bool m_parentControllerIdHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_activatedAt{};
    bool m_activatedAtHasBeenSet = false;

    HubNetworkMode m_hubNetworkMode{HubNetworkMode::NOT_SET};
    bool m_hubNetworkModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metaData;
    bool m_metaDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

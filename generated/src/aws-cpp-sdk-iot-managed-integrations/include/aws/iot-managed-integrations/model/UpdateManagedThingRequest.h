/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/CapabilityReport.h>
#include <aws/iot-managed-integrations/model/HubNetworkMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class UpdateManagedThingRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API UpdateManagedThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateManagedThing"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The id of the managed thing.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateManagedThingRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateManagedThingRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Owner of the device, usually an indication of whom the device belongs to.
     * This value should not contain personal identifiable information.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline UpdateManagedThingRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline UpdateManagedThingRequest& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the credential for the managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerId() const{ return m_credentialLockerId; }
    inline bool CredentialLockerIdHasBeenSet() const { return m_credentialLockerIdHasBeenSet; }
    inline void SetCredentialLockerId(const Aws::String& value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId = value; }
    inline void SetCredentialLockerId(Aws::String&& value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId = std::move(value); }
    inline void SetCredentialLockerId(const char* value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId.assign(value); }
    inline UpdateManagedThingRequest& WithCredentialLockerId(const Aws::String& value) { SetCredentialLockerId(value); return *this;}
    inline UpdateManagedThingRequest& WithCredentialLockerId(Aws::String&& value) { SetCredentialLockerId(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithCredentialLockerId(const char* value) { SetCredentialLockerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }
    inline UpdateManagedThingRequest& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline UpdateManagedThingRequest& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brand of the device.</p>
     */
    inline const Aws::String& GetBrand() const{ return m_brand; }
    inline bool BrandHasBeenSet() const { return m_brandHasBeenSet; }
    inline void SetBrand(const Aws::String& value) { m_brandHasBeenSet = true; m_brand = value; }
    inline void SetBrand(Aws::String&& value) { m_brandHasBeenSet = true; m_brand = std::move(value); }
    inline void SetBrand(const char* value) { m_brandHasBeenSet = true; m_brand.assign(value); }
    inline UpdateManagedThingRequest& WithBrand(const Aws::String& value) { SetBrand(value); return *this;}
    inline UpdateManagedThingRequest& WithBrand(Aws::String&& value) { SetBrand(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithBrand(const char* value) { SetBrand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model of the device.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline UpdateManagedThingRequest& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline UpdateManagedThingRequest& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed thing representing the physical device.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateManagedThingRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateManagedThingRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A report of the capabilities for the managed thing.</p>
     */
    inline const CapabilityReport& GetCapabilityReport() const{ return m_capabilityReport; }
    inline bool CapabilityReportHasBeenSet() const { return m_capabilityReportHasBeenSet; }
    inline void SetCapabilityReport(const CapabilityReport& value) { m_capabilityReportHasBeenSet = true; m_capabilityReport = value; }
    inline void SetCapabilityReport(CapabilityReport&& value) { m_capabilityReportHasBeenSet = true; m_capabilityReport = std::move(value); }
    inline UpdateManagedThingRequest& WithCapabilityReport(const CapabilityReport& value) { SetCapabilityReport(value); return *this;}
    inline UpdateManagedThingRequest& WithCapabilityReport(CapabilityReport&& value) { SetCapabilityReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities of the device such as light bulb.</p>
     */
    inline const Aws::String& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::String& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::String&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline void SetCapabilities(const char* value) { m_capabilitiesHasBeenSet = true; m_capabilities.assign(value); }
    inline UpdateManagedThingRequest& WithCapabilities(const Aws::String& value) { SetCapabilities(value); return *this;}
    inline UpdateManagedThingRequest& WithCapabilities(Aws::String&& value) { SetCapabilities(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithCapabilities(const char* value) { SetCapabilities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classification of the managed thing such as light bulb or thermostat.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }
    inline UpdateManagedThingRequest& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}
    inline UpdateManagedThingRequest& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& WithClassification(const char* value) { SetClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network mode for the hub-connected device.</p>
     */
    inline const HubNetworkMode& GetHubNetworkMode() const{ return m_hubNetworkMode; }
    inline bool HubNetworkModeHasBeenSet() const { return m_hubNetworkModeHasBeenSet; }
    inline void SetHubNetworkMode(const HubNetworkMode& value) { m_hubNetworkModeHasBeenSet = true; m_hubNetworkMode = value; }
    inline void SetHubNetworkMode(HubNetworkMode&& value) { m_hubNetworkModeHasBeenSet = true; m_hubNetworkMode = std::move(value); }
    inline UpdateManagedThingRequest& WithHubNetworkMode(const HubNetworkMode& value) { SetHubNetworkMode(value); return *this;}
    inline UpdateManagedThingRequest& WithHubNetworkMode(HubNetworkMode&& value) { SetHubNetworkMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetaData() const{ return m_metaData; }
    inline bool MetaDataHasBeenSet() const { return m_metaDataHasBeenSet; }
    inline void SetMetaData(const Aws::Map<Aws::String, Aws::String>& value) { m_metaDataHasBeenSet = true; m_metaData = value; }
    inline void SetMetaData(Aws::Map<Aws::String, Aws::String>&& value) { m_metaDataHasBeenSet = true; m_metaData = std::move(value); }
    inline UpdateManagedThingRequest& WithMetaData(const Aws::Map<Aws::String, Aws::String>& value) { SetMetaData(value); return *this;}
    inline UpdateManagedThingRequest& WithMetaData(Aws::Map<Aws::String, Aws::String>&& value) { SetMetaData(std::move(value)); return *this;}
    inline UpdateManagedThingRequest& AddMetaData(const Aws::String& key, const Aws::String& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, value); return *this; }
    inline UpdateManagedThingRequest& AddMetaData(Aws::String&& key, const Aws::String& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(std::move(key), value); return *this; }
    inline UpdateManagedThingRequest& AddMetaData(const Aws::String& key, Aws::String&& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, std::move(value)); return *this; }
    inline UpdateManagedThingRequest& AddMetaData(Aws::String&& key, Aws::String&& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateManagedThingRequest& AddMetaData(const char* key, Aws::String&& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, std::move(value)); return *this; }
    inline UpdateManagedThingRequest& AddMetaData(Aws::String&& key, const char* value) { m_metaDataHasBeenSet = true; m_metaData.emplace(std::move(key), value); return *this; }
    inline UpdateManagedThingRequest& AddMetaData(const char* key, const char* value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_credentialLockerId;
    bool m_credentialLockerIdHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::String m_brand;
    bool m_brandHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CapabilityReport m_capabilityReport;
    bool m_capabilityReportHasBeenSet = false;

    Aws::String m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    HubNetworkMode m_hubNetworkMode;
    bool m_hubNetworkModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metaData;
    bool m_metaDataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

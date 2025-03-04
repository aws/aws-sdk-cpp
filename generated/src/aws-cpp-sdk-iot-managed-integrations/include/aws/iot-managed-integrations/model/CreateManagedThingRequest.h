/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/iot-managed-integrations/model/Role.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/AuthMaterialType.h>
#include <aws/iot-managed-integrations/model/CapabilityReport.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class CreateManagedThingRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateManagedThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateManagedThing"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of device used. This will be the hub controller, cloud device, or
     * AWS IoT device.</p>
     */
    inline const Role& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline CreateManagedThingRequest& WithRole(const Role& value) { SetRole(value); return *this;}
    inline CreateManagedThingRequest& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}
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
    inline CreateManagedThingRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline CreateManagedThingRequest& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithOwner(const char* value) { SetOwner(value); return *this;}
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
    inline CreateManagedThingRequest& WithCredentialLockerId(const Aws::String& value) { SetCredentialLockerId(value); return *this;}
    inline CreateManagedThingRequest& WithCredentialLockerId(Aws::String&& value) { SetCredentialLockerId(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithCredentialLockerId(const char* value) { SetCredentialLockerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication material defining the device connectivity setup requests.
     * The authentication materials used are the device bar code.</p>
     */
    inline const Aws::String& GetAuthenticationMaterial() const{ return m_authenticationMaterial; }
    inline bool AuthenticationMaterialHasBeenSet() const { return m_authenticationMaterialHasBeenSet; }
    inline void SetAuthenticationMaterial(const Aws::String& value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial = value; }
    inline void SetAuthenticationMaterial(Aws::String&& value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial = std::move(value); }
    inline void SetAuthenticationMaterial(const char* value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial.assign(value); }
    inline CreateManagedThingRequest& WithAuthenticationMaterial(const Aws::String& value) { SetAuthenticationMaterial(value); return *this;}
    inline CreateManagedThingRequest& WithAuthenticationMaterial(Aws::String&& value) { SetAuthenticationMaterial(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithAuthenticationMaterial(const char* value) { SetAuthenticationMaterial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication material used for device connectivity setup
     * requests.</p>
     */
    inline const AuthMaterialType& GetAuthenticationMaterialType() const{ return m_authenticationMaterialType; }
    inline bool AuthenticationMaterialTypeHasBeenSet() const { return m_authenticationMaterialTypeHasBeenSet; }
    inline void SetAuthenticationMaterialType(const AuthMaterialType& value) { m_authenticationMaterialTypeHasBeenSet = true; m_authenticationMaterialType = value; }
    inline void SetAuthenticationMaterialType(AuthMaterialType&& value) { m_authenticationMaterialTypeHasBeenSet = true; m_authenticationMaterialType = std::move(value); }
    inline CreateManagedThingRequest& WithAuthenticationMaterialType(const AuthMaterialType& value) { SetAuthenticationMaterialType(value); return *this;}
    inline CreateManagedThingRequest& WithAuthenticationMaterialType(AuthMaterialType&& value) { SetAuthenticationMaterialType(std::move(value)); return *this;}
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
    inline CreateManagedThingRequest& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline CreateManagedThingRequest& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
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
    inline CreateManagedThingRequest& WithBrand(const Aws::String& value) { SetBrand(value); return *this;}
    inline CreateManagedThingRequest& WithBrand(Aws::String&& value) { SetBrand(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithBrand(const char* value) { SetBrand(value); return *this;}
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
    inline CreateManagedThingRequest& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline CreateManagedThingRequest& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithModel(const char* value) { SetModel(value); return *this;}
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
    inline CreateManagedThingRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateManagedThingRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A report of the capabilities for the managed thing.</p>
     */
    inline const CapabilityReport& GetCapabilityReport() const{ return m_capabilityReport; }
    inline bool CapabilityReportHasBeenSet() const { return m_capabilityReportHasBeenSet; }
    inline void SetCapabilityReport(const CapabilityReport& value) { m_capabilityReportHasBeenSet = true; m_capabilityReport = value; }
    inline void SetCapabilityReport(CapabilityReport&& value) { m_capabilityReportHasBeenSet = true; m_capabilityReport = std::move(value); }
    inline CreateManagedThingRequest& WithCapabilityReport(const CapabilityReport& value) { SetCapabilityReport(value); return *this;}
    inline CreateManagedThingRequest& WithCapabilityReport(CapabilityReport&& value) { SetCapabilityReport(std::move(value)); return *this;}
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
    inline CreateManagedThingRequest& WithCapabilities(const Aws::String& value) { SetCapabilities(value); return *this;}
    inline CreateManagedThingRequest& WithCapabilities(Aws::String&& value) { SetCapabilities(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithCapabilities(const char* value) { SetCapabilities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateManagedThingRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateManagedThingRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateManagedThingRequest& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}
    inline CreateManagedThingRequest& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}
    inline CreateManagedThingRequest& WithClassification(const char* value) { SetClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateManagedThingRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateManagedThingRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateManagedThingRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateManagedThingRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateManagedThingRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateManagedThingRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateManagedThingRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateManagedThingRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateManagedThingRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata for the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetaData() const{ return m_metaData; }
    inline bool MetaDataHasBeenSet() const { return m_metaDataHasBeenSet; }
    inline void SetMetaData(const Aws::Map<Aws::String, Aws::String>& value) { m_metaDataHasBeenSet = true; m_metaData = value; }
    inline void SetMetaData(Aws::Map<Aws::String, Aws::String>&& value) { m_metaDataHasBeenSet = true; m_metaData = std::move(value); }
    inline CreateManagedThingRequest& WithMetaData(const Aws::Map<Aws::String, Aws::String>& value) { SetMetaData(value); return *this;}
    inline CreateManagedThingRequest& WithMetaData(Aws::Map<Aws::String, Aws::String>&& value) { SetMetaData(std::move(value)); return *this;}
    inline CreateManagedThingRequest& AddMetaData(const Aws::String& key, const Aws::String& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, value); return *this; }
    inline CreateManagedThingRequest& AddMetaData(Aws::String&& key, const Aws::String& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(std::move(key), value); return *this; }
    inline CreateManagedThingRequest& AddMetaData(const Aws::String& key, Aws::String&& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, std::move(value)); return *this; }
    inline CreateManagedThingRequest& AddMetaData(Aws::String&& key, Aws::String&& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateManagedThingRequest& AddMetaData(const char* key, Aws::String&& value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, std::move(value)); return *this; }
    inline CreateManagedThingRequest& AddMetaData(Aws::String&& key, const char* value) { m_metaDataHasBeenSet = true; m_metaData.emplace(std::move(key), value); return *this; }
    inline CreateManagedThingRequest& AddMetaData(const char* key, const char* value) { m_metaDataHasBeenSet = true; m_metaData.emplace(key, value); return *this; }
    ///@}
  private:

    Role m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_credentialLockerId;
    bool m_credentialLockerIdHasBeenSet = false;

    Aws::String m_authenticationMaterial;
    bool m_authenticationMaterialHasBeenSet = false;

    AuthMaterialType m_authenticationMaterialType;
    bool m_authenticationMaterialTypeHasBeenSet = false;

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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metaData;
    bool m_metaDataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

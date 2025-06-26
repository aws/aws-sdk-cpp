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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot-managed-integrations/model/CapabilitySchemaItem.h>
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
    AWS_IOTMANAGEDINTEGRATIONS_API CreateManagedThingRequest() = default;

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
    inline Role GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(Role value) { m_roleHasBeenSet = true; m_role = value; }
    inline CreateManagedThingRequest& WithRole(Role value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Owner of the device, usually an indication of whom the device belongs to.
     * This value should not contain personal identifiable information.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    CreateManagedThingRequest& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the credential for the managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerId() const { return m_credentialLockerId; }
    inline bool CredentialLockerIdHasBeenSet() const { return m_credentialLockerIdHasBeenSet; }
    template<typename CredentialLockerIdT = Aws::String>
    void SetCredentialLockerId(CredentialLockerIdT&& value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId = std::forward<CredentialLockerIdT>(value); }
    template<typename CredentialLockerIdT = Aws::String>
    CreateManagedThingRequest& WithCredentialLockerId(CredentialLockerIdT&& value) { SetCredentialLockerId(std::forward<CredentialLockerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication material defining the device connectivity setup requests.
     * The authentication materials used are the device bar code.</p>
     */
    inline const Aws::String& GetAuthenticationMaterial() const { return m_authenticationMaterial; }
    inline bool AuthenticationMaterialHasBeenSet() const { return m_authenticationMaterialHasBeenSet; }
    template<typename AuthenticationMaterialT = Aws::String>
    void SetAuthenticationMaterial(AuthenticationMaterialT&& value) { m_authenticationMaterialHasBeenSet = true; m_authenticationMaterial = std::forward<AuthenticationMaterialT>(value); }
    template<typename AuthenticationMaterialT = Aws::String>
    CreateManagedThingRequest& WithAuthenticationMaterial(AuthenticationMaterialT&& value) { SetAuthenticationMaterial(std::forward<AuthenticationMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication material used for device connectivity setup
     * requests.</p>
     */
    inline AuthMaterialType GetAuthenticationMaterialType() const { return m_authenticationMaterialType; }
    inline bool AuthenticationMaterialTypeHasBeenSet() const { return m_authenticationMaterialTypeHasBeenSet; }
    inline void SetAuthenticationMaterialType(AuthMaterialType value) { m_authenticationMaterialTypeHasBeenSet = true; m_authenticationMaterialType = value; }
    inline CreateManagedThingRequest& WithAuthenticationMaterialType(AuthMaterialType value) { SetAuthenticationMaterialType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the device.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    CreateManagedThingRequest& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brand of the device.</p>
     */
    inline const Aws::String& GetBrand() const { return m_brand; }
    inline bool BrandHasBeenSet() const { return m_brandHasBeenSet; }
    template<typename BrandT = Aws::String>
    void SetBrand(BrandT&& value) { m_brandHasBeenSet = true; m_brand = std::forward<BrandT>(value); }
    template<typename BrandT = Aws::String>
    CreateManagedThingRequest& WithBrand(BrandT&& value) { SetBrand(std::forward<BrandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model of the device.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    CreateManagedThingRequest& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed thing representing the physical device.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateManagedThingRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A report of the capabilities for the managed thing.</p>
     */
    inline const CapabilityReport& GetCapabilityReport() const { return m_capabilityReport; }
    inline bool CapabilityReportHasBeenSet() const { return m_capabilityReportHasBeenSet; }
    template<typename CapabilityReportT = CapabilityReport>
    void SetCapabilityReport(CapabilityReportT&& value) { m_capabilityReportHasBeenSet = true; m_capabilityReport = std::forward<CapabilityReportT>(value); }
    template<typename CapabilityReportT = CapabilityReport>
    CreateManagedThingRequest& WithCapabilityReport(CapabilityReportT&& value) { SetCapabilityReport(std::forward<CapabilityReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capability schemas that define the functionality and features supported
     * by the managed thing, including device capabilities and their associated
     * properties.</p>
     */
    inline const Aws::Vector<CapabilitySchemaItem>& GetCapabilitySchemas() const { return m_capabilitySchemas; }
    inline bool CapabilitySchemasHasBeenSet() const { return m_capabilitySchemasHasBeenSet; }
    template<typename CapabilitySchemasT = Aws::Vector<CapabilitySchemaItem>>
    void SetCapabilitySchemas(CapabilitySchemasT&& value) { m_capabilitySchemasHasBeenSet = true; m_capabilitySchemas = std::forward<CapabilitySchemasT>(value); }
    template<typename CapabilitySchemasT = Aws::Vector<CapabilitySchemaItem>>
    CreateManagedThingRequest& WithCapabilitySchemas(CapabilitySchemasT&& value) { SetCapabilitySchemas(std::forward<CapabilitySchemasT>(value)); return *this;}
    template<typename CapabilitySchemasT = CapabilitySchemaItem>
    CreateManagedThingRequest& AddCapabilitySchemas(CapabilitySchemasT&& value) { m_capabilitySchemasHasBeenSet = true; m_capabilitySchemas.emplace_back(std::forward<CapabilitySchemasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The capabilities of the device such as light bulb.</p>
     */
    inline const Aws::String& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::String>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::String>
    CreateManagedThingRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateManagedThingRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The classification of the managed thing such as light bulb or thermostat.</p>
     */
    inline const Aws::String& GetClassification() const { return m_classification; }
    inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
    template<typename ClassificationT = Aws::String>
    void SetClassification(ClassificationT&& value) { m_classificationHasBeenSet = true; m_classification = std::forward<ClassificationT>(value); }
    template<typename ClassificationT = Aws::String>
    CreateManagedThingRequest& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of key/value pairs that are used to manage the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateManagedThingRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateManagedThingRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The metadata for the managed thing.</p>  <p>The
     * <code>managedThing</code> <code>metadata</code> parameter is used for
     * associating attributes with a <code>managedThing</code> that can be used for
     * grouping over-the-air (OTA) tasks. Name value pairs in <code>metadata</code> can
     * be used in the <code>OtaTargetQueryString</code> parameter for the
     * <code>CreateOtaTask</code> API operation.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetaData() const { return m_metaData; }
    inline bool MetaDataHasBeenSet() const { return m_metaDataHasBeenSet; }
    template<typename MetaDataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetaData(MetaDataT&& value) { m_metaDataHasBeenSet = true; m_metaData = std::forward<MetaDataT>(value); }
    template<typename MetaDataT = Aws::Map<Aws::String, Aws::String>>
    CreateManagedThingRequest& WithMetaData(MetaDataT&& value) { SetMetaData(std::forward<MetaDataT>(value)); return *this;}
    template<typename MetaDataKeyT = Aws::String, typename MetaDataValueT = Aws::String>
    CreateManagedThingRequest& AddMetaData(MetaDataKeyT&& key, MetaDataValueT&& value) {
      m_metaDataHasBeenSet = true; m_metaData.emplace(std::forward<MetaDataKeyT>(key), std::forward<MetaDataValueT>(value)); return *this;
    }
    ///@}
  private:

    Role m_role{Role::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_credentialLockerId;
    bool m_credentialLockerIdHasBeenSet = false;

    Aws::String m_authenticationMaterial;
    bool m_authenticationMaterialHasBeenSet = false;

    AuthMaterialType m_authenticationMaterialType{AuthMaterialType::NOT_SET};
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

    Aws::Vector<CapabilitySchemaItem> m_capabilitySchemas;
    bool m_capabilitySchemasHasBeenSet = false;

    Aws::String m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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

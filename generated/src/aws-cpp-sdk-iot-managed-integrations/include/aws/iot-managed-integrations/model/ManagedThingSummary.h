/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/ProvisioningStatus.h>
#include <aws/iot-managed-integrations/model/Role.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing one managed thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ManagedThingSummary">AWS
   * API Reference</a></p>
   */
  class ManagedThingSummary
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSummary();
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the device.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ManagedThingSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ManagedThingSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ManagedThingSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the managed thing.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ManagedThingSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ManagedThingSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ManagedThingSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the advertised product.</p>
     */
    inline const Aws::String& GetAdvertisedProductId() const{ return m_advertisedProductId; }
    inline bool AdvertisedProductIdHasBeenSet() const { return m_advertisedProductIdHasBeenSet; }
    inline void SetAdvertisedProductId(const Aws::String& value) { m_advertisedProductIdHasBeenSet = true; m_advertisedProductId = value; }
    inline void SetAdvertisedProductId(Aws::String&& value) { m_advertisedProductIdHasBeenSet = true; m_advertisedProductId = std::move(value); }
    inline void SetAdvertisedProductId(const char* value) { m_advertisedProductIdHasBeenSet = true; m_advertisedProductId.assign(value); }
    inline ManagedThingSummary& WithAdvertisedProductId(const Aws::String& value) { SetAdvertisedProductId(value); return *this;}
    inline ManagedThingSummary& WithAdvertisedProductId(Aws::String&& value) { SetAdvertisedProductId(std::move(value)); return *this;}
    inline ManagedThingSummary& WithAdvertisedProductId(const char* value) { SetAdvertisedProductId(value); return *this;}
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
    inline ManagedThingSummary& WithBrand(const Aws::String& value) { SetBrand(value); return *this;}
    inline ManagedThingSummary& WithBrand(Aws::String&& value) { SetBrand(std::move(value)); return *this;}
    inline ManagedThingSummary& WithBrand(const char* value) { SetBrand(value); return *this;}
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
    inline ManagedThingSummary& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}
    inline ManagedThingSummary& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}
    inline ManagedThingSummary& WithClassification(const char* value) { SetClassification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third-party device id as defined by the connector. This device id must
     * not contain personal identifiable information (PII).</p>  <p>This
     * parameter is used for cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorDeviceId() const{ return m_connectorDeviceId; }
    inline bool ConnectorDeviceIdHasBeenSet() const { return m_connectorDeviceIdHasBeenSet; }
    inline void SetConnectorDeviceId(const Aws::String& value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId = value; }
    inline void SetConnectorDeviceId(Aws::String&& value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId = std::move(value); }
    inline void SetConnectorDeviceId(const char* value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId.assign(value); }
    inline ManagedThingSummary& WithConnectorDeviceId(const Aws::String& value) { SetConnectorDeviceId(value); return *this;}
    inline ManagedThingSummary& WithConnectorDeviceId(Aws::String&& value) { SetConnectorDeviceId(std::move(value)); return *this;}
    inline ManagedThingSummary& WithConnectorDeviceId(const char* value) { SetConnectorDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the connector policy.</p>  <p>This parameter is used for
     * cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorPolicyId() const{ return m_connectorPolicyId; }
    inline bool ConnectorPolicyIdHasBeenSet() const { return m_connectorPolicyIdHasBeenSet; }
    inline void SetConnectorPolicyId(const Aws::String& value) { m_connectorPolicyIdHasBeenSet = true; m_connectorPolicyId = value; }
    inline void SetConnectorPolicyId(Aws::String&& value) { m_connectorPolicyIdHasBeenSet = true; m_connectorPolicyId = std::move(value); }
    inline void SetConnectorPolicyId(const char* value) { m_connectorPolicyIdHasBeenSet = true; m_connectorPolicyId.assign(value); }
    inline ManagedThingSummary& WithConnectorPolicyId(const Aws::String& value) { SetConnectorPolicyId(value); return *this;}
    inline ManagedThingSummary& WithConnectorPolicyId(Aws::String&& value) { SetConnectorPolicyId(std::move(value)); return *this;}
    inline ManagedThingSummary& WithConnectorPolicyId(const char* value) { SetConnectorPolicyId(value); return *this;}
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
    inline ManagedThingSummary& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline ManagedThingSummary& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline ManagedThingSummary& WithModel(const char* value) { SetModel(value); return *this;}
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
    inline ManagedThingSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ManagedThingSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ManagedThingSummary& WithName(const char* value) { SetName(value); return *this;}
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
    inline ManagedThingSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ManagedThingSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ManagedThingSummary& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the credential locker for the managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerId() const{ return m_credentialLockerId; }
    inline bool CredentialLockerIdHasBeenSet() const { return m_credentialLockerIdHasBeenSet; }
    inline void SetCredentialLockerId(const Aws::String& value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId = value; }
    inline void SetCredentialLockerId(Aws::String&& value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId = std::move(value); }
    inline void SetCredentialLockerId(const char* value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId.assign(value); }
    inline ManagedThingSummary& WithCredentialLockerId(const Aws::String& value) { SetCredentialLockerId(value); return *this;}
    inline ManagedThingSummary& WithCredentialLockerId(Aws::String&& value) { SetCredentialLockerId(std::move(value)); return *this;}
    inline ManagedThingSummary& WithCredentialLockerId(const char* value) { SetCredentialLockerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Id of the controller device used for the discovery job.</p>
     */
    inline const Aws::String& GetParentControllerId() const{ return m_parentControllerId; }
    inline bool ParentControllerIdHasBeenSet() const { return m_parentControllerIdHasBeenSet; }
    inline void SetParentControllerId(const Aws::String& value) { m_parentControllerIdHasBeenSet = true; m_parentControllerId = value; }
    inline void SetParentControllerId(Aws::String&& value) { m_parentControllerIdHasBeenSet = true; m_parentControllerId = std::move(value); }
    inline void SetParentControllerId(const char* value) { m_parentControllerIdHasBeenSet = true; m_parentControllerId.assign(value); }
    inline ManagedThingSummary& WithParentControllerId(const Aws::String& value) { SetParentControllerId(value); return *this;}
    inline ManagedThingSummary& WithParentControllerId(Aws::String&& value) { SetParentControllerId(std::move(value)); return *this;}
    inline ManagedThingSummary& WithParentControllerId(const char* value) { SetParentControllerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the device in the provisioning workflow for
     * onboarding to IoT managed integrations.</p>
     */
    inline const ProvisioningStatus& GetProvisioningStatus() const{ return m_provisioningStatus; }
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }
    inline void SetProvisioningStatus(const ProvisioningStatus& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline void SetProvisioningStatus(ProvisioningStatus&& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = std::move(value); }
    inline ManagedThingSummary& WithProvisioningStatus(const ProvisioningStatus& value) { SetProvisioningStatus(value); return *this;}
    inline ManagedThingSummary& WithProvisioningStatus(ProvisioningStatus&& value) { SetProvisioningStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device used. This will be the Amazon Web Services hub controller,
     * cloud device, or IoT device.</p>
     */
    inline const Role& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Role& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Role&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline ManagedThingSummary& WithRole(const Role& value) { SetRole(value); return *this;}
    inline ManagedThingSummary& WithRole(Role&& value) { SetRole(std::move(value)); return *this;}
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
    inline ManagedThingSummary& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline ManagedThingSummary& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline ManagedThingSummary& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the device creation request occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ManagedThingSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ManagedThingSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the managed thing was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ManagedThingSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ManagedThingSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestampe value of when the managed thing was activated at.</p>
     */
    inline const Aws::Utils::DateTime& GetActivatedAt() const{ return m_activatedAt; }
    inline bool ActivatedAtHasBeenSet() const { return m_activatedAtHasBeenSet; }
    inline void SetActivatedAt(const Aws::Utils::DateTime& value) { m_activatedAtHasBeenSet = true; m_activatedAt = value; }
    inline void SetActivatedAt(Aws::Utils::DateTime&& value) { m_activatedAtHasBeenSet = true; m_activatedAt = std::move(value); }
    inline ManagedThingSummary& WithActivatedAt(const Aws::Utils::DateTime& value) { SetActivatedAt(value); return *this;}
    inline ManagedThingSummary& WithActivatedAt(Aws::Utils::DateTime&& value) { SetActivatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_advertisedProductId;
    bool m_advertisedProductIdHasBeenSet = false;

    Aws::String m_brand;
    bool m_brandHasBeenSet = false;

    Aws::String m_classification;
    bool m_classificationHasBeenSet = false;

    Aws::String m_connectorDeviceId;
    bool m_connectorDeviceIdHasBeenSet = false;

    Aws::String m_connectorPolicyId;
    bool m_connectorPolicyIdHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_credentialLockerId;
    bool m_credentialLockerIdHasBeenSet = false;

    Aws::String m_parentControllerId;
    bool m_parentControllerIdHasBeenSet = false;

    ProvisioningStatus m_provisioningStatus;
    bool m_provisioningStatusHasBeenSet = false;

    Role m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_activatedAt;
    bool m_activatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

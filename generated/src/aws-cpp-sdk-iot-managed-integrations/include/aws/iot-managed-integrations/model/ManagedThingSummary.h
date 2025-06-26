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
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSummary() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the device.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ManagedThingSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the managed thing.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ManagedThingSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the advertised product.</p>
     */
    inline const Aws::String& GetAdvertisedProductId() const { return m_advertisedProductId; }
    inline bool AdvertisedProductIdHasBeenSet() const { return m_advertisedProductIdHasBeenSet; }
    template<typename AdvertisedProductIdT = Aws::String>
    void SetAdvertisedProductId(AdvertisedProductIdT&& value) { m_advertisedProductIdHasBeenSet = true; m_advertisedProductId = std::forward<AdvertisedProductIdT>(value); }
    template<typename AdvertisedProductIdT = Aws::String>
    ManagedThingSummary& WithAdvertisedProductId(AdvertisedProductIdT&& value) { SetAdvertisedProductId(std::forward<AdvertisedProductIdT>(value)); return *this;}
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
    ManagedThingSummary& WithBrand(BrandT&& value) { SetBrand(std::forward<BrandT>(value)); return *this;}
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
    ManagedThingSummary& WithClassification(ClassificationT&& value) { SetClassification(std::forward<ClassificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The third-party device id as defined by the connector. This device id must
     * not contain personal identifiable information (PII).</p>  <p>This
     * parameter is used for cloud-to-cloud devices only.</p> 
     */
    inline const Aws::String& GetConnectorDeviceId() const { return m_connectorDeviceId; }
    inline bool ConnectorDeviceIdHasBeenSet() const { return m_connectorDeviceIdHasBeenSet; }
    template<typename ConnectorDeviceIdT = Aws::String>
    void SetConnectorDeviceId(ConnectorDeviceIdT&& value) { m_connectorDeviceIdHasBeenSet = true; m_connectorDeviceId = std::forward<ConnectorDeviceIdT>(value); }
    template<typename ConnectorDeviceIdT = Aws::String>
    ManagedThingSummary& WithConnectorDeviceId(ConnectorDeviceIdT&& value) { SetConnectorDeviceId(std::forward<ConnectorDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the connector destination associated with this managed
     * thing, if applicable.</p>
     */
    inline const Aws::String& GetConnectorDestinationId() const { return m_connectorDestinationId; }
    inline bool ConnectorDestinationIdHasBeenSet() const { return m_connectorDestinationIdHasBeenSet; }
    template<typename ConnectorDestinationIdT = Aws::String>
    void SetConnectorDestinationId(ConnectorDestinationIdT&& value) { m_connectorDestinationIdHasBeenSet = true; m_connectorDestinationId = std::forward<ConnectorDestinationIdT>(value); }
    template<typename ConnectorDestinationIdT = Aws::String>
    ManagedThingSummary& WithConnectorDestinationId(ConnectorDestinationIdT&& value) { SetConnectorDestinationId(std::forward<ConnectorDestinationIdT>(value)); return *this;}
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
    ManagedThingSummary& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
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
    ManagedThingSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    ManagedThingSummary& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the credential locker for the managed thing.</p>
     */
    inline const Aws::String& GetCredentialLockerId() const { return m_credentialLockerId; }
    inline bool CredentialLockerIdHasBeenSet() const { return m_credentialLockerIdHasBeenSet; }
    template<typename CredentialLockerIdT = Aws::String>
    void SetCredentialLockerId(CredentialLockerIdT&& value) { m_credentialLockerIdHasBeenSet = true; m_credentialLockerId = std::forward<CredentialLockerIdT>(value); }
    template<typename CredentialLockerIdT = Aws::String>
    ManagedThingSummary& WithCredentialLockerId(CredentialLockerIdT&& value) { SetCredentialLockerId(std::forward<CredentialLockerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Id of the controller device used for the discovery job.</p>
     */
    inline const Aws::String& GetParentControllerId() const { return m_parentControllerId; }
    inline bool ParentControllerIdHasBeenSet() const { return m_parentControllerIdHasBeenSet; }
    template<typename ParentControllerIdT = Aws::String>
    void SetParentControllerId(ParentControllerIdT&& value) { m_parentControllerIdHasBeenSet = true; m_parentControllerId = std::forward<ParentControllerIdT>(value); }
    template<typename ParentControllerIdT = Aws::String>
    ManagedThingSummary& WithParentControllerId(ParentControllerIdT&& value) { SetParentControllerId(std::forward<ParentControllerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the device in the provisioning workflow for
     * onboarding to IoT managed integrations.</p>
     */
    inline ProvisioningStatus GetProvisioningStatus() const { return m_provisioningStatus; }
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }
    inline void SetProvisioningStatus(ProvisioningStatus value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline ManagedThingSummary& WithProvisioningStatus(ProvisioningStatus value) { SetProvisioningStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device used. This will be the Amazon Web Services hub controller,
     * cloud device, or IoT device.</p>
     */
    inline Role GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(Role value) { m_roleHasBeenSet = true; m_role = value; }
    inline ManagedThingSummary& WithRole(Role value) { SetRole(value); return *this;}
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
    ManagedThingSummary& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the device creation request occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ManagedThingSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp value of when the managed thing was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ManagedThingSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestampe value of when the managed thing was activated at.</p>
     */
    inline const Aws::Utils::DateTime& GetActivatedAt() const { return m_activatedAt; }
    inline bool ActivatedAtHasBeenSet() const { return m_activatedAtHasBeenSet; }
    template<typename ActivatedAtT = Aws::Utils::DateTime>
    void SetActivatedAt(ActivatedAtT&& value) { m_activatedAtHasBeenSet = true; m_activatedAt = std::forward<ActivatedAtT>(value); }
    template<typename ActivatedAtT = Aws::Utils::DateTime>
    ManagedThingSummary& WithActivatedAt(ActivatedAtT&& value) { SetActivatedAt(std::forward<ActivatedAtT>(value)); return *this;}
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

    Aws::String m_connectorDestinationId;
    bool m_connectorDestinationIdHasBeenSet = false;

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

    ProvisioningStatus m_provisioningStatus{ProvisioningStatus::NOT_SET};
    bool m_provisioningStatusHasBeenSet = false;

    Role m_role{Role::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_activatedAt{};
    bool m_activatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

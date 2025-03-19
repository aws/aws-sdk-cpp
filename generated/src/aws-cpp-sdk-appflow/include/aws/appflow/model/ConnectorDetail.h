/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appflow/model/ConnectorProvisioningType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/SupportedDataTransferType.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Information about the registered connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorDetail">AWS
   * API Reference</a></p>
   */
  class ConnectorDetail
  {
  public:
    AWS_APPFLOW_API ConnectorDetail() = default;
    AWS_APPFLOW_API ConnectorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description about the registered connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const { return m_connectorDescription; }
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }
    template<typename ConnectorDescriptionT = Aws::String>
    void SetConnectorDescription(ConnectorDescriptionT&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::forward<ConnectorDescriptionT>(value); }
    template<typename ConnectorDescriptionT = Aws::String>
    ConnectorDetail& WithConnectorDescription(ConnectorDescriptionT&& value) { SetConnectorDescription(std::forward<ConnectorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connector.</p>
     */
    inline const Aws::String& GetConnectorName() const { return m_connectorName; }
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }
    template<typename ConnectorNameT = Aws::String>
    void SetConnectorName(ConnectorNameT&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::forward<ConnectorNameT>(value); }
    template<typename ConnectorNameT = Aws::String>
    ConnectorDetail& WithConnectorName(ConnectorNameT&& value) { SetConnectorName(std::forward<ConnectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the connector.</p>
     */
    inline const Aws::String& GetConnectorOwner() const { return m_connectorOwner; }
    inline bool ConnectorOwnerHasBeenSet() const { return m_connectorOwnerHasBeenSet; }
    template<typename ConnectorOwnerT = Aws::String>
    void SetConnectorOwner(ConnectorOwnerT&& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = std::forward<ConnectorOwnerT>(value); }
    template<typename ConnectorOwnerT = Aws::String>
    ConnectorDetail& WithConnectorOwner(ConnectorOwnerT&& value) { SetConnectorOwner(std::forward<ConnectorOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector version.</p>
     */
    inline const Aws::String& GetConnectorVersion() const { return m_connectorVersion; }
    inline bool ConnectorVersionHasBeenSet() const { return m_connectorVersionHasBeenSet; }
    template<typename ConnectorVersionT = Aws::String>
    void SetConnectorVersion(ConnectorVersionT&& value) { m_connectorVersionHasBeenSet = true; m_connectorVersion = std::forward<ConnectorVersionT>(value); }
    template<typename ConnectorVersionT = Aws::String>
    ConnectorDetail& WithConnectorVersion(ConnectorVersionT&& value) { SetConnectorVersion(std::forward<ConnectorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application type of the connector.</p>
     */
    inline const Aws::String& GetApplicationType() const { return m_applicationType; }
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
    template<typename ApplicationTypeT = Aws::String>
    void SetApplicationType(ApplicationTypeT&& value) { m_applicationTypeHasBeenSet = true; m_applicationType = std::forward<ApplicationTypeT>(value); }
    template<typename ApplicationTypeT = Aws::String>
    ConnectorDetail& WithApplicationType(ApplicationTypeT&& value) { SetApplicationType(std::forward<ApplicationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector type.</p>
     */
    inline ConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(ConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline ConnectorDetail& WithConnectorType(ConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A label used for the connector.</p>
     */
    inline const Aws::String& GetConnectorLabel() const { return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    template<typename ConnectorLabelT = Aws::String>
    void SetConnectorLabel(ConnectorLabelT&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::forward<ConnectorLabelT>(value); }
    template<typename ConnectorLabelT = Aws::String>
    ConnectorDetail& WithConnectorLabel(ConnectorLabelT&& value) { SetConnectorLabel(std::forward<ConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the connector was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    void SetRegisteredAt(RegisteredAtT&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::forward<RegisteredAtT>(value); }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    ConnectorDetail& WithRegisteredAt(RegisteredAtT&& value) { SetRegisteredAt(std::forward<RegisteredAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who registered the connector.</p>
     */
    inline const Aws::String& GetRegisteredBy() const { return m_registeredBy; }
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
    template<typename RegisteredByT = Aws::String>
    void SetRegisteredBy(RegisteredByT&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::forward<RegisteredByT>(value); }
    template<typename RegisteredByT = Aws::String>
    ConnectorDetail& WithRegisteredBy(RegisteredByT&& value) { SetRegisteredBy(std::forward<RegisteredByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning type that the connector uses.</p>
     */
    inline ConnectorProvisioningType GetConnectorProvisioningType() const { return m_connectorProvisioningType; }
    inline bool ConnectorProvisioningTypeHasBeenSet() const { return m_connectorProvisioningTypeHasBeenSet; }
    inline void SetConnectorProvisioningType(ConnectorProvisioningType value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = value; }
    inline ConnectorDetail& WithConnectorProvisioningType(ConnectorProvisioningType value) { SetConnectorProvisioningType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection mode that the connector supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorModes() const { return m_connectorModes; }
    inline bool ConnectorModesHasBeenSet() const { return m_connectorModesHasBeenSet; }
    template<typename ConnectorModesT = Aws::Vector<Aws::String>>
    void SetConnectorModes(ConnectorModesT&& value) { m_connectorModesHasBeenSet = true; m_connectorModes = std::forward<ConnectorModesT>(value); }
    template<typename ConnectorModesT = Aws::Vector<Aws::String>>
    ConnectorDetail& WithConnectorModes(ConnectorModesT&& value) { SetConnectorModes(std::forward<ConnectorModesT>(value)); return *this;}
    template<typename ConnectorModesT = Aws::String>
    ConnectorDetail& AddConnectorModes(ConnectorModesT&& value) { m_connectorModesHasBeenSet = true; m_connectorModes.emplace_back(std::forward<ConnectorModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data transfer types that the connector supports.</p> <dl> <dt>RECORD</dt>
     * <dd> <p>Structured records.</p> </dd> <dt>FILE</dt> <dd> <p>Files or binary
     * data.</p> </dd> </dl>
     */
    inline const Aws::Vector<SupportedDataTransferType>& GetSupportedDataTransferTypes() const { return m_supportedDataTransferTypes; }
    inline bool SupportedDataTransferTypesHasBeenSet() const { return m_supportedDataTransferTypesHasBeenSet; }
    template<typename SupportedDataTransferTypesT = Aws::Vector<SupportedDataTransferType>>
    void SetSupportedDataTransferTypes(SupportedDataTransferTypesT&& value) { m_supportedDataTransferTypesHasBeenSet = true; m_supportedDataTransferTypes = std::forward<SupportedDataTransferTypesT>(value); }
    template<typename SupportedDataTransferTypesT = Aws::Vector<SupportedDataTransferType>>
    ConnectorDetail& WithSupportedDataTransferTypes(SupportedDataTransferTypesT&& value) { SetSupportedDataTransferTypes(std::forward<SupportedDataTransferTypesT>(value)); return *this;}
    inline ConnectorDetail& AddSupportedDataTransferTypes(SupportedDataTransferType value) { m_supportedDataTransferTypesHasBeenSet = true; m_supportedDataTransferTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_connectorDescription;
    bool m_connectorDescriptionHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    Aws::String m_connectorOwner;
    bool m_connectorOwnerHasBeenSet = false;

    Aws::String m_connectorVersion;
    bool m_connectorVersionHasBeenSet = false;

    Aws::String m_applicationType;
    bool m_applicationTypeHasBeenSet = false;

    ConnectorType m_connectorType{ConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    Aws::Utils::DateTime m_registeredAt{};
    bool m_registeredAtHasBeenSet = false;

    Aws::String m_registeredBy;
    bool m_registeredByHasBeenSet = false;

    ConnectorProvisioningType m_connectorProvisioningType{ConnectorProvisioningType::NOT_SET};
    bool m_connectorProvisioningTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectorModes;
    bool m_connectorModesHasBeenSet = false;

    Aws::Vector<SupportedDataTransferType> m_supportedDataTransferTypes;
    bool m_supportedDataTransferTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ConnectorMetadata.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/AuthenticationConfig.h>
#include <aws/appflow/model/ConnectorProvisioningType.h>
#include <aws/appflow/model/ConnectorProvisioningConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appflow/model/ScheduleFrequencyType.h>
#include <aws/appflow/model/TriggerType.h>
#include <aws/appflow/model/ConnectorRuntimeSetting.h>
#include <aws/appflow/model/Operators.h>
#include <aws/appflow/model/WriteOperationType.h>
#include <aws/appflow/model/SupportedDataTransferType.h>
#include <aws/appflow/model/DataTransferApi.h>
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
   * <p> The configuration settings related to a given connector. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectorConfiguration
  {
  public:
    AWS_APPFLOW_API ConnectorConfiguration() = default;
    AWS_APPFLOW_API ConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies whether the connector can be used as a source. </p>
     */
    inline bool GetCanUseAsSource() const { return m_canUseAsSource; }
    inline bool CanUseAsSourceHasBeenSet() const { return m_canUseAsSourceHasBeenSet; }
    inline void SetCanUseAsSource(bool value) { m_canUseAsSourceHasBeenSet = true; m_canUseAsSource = value; }
    inline ConnectorConfiguration& WithCanUseAsSource(bool value) { SetCanUseAsSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the connector can be used as a destination. </p>
     */
    inline bool GetCanUseAsDestination() const { return m_canUseAsDestination; }
    inline bool CanUseAsDestinationHasBeenSet() const { return m_canUseAsDestinationHasBeenSet; }
    inline void SetCanUseAsDestination(bool value) { m_canUseAsDestinationHasBeenSet = true; m_canUseAsDestination = value; }
    inline ConnectorConfiguration& WithCanUseAsDestination(bool value) { SetCanUseAsDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline const Aws::Vector<ConnectorType>& GetSupportedDestinationConnectors() const { return m_supportedDestinationConnectors; }
    inline bool SupportedDestinationConnectorsHasBeenSet() const { return m_supportedDestinationConnectorsHasBeenSet; }
    template<typename SupportedDestinationConnectorsT = Aws::Vector<ConnectorType>>
    void SetSupportedDestinationConnectors(SupportedDestinationConnectorsT&& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors = std::forward<SupportedDestinationConnectorsT>(value); }
    template<typename SupportedDestinationConnectorsT = Aws::Vector<ConnectorType>>
    ConnectorConfiguration& WithSupportedDestinationConnectors(SupportedDestinationConnectorsT&& value) { SetSupportedDestinationConnectors(std::forward<SupportedDestinationConnectorsT>(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedDestinationConnectors(ConnectorType value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline const Aws::Vector<ScheduleFrequencyType>& GetSupportedSchedulingFrequencies() const { return m_supportedSchedulingFrequencies; }
    inline bool SupportedSchedulingFrequenciesHasBeenSet() const { return m_supportedSchedulingFrequenciesHasBeenSet; }
    template<typename SupportedSchedulingFrequenciesT = Aws::Vector<ScheduleFrequencyType>>
    void SetSupportedSchedulingFrequencies(SupportedSchedulingFrequenciesT&& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies = std::forward<SupportedSchedulingFrequenciesT>(value); }
    template<typename SupportedSchedulingFrequenciesT = Aws::Vector<ScheduleFrequencyType>>
    ConnectorConfiguration& WithSupportedSchedulingFrequencies(SupportedSchedulingFrequenciesT&& value) { SetSupportedSchedulingFrequencies(std::forward<SupportedSchedulingFrequenciesT>(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedSchedulingFrequencies(ScheduleFrequencyType value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies if PrivateLink is enabled for that connector. </p>
     */
    inline bool GetIsPrivateLinkEnabled() const { return m_isPrivateLinkEnabled; }
    inline bool IsPrivateLinkEnabledHasBeenSet() const { return m_isPrivateLinkEnabledHasBeenSet; }
    inline void SetIsPrivateLinkEnabled(bool value) { m_isPrivateLinkEnabledHasBeenSet = true; m_isPrivateLinkEnabled = value; }
    inline ConnectorConfiguration& WithIsPrivateLinkEnabled(bool value) { SetIsPrivateLinkEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies if a PrivateLink endpoint URL is required. </p>
     */
    inline bool GetIsPrivateLinkEndpointUrlRequired() const { return m_isPrivateLinkEndpointUrlRequired; }
    inline bool IsPrivateLinkEndpointUrlRequiredHasBeenSet() const { return m_isPrivateLinkEndpointUrlRequiredHasBeenSet; }
    inline void SetIsPrivateLinkEndpointUrlRequired(bool value) { m_isPrivateLinkEndpointUrlRequiredHasBeenSet = true; m_isPrivateLinkEndpointUrlRequired = value; }
    inline ConnectorConfiguration& WithIsPrivateLinkEndpointUrlRequired(bool value) { SetIsPrivateLinkEndpointUrlRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline const Aws::Vector<TriggerType>& GetSupportedTriggerTypes() const { return m_supportedTriggerTypes; }
    inline bool SupportedTriggerTypesHasBeenSet() const { return m_supportedTriggerTypesHasBeenSet; }
    template<typename SupportedTriggerTypesT = Aws::Vector<TriggerType>>
    void SetSupportedTriggerTypes(SupportedTriggerTypesT&& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes = std::forward<SupportedTriggerTypesT>(value); }
    template<typename SupportedTriggerTypesT = Aws::Vector<TriggerType>>
    ConnectorConfiguration& WithSupportedTriggerTypes(SupportedTriggerTypesT&& value) { SetSupportedTriggerTypes(std::forward<SupportedTriggerTypesT>(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedTriggerTypes(TriggerType value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline const ConnectorMetadata& GetConnectorMetadata() const { return m_connectorMetadata; }
    inline bool ConnectorMetadataHasBeenSet() const { return m_connectorMetadataHasBeenSet; }
    template<typename ConnectorMetadataT = ConnectorMetadata>
    void SetConnectorMetadata(ConnectorMetadataT&& value) { m_connectorMetadataHasBeenSet = true; m_connectorMetadata = std::forward<ConnectorMetadataT>(value); }
    template<typename ConnectorMetadataT = ConnectorMetadata>
    ConnectorConfiguration& WithConnectorMetadata(ConnectorMetadataT&& value) { SetConnectorMetadata(std::forward<ConnectorMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector type.</p>
     */
    inline ConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(ConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline ConnectorConfiguration& WithConnectorType(ConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label used for registering the connector.</p>
     */
    inline const Aws::String& GetConnectorLabel() const { return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    template<typename ConnectorLabelT = Aws::String>
    void SetConnectorLabel(ConnectorLabelT&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::forward<ConnectorLabelT>(value); }
    template<typename ConnectorLabelT = Aws::String>
    ConnectorConfiguration& WithConnectorLabel(ConnectorLabelT&& value) { SetConnectorLabel(std::forward<ConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const { return m_connectorDescription; }
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }
    template<typename ConnectorDescriptionT = Aws::String>
    void SetConnectorDescription(ConnectorDescriptionT&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::forward<ConnectorDescriptionT>(value); }
    template<typename ConnectorDescriptionT = Aws::String>
    ConnectorConfiguration& WithConnectorDescription(ConnectorDescriptionT&& value) { SetConnectorDescription(std::forward<ConnectorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner who developed the connector.</p>
     */
    inline const Aws::String& GetConnectorOwner() const { return m_connectorOwner; }
    inline bool ConnectorOwnerHasBeenSet() const { return m_connectorOwnerHasBeenSet; }
    template<typename ConnectorOwnerT = Aws::String>
    void SetConnectorOwner(ConnectorOwnerT&& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = std::forward<ConnectorOwnerT>(value); }
    template<typename ConnectorOwnerT = Aws::String>
    ConnectorConfiguration& WithConnectorOwner(ConnectorOwnerT&& value) { SetConnectorOwner(std::forward<ConnectorOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector name.</p>
     */
    inline const Aws::String& GetConnectorName() const { return m_connectorName; }
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }
    template<typename ConnectorNameT = Aws::String>
    void SetConnectorName(ConnectorNameT&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::forward<ConnectorNameT>(value); }
    template<typename ConnectorNameT = Aws::String>
    ConnectorConfiguration& WithConnectorName(ConnectorNameT&& value) { SetConnectorName(std::forward<ConnectorNameT>(value)); return *this;}
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
    ConnectorConfiguration& WithConnectorVersion(ConnectorVersionT&& value) { SetConnectorVersion(std::forward<ConnectorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    ConnectorConfiguration& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorModes() const { return m_connectorModes; }
    inline bool ConnectorModesHasBeenSet() const { return m_connectorModesHasBeenSet; }
    template<typename ConnectorModesT = Aws::Vector<Aws::String>>
    void SetConnectorModes(ConnectorModesT&& value) { m_connectorModesHasBeenSet = true; m_connectorModes = std::forward<ConnectorModesT>(value); }
    template<typename ConnectorModesT = Aws::Vector<Aws::String>>
    ConnectorConfiguration& WithConnectorModes(ConnectorModesT&& value) { SetConnectorModes(std::forward<ConnectorModesT>(value)); return *this;}
    template<typename ConnectorModesT = Aws::String>
    ConnectorConfiguration& AddConnectorModes(ConnectorModesT&& value) { m_connectorModesHasBeenSet = true; m_connectorModes.emplace_back(std::forward<ConnectorModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline const AuthenticationConfig& GetAuthenticationConfig() const { return m_authenticationConfig; }
    inline bool AuthenticationConfigHasBeenSet() const { return m_authenticationConfigHasBeenSet; }
    template<typename AuthenticationConfigT = AuthenticationConfig>
    void SetAuthenticationConfig(AuthenticationConfigT&& value) { m_authenticationConfigHasBeenSet = true; m_authenticationConfig = std::forward<AuthenticationConfigT>(value); }
    template<typename AuthenticationConfigT = AuthenticationConfig>
    ConnectorConfiguration& WithAuthenticationConfig(AuthenticationConfigT&& value) { SetAuthenticationConfig(std::forward<AuthenticationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required connector runtime settings.</p>
     */
    inline const Aws::Vector<ConnectorRuntimeSetting>& GetConnectorRuntimeSettings() const { return m_connectorRuntimeSettings; }
    inline bool ConnectorRuntimeSettingsHasBeenSet() const { return m_connectorRuntimeSettingsHasBeenSet; }
    template<typename ConnectorRuntimeSettingsT = Aws::Vector<ConnectorRuntimeSetting>>
    void SetConnectorRuntimeSettings(ConnectorRuntimeSettingsT&& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings = std::forward<ConnectorRuntimeSettingsT>(value); }
    template<typename ConnectorRuntimeSettingsT = Aws::Vector<ConnectorRuntimeSetting>>
    ConnectorConfiguration& WithConnectorRuntimeSettings(ConnectorRuntimeSettingsT&& value) { SetConnectorRuntimeSettings(std::forward<ConnectorRuntimeSettingsT>(value)); return *this;}
    template<typename ConnectorRuntimeSettingsT = ConnectorRuntimeSetting>
    ConnectorConfiguration& AddConnectorRuntimeSettings(ConnectorRuntimeSettingsT&& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings.emplace_back(std::forward<ConnectorRuntimeSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedApiVersions() const { return m_supportedApiVersions; }
    inline bool SupportedApiVersionsHasBeenSet() const { return m_supportedApiVersionsHasBeenSet; }
    template<typename SupportedApiVersionsT = Aws::Vector<Aws::String>>
    void SetSupportedApiVersions(SupportedApiVersionsT&& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions = std::forward<SupportedApiVersionsT>(value); }
    template<typename SupportedApiVersionsT = Aws::Vector<Aws::String>>
    ConnectorConfiguration& WithSupportedApiVersions(SupportedApiVersionsT&& value) { SetSupportedApiVersions(std::forward<SupportedApiVersionsT>(value)); return *this;}
    template<typename SupportedApiVersionsT = Aws::String>
    ConnectorConfiguration& AddSupportedApiVersions(SupportedApiVersionsT&& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions.emplace_back(std::forward<SupportedApiVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline const Aws::Vector<Operators>& GetSupportedOperators() const { return m_supportedOperators; }
    inline bool SupportedOperatorsHasBeenSet() const { return m_supportedOperatorsHasBeenSet; }
    template<typename SupportedOperatorsT = Aws::Vector<Operators>>
    void SetSupportedOperators(SupportedOperatorsT&& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators = std::forward<SupportedOperatorsT>(value); }
    template<typename SupportedOperatorsT = Aws::Vector<Operators>>
    ConnectorConfiguration& WithSupportedOperators(SupportedOperatorsT&& value) { SetSupportedOperators(std::forward<SupportedOperatorsT>(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedOperators(Operators value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline const Aws::Vector<WriteOperationType>& GetSupportedWriteOperations() const { return m_supportedWriteOperations; }
    inline bool SupportedWriteOperationsHasBeenSet() const { return m_supportedWriteOperationsHasBeenSet; }
    template<typename SupportedWriteOperationsT = Aws::Vector<WriteOperationType>>
    void SetSupportedWriteOperations(SupportedWriteOperationsT&& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations = std::forward<SupportedWriteOperationsT>(value); }
    template<typename SupportedWriteOperationsT = Aws::Vector<WriteOperationType>>
    ConnectorConfiguration& WithSupportedWriteOperations(SupportedWriteOperationsT&& value) { SetSupportedWriteOperations(std::forward<SupportedWriteOperationsT>(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedWriteOperations(WriteOperationType value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline ConnectorProvisioningType GetConnectorProvisioningType() const { return m_connectorProvisioningType; }
    inline bool ConnectorProvisioningTypeHasBeenSet() const { return m_connectorProvisioningTypeHasBeenSet; }
    inline void SetConnectorProvisioningType(ConnectorProvisioningType value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = value; }
    inline ConnectorConfiguration& WithConnectorProvisioningType(ConnectorProvisioningType value) { SetConnectorProvisioningType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline const ConnectorProvisioningConfig& GetConnectorProvisioningConfig() const { return m_connectorProvisioningConfig; }
    inline bool ConnectorProvisioningConfigHasBeenSet() const { return m_connectorProvisioningConfigHasBeenSet; }
    template<typename ConnectorProvisioningConfigT = ConnectorProvisioningConfig>
    void SetConnectorProvisioningConfig(ConnectorProvisioningConfigT&& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = std::forward<ConnectorProvisioningConfigT>(value); }
    template<typename ConnectorProvisioningConfigT = ConnectorProvisioningConfig>
    ConnectorConfiguration& WithConnectorProvisioningConfig(ConnectorProvisioningConfigT&& value) { SetConnectorProvisioningConfig(std::forward<ConnectorProvisioningConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logo URL of the connector.</p>
     */
    inline const Aws::String& GetLogoURL() const { return m_logoURL; }
    inline bool LogoURLHasBeenSet() const { return m_logoURLHasBeenSet; }
    template<typename LogoURLT = Aws::String>
    void SetLogoURL(LogoURLT&& value) { m_logoURLHasBeenSet = true; m_logoURL = std::forward<LogoURLT>(value); }
    template<typename LogoURLT = Aws::String>
    ConnectorConfiguration& WithLogoURL(LogoURLT&& value) { SetLogoURL(std::forward<LogoURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    void SetRegisteredAt(RegisteredAtT&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::forward<RegisteredAtT>(value); }
    template<typename RegisteredAtT = Aws::Utils::DateTime>
    ConnectorConfiguration& WithRegisteredAt(RegisteredAtT&& value) { SetRegisteredAt(std::forward<RegisteredAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about who registered the connector.</p>
     */
    inline const Aws::String& GetRegisteredBy() const { return m_registeredBy; }
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
    template<typename RegisteredByT = Aws::String>
    void SetRegisteredBy(RegisteredByT&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::forward<RegisteredByT>(value); }
    template<typename RegisteredByT = Aws::String>
    ConnectorConfiguration& WithRegisteredBy(RegisteredByT&& value) { SetRegisteredBy(std::forward<RegisteredByT>(value)); return *this;}
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
    ConnectorConfiguration& WithSupportedDataTransferTypes(SupportedDataTransferTypesT&& value) { SetSupportedDataTransferTypes(std::forward<SupportedDataTransferTypesT>(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedDataTransferTypes(SupportedDataTransferType value) { m_supportedDataTransferTypesHasBeenSet = true; m_supportedDataTransferTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The APIs of the connector application that Amazon AppFlow can use to transfer
     * your data.</p>
     */
    inline const Aws::Vector<DataTransferApi>& GetSupportedDataTransferApis() const { return m_supportedDataTransferApis; }
    inline bool SupportedDataTransferApisHasBeenSet() const { return m_supportedDataTransferApisHasBeenSet; }
    template<typename SupportedDataTransferApisT = Aws::Vector<DataTransferApi>>
    void SetSupportedDataTransferApis(SupportedDataTransferApisT&& value) { m_supportedDataTransferApisHasBeenSet = true; m_supportedDataTransferApis = std::forward<SupportedDataTransferApisT>(value); }
    template<typename SupportedDataTransferApisT = Aws::Vector<DataTransferApi>>
    ConnectorConfiguration& WithSupportedDataTransferApis(SupportedDataTransferApisT&& value) { SetSupportedDataTransferApis(std::forward<SupportedDataTransferApisT>(value)); return *this;}
    template<typename SupportedDataTransferApisT = DataTransferApi>
    ConnectorConfiguration& AddSupportedDataTransferApis(SupportedDataTransferApisT&& value) { m_supportedDataTransferApisHasBeenSet = true; m_supportedDataTransferApis.emplace_back(std::forward<SupportedDataTransferApisT>(value)); return *this; }
    ///@}
  private:

    bool m_canUseAsSource{false};
    bool m_canUseAsSourceHasBeenSet = false;

    bool m_canUseAsDestination{false};
    bool m_canUseAsDestinationHasBeenSet = false;

    Aws::Vector<ConnectorType> m_supportedDestinationConnectors;
    bool m_supportedDestinationConnectorsHasBeenSet = false;

    Aws::Vector<ScheduleFrequencyType> m_supportedSchedulingFrequencies;
    bool m_supportedSchedulingFrequenciesHasBeenSet = false;

    bool m_isPrivateLinkEnabled{false};
    bool m_isPrivateLinkEnabledHasBeenSet = false;

    bool m_isPrivateLinkEndpointUrlRequired{false};
    bool m_isPrivateLinkEndpointUrlRequiredHasBeenSet = false;

    Aws::Vector<TriggerType> m_supportedTriggerTypes;
    bool m_supportedTriggerTypesHasBeenSet = false;

    ConnectorMetadata m_connectorMetadata;
    bool m_connectorMetadataHasBeenSet = false;

    ConnectorType m_connectorType{ConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    Aws::String m_connectorDescription;
    bool m_connectorDescriptionHasBeenSet = false;

    Aws::String m_connectorOwner;
    bool m_connectorOwnerHasBeenSet = false;

    Aws::String m_connectorName;
    bool m_connectorNameHasBeenSet = false;

    Aws::String m_connectorVersion;
    bool m_connectorVersionHasBeenSet = false;

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectorModes;
    bool m_connectorModesHasBeenSet = false;

    AuthenticationConfig m_authenticationConfig;
    bool m_authenticationConfigHasBeenSet = false;

    Aws::Vector<ConnectorRuntimeSetting> m_connectorRuntimeSettings;
    bool m_connectorRuntimeSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedApiVersions;
    bool m_supportedApiVersionsHasBeenSet = false;

    Aws::Vector<Operators> m_supportedOperators;
    bool m_supportedOperatorsHasBeenSet = false;

    Aws::Vector<WriteOperationType> m_supportedWriteOperations;
    bool m_supportedWriteOperationsHasBeenSet = false;

    ConnectorProvisioningType m_connectorProvisioningType{ConnectorProvisioningType::NOT_SET};
    bool m_connectorProvisioningTypeHasBeenSet = false;

    ConnectorProvisioningConfig m_connectorProvisioningConfig;
    bool m_connectorProvisioningConfigHasBeenSet = false;

    Aws::String m_logoURL;
    bool m_logoURLHasBeenSet = false;

    Aws::Utils::DateTime m_registeredAt{};
    bool m_registeredAtHasBeenSet = false;

    Aws::String m_registeredBy;
    bool m_registeredByHasBeenSet = false;

    Aws::Vector<SupportedDataTransferType> m_supportedDataTransferTypes;
    bool m_supportedDataTransferTypesHasBeenSet = false;

    Aws::Vector<DataTransferApi> m_supportedDataTransferApis;
    bool m_supportedDataTransferApisHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

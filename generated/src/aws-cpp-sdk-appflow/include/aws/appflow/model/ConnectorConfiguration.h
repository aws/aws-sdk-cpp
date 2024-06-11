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
    AWS_APPFLOW_API ConnectorConfiguration();
    AWS_APPFLOW_API ConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies whether the connector can be used as a source. </p>
     */
    inline bool GetCanUseAsSource() const{ return m_canUseAsSource; }
    inline bool CanUseAsSourceHasBeenSet() const { return m_canUseAsSourceHasBeenSet; }
    inline void SetCanUseAsSource(bool value) { m_canUseAsSourceHasBeenSet = true; m_canUseAsSource = value; }
    inline ConnectorConfiguration& WithCanUseAsSource(bool value) { SetCanUseAsSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the connector can be used as a destination. </p>
     */
    inline bool GetCanUseAsDestination() const{ return m_canUseAsDestination; }
    inline bool CanUseAsDestinationHasBeenSet() const { return m_canUseAsDestinationHasBeenSet; }
    inline void SetCanUseAsDestination(bool value) { m_canUseAsDestinationHasBeenSet = true; m_canUseAsDestination = value; }
    inline ConnectorConfiguration& WithCanUseAsDestination(bool value) { SetCanUseAsDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline const Aws::Vector<ConnectorType>& GetSupportedDestinationConnectors() const{ return m_supportedDestinationConnectors; }
    inline bool SupportedDestinationConnectorsHasBeenSet() const { return m_supportedDestinationConnectorsHasBeenSet; }
    inline void SetSupportedDestinationConnectors(const Aws::Vector<ConnectorType>& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors = value; }
    inline void SetSupportedDestinationConnectors(Aws::Vector<ConnectorType>&& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors = std::move(value); }
    inline ConnectorConfiguration& WithSupportedDestinationConnectors(const Aws::Vector<ConnectorType>& value) { SetSupportedDestinationConnectors(value); return *this;}
    inline ConnectorConfiguration& WithSupportedDestinationConnectors(Aws::Vector<ConnectorType>&& value) { SetSupportedDestinationConnectors(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedDestinationConnectors(const ConnectorType& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedDestinationConnectors(ConnectorType&& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline const Aws::Vector<ScheduleFrequencyType>& GetSupportedSchedulingFrequencies() const{ return m_supportedSchedulingFrequencies; }
    inline bool SupportedSchedulingFrequenciesHasBeenSet() const { return m_supportedSchedulingFrequenciesHasBeenSet; }
    inline void SetSupportedSchedulingFrequencies(const Aws::Vector<ScheduleFrequencyType>& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies = value; }
    inline void SetSupportedSchedulingFrequencies(Aws::Vector<ScheduleFrequencyType>&& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies = std::move(value); }
    inline ConnectorConfiguration& WithSupportedSchedulingFrequencies(const Aws::Vector<ScheduleFrequencyType>& value) { SetSupportedSchedulingFrequencies(value); return *this;}
    inline ConnectorConfiguration& WithSupportedSchedulingFrequencies(Aws::Vector<ScheduleFrequencyType>&& value) { SetSupportedSchedulingFrequencies(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedSchedulingFrequencies(const ScheduleFrequencyType& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedSchedulingFrequencies(ScheduleFrequencyType&& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies if PrivateLink is enabled for that connector. </p>
     */
    inline bool GetIsPrivateLinkEnabled() const{ return m_isPrivateLinkEnabled; }
    inline bool IsPrivateLinkEnabledHasBeenSet() const { return m_isPrivateLinkEnabledHasBeenSet; }
    inline void SetIsPrivateLinkEnabled(bool value) { m_isPrivateLinkEnabledHasBeenSet = true; m_isPrivateLinkEnabled = value; }
    inline ConnectorConfiguration& WithIsPrivateLinkEnabled(bool value) { SetIsPrivateLinkEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies if a PrivateLink endpoint URL is required. </p>
     */
    inline bool GetIsPrivateLinkEndpointUrlRequired() const{ return m_isPrivateLinkEndpointUrlRequired; }
    inline bool IsPrivateLinkEndpointUrlRequiredHasBeenSet() const { return m_isPrivateLinkEndpointUrlRequiredHasBeenSet; }
    inline void SetIsPrivateLinkEndpointUrlRequired(bool value) { m_isPrivateLinkEndpointUrlRequiredHasBeenSet = true; m_isPrivateLinkEndpointUrlRequired = value; }
    inline ConnectorConfiguration& WithIsPrivateLinkEndpointUrlRequired(bool value) { SetIsPrivateLinkEndpointUrlRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline const Aws::Vector<TriggerType>& GetSupportedTriggerTypes() const{ return m_supportedTriggerTypes; }
    inline bool SupportedTriggerTypesHasBeenSet() const { return m_supportedTriggerTypesHasBeenSet; }
    inline void SetSupportedTriggerTypes(const Aws::Vector<TriggerType>& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes = value; }
    inline void SetSupportedTriggerTypes(Aws::Vector<TriggerType>&& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes = std::move(value); }
    inline ConnectorConfiguration& WithSupportedTriggerTypes(const Aws::Vector<TriggerType>& value) { SetSupportedTriggerTypes(value); return *this;}
    inline ConnectorConfiguration& WithSupportedTriggerTypes(Aws::Vector<TriggerType>&& value) { SetSupportedTriggerTypes(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedTriggerTypes(const TriggerType& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedTriggerTypes(TriggerType&& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline const ConnectorMetadata& GetConnectorMetadata() const{ return m_connectorMetadata; }
    inline bool ConnectorMetadataHasBeenSet() const { return m_connectorMetadataHasBeenSet; }
    inline void SetConnectorMetadata(const ConnectorMetadata& value) { m_connectorMetadataHasBeenSet = true; m_connectorMetadata = value; }
    inline void SetConnectorMetadata(ConnectorMetadata&& value) { m_connectorMetadataHasBeenSet = true; m_connectorMetadata = std::move(value); }
    inline ConnectorConfiguration& WithConnectorMetadata(const ConnectorMetadata& value) { SetConnectorMetadata(value); return *this;}
    inline ConnectorConfiguration& WithConnectorMetadata(ConnectorMetadata&& value) { SetConnectorMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector type.</p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline ConnectorConfiguration& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}
    inline ConnectorConfiguration& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label used for registering the connector.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }
    inline ConnectorConfiguration& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}
    inline ConnectorConfiguration& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const{ return m_connectorDescription; }
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }
    inline void SetConnectorDescription(const Aws::String& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = value; }
    inline void SetConnectorDescription(Aws::String&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::move(value); }
    inline void SetConnectorDescription(const char* value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription.assign(value); }
    inline ConnectorConfiguration& WithConnectorDescription(const Aws::String& value) { SetConnectorDescription(value); return *this;}
    inline ConnectorConfiguration& WithConnectorDescription(Aws::String&& value) { SetConnectorDescription(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithConnectorDescription(const char* value) { SetConnectorDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner who developed the connector.</p>
     */
    inline const Aws::String& GetConnectorOwner() const{ return m_connectorOwner; }
    inline bool ConnectorOwnerHasBeenSet() const { return m_connectorOwnerHasBeenSet; }
    inline void SetConnectorOwner(const Aws::String& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = value; }
    inline void SetConnectorOwner(Aws::String&& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = std::move(value); }
    inline void SetConnectorOwner(const char* value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner.assign(value); }
    inline ConnectorConfiguration& WithConnectorOwner(const Aws::String& value) { SetConnectorOwner(value); return *this;}
    inline ConnectorConfiguration& WithConnectorOwner(Aws::String&& value) { SetConnectorOwner(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithConnectorOwner(const char* value) { SetConnectorOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector name.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }
    inline ConnectorConfiguration& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}
    inline ConnectorConfiguration& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connector version.</p>
     */
    inline const Aws::String& GetConnectorVersion() const{ return m_connectorVersion; }
    inline bool ConnectorVersionHasBeenSet() const { return m_connectorVersionHasBeenSet; }
    inline void SetConnectorVersion(const Aws::String& value) { m_connectorVersionHasBeenSet = true; m_connectorVersion = value; }
    inline void SetConnectorVersion(Aws::String&& value) { m_connectorVersionHasBeenSet = true; m_connectorVersion = std::move(value); }
    inline void SetConnectorVersion(const char* value) { m_connectorVersionHasBeenSet = true; m_connectorVersion.assign(value); }
    inline ConnectorConfiguration& WithConnectorVersion(const Aws::String& value) { SetConnectorVersion(value); return *this;}
    inline ConnectorConfiguration& WithConnectorVersion(Aws::String&& value) { SetConnectorVersion(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithConnectorVersion(const char* value) { SetConnectorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }
    inline ConnectorConfiguration& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline ConnectorConfiguration& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorModes() const{ return m_connectorModes; }
    inline bool ConnectorModesHasBeenSet() const { return m_connectorModesHasBeenSet; }
    inline void SetConnectorModes(const Aws::Vector<Aws::String>& value) { m_connectorModesHasBeenSet = true; m_connectorModes = value; }
    inline void SetConnectorModes(Aws::Vector<Aws::String>&& value) { m_connectorModesHasBeenSet = true; m_connectorModes = std::move(value); }
    inline ConnectorConfiguration& WithConnectorModes(const Aws::Vector<Aws::String>& value) { SetConnectorModes(value); return *this;}
    inline ConnectorConfiguration& WithConnectorModes(Aws::Vector<Aws::String>&& value) { SetConnectorModes(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddConnectorModes(const Aws::String& value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(value); return *this; }
    inline ConnectorConfiguration& AddConnectorModes(Aws::String&& value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(std::move(value)); return *this; }
    inline ConnectorConfiguration& AddConnectorModes(const char* value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline const AuthenticationConfig& GetAuthenticationConfig() const{ return m_authenticationConfig; }
    inline bool AuthenticationConfigHasBeenSet() const { return m_authenticationConfigHasBeenSet; }
    inline void SetAuthenticationConfig(const AuthenticationConfig& value) { m_authenticationConfigHasBeenSet = true; m_authenticationConfig = value; }
    inline void SetAuthenticationConfig(AuthenticationConfig&& value) { m_authenticationConfigHasBeenSet = true; m_authenticationConfig = std::move(value); }
    inline ConnectorConfiguration& WithAuthenticationConfig(const AuthenticationConfig& value) { SetAuthenticationConfig(value); return *this;}
    inline ConnectorConfiguration& WithAuthenticationConfig(AuthenticationConfig&& value) { SetAuthenticationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The required connector runtime settings.</p>
     */
    inline const Aws::Vector<ConnectorRuntimeSetting>& GetConnectorRuntimeSettings() const{ return m_connectorRuntimeSettings; }
    inline bool ConnectorRuntimeSettingsHasBeenSet() const { return m_connectorRuntimeSettingsHasBeenSet; }
    inline void SetConnectorRuntimeSettings(const Aws::Vector<ConnectorRuntimeSetting>& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings = value; }
    inline void SetConnectorRuntimeSettings(Aws::Vector<ConnectorRuntimeSetting>&& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings = std::move(value); }
    inline ConnectorConfiguration& WithConnectorRuntimeSettings(const Aws::Vector<ConnectorRuntimeSetting>& value) { SetConnectorRuntimeSettings(value); return *this;}
    inline ConnectorConfiguration& WithConnectorRuntimeSettings(Aws::Vector<ConnectorRuntimeSetting>&& value) { SetConnectorRuntimeSettings(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddConnectorRuntimeSettings(const ConnectorRuntimeSetting& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings.push_back(value); return *this; }
    inline ConnectorConfiguration& AddConnectorRuntimeSettings(ConnectorRuntimeSetting&& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedApiVersions() const{ return m_supportedApiVersions; }
    inline bool SupportedApiVersionsHasBeenSet() const { return m_supportedApiVersionsHasBeenSet; }
    inline void SetSupportedApiVersions(const Aws::Vector<Aws::String>& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions = value; }
    inline void SetSupportedApiVersions(Aws::Vector<Aws::String>&& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions = std::move(value); }
    inline ConnectorConfiguration& WithSupportedApiVersions(const Aws::Vector<Aws::String>& value) { SetSupportedApiVersions(value); return *this;}
    inline ConnectorConfiguration& WithSupportedApiVersions(Aws::Vector<Aws::String>&& value) { SetSupportedApiVersions(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedApiVersions(const Aws::String& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedApiVersions(Aws::String&& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions.push_back(std::move(value)); return *this; }
    inline ConnectorConfiguration& AddSupportedApiVersions(const char* value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline const Aws::Vector<Operators>& GetSupportedOperators() const{ return m_supportedOperators; }
    inline bool SupportedOperatorsHasBeenSet() const { return m_supportedOperatorsHasBeenSet; }
    inline void SetSupportedOperators(const Aws::Vector<Operators>& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators = value; }
    inline void SetSupportedOperators(Aws::Vector<Operators>&& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators = std::move(value); }
    inline ConnectorConfiguration& WithSupportedOperators(const Aws::Vector<Operators>& value) { SetSupportedOperators(value); return *this;}
    inline ConnectorConfiguration& WithSupportedOperators(Aws::Vector<Operators>&& value) { SetSupportedOperators(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedOperators(const Operators& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedOperators(Operators&& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline const Aws::Vector<WriteOperationType>& GetSupportedWriteOperations() const{ return m_supportedWriteOperations; }
    inline bool SupportedWriteOperationsHasBeenSet() const { return m_supportedWriteOperationsHasBeenSet; }
    inline void SetSupportedWriteOperations(const Aws::Vector<WriteOperationType>& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations = value; }
    inline void SetSupportedWriteOperations(Aws::Vector<WriteOperationType>&& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations = std::move(value); }
    inline ConnectorConfiguration& WithSupportedWriteOperations(const Aws::Vector<WriteOperationType>& value) { SetSupportedWriteOperations(value); return *this;}
    inline ConnectorConfiguration& WithSupportedWriteOperations(Aws::Vector<WriteOperationType>&& value) { SetSupportedWriteOperations(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedWriteOperations(const WriteOperationType& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedWriteOperations(WriteOperationType&& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline const ConnectorProvisioningType& GetConnectorProvisioningType() const{ return m_connectorProvisioningType; }
    inline bool ConnectorProvisioningTypeHasBeenSet() const { return m_connectorProvisioningTypeHasBeenSet; }
    inline void SetConnectorProvisioningType(const ConnectorProvisioningType& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = value; }
    inline void SetConnectorProvisioningType(ConnectorProvisioningType&& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = std::move(value); }
    inline ConnectorConfiguration& WithConnectorProvisioningType(const ConnectorProvisioningType& value) { SetConnectorProvisioningType(value); return *this;}
    inline ConnectorConfiguration& WithConnectorProvisioningType(ConnectorProvisioningType&& value) { SetConnectorProvisioningType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline const ConnectorProvisioningConfig& GetConnectorProvisioningConfig() const{ return m_connectorProvisioningConfig; }
    inline bool ConnectorProvisioningConfigHasBeenSet() const { return m_connectorProvisioningConfigHasBeenSet; }
    inline void SetConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = value; }
    inline void SetConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = std::move(value); }
    inline ConnectorConfiguration& WithConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { SetConnectorProvisioningConfig(value); return *this;}
    inline ConnectorConfiguration& WithConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { SetConnectorProvisioningConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logo URL of the connector.</p>
     */
    inline const Aws::String& GetLogoURL() const{ return m_logoURL; }
    inline bool LogoURLHasBeenSet() const { return m_logoURLHasBeenSet; }
    inline void SetLogoURL(const Aws::String& value) { m_logoURLHasBeenSet = true; m_logoURL = value; }
    inline void SetLogoURL(Aws::String&& value) { m_logoURLHasBeenSet = true; m_logoURL = std::move(value); }
    inline void SetLogoURL(const char* value) { m_logoURLHasBeenSet = true; m_logoURL.assign(value); }
    inline ConnectorConfiguration& WithLogoURL(const Aws::String& value) { SetLogoURL(value); return *this;}
    inline ConnectorConfiguration& WithLogoURL(Aws::String&& value) { SetLogoURL(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithLogoURL(const char* value) { SetLogoURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const{ return m_registeredAt; }
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
    inline void SetRegisteredAt(const Aws::Utils::DateTime& value) { m_registeredAtHasBeenSet = true; m_registeredAt = value; }
    inline void SetRegisteredAt(Aws::Utils::DateTime&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::move(value); }
    inline ConnectorConfiguration& WithRegisteredAt(const Aws::Utils::DateTime& value) { SetRegisteredAt(value); return *this;}
    inline ConnectorConfiguration& WithRegisteredAt(Aws::Utils::DateTime&& value) { SetRegisteredAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about who registered the connector.</p>
     */
    inline const Aws::String& GetRegisteredBy() const{ return m_registeredBy; }
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
    inline void SetRegisteredBy(const Aws::String& value) { m_registeredByHasBeenSet = true; m_registeredBy = value; }
    inline void SetRegisteredBy(Aws::String&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::move(value); }
    inline void SetRegisteredBy(const char* value) { m_registeredByHasBeenSet = true; m_registeredBy.assign(value); }
    inline ConnectorConfiguration& WithRegisteredBy(const Aws::String& value) { SetRegisteredBy(value); return *this;}
    inline ConnectorConfiguration& WithRegisteredBy(Aws::String&& value) { SetRegisteredBy(std::move(value)); return *this;}
    inline ConnectorConfiguration& WithRegisteredBy(const char* value) { SetRegisteredBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer types that the connector supports.</p> <dl> <dt>RECORD</dt>
     * <dd> <p>Structured records.</p> </dd> <dt>FILE</dt> <dd> <p>Files or binary
     * data.</p> </dd> </dl>
     */
    inline const Aws::Vector<SupportedDataTransferType>& GetSupportedDataTransferTypes() const{ return m_supportedDataTransferTypes; }
    inline bool SupportedDataTransferTypesHasBeenSet() const { return m_supportedDataTransferTypesHasBeenSet; }
    inline void SetSupportedDataTransferTypes(const Aws::Vector<SupportedDataTransferType>& value) { m_supportedDataTransferTypesHasBeenSet = true; m_supportedDataTransferTypes = value; }
    inline void SetSupportedDataTransferTypes(Aws::Vector<SupportedDataTransferType>&& value) { m_supportedDataTransferTypesHasBeenSet = true; m_supportedDataTransferTypes = std::move(value); }
    inline ConnectorConfiguration& WithSupportedDataTransferTypes(const Aws::Vector<SupportedDataTransferType>& value) { SetSupportedDataTransferTypes(value); return *this;}
    inline ConnectorConfiguration& WithSupportedDataTransferTypes(Aws::Vector<SupportedDataTransferType>&& value) { SetSupportedDataTransferTypes(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedDataTransferTypes(const SupportedDataTransferType& value) { m_supportedDataTransferTypesHasBeenSet = true; m_supportedDataTransferTypes.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedDataTransferTypes(SupportedDataTransferType&& value) { m_supportedDataTransferTypesHasBeenSet = true; m_supportedDataTransferTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The APIs of the connector application that Amazon AppFlow can use to transfer
     * your data.</p>
     */
    inline const Aws::Vector<DataTransferApi>& GetSupportedDataTransferApis() const{ return m_supportedDataTransferApis; }
    inline bool SupportedDataTransferApisHasBeenSet() const { return m_supportedDataTransferApisHasBeenSet; }
    inline void SetSupportedDataTransferApis(const Aws::Vector<DataTransferApi>& value) { m_supportedDataTransferApisHasBeenSet = true; m_supportedDataTransferApis = value; }
    inline void SetSupportedDataTransferApis(Aws::Vector<DataTransferApi>&& value) { m_supportedDataTransferApisHasBeenSet = true; m_supportedDataTransferApis = std::move(value); }
    inline ConnectorConfiguration& WithSupportedDataTransferApis(const Aws::Vector<DataTransferApi>& value) { SetSupportedDataTransferApis(value); return *this;}
    inline ConnectorConfiguration& WithSupportedDataTransferApis(Aws::Vector<DataTransferApi>&& value) { SetSupportedDataTransferApis(std::move(value)); return *this;}
    inline ConnectorConfiguration& AddSupportedDataTransferApis(const DataTransferApi& value) { m_supportedDataTransferApisHasBeenSet = true; m_supportedDataTransferApis.push_back(value); return *this; }
    inline ConnectorConfiguration& AddSupportedDataTransferApis(DataTransferApi&& value) { m_supportedDataTransferApisHasBeenSet = true; m_supportedDataTransferApis.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_canUseAsSource;
    bool m_canUseAsSourceHasBeenSet = false;

    bool m_canUseAsDestination;
    bool m_canUseAsDestinationHasBeenSet = false;

    Aws::Vector<ConnectorType> m_supportedDestinationConnectors;
    bool m_supportedDestinationConnectorsHasBeenSet = false;

    Aws::Vector<ScheduleFrequencyType> m_supportedSchedulingFrequencies;
    bool m_supportedSchedulingFrequenciesHasBeenSet = false;

    bool m_isPrivateLinkEnabled;
    bool m_isPrivateLinkEnabledHasBeenSet = false;

    bool m_isPrivateLinkEndpointUrlRequired;
    bool m_isPrivateLinkEndpointUrlRequiredHasBeenSet = false;

    Aws::Vector<TriggerType> m_supportedTriggerTypes;
    bool m_supportedTriggerTypesHasBeenSet = false;

    ConnectorMetadata m_connectorMetadata;
    bool m_connectorMetadataHasBeenSet = false;

    ConnectorType m_connectorType;
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

    ConnectorProvisioningType m_connectorProvisioningType;
    bool m_connectorProvisioningTypeHasBeenSet = false;

    ConnectorProvisioningConfig m_connectorProvisioningConfig;
    bool m_connectorProvisioningConfigHasBeenSet = false;

    Aws::String m_logoURL;
    bool m_logoURLHasBeenSet = false;

    Aws::Utils::DateTime m_registeredAt;
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

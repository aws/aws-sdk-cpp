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


    /**
     * <p> Specifies whether the connector can be used as a source. </p>
     */
    inline bool GetCanUseAsSource() const{ return m_canUseAsSource; }

    /**
     * <p> Specifies whether the connector can be used as a source. </p>
     */
    inline bool CanUseAsSourceHasBeenSet() const { return m_canUseAsSourceHasBeenSet; }

    /**
     * <p> Specifies whether the connector can be used as a source. </p>
     */
    inline void SetCanUseAsSource(bool value) { m_canUseAsSourceHasBeenSet = true; m_canUseAsSource = value; }

    /**
     * <p> Specifies whether the connector can be used as a source. </p>
     */
    inline ConnectorConfiguration& WithCanUseAsSource(bool value) { SetCanUseAsSource(value); return *this;}


    /**
     * <p> Specifies whether the connector can be used as a destination. </p>
     */
    inline bool GetCanUseAsDestination() const{ return m_canUseAsDestination; }

    /**
     * <p> Specifies whether the connector can be used as a destination. </p>
     */
    inline bool CanUseAsDestinationHasBeenSet() const { return m_canUseAsDestinationHasBeenSet; }

    /**
     * <p> Specifies whether the connector can be used as a destination. </p>
     */
    inline void SetCanUseAsDestination(bool value) { m_canUseAsDestinationHasBeenSet = true; m_canUseAsDestination = value; }

    /**
     * <p> Specifies whether the connector can be used as a destination. </p>
     */
    inline ConnectorConfiguration& WithCanUseAsDestination(bool value) { SetCanUseAsDestination(value); return *this;}


    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline const Aws::Vector<ConnectorType>& GetSupportedDestinationConnectors() const{ return m_supportedDestinationConnectors; }

    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline bool SupportedDestinationConnectorsHasBeenSet() const { return m_supportedDestinationConnectorsHasBeenSet; }

    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline void SetSupportedDestinationConnectors(const Aws::Vector<ConnectorType>& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors = value; }

    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline void SetSupportedDestinationConnectors(Aws::Vector<ConnectorType>&& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors = std::move(value); }

    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline ConnectorConfiguration& WithSupportedDestinationConnectors(const Aws::Vector<ConnectorType>& value) { SetSupportedDestinationConnectors(value); return *this;}

    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline ConnectorConfiguration& WithSupportedDestinationConnectors(Aws::Vector<ConnectorType>&& value) { SetSupportedDestinationConnectors(std::move(value)); return *this;}

    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline ConnectorConfiguration& AddSupportedDestinationConnectors(const ConnectorType& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors.push_back(value); return *this; }

    /**
     * <p> Lists the connectors that are available for use as destinations. </p>
     */
    inline ConnectorConfiguration& AddSupportedDestinationConnectors(ConnectorType&& value) { m_supportedDestinationConnectorsHasBeenSet = true; m_supportedDestinationConnectors.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline const Aws::Vector<ScheduleFrequencyType>& GetSupportedSchedulingFrequencies() const{ return m_supportedSchedulingFrequencies; }

    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline bool SupportedSchedulingFrequenciesHasBeenSet() const { return m_supportedSchedulingFrequenciesHasBeenSet; }

    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline void SetSupportedSchedulingFrequencies(const Aws::Vector<ScheduleFrequencyType>& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies = value; }

    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline void SetSupportedSchedulingFrequencies(Aws::Vector<ScheduleFrequencyType>&& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies = std::move(value); }

    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline ConnectorConfiguration& WithSupportedSchedulingFrequencies(const Aws::Vector<ScheduleFrequencyType>& value) { SetSupportedSchedulingFrequencies(value); return *this;}

    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline ConnectorConfiguration& WithSupportedSchedulingFrequencies(Aws::Vector<ScheduleFrequencyType>&& value) { SetSupportedSchedulingFrequencies(std::move(value)); return *this;}

    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline ConnectorConfiguration& AddSupportedSchedulingFrequencies(const ScheduleFrequencyType& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies.push_back(value); return *this; }

    /**
     * <p> Specifies the supported flow frequency for that connector. </p>
     */
    inline ConnectorConfiguration& AddSupportedSchedulingFrequencies(ScheduleFrequencyType&& value) { m_supportedSchedulingFrequenciesHasBeenSet = true; m_supportedSchedulingFrequencies.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies if PrivateLink is enabled for that connector. </p>
     */
    inline bool GetIsPrivateLinkEnabled() const{ return m_isPrivateLinkEnabled; }

    /**
     * <p> Specifies if PrivateLink is enabled for that connector. </p>
     */
    inline bool IsPrivateLinkEnabledHasBeenSet() const { return m_isPrivateLinkEnabledHasBeenSet; }

    /**
     * <p> Specifies if PrivateLink is enabled for that connector. </p>
     */
    inline void SetIsPrivateLinkEnabled(bool value) { m_isPrivateLinkEnabledHasBeenSet = true; m_isPrivateLinkEnabled = value; }

    /**
     * <p> Specifies if PrivateLink is enabled for that connector. </p>
     */
    inline ConnectorConfiguration& WithIsPrivateLinkEnabled(bool value) { SetIsPrivateLinkEnabled(value); return *this;}


    /**
     * <p> Specifies if a PrivateLink endpoint URL is required. </p>
     */
    inline bool GetIsPrivateLinkEndpointUrlRequired() const{ return m_isPrivateLinkEndpointUrlRequired; }

    /**
     * <p> Specifies if a PrivateLink endpoint URL is required. </p>
     */
    inline bool IsPrivateLinkEndpointUrlRequiredHasBeenSet() const { return m_isPrivateLinkEndpointUrlRequiredHasBeenSet; }

    /**
     * <p> Specifies if a PrivateLink endpoint URL is required. </p>
     */
    inline void SetIsPrivateLinkEndpointUrlRequired(bool value) { m_isPrivateLinkEndpointUrlRequiredHasBeenSet = true; m_isPrivateLinkEndpointUrlRequired = value; }

    /**
     * <p> Specifies if a PrivateLink endpoint URL is required. </p>
     */
    inline ConnectorConfiguration& WithIsPrivateLinkEndpointUrlRequired(bool value) { SetIsPrivateLinkEndpointUrlRequired(value); return *this;}


    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline const Aws::Vector<TriggerType>& GetSupportedTriggerTypes() const{ return m_supportedTriggerTypes; }

    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline bool SupportedTriggerTypesHasBeenSet() const { return m_supportedTriggerTypesHasBeenSet; }

    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline void SetSupportedTriggerTypes(const Aws::Vector<TriggerType>& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes = value; }

    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline void SetSupportedTriggerTypes(Aws::Vector<TriggerType>&& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes = std::move(value); }

    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline ConnectorConfiguration& WithSupportedTriggerTypes(const Aws::Vector<TriggerType>& value) { SetSupportedTriggerTypes(value); return *this;}

    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline ConnectorConfiguration& WithSupportedTriggerTypes(Aws::Vector<TriggerType>&& value) { SetSupportedTriggerTypes(std::move(value)); return *this;}

    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline ConnectorConfiguration& AddSupportedTriggerTypes(const TriggerType& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes.push_back(value); return *this; }

    /**
     * <p> Specifies the supported trigger types for the flow. </p>
     */
    inline ConnectorConfiguration& AddSupportedTriggerTypes(TriggerType&& value) { m_supportedTriggerTypesHasBeenSet = true; m_supportedTriggerTypes.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline const ConnectorMetadata& GetConnectorMetadata() const{ return m_connectorMetadata; }

    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline bool ConnectorMetadataHasBeenSet() const { return m_connectorMetadataHasBeenSet; }

    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline void SetConnectorMetadata(const ConnectorMetadata& value) { m_connectorMetadataHasBeenSet = true; m_connectorMetadata = value; }

    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline void SetConnectorMetadata(ConnectorMetadata&& value) { m_connectorMetadataHasBeenSet = true; m_connectorMetadata = std::move(value); }

    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline ConnectorConfiguration& WithConnectorMetadata(const ConnectorMetadata& value) { SetConnectorMetadata(value); return *this;}

    /**
     * <p> Specifies connector-specific metadata such as <code>oAuthScopes</code>,
     * <code>supportedRegions</code>, <code>privateLinkServiceUrl</code>, and so on.
     * </p>
     */
    inline ConnectorConfiguration& WithConnectorMetadata(ConnectorMetadata&& value) { SetConnectorMetadata(std::move(value)); return *this;}


    /**
     * <p>The connector type.</p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }

    /**
     * <p>The connector type.</p>
     */
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }

    /**
     * <p>The connector type.</p>
     */
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }

    /**
     * <p>The connector type.</p>
     */
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }

    /**
     * <p>The connector type.</p>
     */
    inline ConnectorConfiguration& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}

    /**
     * <p>The connector type.</p>
     */
    inline ConnectorConfiguration& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}


    /**
     * <p>The label used for registering the connector.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }

    /**
     * <p>The label used for registering the connector.</p>
     */
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }

    /**
     * <p>The label used for registering the connector.</p>
     */
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }

    /**
     * <p>The label used for registering the connector.</p>
     */
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }

    /**
     * <p>The label used for registering the connector.</p>
     */
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }

    /**
     * <p>The label used for registering the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}

    /**
     * <p>The label used for registering the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}

    /**
     * <p>The label used for registering the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}


    /**
     * <p>A description about the connector.</p>
     */
    inline const Aws::String& GetConnectorDescription() const{ return m_connectorDescription; }

    /**
     * <p>A description about the connector.</p>
     */
    inline bool ConnectorDescriptionHasBeenSet() const { return m_connectorDescriptionHasBeenSet; }

    /**
     * <p>A description about the connector.</p>
     */
    inline void SetConnectorDescription(const Aws::String& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = value; }

    /**
     * <p>A description about the connector.</p>
     */
    inline void SetConnectorDescription(Aws::String&& value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription = std::move(value); }

    /**
     * <p>A description about the connector.</p>
     */
    inline void SetConnectorDescription(const char* value) { m_connectorDescriptionHasBeenSet = true; m_connectorDescription.assign(value); }

    /**
     * <p>A description about the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorDescription(const Aws::String& value) { SetConnectorDescription(value); return *this;}

    /**
     * <p>A description about the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorDescription(Aws::String&& value) { SetConnectorDescription(std::move(value)); return *this;}

    /**
     * <p>A description about the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorDescription(const char* value) { SetConnectorDescription(value); return *this;}


    /**
     * <p>The owner who developed the connector.</p>
     */
    inline const Aws::String& GetConnectorOwner() const{ return m_connectorOwner; }

    /**
     * <p>The owner who developed the connector.</p>
     */
    inline bool ConnectorOwnerHasBeenSet() const { return m_connectorOwnerHasBeenSet; }

    /**
     * <p>The owner who developed the connector.</p>
     */
    inline void SetConnectorOwner(const Aws::String& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = value; }

    /**
     * <p>The owner who developed the connector.</p>
     */
    inline void SetConnectorOwner(Aws::String&& value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner = std::move(value); }

    /**
     * <p>The owner who developed the connector.</p>
     */
    inline void SetConnectorOwner(const char* value) { m_connectorOwnerHasBeenSet = true; m_connectorOwner.assign(value); }

    /**
     * <p>The owner who developed the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorOwner(const Aws::String& value) { SetConnectorOwner(value); return *this;}

    /**
     * <p>The owner who developed the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorOwner(Aws::String&& value) { SetConnectorOwner(std::move(value)); return *this;}

    /**
     * <p>The owner who developed the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorOwner(const char* value) { SetConnectorOwner(value); return *this;}


    /**
     * <p>The connector name.</p>
     */
    inline const Aws::String& GetConnectorName() const{ return m_connectorName; }

    /**
     * <p>The connector name.</p>
     */
    inline bool ConnectorNameHasBeenSet() const { return m_connectorNameHasBeenSet; }

    /**
     * <p>The connector name.</p>
     */
    inline void SetConnectorName(const Aws::String& value) { m_connectorNameHasBeenSet = true; m_connectorName = value; }

    /**
     * <p>The connector name.</p>
     */
    inline void SetConnectorName(Aws::String&& value) { m_connectorNameHasBeenSet = true; m_connectorName = std::move(value); }

    /**
     * <p>The connector name.</p>
     */
    inline void SetConnectorName(const char* value) { m_connectorNameHasBeenSet = true; m_connectorName.assign(value); }

    /**
     * <p>The connector name.</p>
     */
    inline ConnectorConfiguration& WithConnectorName(const Aws::String& value) { SetConnectorName(value); return *this;}

    /**
     * <p>The connector name.</p>
     */
    inline ConnectorConfiguration& WithConnectorName(Aws::String&& value) { SetConnectorName(std::move(value)); return *this;}

    /**
     * <p>The connector name.</p>
     */
    inline ConnectorConfiguration& WithConnectorName(const char* value) { SetConnectorName(value); return *this;}


    /**
     * <p>The connector version.</p>
     */
    inline const Aws::String& GetConnectorVersion() const{ return m_connectorVersion; }

    /**
     * <p>The connector version.</p>
     */
    inline bool ConnectorVersionHasBeenSet() const { return m_connectorVersionHasBeenSet; }

    /**
     * <p>The connector version.</p>
     */
    inline void SetConnectorVersion(const Aws::String& value) { m_connectorVersionHasBeenSet = true; m_connectorVersion = value; }

    /**
     * <p>The connector version.</p>
     */
    inline void SetConnectorVersion(Aws::String&& value) { m_connectorVersionHasBeenSet = true; m_connectorVersion = std::move(value); }

    /**
     * <p>The connector version.</p>
     */
    inline void SetConnectorVersion(const char* value) { m_connectorVersionHasBeenSet = true; m_connectorVersion.assign(value); }

    /**
     * <p>The connector version.</p>
     */
    inline ConnectorConfiguration& WithConnectorVersion(const Aws::String& value) { SetConnectorVersion(value); return *this;}

    /**
     * <p>The connector version.</p>
     */
    inline ConnectorConfiguration& WithConnectorVersion(Aws::String&& value) { SetConnectorVersion(std::move(value)); return *this;}

    /**
     * <p>The connector version.</p>
     */
    inline ConnectorConfiguration& WithConnectorVersion(const char* value) { SetConnectorVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registered connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}


    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorModes() const{ return m_connectorModes; }

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline bool ConnectorModesHasBeenSet() const { return m_connectorModesHasBeenSet; }

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline void SetConnectorModes(const Aws::Vector<Aws::String>& value) { m_connectorModesHasBeenSet = true; m_connectorModes = value; }

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline void SetConnectorModes(Aws::Vector<Aws::String>&& value) { m_connectorModesHasBeenSet = true; m_connectorModes = std::move(value); }

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline ConnectorConfiguration& WithConnectorModes(const Aws::Vector<Aws::String>& value) { SetConnectorModes(value); return *this;}

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline ConnectorConfiguration& WithConnectorModes(Aws::Vector<Aws::String>&& value) { SetConnectorModes(std::move(value)); return *this;}

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline ConnectorConfiguration& AddConnectorModes(const Aws::String& value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(value); return *this; }

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline ConnectorConfiguration& AddConnectorModes(Aws::String&& value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(std::move(value)); return *this; }

    /**
     * <p>The connection modes that the connector supports.</p>
     */
    inline ConnectorConfiguration& AddConnectorModes(const char* value) { m_connectorModesHasBeenSet = true; m_connectorModes.push_back(value); return *this; }


    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline const AuthenticationConfig& GetAuthenticationConfig() const{ return m_authenticationConfig; }

    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline bool AuthenticationConfigHasBeenSet() const { return m_authenticationConfigHasBeenSet; }

    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline void SetAuthenticationConfig(const AuthenticationConfig& value) { m_authenticationConfigHasBeenSet = true; m_authenticationConfig = value; }

    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline void SetAuthenticationConfig(AuthenticationConfig&& value) { m_authenticationConfigHasBeenSet = true; m_authenticationConfig = std::move(value); }

    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline ConnectorConfiguration& WithAuthenticationConfig(const AuthenticationConfig& value) { SetAuthenticationConfig(value); return *this;}

    /**
     * <p>The authentication config required for the connector.</p>
     */
    inline ConnectorConfiguration& WithAuthenticationConfig(AuthenticationConfig&& value) { SetAuthenticationConfig(std::move(value)); return *this;}


    /**
     * <p>The required connector runtime settings.</p>
     */
    inline const Aws::Vector<ConnectorRuntimeSetting>& GetConnectorRuntimeSettings() const{ return m_connectorRuntimeSettings; }

    /**
     * <p>The required connector runtime settings.</p>
     */
    inline bool ConnectorRuntimeSettingsHasBeenSet() const { return m_connectorRuntimeSettingsHasBeenSet; }

    /**
     * <p>The required connector runtime settings.</p>
     */
    inline void SetConnectorRuntimeSettings(const Aws::Vector<ConnectorRuntimeSetting>& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings = value; }

    /**
     * <p>The required connector runtime settings.</p>
     */
    inline void SetConnectorRuntimeSettings(Aws::Vector<ConnectorRuntimeSetting>&& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings = std::move(value); }

    /**
     * <p>The required connector runtime settings.</p>
     */
    inline ConnectorConfiguration& WithConnectorRuntimeSettings(const Aws::Vector<ConnectorRuntimeSetting>& value) { SetConnectorRuntimeSettings(value); return *this;}

    /**
     * <p>The required connector runtime settings.</p>
     */
    inline ConnectorConfiguration& WithConnectorRuntimeSettings(Aws::Vector<ConnectorRuntimeSetting>&& value) { SetConnectorRuntimeSettings(std::move(value)); return *this;}

    /**
     * <p>The required connector runtime settings.</p>
     */
    inline ConnectorConfiguration& AddConnectorRuntimeSettings(const ConnectorRuntimeSetting& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings.push_back(value); return *this; }

    /**
     * <p>The required connector runtime settings.</p>
     */
    inline ConnectorConfiguration& AddConnectorRuntimeSettings(ConnectorRuntimeSetting&& value) { m_connectorRuntimeSettingsHasBeenSet = true; m_connectorRuntimeSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedApiVersions() const{ return m_supportedApiVersions; }

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline bool SupportedApiVersionsHasBeenSet() const { return m_supportedApiVersionsHasBeenSet; }

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline void SetSupportedApiVersions(const Aws::Vector<Aws::String>& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions = value; }

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline void SetSupportedApiVersions(Aws::Vector<Aws::String>&& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions = std::move(value); }

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline ConnectorConfiguration& WithSupportedApiVersions(const Aws::Vector<Aws::String>& value) { SetSupportedApiVersions(value); return *this;}

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline ConnectorConfiguration& WithSupportedApiVersions(Aws::Vector<Aws::String>&& value) { SetSupportedApiVersions(std::move(value)); return *this;}

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline ConnectorConfiguration& AddSupportedApiVersions(const Aws::String& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions.push_back(value); return *this; }

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline ConnectorConfiguration& AddSupportedApiVersions(Aws::String&& value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of API versions that are supported by the connector.</p>
     */
    inline ConnectorConfiguration& AddSupportedApiVersions(const char* value) { m_supportedApiVersionsHasBeenSet = true; m_supportedApiVersions.push_back(value); return *this; }


    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline const Aws::Vector<Operators>& GetSupportedOperators() const{ return m_supportedOperators; }

    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline bool SupportedOperatorsHasBeenSet() const { return m_supportedOperatorsHasBeenSet; }

    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline void SetSupportedOperators(const Aws::Vector<Operators>& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators = value; }

    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline void SetSupportedOperators(Aws::Vector<Operators>&& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators = std::move(value); }

    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline ConnectorConfiguration& WithSupportedOperators(const Aws::Vector<Operators>& value) { SetSupportedOperators(value); return *this;}

    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline ConnectorConfiguration& WithSupportedOperators(Aws::Vector<Operators>&& value) { SetSupportedOperators(std::move(value)); return *this;}

    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline ConnectorConfiguration& AddSupportedOperators(const Operators& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators.push_back(value); return *this; }

    /**
     * <p>A list of operators supported by the connector.</p>
     */
    inline ConnectorConfiguration& AddSupportedOperators(Operators&& value) { m_supportedOperatorsHasBeenSet = true; m_supportedOperators.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline const Aws::Vector<WriteOperationType>& GetSupportedWriteOperations() const{ return m_supportedWriteOperations; }

    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline bool SupportedWriteOperationsHasBeenSet() const { return m_supportedWriteOperationsHasBeenSet; }

    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline void SetSupportedWriteOperations(const Aws::Vector<WriteOperationType>& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations = value; }

    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline void SetSupportedWriteOperations(Aws::Vector<WriteOperationType>&& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations = std::move(value); }

    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline ConnectorConfiguration& WithSupportedWriteOperations(const Aws::Vector<WriteOperationType>& value) { SetSupportedWriteOperations(value); return *this;}

    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline ConnectorConfiguration& WithSupportedWriteOperations(Aws::Vector<WriteOperationType>&& value) { SetSupportedWriteOperations(std::move(value)); return *this;}

    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline ConnectorConfiguration& AddSupportedWriteOperations(const WriteOperationType& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations.push_back(value); return *this; }

    /**
     * <p>A list of write operations supported by the connector.</p>
     */
    inline ConnectorConfiguration& AddSupportedWriteOperations(WriteOperationType&& value) { m_supportedWriteOperationsHasBeenSet = true; m_supportedWriteOperations.push_back(std::move(value)); return *this; }


    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline const ConnectorProvisioningType& GetConnectorProvisioningType() const{ return m_connectorProvisioningType; }

    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline bool ConnectorProvisioningTypeHasBeenSet() const { return m_connectorProvisioningTypeHasBeenSet; }

    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline void SetConnectorProvisioningType(const ConnectorProvisioningType& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = value; }

    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline void SetConnectorProvisioningType(ConnectorProvisioningType&& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = std::move(value); }

    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorProvisioningType(const ConnectorProvisioningType& value) { SetConnectorProvisioningType(value); return *this;}

    /**
     * <p>The provisioning type used to register the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorProvisioningType(ConnectorProvisioningType&& value) { SetConnectorProvisioningType(std::move(value)); return *this;}


    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline const ConnectorProvisioningConfig& GetConnectorProvisioningConfig() const{ return m_connectorProvisioningConfig; }

    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline bool ConnectorProvisioningConfigHasBeenSet() const { return m_connectorProvisioningConfigHasBeenSet; }

    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline void SetConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = value; }

    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline void SetConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = std::move(value); }

    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { SetConnectorProvisioningConfig(value); return *this;}

    /**
     * <p>The configuration required for registering the connector.</p>
     */
    inline ConnectorConfiguration& WithConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { SetConnectorProvisioningConfig(std::move(value)); return *this;}


    /**
     * <p>Logo URL of the connector.</p>
     */
    inline const Aws::String& GetLogoURL() const{ return m_logoURL; }

    /**
     * <p>Logo URL of the connector.</p>
     */
    inline bool LogoURLHasBeenSet() const { return m_logoURLHasBeenSet; }

    /**
     * <p>Logo URL of the connector.</p>
     */
    inline void SetLogoURL(const Aws::String& value) { m_logoURLHasBeenSet = true; m_logoURL = value; }

    /**
     * <p>Logo URL of the connector.</p>
     */
    inline void SetLogoURL(Aws::String&& value) { m_logoURLHasBeenSet = true; m_logoURL = std::move(value); }

    /**
     * <p>Logo URL of the connector.</p>
     */
    inline void SetLogoURL(const char* value) { m_logoURLHasBeenSet = true; m_logoURL.assign(value); }

    /**
     * <p>Logo URL of the connector.</p>
     */
    inline ConnectorConfiguration& WithLogoURL(const Aws::String& value) { SetLogoURL(value); return *this;}

    /**
     * <p>Logo URL of the connector.</p>
     */
    inline ConnectorConfiguration& WithLogoURL(Aws::String&& value) { SetLogoURL(std::move(value)); return *this;}

    /**
     * <p>Logo URL of the connector.</p>
     */
    inline ConnectorConfiguration& WithLogoURL(const char* value) { SetLogoURL(value); return *this;}


    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const{ return m_registeredAt; }

    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }

    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline void SetRegisteredAt(const Aws::Utils::DateTime& value) { m_registeredAtHasBeenSet = true; m_registeredAt = value; }

    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline void SetRegisteredAt(Aws::Utils::DateTime&& value) { m_registeredAtHasBeenSet = true; m_registeredAt = std::move(value); }

    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline ConnectorConfiguration& WithRegisteredAt(const Aws::Utils::DateTime& value) { SetRegisteredAt(value); return *this;}

    /**
     * <p>The date on which the connector was registered.</p>
     */
    inline ConnectorConfiguration& WithRegisteredAt(Aws::Utils::DateTime&& value) { SetRegisteredAt(std::move(value)); return *this;}


    /**
     * <p>Information about who registered the connector.</p>
     */
    inline const Aws::String& GetRegisteredBy() const{ return m_registeredBy; }

    /**
     * <p>Information about who registered the connector.</p>
     */
    inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }

    /**
     * <p>Information about who registered the connector.</p>
     */
    inline void SetRegisteredBy(const Aws::String& value) { m_registeredByHasBeenSet = true; m_registeredBy = value; }

    /**
     * <p>Information about who registered the connector.</p>
     */
    inline void SetRegisteredBy(Aws::String&& value) { m_registeredByHasBeenSet = true; m_registeredBy = std::move(value); }

    /**
     * <p>Information about who registered the connector.</p>
     */
    inline void SetRegisteredBy(const char* value) { m_registeredByHasBeenSet = true; m_registeredBy.assign(value); }

    /**
     * <p>Information about who registered the connector.</p>
     */
    inline ConnectorConfiguration& WithRegisteredBy(const Aws::String& value) { SetRegisteredBy(value); return *this;}

    /**
     * <p>Information about who registered the connector.</p>
     */
    inline ConnectorConfiguration& WithRegisteredBy(Aws::String&& value) { SetRegisteredBy(std::move(value)); return *this;}

    /**
     * <p>Information about who registered the connector.</p>
     */
    inline ConnectorConfiguration& WithRegisteredBy(const char* value) { SetRegisteredBy(value); return *this;}

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
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

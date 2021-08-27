/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ConnectorMetadata.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/appflow/model/ScheduleFrequencyType.h>
#include <aws/appflow/model/TriggerType.h>
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
  class AWS_APPFLOW_API ConnectorConfiguration
  {
  public:
    ConnectorConfiguration();
    ConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    bool m_canUseAsSource;
    bool m_canUseAsSourceHasBeenSet;

    bool m_canUseAsDestination;
    bool m_canUseAsDestinationHasBeenSet;

    Aws::Vector<ConnectorType> m_supportedDestinationConnectors;
    bool m_supportedDestinationConnectorsHasBeenSet;

    Aws::Vector<ScheduleFrequencyType> m_supportedSchedulingFrequencies;
    bool m_supportedSchedulingFrequenciesHasBeenSet;

    bool m_isPrivateLinkEnabled;
    bool m_isPrivateLinkEnabledHasBeenSet;

    bool m_isPrivateLinkEndpointUrlRequired;
    bool m_isPrivateLinkEndpointUrlRequiredHasBeenSet;

    Aws::Vector<TriggerType> m_supportedTriggerTypes;
    bool m_supportedTriggerTypesHasBeenSet;

    ConnectorMetadata m_connectorMetadata;
    bool m_connectorMetadataHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

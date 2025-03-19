/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/kafkaconnect/model/CapacityUpdate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class UpdateConnectorRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API UpdateConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;

    AWS_KAFKACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The target capacity.</p>
     */
    inline const CapacityUpdate& GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    template<typename CapacityT = CapacityUpdate>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = CapacityUpdate>
    UpdateConnectorRequest& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of keys to values that represent the configuration for the
     * connector.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetConnectorConfiguration() const { return m_connectorConfiguration; }
    inline bool ConnectorConfigurationHasBeenSet() const { return m_connectorConfigurationHasBeenSet; }
    template<typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
    void SetConnectorConfiguration(ConnectorConfigurationT&& value) { m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration = std::forward<ConnectorConfigurationT>(value); }
    template<typename ConnectorConfigurationT = Aws::Map<Aws::String, Aws::String>>
    UpdateConnectorRequest& WithConnectorConfiguration(ConnectorConfigurationT&& value) { SetConnectorConfiguration(std::forward<ConnectorConfigurationT>(value)); return *this;}
    template<typename ConnectorConfigurationKeyT = Aws::String, typename ConnectorConfigurationValueT = Aws::String>
    UpdateConnectorRequest& AddConnectorConfiguration(ConnectorConfigurationKeyT&& key, ConnectorConfigurationValueT&& value) {
      m_connectorConfigurationHasBeenSet = true; m_connectorConfiguration.emplace(std::forward<ConnectorConfigurationKeyT>(key), std::forward<ConnectorConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    UpdateConnectorRequest& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    UpdateConnectorRequest& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}
  private:

    CapacityUpdate m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_connectorConfiguration;
    bool m_connectorConfigurationHasBeenSet = false;

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws

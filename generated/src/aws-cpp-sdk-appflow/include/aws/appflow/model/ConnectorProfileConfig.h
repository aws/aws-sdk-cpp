/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/ConnectorProfileProperties.h>
#include <aws/appflow/model/ConnectorProfileCredentials.h>
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
   * <p> Defines the connector-specific configuration and credentials for the
   * connector profile. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ConnectorProfileConfig">AWS
   * API Reference</a></p>
   */
  class ConnectorProfileConfig
  {
  public:
    AWS_APPFLOW_API ConnectorProfileConfig() = default;
    AWS_APPFLOW_API ConnectorProfileConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfileConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline const ConnectorProfileProperties& GetConnectorProfileProperties() const { return m_connectorProfileProperties; }
    inline bool ConnectorProfilePropertiesHasBeenSet() const { return m_connectorProfilePropertiesHasBeenSet; }
    template<typename ConnectorProfilePropertiesT = ConnectorProfileProperties>
    void SetConnectorProfileProperties(ConnectorProfilePropertiesT&& value) { m_connectorProfilePropertiesHasBeenSet = true; m_connectorProfileProperties = std::forward<ConnectorProfilePropertiesT>(value); }
    template<typename ConnectorProfilePropertiesT = ConnectorProfileProperties>
    ConnectorProfileConfig& WithConnectorProfileProperties(ConnectorProfilePropertiesT&& value) { SetConnectorProfileProperties(std::forward<ConnectorProfilePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The connector-specific credentials required by each connector. </p>
     */
    inline const ConnectorProfileCredentials& GetConnectorProfileCredentials() const { return m_connectorProfileCredentials; }
    inline bool ConnectorProfileCredentialsHasBeenSet() const { return m_connectorProfileCredentialsHasBeenSet; }
    template<typename ConnectorProfileCredentialsT = ConnectorProfileCredentials>
    void SetConnectorProfileCredentials(ConnectorProfileCredentialsT&& value) { m_connectorProfileCredentialsHasBeenSet = true; m_connectorProfileCredentials = std::forward<ConnectorProfileCredentialsT>(value); }
    template<typename ConnectorProfileCredentialsT = ConnectorProfileCredentials>
    ConnectorProfileConfig& WithConnectorProfileCredentials(ConnectorProfileCredentialsT&& value) { SetConnectorProfileCredentials(std::forward<ConnectorProfileCredentialsT>(value)); return *this;}
    ///@}
  private:

    ConnectorProfileProperties m_connectorProfileProperties;
    bool m_connectorProfilePropertiesHasBeenSet = false;

    ConnectorProfileCredentials m_connectorProfileCredentials;
    bool m_connectorProfileCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

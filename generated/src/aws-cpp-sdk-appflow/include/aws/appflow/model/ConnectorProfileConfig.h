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
    AWS_APPFLOW_API ConnectorProfileConfig();
    AWS_APPFLOW_API ConnectorProfileConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ConnectorProfileConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline const ConnectorProfileProperties& GetConnectorProfileProperties() const{ return m_connectorProfileProperties; }

    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline bool ConnectorProfilePropertiesHasBeenSet() const { return m_connectorProfilePropertiesHasBeenSet; }

    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline void SetConnectorProfileProperties(const ConnectorProfileProperties& value) { m_connectorProfilePropertiesHasBeenSet = true; m_connectorProfileProperties = value; }

    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline void SetConnectorProfileProperties(ConnectorProfileProperties&& value) { m_connectorProfilePropertiesHasBeenSet = true; m_connectorProfileProperties = std::move(value); }

    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline ConnectorProfileConfig& WithConnectorProfileProperties(const ConnectorProfileProperties& value) { SetConnectorProfileProperties(value); return *this;}

    /**
     * <p> The connector-specific properties of the profile configuration. </p>
     */
    inline ConnectorProfileConfig& WithConnectorProfileProperties(ConnectorProfileProperties&& value) { SetConnectorProfileProperties(std::move(value)); return *this;}


    /**
     * <p> The connector-specific credentials required by each connector. </p>
     */
    inline const ConnectorProfileCredentials& GetConnectorProfileCredentials() const{ return m_connectorProfileCredentials; }

    /**
     * <p> The connector-specific credentials required by each connector. </p>
     */
    inline bool ConnectorProfileCredentialsHasBeenSet() const { return m_connectorProfileCredentialsHasBeenSet; }

    /**
     * <p> The connector-specific credentials required by each connector. </p>
     */
    inline void SetConnectorProfileCredentials(const ConnectorProfileCredentials& value) { m_connectorProfileCredentialsHasBeenSet = true; m_connectorProfileCredentials = value; }

    /**
     * <p> The connector-specific credentials required by each connector. </p>
     */
    inline void SetConnectorProfileCredentials(ConnectorProfileCredentials&& value) { m_connectorProfileCredentialsHasBeenSet = true; m_connectorProfileCredentials = std::move(value); }

    /**
     * <p> The connector-specific credentials required by each connector. </p>
     */
    inline ConnectorProfileConfig& WithConnectorProfileCredentials(const ConnectorProfileCredentials& value) { SetConnectorProfileCredentials(value); return *this;}

    /**
     * <p> The connector-specific credentials required by each connector. </p>
     */
    inline ConnectorProfileConfig& WithConnectorProfileCredentials(ConnectorProfileCredentials&& value) { SetConnectorProfileCredentials(std::move(value)); return *this;}

  private:

    ConnectorProfileProperties m_connectorProfileProperties;
    bool m_connectorProfilePropertiesHasBeenSet = false;

    ConnectorProfileCredentials m_connectorProfileCredentials;
    bool m_connectorProfileCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

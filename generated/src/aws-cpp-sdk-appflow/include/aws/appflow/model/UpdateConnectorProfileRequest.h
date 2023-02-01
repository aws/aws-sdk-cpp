/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectionMode.h>
#include <aws/appflow/model/ConnectorProfileConfig.h>
#include <utility>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class UpdateConnectorProfileRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API UpdateConnectorProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectorProfile"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }

    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }

    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }

    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }

    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }

    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline UpdateConnectorProfileRequest& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}

    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline UpdateConnectorProfileRequest& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}

    /**
     * <p> The name of the connector profile and is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline UpdateConnectorProfileRequest& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}


    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline const ConnectionMode& GetConnectionMode() const{ return m_connectionMode; }

    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }

    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline void SetConnectionMode(const ConnectionMode& value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }

    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline void SetConnectionMode(ConnectionMode&& value) { m_connectionModeHasBeenSet = true; m_connectionMode = std::move(value); }

    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline UpdateConnectorProfileRequest& WithConnectionMode(const ConnectionMode& value) { SetConnectionMode(value); return *this;}

    /**
     * <p> Indicates the connection mode and if it is public or private. </p>
     */
    inline UpdateConnectorProfileRequest& WithConnectionMode(ConnectionMode&& value) { SetConnectionMode(std::move(value)); return *this;}


    /**
     * <p> Defines the connector-specific profile configuration and credentials. </p>
     */
    inline const ConnectorProfileConfig& GetConnectorProfileConfig() const{ return m_connectorProfileConfig; }

    /**
     * <p> Defines the connector-specific profile configuration and credentials. </p>
     */
    inline bool ConnectorProfileConfigHasBeenSet() const { return m_connectorProfileConfigHasBeenSet; }

    /**
     * <p> Defines the connector-specific profile configuration and credentials. </p>
     */
    inline void SetConnectorProfileConfig(const ConnectorProfileConfig& value) { m_connectorProfileConfigHasBeenSet = true; m_connectorProfileConfig = value; }

    /**
     * <p> Defines the connector-specific profile configuration and credentials. </p>
     */
    inline void SetConnectorProfileConfig(ConnectorProfileConfig&& value) { m_connectorProfileConfigHasBeenSet = true; m_connectorProfileConfig = std::move(value); }

    /**
     * <p> Defines the connector-specific profile configuration and credentials. </p>
     */
    inline UpdateConnectorProfileRequest& WithConnectorProfileConfig(const ConnectorProfileConfig& value) { SetConnectorProfileConfig(value); return *this;}

    /**
     * <p> Defines the connector-specific profile configuration and credentials. </p>
     */
    inline UpdateConnectorProfileRequest& WithConnectorProfileConfig(ConnectorProfileConfig&& value) { SetConnectorProfileConfig(std::move(value)); return *this;}

  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    ConnectionMode m_connectionMode;
    bool m_connectionModeHasBeenSet = false;

    ConnectorProfileConfig m_connectorProfileConfig;
    bool m_connectorProfileConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

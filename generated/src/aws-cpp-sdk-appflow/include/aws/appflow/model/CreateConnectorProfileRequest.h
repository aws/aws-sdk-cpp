﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/appflow/model/ConnectionMode.h>
#include <aws/appflow/model/ConnectorProfileConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class CreateConnectorProfileRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API CreateConnectorProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectorProfile"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in your Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }
    inline CreateConnectorProfileRequest& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}
    inline CreateConnectorProfileRequest& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}
    inline CreateConnectorProfileRequest& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline const Aws::String& GetKmsArn() const{ return m_kmsArn; }
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }
    inline void SetKmsArn(const Aws::String& value) { m_kmsArnHasBeenSet = true; m_kmsArn = value; }
    inline void SetKmsArn(Aws::String&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::move(value); }
    inline void SetKmsArn(const char* value) { m_kmsArnHasBeenSet = true; m_kmsArn.assign(value); }
    inline CreateConnectorProfileRequest& WithKmsArn(const Aws::String& value) { SetKmsArn(value); return *this;}
    inline CreateConnectorProfileRequest& WithKmsArn(Aws::String&& value) { SetKmsArn(std::move(value)); return *this;}
    inline CreateConnectorProfileRequest& WithKmsArn(const char* value) { SetKmsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline CreateConnectorProfileRequest& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}
    inline CreateConnectorProfileRequest& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account. Only
     * needed if calling for CUSTOMCONNECTOR connector type/.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }
    inline CreateConnectorProfileRequest& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}
    inline CreateConnectorProfileRequest& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}
    inline CreateConnectorProfileRequest& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the connection mode and specifies whether it is public or private.
     * Private flows use Amazon Web Services PrivateLink to route data over Amazon Web
     * Services infrastructure without exposing it to the public internet. </p>
     */
    inline const ConnectionMode& GetConnectionMode() const{ return m_connectionMode; }
    inline bool ConnectionModeHasBeenSet() const { return m_connectionModeHasBeenSet; }
    inline void SetConnectionMode(const ConnectionMode& value) { m_connectionModeHasBeenSet = true; m_connectionMode = value; }
    inline void SetConnectionMode(ConnectionMode&& value) { m_connectionModeHasBeenSet = true; m_connectionMode = std::move(value); }
    inline CreateConnectorProfileRequest& WithConnectionMode(const ConnectionMode& value) { SetConnectionMode(value); return *this;}
    inline CreateConnectorProfileRequest& WithConnectionMode(ConnectionMode&& value) { SetConnectionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the connector-specific configuration and credentials. </p>
     */
    inline const ConnectorProfileConfig& GetConnectorProfileConfig() const{ return m_connectorProfileConfig; }
    inline bool ConnectorProfileConfigHasBeenSet() const { return m_connectorProfileConfigHasBeenSet; }
    inline void SetConnectorProfileConfig(const ConnectorProfileConfig& value) { m_connectorProfileConfigHasBeenSet = true; m_connectorProfileConfig = value; }
    inline void SetConnectorProfileConfig(ConnectorProfileConfig&& value) { m_connectorProfileConfigHasBeenSet = true; m_connectorProfileConfig = std::move(value); }
    inline CreateConnectorProfileRequest& WithConnectorProfileConfig(const ConnectorProfileConfig& value) { SetConnectorProfileConfig(value); return *this;}
    inline CreateConnectorProfileRequest& WithConnectorProfileConfig(ConnectorProfileConfig&& value) { SetConnectorProfileConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>CreateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>CreateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateConnectorProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateConnectorProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateConnectorProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    Aws::String m_kmsArn;
    bool m_kmsArnHasBeenSet = false;

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    ConnectionMode m_connectionMode;
    bool m_connectionModeHasBeenSet = false;

    ConnectorProfileConfig m_connectorProfileConfig;
    bool m_connectorProfileConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

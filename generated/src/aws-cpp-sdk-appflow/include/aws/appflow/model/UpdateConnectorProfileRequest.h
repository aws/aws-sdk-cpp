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
#include <aws/core/utils/UUID.h>

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


    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline UpdateConnectorProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline UpdateConnectorProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorProfile</code> request completes only once. You
     * choose the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorProfile</code>. The token is active for 8 hours.</p>
     */
    inline UpdateConnectorProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

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

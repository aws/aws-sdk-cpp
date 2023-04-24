/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorProvisioningConfig.h>
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
  class UpdateConnectorRegistrationRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API UpdateConnectorRegistrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectorRegistration"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }

    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }

    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }

    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }

    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }

    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}

    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}

    /**
     * <p>The name of the connector. The name is unique for each connector registration
     * in your AWS account.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}


    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description about the update that you're applying to the connector.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const ConnectorProvisioningConfig& GetConnectorProvisioningConfig() const{ return m_connectorProvisioningConfig; }

    
    inline bool ConnectorProvisioningConfigHasBeenSet() const { return m_connectorProvisioningConfigHasBeenSet; }

    
    inline void SetConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = value; }

    
    inline void SetConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = std::move(value); }

    
    inline UpdateConnectorRegistrationRequest& WithConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { SetConnectorProvisioningConfig(value); return *this;}

    
    inline UpdateConnectorRegistrationRequest& WithConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { SetConnectorProvisioningConfig(std::move(value)); return *this;}


    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateConnectorRegistration</code> request completes only once.
     * You choose the value to pass. For example, if you don't receive a response from
     * your request, you can safely retry the request with the same
     * <code>clientToken</code> parameter value.</p> <p>If you omit a
     * <code>clientToken</code> value, the Amazon Web Services SDK that you are using
     * inserts a value for you. This way, the SDK can safely retry requests multiple
     * times after a network error. You must provide your own value for other use
     * cases.</p> <p>If you specify input parameters that differ from your first
     * request, an error occurs. If you use a different value for
     * <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateConnectorRegistration</code>. The token is active for 8 hours.</p>
     */
    inline UpdateConnectorRegistrationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectorProvisioningConfig m_connectorProvisioningConfig;
    bool m_connectorProvisioningConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

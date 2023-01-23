/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorProvisioningType.h>
#include <aws/appflow/model/ConnectorProvisioningConfig.h>
#include <utility>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class RegisterConnectorRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API RegisterConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterConnector"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }

    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }

    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }

    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }

    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }

    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline RegisterConnectorRequest& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}

    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline RegisterConnectorRequest& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}

    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline RegisterConnectorRequest& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}


    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline RegisterConnectorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline RegisterConnectorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline RegisterConnectorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA. </p>
     */
    inline const ConnectorProvisioningType& GetConnectorProvisioningType() const{ return m_connectorProvisioningType; }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA. </p>
     */
    inline bool ConnectorProvisioningTypeHasBeenSet() const { return m_connectorProvisioningTypeHasBeenSet; }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA. </p>
     */
    inline void SetConnectorProvisioningType(const ConnectorProvisioningType& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = value; }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA. </p>
     */
    inline void SetConnectorProvisioningType(ConnectorProvisioningType&& value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = std::move(value); }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA. </p>
     */
    inline RegisterConnectorRequest& WithConnectorProvisioningType(const ConnectorProvisioningType& value) { SetConnectorProvisioningType(value); return *this;}

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA. </p>
     */
    inline RegisterConnectorRequest& WithConnectorProvisioningType(ConnectorProvisioningType&& value) { SetConnectorProvisioningType(std::move(value)); return *this;}


    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA.</p>
     */
    inline const ConnectorProvisioningConfig& GetConnectorProvisioningConfig() const{ return m_connectorProvisioningConfig; }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA.</p>
     */
    inline bool ConnectorProvisioningConfigHasBeenSet() const { return m_connectorProvisioningConfigHasBeenSet; }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA.</p>
     */
    inline void SetConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = value; }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA.</p>
     */
    inline void SetConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = std::move(value); }

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA.</p>
     */
    inline RegisterConnectorRequest& WithConnectorProvisioningConfig(const ConnectorProvisioningConfig& value) { SetConnectorProvisioningConfig(value); return *this;}

    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA.</p>
     */
    inline RegisterConnectorRequest& WithConnectorProvisioningConfig(ConnectorProvisioningConfig&& value) { SetConnectorProvisioningConfig(std::move(value)); return *this;}

  private:

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectorProvisioningType m_connectorProvisioningType;
    bool m_connectorProvisioningTypeHasBeenSet = false;

    ConnectorProvisioningConfig m_connectorProvisioningConfig;
    bool m_connectorProvisioningConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

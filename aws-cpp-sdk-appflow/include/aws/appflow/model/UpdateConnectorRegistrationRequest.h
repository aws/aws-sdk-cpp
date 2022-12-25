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

  private:

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectorProvisioningConfig m_connectorProvisioningConfig;
    bool m_connectorProvisioningConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

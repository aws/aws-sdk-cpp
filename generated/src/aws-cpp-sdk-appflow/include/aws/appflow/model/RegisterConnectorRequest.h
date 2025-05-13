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
#include <aws/core/utils/UUID.h>

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
    AWS_APPFLOW_API RegisterConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterConnector"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetConnectorLabel() const { return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    template<typename ConnectorLabelT = Aws::String>
    void SetConnectorLabel(ConnectorLabelT&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::forward<ConnectorLabelT>(value); }
    template<typename ConnectorLabelT = Aws::String>
    RegisterConnectorRequest& WithConnectorLabel(ConnectorLabelT&& value) { SetConnectorLabel(std::forward<ConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the connector that's being registered.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RegisterConnectorRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA. </p>
     */
    inline ConnectorProvisioningType GetConnectorProvisioningType() const { return m_connectorProvisioningType; }
    inline bool ConnectorProvisioningTypeHasBeenSet() const { return m_connectorProvisioningTypeHasBeenSet; }
    inline void SetConnectorProvisioningType(ConnectorProvisioningType value) { m_connectorProvisioningTypeHasBeenSet = true; m_connectorProvisioningType = value; }
    inline RegisterConnectorRequest& WithConnectorProvisioningType(ConnectorProvisioningType value) { SetConnectorProvisioningType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning type of the connector. Currently the only supported value is
     * LAMBDA.</p>
     */
    inline const ConnectorProvisioningConfig& GetConnectorProvisioningConfig() const { return m_connectorProvisioningConfig; }
    inline bool ConnectorProvisioningConfigHasBeenSet() const { return m_connectorProvisioningConfigHasBeenSet; }
    template<typename ConnectorProvisioningConfigT = ConnectorProvisioningConfig>
    void SetConnectorProvisioningConfig(ConnectorProvisioningConfigT&& value) { m_connectorProvisioningConfigHasBeenSet = true; m_connectorProvisioningConfig = std::forward<ConnectorProvisioningConfigT>(value); }
    template<typename ConnectorProvisioningConfigT = ConnectorProvisioningConfig>
    RegisterConnectorRequest& WithConnectorProvisioningConfig(ConnectorProvisioningConfigT&& value) { SetConnectorProvisioningConfig(std::forward<ConnectorProvisioningConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>RegisterConnector</code> request completes only once. You choose
     * the value to pass. For example, if you don't receive a response from your
     * request, you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>RegisterConnector</code>. The token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    RegisterConnectorRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ConnectorProvisioningType m_connectorProvisioningType{ConnectorProvisioningType::NOT_SET};
    bool m_connectorProvisioningTypeHasBeenSet = false;

    ConnectorProvisioningConfig m_connectorProvisioningConfig;
    bool m_connectorProvisioningConfigHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws

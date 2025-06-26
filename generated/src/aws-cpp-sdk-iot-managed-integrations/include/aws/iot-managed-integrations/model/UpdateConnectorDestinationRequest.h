/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/AuthType.h>
#include <aws/iot-managed-integrations/model/AuthConfigUpdate.h>
#include <aws/iot-managed-integrations/model/SecretsManager.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class UpdateConnectorDestinationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API UpdateConnectorDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectorDestination"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the connector destination to update.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateConnectorDestinationRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description to assign to the connector destination.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConnectorDestinationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new display name to assign to the connector destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConnectorDestinationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new authentication type to use for the connector destination.</p>
     */
    inline AuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline UpdateConnectorDestinationRequest& WithAuthType(AuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated authentication configuration details for the connector
     * destination.</p>
     */
    inline const AuthConfigUpdate& GetAuthConfig() const { return m_authConfig; }
    inline bool AuthConfigHasBeenSet() const { return m_authConfigHasBeenSet; }
    template<typename AuthConfigT = AuthConfigUpdate>
    void SetAuthConfig(AuthConfigT&& value) { m_authConfigHasBeenSet = true; m_authConfig = std::forward<AuthConfigT>(value); }
    template<typename AuthConfigT = AuthConfigUpdate>
    UpdateConnectorDestinationRequest& WithAuthConfig(AuthConfigT&& value) { SetAuthConfig(std::forward<AuthConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated AWS Secrets Manager configuration for the connector
     * destination.</p>
     */
    inline const SecretsManager& GetSecretsManager() const { return m_secretsManager; }
    inline bool SecretsManagerHasBeenSet() const { return m_secretsManagerHasBeenSet; }
    template<typename SecretsManagerT = SecretsManager>
    void SetSecretsManager(SecretsManagerT&& value) { m_secretsManagerHasBeenSet = true; m_secretsManager = std::forward<SecretsManagerT>(value); }
    template<typename SecretsManagerT = SecretsManager>
    UpdateConnectorDestinationRequest& WithSecretsManager(SecretsManagerT&& value) { SetSecretsManager(std::forward<SecretsManagerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AuthType m_authType{AuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    AuthConfigUpdate m_authConfig;
    bool m_authConfigHasBeenSet = false;

    SecretsManager m_secretsManager;
    bool m_secretsManagerHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

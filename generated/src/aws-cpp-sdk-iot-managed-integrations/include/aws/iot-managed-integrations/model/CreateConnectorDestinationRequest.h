/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/AuthType.h>
#include <aws/iot-managed-integrations/model/AuthConfig.h>
#include <aws/iot-managed-integrations/model/SecretsManager.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class CreateConnectorDestinationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API CreateConnectorDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnectorDestination"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The display name of the connector destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConnectorDestinationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connector destination.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateConnectorDestinationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the C2C connector.</p>
     */
    inline const Aws::String& GetCloudConnectorId() const { return m_cloudConnectorId; }
    inline bool CloudConnectorIdHasBeenSet() const { return m_cloudConnectorIdHasBeenSet; }
    template<typename CloudConnectorIdT = Aws::String>
    void SetCloudConnectorId(CloudConnectorIdT&& value) { m_cloudConnectorIdHasBeenSet = true; m_cloudConnectorId = std::forward<CloudConnectorIdT>(value); }
    template<typename CloudConnectorIdT = Aws::String>
    CreateConnectorDestinationRequest& WithCloudConnectorId(CloudConnectorIdT&& value) { SetCloudConnectorId(std::forward<CloudConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type used for the connector destination, which determines
     * how credentials and access are managed.</p>
     */
    inline AuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline CreateConnectorDestinationRequest& WithAuthType(AuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration details for the connector destination,
     * including OAuth settings and other authentication parameters.</p>
     */
    inline const AuthConfig& GetAuthConfig() const { return m_authConfig; }
    inline bool AuthConfigHasBeenSet() const { return m_authConfigHasBeenSet; }
    template<typename AuthConfigT = AuthConfig>
    void SetAuthConfig(AuthConfigT&& value) { m_authConfigHasBeenSet = true; m_authConfig = std::forward<AuthConfigT>(value); }
    template<typename AuthConfigT = AuthConfig>
    CreateConnectorDestinationRequest& WithAuthConfig(AuthConfigT&& value) { SetAuthConfig(std::forward<AuthConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Secrets Manager configuration used to securely store and manage
     * sensitive information for the connector destination.</p>
     */
    inline const SecretsManager& GetSecretsManager() const { return m_secretsManager; }
    inline bool SecretsManagerHasBeenSet() const { return m_secretsManagerHasBeenSet; }
    template<typename SecretsManagerT = SecretsManager>
    void SetSecretsManager(SecretsManagerT&& value) { m_secretsManagerHasBeenSet = true; m_secretsManager = std::forward<SecretsManagerT>(value); }
    template<typename SecretsManagerT = SecretsManager>
    CreateConnectorDestinationRequest& WithSecretsManager(SecretsManagerT&& value) { SetSecretsManager(std::forward<SecretsManagerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token. If you retry a request that completed successfully
     * initially using the same client token and parameters, then the retry attempt
     * will succeed without performing any further actions.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateConnectorDestinationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_cloudConnectorId;
    bool m_cloudConnectorIdHasBeenSet = false;

    AuthType m_authType{AuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    AuthConfig m_authConfig;
    bool m_authConfigHasBeenSet = false;

    SecretsManager m_secretsManager;
    bool m_secretsManagerHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

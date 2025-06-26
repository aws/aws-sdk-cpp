/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/AuthType.h>
#include <aws/iot-managed-integrations/model/AuthConfig.h>
#include <aws/iot-managed-integrations/model/SecretsManager.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetConnectorDestinationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetConnectorDestinationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetConnectorDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetConnectorDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The display name of the connector destination.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetConnectorDestinationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the connector destination.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetConnectorDestinationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the C2C connector.</p>
     */
    inline const Aws::String& GetCloudConnectorId() const { return m_cloudConnectorId; }
    template<typename CloudConnectorIdT = Aws::String>
    void SetCloudConnectorId(CloudConnectorIdT&& value) { m_cloudConnectorIdHasBeenSet = true; m_cloudConnectorId = std::forward<CloudConnectorIdT>(value); }
    template<typename CloudConnectorIdT = Aws::String>
    GetConnectorDestinationResult& WithCloudConnectorId(CloudConnectorIdT&& value) { SetCloudConnectorId(std::forward<CloudConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the connector destination.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetConnectorDestinationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type used for the connector destination, which determines
     * how credentials and access are managed.</p>
     */
    inline AuthType GetAuthType() const { return m_authType; }
    inline void SetAuthType(AuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline GetConnectorDestinationResult& WithAuthType(AuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration details for the connector destination,
     * including OAuth settings and other authentication parameters.</p>
     */
    inline const AuthConfig& GetAuthConfig() const { return m_authConfig; }
    template<typename AuthConfigT = AuthConfig>
    void SetAuthConfig(AuthConfigT&& value) { m_authConfigHasBeenSet = true; m_authConfig = std::forward<AuthConfigT>(value); }
    template<typename AuthConfigT = AuthConfig>
    GetConnectorDestinationResult& WithAuthConfig(AuthConfigT&& value) { SetAuthConfig(std::forward<AuthConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Secrets Manager configuration used to securely store and manage
     * sensitive information for the connector destination.</p>
     */
    inline const SecretsManager& GetSecretsManager() const { return m_secretsManager; }
    template<typename SecretsManagerT = SecretsManager>
    void SetSecretsManager(SecretsManagerT&& value) { m_secretsManagerHasBeenSet = true; m_secretsManager = std::forward<SecretsManagerT>(value); }
    template<typename SecretsManagerT = SecretsManager>
    GetConnectorDestinationResult& WithSecretsManager(SecretsManagerT&& value) { SetSecretsManager(std::forward<SecretsManagerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL where users are redirected after completing the OAuth authorization
     * process for the connector destination.</p>
     */
    inline const Aws::String& GetOAuthCompleteRedirectUrl() const { return m_oAuthCompleteRedirectUrl; }
    template<typename OAuthCompleteRedirectUrlT = Aws::String>
    void SetOAuthCompleteRedirectUrl(OAuthCompleteRedirectUrlT&& value) { m_oAuthCompleteRedirectUrlHasBeenSet = true; m_oAuthCompleteRedirectUrl = std::forward<OAuthCompleteRedirectUrlT>(value); }
    template<typename OAuthCompleteRedirectUrlT = Aws::String>
    GetConnectorDestinationResult& WithOAuthCompleteRedirectUrl(OAuthCompleteRedirectUrlT&& value) { SetOAuthCompleteRedirectUrl(std::forward<OAuthCompleteRedirectUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectorDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_cloudConnectorId;
    bool m_cloudConnectorIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AuthType m_authType{AuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    AuthConfig m_authConfig;
    bool m_authConfigHasBeenSet = false;

    SecretsManager m_secretsManager;
    bool m_secretsManagerHasBeenSet = false;

    Aws::String m_oAuthCompleteRedirectUrl;
    bool m_oAuthCompleteRedirectUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws

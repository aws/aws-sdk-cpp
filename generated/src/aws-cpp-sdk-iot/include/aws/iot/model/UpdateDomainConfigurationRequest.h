/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuthorizerConfig.h>
#include <aws/iot/model/DomainConfigurationStatus.h>
#include <aws/iot/model/TlsConfig.h>
#include <aws/iot/model/ServerCertificateConfig.h>
#include <aws/iot/model/AuthenticationType.h>
#include <aws/iot/model/ApplicationProtocol.h>
#include <aws/iot/model/ClientCertificateConfig.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateDomainConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateDomainConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the domain configuration to be updated.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const { return m_domainConfigurationName; }
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }
    template<typename DomainConfigurationNameT = Aws::String>
    void SetDomainConfigurationName(DomainConfigurationNameT&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::forward<DomainConfigurationNameT>(value); }
    template<typename DomainConfigurationNameT = Aws::String>
    UpdateDomainConfigurationRequest& WithDomainConfigurationName(DomainConfigurationNameT&& value) { SetDomainConfigurationName(std::forward<DomainConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline const AuthorizerConfig& GetAuthorizerConfig() const { return m_authorizerConfig; }
    inline bool AuthorizerConfigHasBeenSet() const { return m_authorizerConfigHasBeenSet; }
    template<typename AuthorizerConfigT = AuthorizerConfig>
    void SetAuthorizerConfig(AuthorizerConfigT&& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = std::forward<AuthorizerConfigT>(value); }
    template<typename AuthorizerConfigT = AuthorizerConfig>
    UpdateDomainConfigurationRequest& WithAuthorizerConfig(AuthorizerConfigT&& value) { SetAuthorizerConfig(std::forward<AuthorizerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to which the domain configuration should be updated.</p>
     */
    inline DomainConfigurationStatus GetDomainConfigurationStatus() const { return m_domainConfigurationStatus; }
    inline bool DomainConfigurationStatusHasBeenSet() const { return m_domainConfigurationStatusHasBeenSet; }
    inline void SetDomainConfigurationStatus(DomainConfigurationStatus value) { m_domainConfigurationStatusHasBeenSet = true; m_domainConfigurationStatus = value; }
    inline UpdateDomainConfigurationRequest& WithDomainConfigurationStatus(DomainConfigurationStatus value) { SetDomainConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes the authorization configuration from a domain.</p>
     */
    inline bool GetRemoveAuthorizerConfig() const { return m_removeAuthorizerConfig; }
    inline bool RemoveAuthorizerConfigHasBeenSet() const { return m_removeAuthorizerConfigHasBeenSet; }
    inline void SetRemoveAuthorizerConfig(bool value) { m_removeAuthorizerConfigHasBeenSet = true; m_removeAuthorizerConfig = value; }
    inline UpdateDomainConfigurationRequest& WithRemoveAuthorizerConfig(bool value) { SetRemoveAuthorizerConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline const TlsConfig& GetTlsConfig() const { return m_tlsConfig; }
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }
    template<typename TlsConfigT = TlsConfig>
    void SetTlsConfig(TlsConfigT&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::forward<TlsConfigT>(value); }
    template<typename TlsConfigT = TlsConfig>
    UpdateDomainConfigurationRequest& WithTlsConfig(TlsConfigT&& value) { SetTlsConfig(std::forward<TlsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server certificate configuration.</p>
     */
    inline const ServerCertificateConfig& GetServerCertificateConfig() const { return m_serverCertificateConfig; }
    inline bool ServerCertificateConfigHasBeenSet() const { return m_serverCertificateConfigHasBeenSet; }
    template<typename ServerCertificateConfigT = ServerCertificateConfig>
    void SetServerCertificateConfig(ServerCertificateConfigT&& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = std::forward<ServerCertificateConfigT>(value); }
    template<typename ServerCertificateConfigT = ServerCertificateConfig>
    UpdateDomainConfigurationRequest& WithServerCertificateConfig(ServerCertificateConfigT&& value) { SetServerCertificateConfig(std::forward<ServerCertificateConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumerated string that speciﬁes the authentication type.</p> <ul> <li> <p>
     * <code>CUSTOM_AUTH_X509</code> - Use custom authentication and authorization with
     * additional details from the X.509 client certificate.</p> </li> </ul> <ul> <li>
     * <p> <code>CUSTOM_AUTH</code> - Use custom authentication and authorization. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/custom-authentication.html">Custom
     * authentication and authorization</a>.</p> </li> </ul> <ul> <li> <p>
     * <code>AWS_X509</code> - Use X.509 client certificates without custom
     * authentication and authorization. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/x509-client-certs.html">X.509
     * client certificates</a>.</p> </li> </ul> <ul> <li> <p> <code>AWS_SIGV4</code> -
     * Use Amazon Web Services Signature Version 4. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/custom-authentication.html">IAM
     * users, groups, and roles</a>.</p> </li> </ul> <ul> <li> <p> <code>DEFAULT
     * </code> - Use a combination of port and Application Layer Protocol Negotiation
     * (ALPN) to specify authentication type. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/protocols.html">Device
     * communication protocols</a>.</p> </li> </ul>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline UpdateDomainConfigurationRequest& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumerated string that speciﬁes the application-layer protocol.</p> <ul>
     * <li> <p> <code>SECURE_MQTT</code> - MQTT over TLS.</p> </li> </ul> <ul> <li> <p>
     * <code>MQTT_WSS</code> - MQTT over WebSocket.</p> </li> </ul> <ul> <li> <p>
     * <code>HTTPS</code> - HTTP over TLS.</p> </li> </ul> <ul> <li> <p>
     * <code>DEFAULT</code> - Use a combination of port and Application Layer Protocol
     * Negotiation (ALPN) to specify application_layer protocol. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/protocols.html">Device
     * communication protocols</a>.</p> </li> </ul>
     */
    inline ApplicationProtocol GetApplicationProtocol() const { return m_applicationProtocol; }
    inline bool ApplicationProtocolHasBeenSet() const { return m_applicationProtocolHasBeenSet; }
    inline void SetApplicationProtocol(ApplicationProtocol value) { m_applicationProtocolHasBeenSet = true; m_applicationProtocol = value; }
    inline UpdateDomainConfigurationRequest& WithApplicationProtocol(ApplicationProtocol value) { SetApplicationProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that speciﬁes the client certificate conﬁguration for a domain.</p>
     */
    inline const ClientCertificateConfig& GetClientCertificateConfig() const { return m_clientCertificateConfig; }
    inline bool ClientCertificateConfigHasBeenSet() const { return m_clientCertificateConfigHasBeenSet; }
    template<typename ClientCertificateConfigT = ClientCertificateConfig>
    void SetClientCertificateConfig(ClientCertificateConfigT&& value) { m_clientCertificateConfigHasBeenSet = true; m_clientCertificateConfig = std::forward<ClientCertificateConfigT>(value); }
    template<typename ClientCertificateConfigT = ClientCertificateConfig>
    UpdateDomainConfigurationRequest& WithClientCertificateConfig(ClientCertificateConfigT&& value) { SetClientCertificateConfig(std::forward<ClientCertificateConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;

    AuthorizerConfig m_authorizerConfig;
    bool m_authorizerConfigHasBeenSet = false;

    DomainConfigurationStatus m_domainConfigurationStatus{DomainConfigurationStatus::NOT_SET};
    bool m_domainConfigurationStatusHasBeenSet = false;

    bool m_removeAuthorizerConfig{false};
    bool m_removeAuthorizerConfigHasBeenSet = false;

    TlsConfig m_tlsConfig;
    bool m_tlsConfigHasBeenSet = false;

    ServerCertificateConfig m_serverCertificateConfig;
    bool m_serverCertificateConfigHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    ApplicationProtocol m_applicationProtocol{ApplicationProtocol::NOT_SET};
    bool m_applicationProtocolHasBeenSet = false;

    ClientCertificateConfig m_clientCertificateConfig;
    bool m_clientCertificateConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

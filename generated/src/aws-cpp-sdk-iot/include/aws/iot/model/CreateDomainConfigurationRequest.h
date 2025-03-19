/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AuthorizerConfig.h>
#include <aws/iot/model/ServiceType.h>
#include <aws/iot/model/TlsConfig.h>
#include <aws/iot/model/ServerCertificateConfig.h>
#include <aws/iot/model/AuthenticationType.h>
#include <aws/iot/model/ApplicationProtocol.h>
#include <aws/iot/model/ClientCertificateConfig.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateDomainConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateDomainConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const { return m_domainConfigurationName; }
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }
    template<typename DomainConfigurationNameT = Aws::String>
    void SetDomainConfigurationName(DomainConfigurationNameT&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::forward<DomainConfigurationNameT>(value); }
    template<typename DomainConfigurationNameT = Aws::String>
    CreateDomainConfigurationRequest& WithDomainConfigurationName(DomainConfigurationNameT&& value) { SetDomainConfigurationName(std::forward<DomainConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateDomainConfigurationRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServerCertificateArns() const { return m_serverCertificateArns; }
    inline bool ServerCertificateArnsHasBeenSet() const { return m_serverCertificateArnsHasBeenSet; }
    template<typename ServerCertificateArnsT = Aws::Vector<Aws::String>>
    void SetServerCertificateArns(ServerCertificateArnsT&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns = std::forward<ServerCertificateArnsT>(value); }
    template<typename ServerCertificateArnsT = Aws::Vector<Aws::String>>
    CreateDomainConfigurationRequest& WithServerCertificateArns(ServerCertificateArnsT&& value) { SetServerCertificateArns(std::forward<ServerCertificateArnsT>(value)); return *this;}
    template<typename ServerCertificateArnsT = Aws::String>
    CreateDomainConfigurationRequest& AddServerCertificateArns(ServerCertificateArnsT&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.emplace_back(std::forward<ServerCertificateArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline const Aws::String& GetValidationCertificateArn() const { return m_validationCertificateArn; }
    inline bool ValidationCertificateArnHasBeenSet() const { return m_validationCertificateArnHasBeenSet; }
    template<typename ValidationCertificateArnT = Aws::String>
    void SetValidationCertificateArn(ValidationCertificateArnT&& value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn = std::forward<ValidationCertificateArnT>(value); }
    template<typename ValidationCertificateArnT = Aws::String>
    CreateDomainConfigurationRequest& WithValidationCertificateArn(ValidationCertificateArnT&& value) { SetValidationCertificateArn(std::forward<ValidationCertificateArnT>(value)); return *this;}
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
    CreateDomainConfigurationRequest& WithAuthorizerConfig(AuthorizerConfigT&& value) { SetAuthorizerConfig(std::forward<AuthorizerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline CreateDomainConfigurationRequest& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDomainConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDomainConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateDomainConfigurationRequest& WithTlsConfig(TlsConfigT&& value) { SetTlsConfig(std::forward<TlsConfigT>(value)); return *this;}
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
    CreateDomainConfigurationRequest& WithServerCertificateConfig(ServerCertificateConfigT&& value) { SetServerCertificateConfig(std::forward<ServerCertificateConfigT>(value)); return *this;}
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
     * users, groups, and roles</a>.</p> </li> </ul> <ul> <li> <p> <code>DEFAULT</code>
     * - Use a combination of port and Application Layer Protocol Negotiation (ALPN) to
     * specify authentication type. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/protocols.html">Device
     * communication protocols</a>.</p> </li> </ul>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline CreateDomainConfigurationRequest& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
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
    inline CreateDomainConfigurationRequest& WithApplicationProtocol(ApplicationProtocol value) { SetApplicationProtocol(value); return *this;}
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
    CreateDomainConfigurationRequest& WithClientCertificateConfig(ClientCertificateConfigT&& value) { SetClientCertificateConfig(std::forward<ClientCertificateConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_serverCertificateArns;
    bool m_serverCertificateArnsHasBeenSet = false;

    Aws::String m_validationCertificateArn;
    bool m_validationCertificateArnHasBeenSet = false;

    AuthorizerConfig m_authorizerConfig;
    bool m_authorizerConfigHasBeenSet = false;

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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

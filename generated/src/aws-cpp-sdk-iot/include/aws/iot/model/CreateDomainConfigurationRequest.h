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
    AWS_IOT_API CreateDomainConfigurationRequest();

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
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = value; }
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::move(value); }
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName.assign(value); }
    inline CreateDomainConfigurationRequest& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}
    inline CreateDomainConfigurationRequest& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}
    inline CreateDomainConfigurationRequest& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateDomainConfigurationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateDomainConfigurationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateDomainConfigurationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServerCertificateArns() const{ return m_serverCertificateArns; }
    inline bool ServerCertificateArnsHasBeenSet() const { return m_serverCertificateArnsHasBeenSet; }
    inline void SetServerCertificateArns(const Aws::Vector<Aws::String>& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns = value; }
    inline void SetServerCertificateArns(Aws::Vector<Aws::String>&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns = std::move(value); }
    inline CreateDomainConfigurationRequest& WithServerCertificateArns(const Aws::Vector<Aws::String>& value) { SetServerCertificateArns(value); return *this;}
    inline CreateDomainConfigurationRequest& WithServerCertificateArns(Aws::Vector<Aws::String>&& value) { SetServerCertificateArns(std::move(value)); return *this;}
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(const Aws::String& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(value); return *this; }
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(Aws::String&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(std::move(value)); return *this; }
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(const char* value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline const Aws::String& GetValidationCertificateArn() const{ return m_validationCertificateArn; }
    inline bool ValidationCertificateArnHasBeenSet() const { return m_validationCertificateArnHasBeenSet; }
    inline void SetValidationCertificateArn(const Aws::String& value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn = value; }
    inline void SetValidationCertificateArn(Aws::String&& value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn = std::move(value); }
    inline void SetValidationCertificateArn(const char* value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn.assign(value); }
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(const Aws::String& value) { SetValidationCertificateArn(value); return *this;}
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(Aws::String&& value) { SetValidationCertificateArn(std::move(value)); return *this;}
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(const char* value) { SetValidationCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline const AuthorizerConfig& GetAuthorizerConfig() const{ return m_authorizerConfig; }
    inline bool AuthorizerConfigHasBeenSet() const { return m_authorizerConfigHasBeenSet; }
    inline void SetAuthorizerConfig(const AuthorizerConfig& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = value; }
    inline void SetAuthorizerConfig(AuthorizerConfig&& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = std::move(value); }
    inline CreateDomainConfigurationRequest& WithAuthorizerConfig(const AuthorizerConfig& value) { SetAuthorizerConfig(value); return *this;}
    inline CreateDomainConfigurationRequest& WithAuthorizerConfig(AuthorizerConfig&& value) { SetAuthorizerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline CreateDomainConfigurationRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}
    inline CreateDomainConfigurationRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDomainConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDomainConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDomainConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDomainConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = value; }
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::move(value); }
    inline CreateDomainConfigurationRequest& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}
    inline CreateDomainConfigurationRequest& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server certificate configuration.</p>
     */
    inline const ServerCertificateConfig& GetServerCertificateConfig() const{ return m_serverCertificateConfig; }
    inline bool ServerCertificateConfigHasBeenSet() const { return m_serverCertificateConfigHasBeenSet; }
    inline void SetServerCertificateConfig(const ServerCertificateConfig& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = value; }
    inline void SetServerCertificateConfig(ServerCertificateConfig&& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = std::move(value); }
    inline CreateDomainConfigurationRequest& WithServerCertificateConfig(const ServerCertificateConfig& value) { SetServerCertificateConfig(value); return *this;}
    inline CreateDomainConfigurationRequest& WithServerCertificateConfig(ServerCertificateConfig&& value) { SetServerCertificateConfig(std::move(value)); return *this;}
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
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline CreateDomainConfigurationRequest& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline CreateDomainConfigurationRequest& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
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
    inline const ApplicationProtocol& GetApplicationProtocol() const{ return m_applicationProtocol; }
    inline bool ApplicationProtocolHasBeenSet() const { return m_applicationProtocolHasBeenSet; }
    inline void SetApplicationProtocol(const ApplicationProtocol& value) { m_applicationProtocolHasBeenSet = true; m_applicationProtocol = value; }
    inline void SetApplicationProtocol(ApplicationProtocol&& value) { m_applicationProtocolHasBeenSet = true; m_applicationProtocol = std::move(value); }
    inline CreateDomainConfigurationRequest& WithApplicationProtocol(const ApplicationProtocol& value) { SetApplicationProtocol(value); return *this;}
    inline CreateDomainConfigurationRequest& WithApplicationProtocol(ApplicationProtocol&& value) { SetApplicationProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that speciﬁes the client certificate conﬁguration for a domain.</p>
     */
    inline const ClientCertificateConfig& GetClientCertificateConfig() const{ return m_clientCertificateConfig; }
    inline bool ClientCertificateConfigHasBeenSet() const { return m_clientCertificateConfigHasBeenSet; }
    inline void SetClientCertificateConfig(const ClientCertificateConfig& value) { m_clientCertificateConfigHasBeenSet = true; m_clientCertificateConfig = value; }
    inline void SetClientCertificateConfig(ClientCertificateConfig&& value) { m_clientCertificateConfigHasBeenSet = true; m_clientCertificateConfig = std::move(value); }
    inline CreateDomainConfigurationRequest& WithClientCertificateConfig(const ClientCertificateConfig& value) { SetClientCertificateConfig(value); return *this;}
    inline CreateDomainConfigurationRequest& WithClientCertificateConfig(ClientCertificateConfig&& value) { SetClientCertificateConfig(std::move(value)); return *this;}
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

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TlsConfig m_tlsConfig;
    bool m_tlsConfigHasBeenSet = false;

    ServerCertificateConfig m_serverCertificateConfig;
    bool m_serverCertificateConfigHasBeenSet = false;

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    ApplicationProtocol m_applicationProtocol;
    bool m_applicationProtocolHasBeenSet = false;

    ClientCertificateConfig m_clientCertificateConfig;
    bool m_clientCertificateConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

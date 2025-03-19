/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AuthorizerConfig.h>
#include <aws/iot/model/DomainConfigurationStatus.h>
#include <aws/iot/model/ServiceType.h>
#include <aws/iot/model/DomainType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/TlsConfig.h>
#include <aws/iot/model/ServerCertificateConfig.h>
#include <aws/iot/model/AuthenticationType.h>
#include <aws/iot/model/ApplicationProtocol.h>
#include <aws/iot/model/ClientCertificateConfig.h>
#include <aws/iot/model/ServerCertificateSummary.h>
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
namespace IoT
{
namespace Model
{
  class DescribeDomainConfigurationResult
  {
  public:
    AWS_IOT_API DescribeDomainConfigurationResult() = default;
    AWS_IOT_API DescribeDomainConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeDomainConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const { return m_domainConfigurationName; }
    template<typename DomainConfigurationNameT = Aws::String>
    void SetDomainConfigurationName(DomainConfigurationNameT&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::forward<DomainConfigurationNameT>(value); }
    template<typename DomainConfigurationNameT = Aws::String>
    DescribeDomainConfigurationResult& WithDomainConfigurationName(DomainConfigurationNameT&& value) { SetDomainConfigurationName(std::forward<DomainConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const { return m_domainConfigurationArn; }
    template<typename DomainConfigurationArnT = Aws::String>
    void SetDomainConfigurationArn(DomainConfigurationArnT&& value) { m_domainConfigurationArnHasBeenSet = true; m_domainConfigurationArn = std::forward<DomainConfigurationArnT>(value); }
    template<typename DomainConfigurationArnT = Aws::String>
    DescribeDomainConfigurationResult& WithDomainConfigurationArn(DomainConfigurationArnT&& value) { SetDomainConfigurationArn(std::forward<DomainConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DescribeDomainConfigurationResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline const Aws::Vector<ServerCertificateSummary>& GetServerCertificates() const { return m_serverCertificates; }
    template<typename ServerCertificatesT = Aws::Vector<ServerCertificateSummary>>
    void SetServerCertificates(ServerCertificatesT&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates = std::forward<ServerCertificatesT>(value); }
    template<typename ServerCertificatesT = Aws::Vector<ServerCertificateSummary>>
    DescribeDomainConfigurationResult& WithServerCertificates(ServerCertificatesT&& value) { SetServerCertificates(std::forward<ServerCertificatesT>(value)); return *this;}
    template<typename ServerCertificatesT = ServerCertificateSummary>
    DescribeDomainConfigurationResult& AddServerCertificates(ServerCertificatesT&& value) { m_serverCertificatesHasBeenSet = true; m_serverCertificates.emplace_back(std::forward<ServerCertificatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline const AuthorizerConfig& GetAuthorizerConfig() const { return m_authorizerConfig; }
    template<typename AuthorizerConfigT = AuthorizerConfig>
    void SetAuthorizerConfig(AuthorizerConfigT&& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = std::forward<AuthorizerConfigT>(value); }
    template<typename AuthorizerConfigT = AuthorizerConfig>
    DescribeDomainConfigurationResult& WithAuthorizerConfig(AuthorizerConfigT&& value) { SetAuthorizerConfig(std::forward<AuthorizerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies the current state of the domain
     * configuration.</p>
     */
    inline DomainConfigurationStatus GetDomainConfigurationStatus() const { return m_domainConfigurationStatus; }
    inline void SetDomainConfigurationStatus(DomainConfigurationStatus value) { m_domainConfigurationStatusHasBeenSet = true; m_domainConfigurationStatus = value; }
    inline DescribeDomainConfigurationResult& WithDomainConfigurationStatus(DomainConfigurationStatus value) { SetDomainConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline DescribeDomainConfigurationResult& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the domain.</p>
     */
    inline DomainType GetDomainType() const { return m_domainType; }
    inline void SetDomainType(DomainType value) { m_domainTypeHasBeenSet = true; m_domainType = value; }
    inline DescribeDomainConfigurationResult& WithDomainType(DomainType value) { SetDomainType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the domain configuration's status was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeDate() const { return m_lastStatusChangeDate; }
    template<typename LastStatusChangeDateT = Aws::Utils::DateTime>
    void SetLastStatusChangeDate(LastStatusChangeDateT&& value) { m_lastStatusChangeDateHasBeenSet = true; m_lastStatusChangeDate = std::forward<LastStatusChangeDateT>(value); }
    template<typename LastStatusChangeDateT = Aws::Utils::DateTime>
    DescribeDomainConfigurationResult& WithLastStatusChangeDate(LastStatusChangeDateT&& value) { SetLastStatusChangeDate(std::forward<LastStatusChangeDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline const TlsConfig& GetTlsConfig() const { return m_tlsConfig; }
    template<typename TlsConfigT = TlsConfig>
    void SetTlsConfig(TlsConfigT&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::forward<TlsConfigT>(value); }
    template<typename TlsConfigT = TlsConfig>
    DescribeDomainConfigurationResult& WithTlsConfig(TlsConfigT&& value) { SetTlsConfig(std::forward<TlsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server certificate configuration.</p>
     */
    inline const ServerCertificateConfig& GetServerCertificateConfig() const { return m_serverCertificateConfig; }
    template<typename ServerCertificateConfigT = ServerCertificateConfig>
    void SetServerCertificateConfig(ServerCertificateConfigT&& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = std::forward<ServerCertificateConfigT>(value); }
    template<typename ServerCertificateConfigT = ServerCertificateConfig>
    DescribeDomainConfigurationResult& WithServerCertificateConfig(ServerCertificateConfigT&& value) { SetServerCertificateConfig(std::forward<ServerCertificateConfigT>(value)); return *this;}
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
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline DescribeDomainConfigurationResult& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
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
    inline void SetApplicationProtocol(ApplicationProtocol value) { m_applicationProtocolHasBeenSet = true; m_applicationProtocol = value; }
    inline DescribeDomainConfigurationResult& WithApplicationProtocol(ApplicationProtocol value) { SetApplicationProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that speciﬁes the client certificate conﬁguration for a domain.</p>
     */
    inline const ClientCertificateConfig& GetClientCertificateConfig() const { return m_clientCertificateConfig; }
    template<typename ClientCertificateConfigT = ClientCertificateConfig>
    void SetClientCertificateConfig(ClientCertificateConfigT&& value) { m_clientCertificateConfigHasBeenSet = true; m_clientCertificateConfig = std::forward<ClientCertificateConfigT>(value); }
    template<typename ClientCertificateConfigT = ClientCertificateConfig>
    DescribeDomainConfigurationResult& WithClientCertificateConfig(ClientCertificateConfigT&& value) { SetClientCertificateConfig(std::forward<ClientCertificateConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;

    Aws::String m_domainConfigurationArn;
    bool m_domainConfigurationArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<ServerCertificateSummary> m_serverCertificates;
    bool m_serverCertificatesHasBeenSet = false;

    AuthorizerConfig m_authorizerConfig;
    bool m_authorizerConfigHasBeenSet = false;

    DomainConfigurationStatus m_domainConfigurationStatus{DomainConfigurationStatus::NOT_SET};
    bool m_domainConfigurationStatusHasBeenSet = false;

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    DomainType m_domainType{DomainType::NOT_SET};
    bool m_domainTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChangeDate{};
    bool m_lastStatusChangeDateHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

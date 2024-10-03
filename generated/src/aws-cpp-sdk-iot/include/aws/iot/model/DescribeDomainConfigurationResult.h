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
    AWS_IOT_API DescribeDomainConfigurationResult();
    AWS_IOT_API DescribeDomainConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeDomainConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationName = value; }
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationName = std::move(value); }
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationName.assign(value); }
    inline DescribeDomainConfigurationResult& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const{ return m_domainConfigurationArn; }
    inline void SetDomainConfigurationArn(const Aws::String& value) { m_domainConfigurationArn = value; }
    inline void SetDomainConfigurationArn(Aws::String&& value) { m_domainConfigurationArn = std::move(value); }
    inline void SetDomainConfigurationArn(const char* value) { m_domainConfigurationArn.assign(value); }
    inline DescribeDomainConfigurationResult& WithDomainConfigurationArn(const Aws::String& value) { SetDomainConfigurationArn(value); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainConfigurationArn(Aws::String&& value) { SetDomainConfigurationArn(std::move(value)); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainConfigurationArn(const char* value) { SetDomainConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline DescribeDomainConfigurationResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline const Aws::Vector<ServerCertificateSummary>& GetServerCertificates() const{ return m_serverCertificates; }
    inline void SetServerCertificates(const Aws::Vector<ServerCertificateSummary>& value) { m_serverCertificates = value; }
    inline void SetServerCertificates(Aws::Vector<ServerCertificateSummary>&& value) { m_serverCertificates = std::move(value); }
    inline DescribeDomainConfigurationResult& WithServerCertificates(const Aws::Vector<ServerCertificateSummary>& value) { SetServerCertificates(value); return *this;}
    inline DescribeDomainConfigurationResult& WithServerCertificates(Aws::Vector<ServerCertificateSummary>&& value) { SetServerCertificates(std::move(value)); return *this;}
    inline DescribeDomainConfigurationResult& AddServerCertificates(const ServerCertificateSummary& value) { m_serverCertificates.push_back(value); return *this; }
    inline DescribeDomainConfigurationResult& AddServerCertificates(ServerCertificateSummary&& value) { m_serverCertificates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline const AuthorizerConfig& GetAuthorizerConfig() const{ return m_authorizerConfig; }
    inline void SetAuthorizerConfig(const AuthorizerConfig& value) { m_authorizerConfig = value; }
    inline void SetAuthorizerConfig(AuthorizerConfig&& value) { m_authorizerConfig = std::move(value); }
    inline DescribeDomainConfigurationResult& WithAuthorizerConfig(const AuthorizerConfig& value) { SetAuthorizerConfig(value); return *this;}
    inline DescribeDomainConfigurationResult& WithAuthorizerConfig(AuthorizerConfig&& value) { SetAuthorizerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies the current state of the domain
     * configuration.</p>
     */
    inline const DomainConfigurationStatus& GetDomainConfigurationStatus() const{ return m_domainConfigurationStatus; }
    inline void SetDomainConfigurationStatus(const DomainConfigurationStatus& value) { m_domainConfigurationStatus = value; }
    inline void SetDomainConfigurationStatus(DomainConfigurationStatus&& value) { m_domainConfigurationStatus = std::move(value); }
    inline DescribeDomainConfigurationResult& WithDomainConfigurationStatus(const DomainConfigurationStatus& value) { SetDomainConfigurationStatus(value); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainConfigurationStatus(DomainConfigurationStatus&& value) { SetDomainConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }
    inline void SetServiceType(const ServiceType& value) { m_serviceType = value; }
    inline void SetServiceType(ServiceType&& value) { m_serviceType = std::move(value); }
    inline DescribeDomainConfigurationResult& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}
    inline DescribeDomainConfigurationResult& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the domain.</p>
     */
    inline const DomainType& GetDomainType() const{ return m_domainType; }
    inline void SetDomainType(const DomainType& value) { m_domainType = value; }
    inline void SetDomainType(DomainType&& value) { m_domainType = std::move(value); }
    inline DescribeDomainConfigurationResult& WithDomainType(const DomainType& value) { SetDomainType(value); return *this;}
    inline DescribeDomainConfigurationResult& WithDomainType(DomainType&& value) { SetDomainType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the domain configuration's status was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeDate() const{ return m_lastStatusChangeDate; }
    inline void SetLastStatusChangeDate(const Aws::Utils::DateTime& value) { m_lastStatusChangeDate = value; }
    inline void SetLastStatusChangeDate(Aws::Utils::DateTime&& value) { m_lastStatusChangeDate = std::move(value); }
    inline DescribeDomainConfigurationResult& WithLastStatusChangeDate(const Aws::Utils::DateTime& value) { SetLastStatusChangeDate(value); return *this;}
    inline DescribeDomainConfigurationResult& WithLastStatusChangeDate(Aws::Utils::DateTime&& value) { SetLastStatusChangeDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfig = value; }
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfig = std::move(value); }
    inline DescribeDomainConfigurationResult& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}
    inline DescribeDomainConfigurationResult& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server certificate configuration.</p>
     */
    inline const ServerCertificateConfig& GetServerCertificateConfig() const{ return m_serverCertificateConfig; }
    inline void SetServerCertificateConfig(const ServerCertificateConfig& value) { m_serverCertificateConfig = value; }
    inline void SetServerCertificateConfig(ServerCertificateConfig&& value) { m_serverCertificateConfig = std::move(value); }
    inline DescribeDomainConfigurationResult& WithServerCertificateConfig(const ServerCertificateConfig& value) { SetServerCertificateConfig(value); return *this;}
    inline DescribeDomainConfigurationResult& WithServerCertificateConfig(ServerCertificateConfig&& value) { SetServerCertificateConfig(std::move(value)); return *this;}
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
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationType = std::move(value); }
    inline DescribeDomainConfigurationResult& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline DescribeDomainConfigurationResult& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
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
    inline void SetApplicationProtocol(const ApplicationProtocol& value) { m_applicationProtocol = value; }
    inline void SetApplicationProtocol(ApplicationProtocol&& value) { m_applicationProtocol = std::move(value); }
    inline DescribeDomainConfigurationResult& WithApplicationProtocol(const ApplicationProtocol& value) { SetApplicationProtocol(value); return *this;}
    inline DescribeDomainConfigurationResult& WithApplicationProtocol(ApplicationProtocol&& value) { SetApplicationProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that speciﬁes the client certificate conﬁguration for a domain.</p>
     */
    inline const ClientCertificateConfig& GetClientCertificateConfig() const{ return m_clientCertificateConfig; }
    inline void SetClientCertificateConfig(const ClientCertificateConfig& value) { m_clientCertificateConfig = value; }
    inline void SetClientCertificateConfig(ClientCertificateConfig&& value) { m_clientCertificateConfig = std::move(value); }
    inline DescribeDomainConfigurationResult& WithClientCertificateConfig(const ClientCertificateConfig& value) { SetClientCertificateConfig(value); return *this;}
    inline DescribeDomainConfigurationResult& WithClientCertificateConfig(ClientCertificateConfig&& value) { SetClientCertificateConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDomainConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDomainConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDomainConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;

    Aws::String m_domainConfigurationArn;

    Aws::String m_domainName;

    Aws::Vector<ServerCertificateSummary> m_serverCertificates;

    AuthorizerConfig m_authorizerConfig;

    DomainConfigurationStatus m_domainConfigurationStatus;

    ServiceType m_serviceType;

    DomainType m_domainType;

    Aws::Utils::DateTime m_lastStatusChangeDate;

    TlsConfig m_tlsConfig;

    ServerCertificateConfig m_serverCertificateConfig;

    AuthenticationType m_authenticationType;

    ApplicationProtocol m_applicationProtocol;

    ClientCertificateConfig m_clientCertificateConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

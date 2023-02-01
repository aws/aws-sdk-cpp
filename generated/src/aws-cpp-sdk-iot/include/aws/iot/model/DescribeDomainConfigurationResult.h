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


    /**
     * <p>The name of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationName = value; }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationName = std::move(value); }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationName.assign(value); }

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}


    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline const Aws::String& GetDomainConfigurationArn() const{ return m_domainConfigurationArn; }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(const Aws::String& value) { m_domainConfigurationArn = value; }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(Aws::String&& value) { m_domainConfigurationArn = std::move(value); }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline void SetDomainConfigurationArn(const char* value) { m_domainConfigurationArn.assign(value); }

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationArn(const Aws::String& value) { SetDomainConfigurationArn(value); return *this;}

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationArn(Aws::String&& value) { SetDomainConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationArn(const char* value) { SetDomainConfigurationArn(value); return *this;}


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline const Aws::Vector<ServerCertificateSummary>& GetServerCertificates() const{ return m_serverCertificates; }

    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline void SetServerCertificates(const Aws::Vector<ServerCertificateSummary>& value) { m_serverCertificates = value; }

    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline void SetServerCertificates(Aws::Vector<ServerCertificateSummary>&& value) { m_serverCertificates = std::move(value); }

    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithServerCertificates(const Aws::Vector<ServerCertificateSummary>& value) { SetServerCertificates(value); return *this;}

    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithServerCertificates(Aws::Vector<ServerCertificateSummary>&& value) { SetServerCertificates(std::move(value)); return *this;}

    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& AddServerCertificates(const ServerCertificateSummary& value) { m_serverCertificates.push_back(value); return *this; }

    /**
     * <p>A list containing summary information about the server certificate included
     * in the domain configuration.</p>
     */
    inline DescribeDomainConfigurationResult& AddServerCertificates(ServerCertificateSummary&& value) { m_serverCertificates.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline const AuthorizerConfig& GetAuthorizerConfig() const{ return m_authorizerConfig; }

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline void SetAuthorizerConfig(const AuthorizerConfig& value) { m_authorizerConfig = value; }

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline void SetAuthorizerConfig(AuthorizerConfig&& value) { m_authorizerConfig = std::move(value); }

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline DescribeDomainConfigurationResult& WithAuthorizerConfig(const AuthorizerConfig& value) { SetAuthorizerConfig(value); return *this;}

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline DescribeDomainConfigurationResult& WithAuthorizerConfig(AuthorizerConfig&& value) { SetAuthorizerConfig(std::move(value)); return *this;}


    /**
     * <p>A Boolean value that specifies the current state of the domain
     * configuration.</p>
     */
    inline const DomainConfigurationStatus& GetDomainConfigurationStatus() const{ return m_domainConfigurationStatus; }

    /**
     * <p>A Boolean value that specifies the current state of the domain
     * configuration.</p>
     */
    inline void SetDomainConfigurationStatus(const DomainConfigurationStatus& value) { m_domainConfigurationStatus = value; }

    /**
     * <p>A Boolean value that specifies the current state of the domain
     * configuration.</p>
     */
    inline void SetDomainConfigurationStatus(DomainConfigurationStatus&& value) { m_domainConfigurationStatus = std::move(value); }

    /**
     * <p>A Boolean value that specifies the current state of the domain
     * configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationStatus(const DomainConfigurationStatus& value) { SetDomainConfigurationStatus(value); return *this;}

    /**
     * <p>A Boolean value that specifies the current state of the domain
     * configuration.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainConfigurationStatus(DomainConfigurationStatus&& value) { SetDomainConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceType = value; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceType = std::move(value); }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline DescribeDomainConfigurationResult& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline DescribeDomainConfigurationResult& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>The type of the domain.</p>
     */
    inline const DomainType& GetDomainType() const{ return m_domainType; }

    /**
     * <p>The type of the domain.</p>
     */
    inline void SetDomainType(const DomainType& value) { m_domainType = value; }

    /**
     * <p>The type of the domain.</p>
     */
    inline void SetDomainType(DomainType&& value) { m_domainType = std::move(value); }

    /**
     * <p>The type of the domain.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainType(const DomainType& value) { SetDomainType(value); return *this;}

    /**
     * <p>The type of the domain.</p>
     */
    inline DescribeDomainConfigurationResult& WithDomainType(DomainType&& value) { SetDomainType(std::move(value)); return *this;}


    /**
     * <p>The date and time the domain configuration's status was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeDate() const{ return m_lastStatusChangeDate; }

    /**
     * <p>The date and time the domain configuration's status was last changed.</p>
     */
    inline void SetLastStatusChangeDate(const Aws::Utils::DateTime& value) { m_lastStatusChangeDate = value; }

    /**
     * <p>The date and time the domain configuration's status was last changed.</p>
     */
    inline void SetLastStatusChangeDate(Aws::Utils::DateTime&& value) { m_lastStatusChangeDate = std::move(value); }

    /**
     * <p>The date and time the domain configuration's status was last changed.</p>
     */
    inline DescribeDomainConfigurationResult& WithLastStatusChangeDate(const Aws::Utils::DateTime& value) { SetLastStatusChangeDate(value); return *this;}

    /**
     * <p>The date and time the domain configuration's status was last changed.</p>
     */
    inline DescribeDomainConfigurationResult& WithLastStatusChangeDate(Aws::Utils::DateTime&& value) { SetLastStatusChangeDate(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

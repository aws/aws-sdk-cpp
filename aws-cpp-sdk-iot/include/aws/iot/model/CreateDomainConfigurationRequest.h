/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AuthorizerConfig.h>
#include <aws/iot/model/ServiceType.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class AWS_IOT_API CreateDomainConfigurationRequest : public IoTRequest
  {
  public:
    CreateDomainConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomainConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = value; }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::move(value); }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName.assign(value); }

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline CreateDomainConfigurationRequest& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline CreateDomainConfigurationRequest& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain configuration. This value must be unique to a
     * region.</p>
     */
    inline CreateDomainConfigurationRequest& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline CreateDomainConfigurationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline CreateDomainConfigurationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline CreateDomainConfigurationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServerCertificateArns() const{ return m_serverCertificateArns; }

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline bool ServerCertificateArnsHasBeenSet() const { return m_serverCertificateArnsHasBeenSet; }

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline void SetServerCertificateArns(const Aws::Vector<Aws::String>& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns = value; }

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline void SetServerCertificateArns(Aws::Vector<Aws::String>&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns = std::move(value); }

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithServerCertificateArns(const Aws::Vector<Aws::String>& value) { SetServerCertificateArns(value); return *this;}

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithServerCertificateArns(Aws::Vector<Aws::String>&& value) { SetServerCertificateArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(const Aws::String& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(Aws::String&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the certificates that AWS IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(const char* value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(value); return *this; }


    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline const Aws::String& GetValidationCertificateArn() const{ return m_validationCertificateArn; }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline bool ValidationCertificateArnHasBeenSet() const { return m_validationCertificateArnHasBeenSet; }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline void SetValidationCertificateArn(const Aws::String& value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn = value; }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline void SetValidationCertificateArn(Aws::String&& value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn = std::move(value); }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline void SetValidationCertificateArn(const char* value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn.assign(value); }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(const Aws::String& value) { SetValidationCertificateArn(value); return *this;}

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(Aws::String&& value) { SetValidationCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for AWS-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(const char* value) { SetValidationCertificateArn(value); return *this;}


    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline const AuthorizerConfig& GetAuthorizerConfig() const{ return m_authorizerConfig; }

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline bool AuthorizerConfigHasBeenSet() const { return m_authorizerConfigHasBeenSet; }

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline void SetAuthorizerConfig(const AuthorizerConfig& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = value; }

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline void SetAuthorizerConfig(AuthorizerConfig&& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = std::move(value); }

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline CreateDomainConfigurationRequest& WithAuthorizerConfig(const AuthorizerConfig& value) { SetAuthorizerConfig(value); return *this;}

    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline CreateDomainConfigurationRequest& WithAuthorizerConfig(AuthorizerConfig&& value) { SetAuthorizerConfig(std::move(value)); return *this;}


    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline CreateDomainConfigurationRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The type of service delivered by the endpoint.</p>
     */
    inline CreateDomainConfigurationRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}

  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<Aws::String> m_serverCertificateArns;
    bool m_serverCertificateArnsHasBeenSet;

    Aws::String m_validationCertificateArn;
    bool m_validationCertificateArnHasBeenSet;

    AuthorizerConfig m_authorizerConfig;
    bool m_authorizerConfigHasBeenSet;

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

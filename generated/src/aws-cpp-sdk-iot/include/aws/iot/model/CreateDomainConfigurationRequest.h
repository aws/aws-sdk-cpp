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
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServerCertificateArns() const{ return m_serverCertificateArns; }

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline bool ServerCertificateArnsHasBeenSet() const { return m_serverCertificateArnsHasBeenSet; }

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline void SetServerCertificateArns(const Aws::Vector<Aws::String>& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns = value; }

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline void SetServerCertificateArns(Aws::Vector<Aws::String>&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns = std::move(value); }

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithServerCertificateArns(const Aws::Vector<Aws::String>& value) { SetServerCertificateArns(value); return *this;}

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithServerCertificateArns(Aws::Vector<Aws::String>&& value) { SetServerCertificateArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(const Aws::String& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(Aws::String&& value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the certificates that IoT passes to the device during the TLS
     * handshake. Currently you can specify only one certificate ARN. This value is not
     * required for Amazon Web Services-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& AddServerCertificateArns(const char* value) { m_serverCertificateArnsHasBeenSet = true; m_serverCertificateArns.push_back(value); return *this; }


    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline const Aws::String& GetValidationCertificateArn() const{ return m_validationCertificateArn; }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline bool ValidationCertificateArnHasBeenSet() const { return m_validationCertificateArnHasBeenSet; }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline void SetValidationCertificateArn(const Aws::String& value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn = value; }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline void SetValidationCertificateArn(Aws::String&& value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn = std::move(value); }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline void SetValidationCertificateArn(const char* value) { m_validationCertificateArnHasBeenSet = true; m_validationCertificateArn.assign(value); }

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(const Aws::String& value) { SetValidationCertificateArn(value); return *this;}

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
     */
    inline CreateDomainConfigurationRequest& WithValidationCertificateArn(Aws::String&& value) { SetValidationCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The certificate used to validate the server certificate and prove domain name
     * ownership. This certificate must be signed by a public certificate authority.
     * This value is not required for Amazon Web Services-managed domains.</p>
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
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline CreateDomainConfigurationRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The type of service delivered by the endpoint.</p>  <p>Amazon Web
     * Services IoT Core currently supports only the <code>DATA</code> service
     * type.</p> 
     */
    inline CreateDomainConfigurationRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateDomainConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateDomainConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateDomainConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata which can be used to manage the domain configuration.</p> 
     * <p>For URI Request parameters use format: ...key1=value1&amp;key2=value2...</p>
     * <p>For the CLI command-line parameter use format: &amp;&amp;tags
     * "key1=value1&amp;key2=value2..."</p> <p>For the cli-input-json file use format:
     * "tags": "key1=value1&amp;key2=value2..."</p> 
     */
    inline CreateDomainConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }

    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }

    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = value; }

    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::move(value); }

    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline CreateDomainConfigurationRequest& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}

    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline CreateDomainConfigurationRequest& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}


    /**
     * <p>The server certificate configuration.</p>
     */
    inline const ServerCertificateConfig& GetServerCertificateConfig() const{ return m_serverCertificateConfig; }

    /**
     * <p>The server certificate configuration.</p>
     */
    inline bool ServerCertificateConfigHasBeenSet() const { return m_serverCertificateConfigHasBeenSet; }

    /**
     * <p>The server certificate configuration.</p>
     */
    inline void SetServerCertificateConfig(const ServerCertificateConfig& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = value; }

    /**
     * <p>The server certificate configuration.</p>
     */
    inline void SetServerCertificateConfig(ServerCertificateConfig&& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = std::move(value); }

    /**
     * <p>The server certificate configuration.</p>
     */
    inline CreateDomainConfigurationRequest& WithServerCertificateConfig(const ServerCertificateConfig& value) { SetServerCertificateConfig(value); return *this;}

    /**
     * <p>The server certificate configuration.</p>
     */
    inline CreateDomainConfigurationRequest& WithServerCertificateConfig(ServerCertificateConfig&& value) { SetServerCertificateConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

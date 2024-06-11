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
    AWS_IOT_API UpdateDomainConfigurationRequest();

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
    inline const Aws::String& GetDomainConfigurationName() const{ return m_domainConfigurationName; }
    inline bool DomainConfigurationNameHasBeenSet() const { return m_domainConfigurationNameHasBeenSet; }
    inline void SetDomainConfigurationName(const Aws::String& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = value; }
    inline void SetDomainConfigurationName(Aws::String&& value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName = std::move(value); }
    inline void SetDomainConfigurationName(const char* value) { m_domainConfigurationNameHasBeenSet = true; m_domainConfigurationName.assign(value); }
    inline UpdateDomainConfigurationRequest& WithDomainConfigurationName(const Aws::String& value) { SetDomainConfigurationName(value); return *this;}
    inline UpdateDomainConfigurationRequest& WithDomainConfigurationName(Aws::String&& value) { SetDomainConfigurationName(std::move(value)); return *this;}
    inline UpdateDomainConfigurationRequest& WithDomainConfigurationName(const char* value) { SetDomainConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the authorization service for a domain.</p>
     */
    inline const AuthorizerConfig& GetAuthorizerConfig() const{ return m_authorizerConfig; }
    inline bool AuthorizerConfigHasBeenSet() const { return m_authorizerConfigHasBeenSet; }
    inline void SetAuthorizerConfig(const AuthorizerConfig& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = value; }
    inline void SetAuthorizerConfig(AuthorizerConfig&& value) { m_authorizerConfigHasBeenSet = true; m_authorizerConfig = std::move(value); }
    inline UpdateDomainConfigurationRequest& WithAuthorizerConfig(const AuthorizerConfig& value) { SetAuthorizerConfig(value); return *this;}
    inline UpdateDomainConfigurationRequest& WithAuthorizerConfig(AuthorizerConfig&& value) { SetAuthorizerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to which the domain configuration should be updated.</p>
     */
    inline const DomainConfigurationStatus& GetDomainConfigurationStatus() const{ return m_domainConfigurationStatus; }
    inline bool DomainConfigurationStatusHasBeenSet() const { return m_domainConfigurationStatusHasBeenSet; }
    inline void SetDomainConfigurationStatus(const DomainConfigurationStatus& value) { m_domainConfigurationStatusHasBeenSet = true; m_domainConfigurationStatus = value; }
    inline void SetDomainConfigurationStatus(DomainConfigurationStatus&& value) { m_domainConfigurationStatusHasBeenSet = true; m_domainConfigurationStatus = std::move(value); }
    inline UpdateDomainConfigurationRequest& WithDomainConfigurationStatus(const DomainConfigurationStatus& value) { SetDomainConfigurationStatus(value); return *this;}
    inline UpdateDomainConfigurationRequest& WithDomainConfigurationStatus(DomainConfigurationStatus&& value) { SetDomainConfigurationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Removes the authorization configuration from a domain.</p>
     */
    inline bool GetRemoveAuthorizerConfig() const{ return m_removeAuthorizerConfig; }
    inline bool RemoveAuthorizerConfigHasBeenSet() const { return m_removeAuthorizerConfigHasBeenSet; }
    inline void SetRemoveAuthorizerConfig(bool value) { m_removeAuthorizerConfigHasBeenSet = true; m_removeAuthorizerConfig = value; }
    inline UpdateDomainConfigurationRequest& WithRemoveAuthorizerConfig(bool value) { SetRemoveAuthorizerConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the TLS configuration for a domain.</p>
     */
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = value; }
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::move(value); }
    inline UpdateDomainConfigurationRequest& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}
    inline UpdateDomainConfigurationRequest& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server certificate configuration.</p>
     */
    inline const ServerCertificateConfig& GetServerCertificateConfig() const{ return m_serverCertificateConfig; }
    inline bool ServerCertificateConfigHasBeenSet() const { return m_serverCertificateConfigHasBeenSet; }
    inline void SetServerCertificateConfig(const ServerCertificateConfig& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = value; }
    inline void SetServerCertificateConfig(ServerCertificateConfig&& value) { m_serverCertificateConfigHasBeenSet = true; m_serverCertificateConfig = std::move(value); }
    inline UpdateDomainConfigurationRequest& WithServerCertificateConfig(const ServerCertificateConfig& value) { SetServerCertificateConfig(value); return *this;}
    inline UpdateDomainConfigurationRequest& WithServerCertificateConfig(ServerCertificateConfig&& value) { SetServerCertificateConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainConfigurationName;
    bool m_domainConfigurationNameHasBeenSet = false;

    AuthorizerConfig m_authorizerConfig;
    bool m_authorizerConfigHasBeenSet = false;

    DomainConfigurationStatus m_domainConfigurationStatus;
    bool m_domainConfigurationStatusHasBeenSet = false;

    bool m_removeAuthorizerConfig;
    bool m_removeAuthorizerConfigHasBeenSet = false;

    TlsConfig m_tlsConfig;
    bool m_tlsConfigHasBeenSet = false;

    ServerCertificateConfig m_serverCertificateConfig;
    bool m_serverCertificateConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/SharePointHostType.h>
#include <aws/bedrock-agent/model/SharePointAuthType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The endpoint information to connect to your SharePoint data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/SharePointSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SharePointSourceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API SharePointSourceConfiguration() = default;
    AWS_BEDROCKAGENT_API SharePointSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SharePointSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of your Microsoft 365 tenant.</p>
     */
    inline const Aws::String& GetTenantId() const { return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    template<typename TenantIdT = Aws::String>
    void SetTenantId(TenantIdT&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::forward<TenantIdT>(value); }
    template<typename TenantIdT = Aws::String>
    SharePointSourceConfiguration& WithTenantId(TenantIdT&& value) { SetTenantId(std::forward<TenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain of your SharePoint instance or site URL/URLs.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    SharePointSourceConfiguration& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more SharePoint site URLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSiteUrls() const { return m_siteUrls; }
    inline bool SiteUrlsHasBeenSet() const { return m_siteUrlsHasBeenSet; }
    template<typename SiteUrlsT = Aws::Vector<Aws::String>>
    void SetSiteUrls(SiteUrlsT&& value) { m_siteUrlsHasBeenSet = true; m_siteUrls = std::forward<SiteUrlsT>(value); }
    template<typename SiteUrlsT = Aws::Vector<Aws::String>>
    SharePointSourceConfiguration& WithSiteUrls(SiteUrlsT&& value) { SetSiteUrls(std::forward<SiteUrlsT>(value)); return *this;}
    template<typename SiteUrlsT = Aws::String>
    SharePointSourceConfiguration& AddSiteUrls(SiteUrlsT&& value) { m_siteUrlsHasBeenSet = true; m_siteUrls.emplace_back(std::forward<SiteUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported host type, whether online/cloud or server/on-premises.</p>
     */
    inline SharePointHostType GetHostType() const { return m_hostType; }
    inline bool HostTypeHasBeenSet() const { return m_hostTypeHasBeenSet; }
    inline void SetHostType(SharePointHostType value) { m_hostTypeHasBeenSet = true; m_hostType = value; }
    inline SharePointSourceConfiguration& WithHostType(SharePointHostType value) { SetHostType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported authentication type to authenticate and connect to your
     * SharePoint site/sites.</p>
     */
    inline SharePointAuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(SharePointAuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline SharePointSourceConfiguration& WithAuthType(SharePointAuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of an Secrets Manager secret that stores your
     * authentication credentials for your SharePoint site/sites. For more information
     * on the key-value pairs that must be included in your secret, depending on your
     * authentication type, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sharepoint-data-source-connector.html#configuration-sharepoint-connector">SharePoint
     * connection configuration</a>.</p>
     */
    inline const Aws::String& GetCredentialsSecretArn() const { return m_credentialsSecretArn; }
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
    template<typename CredentialsSecretArnT = Aws::String>
    void SetCredentialsSecretArn(CredentialsSecretArnT&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::forward<CredentialsSecretArnT>(value); }
    template<typename CredentialsSecretArnT = Aws::String>
    SharePointSourceConfiguration& WithCredentialsSecretArn(CredentialsSecretArnT&& value) { SetCredentialsSecretArn(std::forward<CredentialsSecretArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::Vector<Aws::String> m_siteUrls;
    bool m_siteUrlsHasBeenSet = false;

    SharePointHostType m_hostType{SharePointHostType::NOT_SET};
    bool m_hostTypeHasBeenSet = false;

    SharePointAuthType m_authType{SharePointAuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

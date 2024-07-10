/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/SharePointAuthType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/SharePointHostType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCKAGENT_API SharePointSourceConfiguration();
    AWS_BEDROCKAGENT_API SharePointSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API SharePointSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The supported authentication type to authenticate and connect to your
     * SharePoint site/sites.</p>
     */
    inline const SharePointAuthType& GetAuthType() const{ return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(const SharePointAuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline void SetAuthType(SharePointAuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }
    inline SharePointSourceConfiguration& WithAuthType(const SharePointAuthType& value) { SetAuthType(value); return *this;}
    inline SharePointSourceConfiguration& WithAuthType(SharePointAuthType&& value) { SetAuthType(std::move(value)); return *this;}
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
    inline const Aws::String& GetCredentialsSecretArn() const{ return m_credentialsSecretArn; }
    inline bool CredentialsSecretArnHasBeenSet() const { return m_credentialsSecretArnHasBeenSet; }
    inline void SetCredentialsSecretArn(const Aws::String& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = value; }
    inline void SetCredentialsSecretArn(Aws::String&& value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn = std::move(value); }
    inline void SetCredentialsSecretArn(const char* value) { m_credentialsSecretArnHasBeenSet = true; m_credentialsSecretArn.assign(value); }
    inline SharePointSourceConfiguration& WithCredentialsSecretArn(const Aws::String& value) { SetCredentialsSecretArn(value); return *this;}
    inline SharePointSourceConfiguration& WithCredentialsSecretArn(Aws::String&& value) { SetCredentialsSecretArn(std::move(value)); return *this;}
    inline SharePointSourceConfiguration& WithCredentialsSecretArn(const char* value) { SetCredentialsSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain of your SharePoint instance or site URL/URLs.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline SharePointSourceConfiguration& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline SharePointSourceConfiguration& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline SharePointSourceConfiguration& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported host type, whether online/cloud or server/on-premises.</p>
     */
    inline const SharePointHostType& GetHostType() const{ return m_hostType; }
    inline bool HostTypeHasBeenSet() const { return m_hostTypeHasBeenSet; }
    inline void SetHostType(const SharePointHostType& value) { m_hostTypeHasBeenSet = true; m_hostType = value; }
    inline void SetHostType(SharePointHostType&& value) { m_hostTypeHasBeenSet = true; m_hostType = std::move(value); }
    inline SharePointSourceConfiguration& WithHostType(const SharePointHostType& value) { SetHostType(value); return *this;}
    inline SharePointSourceConfiguration& WithHostType(SharePointHostType&& value) { SetHostType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more SharePoint site URLs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSiteUrls() const{ return m_siteUrls; }
    inline bool SiteUrlsHasBeenSet() const { return m_siteUrlsHasBeenSet; }
    inline void SetSiteUrls(const Aws::Vector<Aws::String>& value) { m_siteUrlsHasBeenSet = true; m_siteUrls = value; }
    inline void SetSiteUrls(Aws::Vector<Aws::String>&& value) { m_siteUrlsHasBeenSet = true; m_siteUrls = std::move(value); }
    inline SharePointSourceConfiguration& WithSiteUrls(const Aws::Vector<Aws::String>& value) { SetSiteUrls(value); return *this;}
    inline SharePointSourceConfiguration& WithSiteUrls(Aws::Vector<Aws::String>&& value) { SetSiteUrls(std::move(value)); return *this;}
    inline SharePointSourceConfiguration& AddSiteUrls(const Aws::String& value) { m_siteUrlsHasBeenSet = true; m_siteUrls.push_back(value); return *this; }
    inline SharePointSourceConfiguration& AddSiteUrls(Aws::String&& value) { m_siteUrlsHasBeenSet = true; m_siteUrls.push_back(std::move(value)); return *this; }
    inline SharePointSourceConfiguration& AddSiteUrls(const char* value) { m_siteUrlsHasBeenSet = true; m_siteUrls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of your Microsoft 365 tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }
    inline SharePointSourceConfiguration& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline SharePointSourceConfiguration& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline SharePointSourceConfiguration& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}
  private:

    SharePointAuthType m_authType;
    bool m_authTypeHasBeenSet = false;

    Aws::String m_credentialsSecretArn;
    bool m_credentialsSecretArnHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    SharePointHostType m_hostType;
    bool m_hostTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_siteUrls;
    bool m_siteUrlsHasBeenSet = false;

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

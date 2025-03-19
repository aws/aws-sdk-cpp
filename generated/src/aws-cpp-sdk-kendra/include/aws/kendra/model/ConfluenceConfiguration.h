/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ConfluenceVersion.h>
#include <aws/kendra/model/ConfluenceSpaceConfiguration.h>
#include <aws/kendra/model/ConfluencePageConfiguration.h>
#include <aws/kendra/model/ConfluenceBlogConfiguration.h>
#include <aws/kendra/model/ConfluenceAttachmentConfiguration.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ProxyConfiguration.h>
#include <aws/kendra/model/ConfluenceAuthenticationType.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to Confluence as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluenceConfiguration
  {
  public:
    AWS_KENDRA_API ConfluenceConfiguration() = default;
    AWS_KENDRA_API ConfluenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline const Aws::String& GetServerUrl() const { return m_serverUrl; }
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
    template<typename ServerUrlT = Aws::String>
    void SetServerUrl(ServerUrlT&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::forward<ServerUrlT>(value); }
    template<typename ServerUrlT = Aws::String>
    ConfluenceConfiguration& WithServerUrl(ServerUrlT&& value) { SetServerUrl(std::forward<ServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    ConfluenceConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version or the type of Confluence installation to connect to.</p>
     */
    inline ConfluenceVersion GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(ConfluenceVersion value) { m_versionHasBeenSet = true; m_version = value; }
    inline ConfluenceConfiguration& WithVersion(ConfluenceVersion value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for indexing Confluence spaces.</p>
     */
    inline const ConfluenceSpaceConfiguration& GetSpaceConfiguration() const { return m_spaceConfiguration; }
    inline bool SpaceConfigurationHasBeenSet() const { return m_spaceConfigurationHasBeenSet; }
    template<typename SpaceConfigurationT = ConfluenceSpaceConfiguration>
    void SetSpaceConfiguration(SpaceConfigurationT&& value) { m_spaceConfigurationHasBeenSet = true; m_spaceConfiguration = std::forward<SpaceConfigurationT>(value); }
    template<typename SpaceConfigurationT = ConfluenceSpaceConfiguration>
    ConfluenceConfiguration& WithSpaceConfiguration(SpaceConfigurationT&& value) { SetSpaceConfiguration(std::forward<SpaceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for indexing Confluence pages.</p>
     */
    inline const ConfluencePageConfiguration& GetPageConfiguration() const { return m_pageConfiguration; }
    inline bool PageConfigurationHasBeenSet() const { return m_pageConfigurationHasBeenSet; }
    template<typename PageConfigurationT = ConfluencePageConfiguration>
    void SetPageConfiguration(PageConfigurationT&& value) { m_pageConfigurationHasBeenSet = true; m_pageConfiguration = std::forward<PageConfigurationT>(value); }
    template<typename PageConfigurationT = ConfluencePageConfiguration>
    ConfluenceConfiguration& WithPageConfiguration(PageConfigurationT&& value) { SetPageConfiguration(std::forward<PageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for indexing Confluence blogs.</p>
     */
    inline const ConfluenceBlogConfiguration& GetBlogConfiguration() const { return m_blogConfiguration; }
    inline bool BlogConfigurationHasBeenSet() const { return m_blogConfigurationHasBeenSet; }
    template<typename BlogConfigurationT = ConfluenceBlogConfiguration>
    void SetBlogConfiguration(BlogConfigurationT&& value) { m_blogConfigurationHasBeenSet = true; m_blogConfiguration = std::forward<BlogConfigurationT>(value); }
    template<typename BlogConfigurationT = ConfluenceBlogConfiguration>
    ConfluenceConfiguration& WithBlogConfiguration(BlogConfigurationT&& value) { SetBlogConfiguration(std::forward<BlogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for indexing attachments to Confluence blogs and
     * pages.</p>
     */
    inline const ConfluenceAttachmentConfiguration& GetAttachmentConfiguration() const { return m_attachmentConfiguration; }
    inline bool AttachmentConfigurationHasBeenSet() const { return m_attachmentConfigurationHasBeenSet; }
    template<typename AttachmentConfigurationT = ConfluenceAttachmentConfiguration>
    void SetAttachmentConfiguration(AttachmentConfigurationT&& value) { m_attachmentConfigurationHasBeenSet = true; m_attachmentConfiguration = std::forward<AttachmentConfigurationT>(value); }
    template<typename AttachmentConfigurationT = ConfluenceAttachmentConfiguration>
    ConfluenceConfiguration& WithAttachmentConfiguration(AttachmentConfigurationT&& value) { SetAttachmentConfiguration(std::forward<AttachmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Confluence. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    ConfluenceConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    ConfluenceConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    ConfluenceConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    ConfluenceConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    ConfluenceConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information to connect to your Confluence URL instance via a
     * web proxy. You can use this option for Confluence Server.</p> <p>You must
     * provide the website host name and port number. For example, the host name of
     * <i>https://a.example.com/page1.html</i> is "a.example.com" and the port is 443,
     * the standard port for HTTPS.</p> <p>Web proxy credentials are optional and you
     * can use them to connect to a web proxy server that requires basic authentication
     * of user name and password. To store web proxy credentials, you use a secret in
     * Secrets Manager.</p> <p>It is recommended that you follow best security
     * practices when configuring your web proxy. This includes setting up throttling,
     * setting up logging and monitoring, and applying security patches on a regular
     * basis. If you use your web proxy with multiple data sources, sync jobs that
     * occur at the same time could strain the load on your proxy. It is recommended
     * you prepare your proxy beforehand for any security and load requirements.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const { return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    void SetProxyConfiguration(ProxyConfigurationT&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::forward<ProxyConfigurationT>(value); }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    ConfluenceConfiguration& WithProxyConfiguration(ProxyConfigurationT&& value) { SetProxyConfiguration(std::forward<ProxyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to connect to Confluence using basic authentication of user
     * name and password, or a personal access token. You can use a personal access
     * token for Confluence Server.</p>
     */
    inline ConfluenceAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(ConfluenceAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline ConfluenceConfiguration& WithAuthenticationType(ConfluenceAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}
  private:

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    ConfluenceVersion m_version{ConfluenceVersion::NOT_SET};
    bool m_versionHasBeenSet = false;

    ConfluenceSpaceConfiguration m_spaceConfiguration;
    bool m_spaceConfigurationHasBeenSet = false;

    ConfluencePageConfiguration m_pageConfiguration;
    bool m_pageConfigurationHasBeenSet = false;

    ConfluenceBlogConfiguration m_blogConfiguration;
    bool m_blogConfigurationHasBeenSet = false;

    ConfluenceAttachmentConfiguration m_attachmentConfiguration;
    bool m_attachmentConfigurationHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    ConfluenceAuthenticationType m_authenticationType{ConfluenceAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

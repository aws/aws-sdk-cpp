/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/SharePointVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/kendra/model/SharePointOnlineAuthenticationType.h>
#include <aws/kendra/model/ProxyConfiguration.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
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
   * <p>Provides the configuration information to connect to Microsoft SharePoint as
   * your data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SharePointConfiguration">AWS
   * API Reference</a></p>
   */
  class SharePointConfiguration
  {
  public:
    AWS_KENDRA_API SharePointConfiguration() = default;
    AWS_KENDRA_API SharePointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SharePointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of Microsoft SharePoint that you use.</p>
     */
    inline SharePointVersion GetSharePointVersion() const { return m_sharePointVersion; }
    inline bool SharePointVersionHasBeenSet() const { return m_sharePointVersionHasBeenSet; }
    inline void SetSharePointVersion(SharePointVersion value) { m_sharePointVersionHasBeenSet = true; m_sharePointVersion = value; }
    inline SharePointConfiguration& WithSharePointVersion(SharePointVersion value) { SetSharePointVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const { return m_urls; }
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }
    template<typename UrlsT = Aws::Vector<Aws::String>>
    void SetUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls = std::forward<UrlsT>(value); }
    template<typename UrlsT = Aws::Vector<Aws::String>>
    SharePointConfiguration& WithUrls(UrlsT&& value) { SetUrls(std::forward<UrlsT>(value)); return *this;}
    template<typename UrlsT = Aws::String>
    SharePointConfiguration& AddUrls(UrlsT&& value) { m_urlsHasBeenSet = true; m_urls.emplace_back(std::forward<UrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Microsoft
     * SharePoint</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    SharePointConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index document attachments.</p>
     */
    inline bool GetCrawlAttachments() const { return m_crawlAttachments; }
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }
    inline SharePointConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use the SharePoint change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in SharePoint.</p>
     */
    inline bool GetUseChangeLog() const { return m_useChangeLog; }
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }
    inline SharePointConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    SharePointConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    SharePointConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    SharePointConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    SharePointConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Microsoft SharePoint. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    SharePointConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    SharePointConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    SharePointConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const { return m_documentTitleFieldName; }
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }
    template<typename DocumentTitleFieldNameT = Aws::String>
    void SetDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::forward<DocumentTitleFieldNameT>(value); }
    template<typename DocumentTitleFieldNameT = Aws::String>
    SharePointConfiguration& WithDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { SetDocumentTitleFieldName(std::forward<DocumentTitleFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to disable local groups information.</p>
     */
    inline bool GetDisableLocalGroups() const { return m_disableLocalGroups; }
    inline bool DisableLocalGroupsHasBeenSet() const { return m_disableLocalGroupsHasBeenSet; }
    inline void SetDisableLocalGroups(bool value) { m_disableLocalGroupsHasBeenSet = true; m_disableLocalGroups = value; }
    inline SharePointConfiguration& WithDisableLocalGroups(bool value) { SetDisableLocalGroups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to SharePoint Server if you require a secure SSL connection.</p>
     * <p>You can generate a self-signed X509 certificate on any computer using
     * OpenSSL. For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline const S3Path& GetSslCertificateS3Path() const { return m_sslCertificateS3Path; }
    inline bool SslCertificateS3PathHasBeenSet() const { return m_sslCertificateS3PathHasBeenSet; }
    template<typename SslCertificateS3PathT = S3Path>
    void SetSslCertificateS3Path(SslCertificateS3PathT&& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = std::forward<SslCertificateS3PathT>(value); }
    template<typename SslCertificateS3PathT = S3Path>
    SharePointConfiguration& WithSslCertificateS3Path(SslCertificateS3PathT&& value) { SetSslCertificateS3Path(std::forward<SslCertificateS3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to connect to SharePoint Online using basic authentication
     * of user name and password, or OAuth authentication of user name, password,
     * client ID, and client secret, or AD App-only authentication of client
     * secret.</p>
     */
    inline SharePointOnlineAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(SharePointOnlineAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline SharePointConfiguration& WithAuthenticationType(SharePointOnlineAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information to connect to your Microsoft SharePoint site URLs
     * via instance via a web proxy. You can use this option for SharePoint Server.</p>
     * <p>You must provide the website host name and port number. For example, the host
     * name of <i>https://a.example.com/page1.html</i> is "a.example.com" and the port
     * is 443, the standard port for HTTPS.</p> <p>Web proxy credentials are optional
     * and you can use them to connect to a web proxy server that requires basic
     * authentication of user name and password. To store web proxy credentials, you
     * use a secret in Secrets Manager.</p> <p>It is recommended that you follow best
     * security practices when configuring your web proxy. This includes setting up
     * throttling, setting up logging and monitoring, and applying security patches on
     * a regular basis. If you use your web proxy with multiple data sources, sync jobs
     * that occur at the same time could strain the load on your proxy. It is
     * recommended you prepare your proxy beforehand for any security and load
     * requirements.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const { return m_proxyConfiguration; }
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    void SetProxyConfiguration(ProxyConfigurationT&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::forward<ProxyConfigurationT>(value); }
    template<typename ProxyConfigurationT = ProxyConfiguration>
    SharePointConfiguration& WithProxyConfiguration(ProxyConfigurationT&& value) { SetProxyConfiguration(std::forward<ProxyConfigurationT>(value)); return *this;}
    ///@}
  private:

    SharePointVersion m_sharePointVersion{SharePointVersion::NOT_SET};
    bool m_sharePointVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_crawlAttachments{false};
    bool m_crawlAttachmentsHasBeenSet = false;

    bool m_useChangeLog{false};
    bool m_useChangeLogHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;

    Aws::String m_documentTitleFieldName;
    bool m_documentTitleFieldNameHasBeenSet = false;

    bool m_disableLocalGroups{false};
    bool m_disableLocalGroupsHasBeenSet = false;

    S3Path m_sslCertificateS3Path;
    bool m_sslCertificateS3PathHasBeenSet = false;

    SharePointOnlineAuthenticationType m_authenticationType{SharePointOnlineAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

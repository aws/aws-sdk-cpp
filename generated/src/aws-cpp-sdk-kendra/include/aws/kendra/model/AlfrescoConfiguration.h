/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/kendra/model/AlfrescoEntity.h>
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
   * <p>Provides the configuration information to connect to Alfresco as your data
   * source.</p>  <p>Alfresco data source connector is currently in preview
   * mode. Basic authentication is currently supported. If you would like to use
   * Alfresco connector in production, contact <a
   * href="http://aws.amazon.com/contact-us/">Support</a>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AlfrescoConfiguration">AWS
   * API Reference</a></p>
   */
  class AlfrescoConfiguration
  {
  public:
    AWS_KENDRA_API AlfrescoConfiguration();
    AWS_KENDRA_API AlfrescoConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AlfrescoConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline const Aws::String& GetSiteUrl() const{ return m_siteUrl; }

    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline bool SiteUrlHasBeenSet() const { return m_siteUrlHasBeenSet; }

    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline void SetSiteUrl(const Aws::String& value) { m_siteUrlHasBeenSet = true; m_siteUrl = value; }

    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline void SetSiteUrl(Aws::String&& value) { m_siteUrlHasBeenSet = true; m_siteUrl = std::move(value); }

    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline void SetSiteUrl(const char* value) { m_siteUrlHasBeenSet = true; m_siteUrl.assign(value); }

    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline AlfrescoConfiguration& WithSiteUrl(const Aws::String& value) { SetSiteUrl(value); return *this;}

    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline AlfrescoConfiguration& WithSiteUrl(Aws::String&& value) { SetSiteUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Alfresco site. For example, <i>https://hostname:8080</i>.</p>
     */
    inline AlfrescoConfiguration& WithSiteUrl(const char* value) { SetSiteUrl(value); return *this;}


    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline AlfrescoConfiguration& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline AlfrescoConfiguration& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Alfresco site. For example, <i>my-site</i>.</p>
     */
    inline AlfrescoConfiguration& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline AlfrescoConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline AlfrescoConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Alfresco data source. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>username—The user name of the Alfresco account.</p> </li> <li>
     * <p>password—The password of the Alfresco account.</p> </li> </ul>
     */
    inline AlfrescoConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to Alfresco if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline const S3Path& GetSslCertificateS3Path() const{ return m_sslCertificateS3Path; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to Alfresco if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline bool SslCertificateS3PathHasBeenSet() const { return m_sslCertificateS3PathHasBeenSet; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to Alfresco if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline void SetSslCertificateS3Path(const S3Path& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = value; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to Alfresco if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline void SetSslCertificateS3Path(S3Path&& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = std::move(value); }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to Alfresco if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline AlfrescoConfiguration& WithSslCertificateS3Path(const S3Path& value) { SetSslCertificateS3Path(value); return *this;}

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to Alfresco if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline AlfrescoConfiguration& WithSslCertificateS3Path(S3Path&& value) { SetSslCertificateS3Path(std::move(value)); return *this;}


    /**
     * <p> <code>TRUE</code> to index shared files.</p>
     */
    inline bool GetCrawlSystemFolders() const{ return m_crawlSystemFolders; }

    /**
     * <p> <code>TRUE</code> to index shared files.</p>
     */
    inline bool CrawlSystemFoldersHasBeenSet() const { return m_crawlSystemFoldersHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index shared files.</p>
     */
    inline void SetCrawlSystemFolders(bool value) { m_crawlSystemFoldersHasBeenSet = true; m_crawlSystemFolders = value; }

    /**
     * <p> <code>TRUE</code> to index shared files.</p>
     */
    inline AlfrescoConfiguration& WithCrawlSystemFolders(bool value) { SetCrawlSystemFolders(value); return *this;}


    /**
     * <p> <code>TRUE</code> to index comments of blogs and other content.</p>
     */
    inline bool GetCrawlComments() const{ return m_crawlComments; }

    /**
     * <p> <code>TRUE</code> to index comments of blogs and other content.</p>
     */
    inline bool CrawlCommentsHasBeenSet() const { return m_crawlCommentsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index comments of blogs and other content.</p>
     */
    inline void SetCrawlComments(bool value) { m_crawlCommentsHasBeenSet = true; m_crawlComments = value; }

    /**
     * <p> <code>TRUE</code> to index comments of blogs and other content.</p>
     */
    inline AlfrescoConfiguration& WithCrawlComments(bool value) { SetCrawlComments(value); return *this;}


    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline const Aws::Vector<AlfrescoEntity>& GetEntityFilter() const{ return m_entityFilter; }

    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline bool EntityFilterHasBeenSet() const { return m_entityFilterHasBeenSet; }

    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline void SetEntityFilter(const Aws::Vector<AlfrescoEntity>& value) { m_entityFilterHasBeenSet = true; m_entityFilter = value; }

    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline void SetEntityFilter(Aws::Vector<AlfrescoEntity>&& value) { m_entityFilterHasBeenSet = true; m_entityFilter = std::move(value); }

    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline AlfrescoConfiguration& WithEntityFilter(const Aws::Vector<AlfrescoEntity>& value) { SetEntityFilter(value); return *this;}

    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline AlfrescoConfiguration& WithEntityFilter(Aws::Vector<AlfrescoEntity>&& value) { SetEntityFilter(std::move(value)); return *this;}

    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline AlfrescoConfiguration& AddEntityFilter(const AlfrescoEntity& value) { m_entityFilterHasBeenSet = true; m_entityFilter.push_back(value); return *this; }

    /**
     * <p>Specify whether to index document libraries, wikis, or blogs. You can specify
     * one or more of these options.</p>
     */
    inline AlfrescoConfiguration& AddEntityFilter(AlfrescoEntity&& value) { m_entityFilterHasBeenSet = true; m_entityFilter.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetDocumentLibraryFieldMappings() const{ return m_documentLibraryFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline bool DocumentLibraryFieldMappingsHasBeenSet() const { return m_documentLibraryFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline void SetDocumentLibraryFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_documentLibraryFieldMappingsHasBeenSet = true; m_documentLibraryFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline void SetDocumentLibraryFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_documentLibraryFieldMappingsHasBeenSet = true; m_documentLibraryFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& WithDocumentLibraryFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetDocumentLibraryFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& WithDocumentLibraryFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetDocumentLibraryFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& AddDocumentLibraryFieldMappings(const DataSourceToIndexFieldMapping& value) { m_documentLibraryFieldMappingsHasBeenSet = true; m_documentLibraryFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco document libraries to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& AddDocumentLibraryFieldMappings(DataSourceToIndexFieldMapping&& value) { m_documentLibraryFieldMappingsHasBeenSet = true; m_documentLibraryFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetBlogFieldMappings() const{ return m_blogFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline bool BlogFieldMappingsHasBeenSet() const { return m_blogFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline void SetBlogFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline void SetBlogFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& WithBlogFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetBlogFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& WithBlogFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetBlogFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& AddBlogFieldMappings(const DataSourceToIndexFieldMapping& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco blogs to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& AddBlogFieldMappings(DataSourceToIndexFieldMapping&& value) { m_blogFieldMappingsHasBeenSet = true; m_blogFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetWikiFieldMappings() const{ return m_wikiFieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline bool WikiFieldMappingsHasBeenSet() const { return m_wikiFieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline void SetWikiFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_wikiFieldMappingsHasBeenSet = true; m_wikiFieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline void SetWikiFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_wikiFieldMappingsHasBeenSet = true; m_wikiFieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& WithWikiFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetWikiFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& WithWikiFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetWikiFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& AddWikiFieldMappings(const DataSourceToIndexFieldMapping& value) { m_wikiFieldMappingsHasBeenSet = true; m_wikiFieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Alfresco wikis to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Alfresco fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html"> Mapping
     * data source fields</a>. The Alfresco data source field names must exist in your
     * Alfresco custom metadata.</p>
     */
    inline AlfrescoConfiguration& AddWikiFieldMappings(DataSourceToIndexFieldMapping&& value) { m_wikiFieldMappingsHasBeenSet = true; m_wikiFieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain files in your
     * Alfresco data source. Files that match the patterns are included in the index.
     * Files that don't match the patterns are excluded from the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your
     * Alfresco data source. Files that match the patterns are excluded from the index.
     * Files that don't match the patterns are included in the index. If a file matches
     * both an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline AlfrescoConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Alfresco. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Alfresco. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Alfresco. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Alfresco. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Alfresco. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline AlfrescoConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Alfresco. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline AlfrescoConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_siteUrl;
    bool m_siteUrlHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    S3Path m_sslCertificateS3Path;
    bool m_sslCertificateS3PathHasBeenSet = false;

    bool m_crawlSystemFolders;
    bool m_crawlSystemFoldersHasBeenSet = false;

    bool m_crawlComments;
    bool m_crawlCommentsHasBeenSet = false;

    Aws::Vector<AlfrescoEntity> m_entityFilter;
    bool m_entityFilterHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_documentLibraryFieldMappings;
    bool m_documentLibraryFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_blogFieldMappings;
    bool m_blogFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_wikiFieldMappings;
    bool m_wikiFieldMappingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

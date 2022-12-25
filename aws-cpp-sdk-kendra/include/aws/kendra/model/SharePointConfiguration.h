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
    AWS_KENDRA_API SharePointConfiguration();
    AWS_KENDRA_API SharePointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SharePointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of Microsoft SharePoint that you use.</p>
     */
    inline const SharePointVersion& GetSharePointVersion() const{ return m_sharePointVersion; }

    /**
     * <p>The version of Microsoft SharePoint that you use.</p>
     */
    inline bool SharePointVersionHasBeenSet() const { return m_sharePointVersionHasBeenSet; }

    /**
     * <p>The version of Microsoft SharePoint that you use.</p>
     */
    inline void SetSharePointVersion(const SharePointVersion& value) { m_sharePointVersionHasBeenSet = true; m_sharePointVersion = value; }

    /**
     * <p>The version of Microsoft SharePoint that you use.</p>
     */
    inline void SetSharePointVersion(SharePointVersion&& value) { m_sharePointVersionHasBeenSet = true; m_sharePointVersion = std::move(value); }

    /**
     * <p>The version of Microsoft SharePoint that you use.</p>
     */
    inline SharePointConfiguration& WithSharePointVersion(const SharePointVersion& value) { SetSharePointVersion(value); return *this;}

    /**
     * <p>The version of Microsoft SharePoint that you use.</p>
     */
    inline SharePointConfiguration& WithSharePointVersion(SharePointVersion&& value) { SetSharePointVersion(std::move(value)); return *this;}


    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const{ return m_urls; }

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline void SetUrls(const Aws::Vector<Aws::String>& value) { m_urlsHasBeenSet = true; m_urls = value; }

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline void SetUrls(Aws::Vector<Aws::String>&& value) { m_urlsHasBeenSet = true; m_urls = std::move(value); }

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline SharePointConfiguration& WithUrls(const Aws::Vector<Aws::String>& value) { SetUrls(value); return *this;}

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline SharePointConfiguration& WithUrls(Aws::Vector<Aws::String>&& value) { SetUrls(std::move(value)); return *this;}

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline SharePointConfiguration& AddUrls(const Aws::String& value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline SharePointConfiguration& AddUrls(Aws::String&& value) { m_urlsHasBeenSet = true; m_urls.push_back(std::move(value)); return *this; }

    /**
     * <p>The Microsoft SharePoint site URLs for the documents you want to index.</p>
     */
    inline SharePointConfiguration& AddUrls(const char* value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline SharePointConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline SharePointConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the SharePoint instance. If you
     * use SharePoint Server, you also need to provide the sever domain name as part of
     * the credentials. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>.</p> <p>You can also provide OAuth
     * authentication credentials of user name, password, client ID, and client secret.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a SharePoint data source</a>.</p>
     */
    inline SharePointConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p> <code>TRUE</code> to index document attachments.</p>
     */
    inline bool GetCrawlAttachments() const{ return m_crawlAttachments; }

    /**
     * <p> <code>TRUE</code> to index document attachments.</p>
     */
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index document attachments.</p>
     */
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }

    /**
     * <p> <code>TRUE</code> to index document attachments.</p>
     */
    inline SharePointConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}


    /**
     * <p> <code>TRUE</code> to use the SharePoint change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in SharePoint.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }

    /**
     * <p> <code>TRUE</code> to use the SharePoint change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in SharePoint.</p>
     */
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to use the SharePoint change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in SharePoint.</p>
     */
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }

    /**
     * <p> <code>TRUE</code> to use the SharePoint change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in SharePoint.</p>
     */
    inline SharePointConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}


    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * SharePoint. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * SharePoint. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The regex
     * applies to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Microsoft SharePoint. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Microsoft SharePoint. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Microsoft SharePoint. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Microsoft SharePoint. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Microsoft SharePoint. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline SharePointConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Microsoft SharePoint. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline SharePointConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline SharePointConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline SharePointConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline SharePointConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * SharePoint data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to SharePoint fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The SharePoint data source field names must exist in
     * your SharePoint custom metadata.</p>
     */
    inline SharePointConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const{ return m_documentTitleFieldName; }

    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }

    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline void SetDocumentTitleFieldName(const Aws::String& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = value; }

    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline void SetDocumentTitleFieldName(Aws::String&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::move(value); }

    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline void SetDocumentTitleFieldName(const char* value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName.assign(value); }

    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline SharePointConfiguration& WithDocumentTitleFieldName(const Aws::String& value) { SetDocumentTitleFieldName(value); return *this;}

    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline SharePointConfiguration& WithDocumentTitleFieldName(Aws::String&& value) { SetDocumentTitleFieldName(std::move(value)); return *this;}

    /**
     * <p>The Microsoft SharePoint attribute field that contains the title of the
     * document.</p>
     */
    inline SharePointConfiguration& WithDocumentTitleFieldName(const char* value) { SetDocumentTitleFieldName(value); return *this;}


    /**
     * <p> <code>TRUE</code> to disable local groups information.</p>
     */
    inline bool GetDisableLocalGroups() const{ return m_disableLocalGroups; }

    /**
     * <p> <code>TRUE</code> to disable local groups information.</p>
     */
    inline bool DisableLocalGroupsHasBeenSet() const { return m_disableLocalGroupsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to disable local groups information.</p>
     */
    inline void SetDisableLocalGroups(bool value) { m_disableLocalGroupsHasBeenSet = true; m_disableLocalGroups = value; }

    /**
     * <p> <code>TRUE</code> to disable local groups information.</p>
     */
    inline SharePointConfiguration& WithDisableLocalGroups(bool value) { SetDisableLocalGroups(value); return *this;}


    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to SharePoint Server if you require a secure SSL connection.</p>
     * <p>You can simply generate a self-signed X509 certificate on any computer using
     * OpenSSL. For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline const S3Path& GetSslCertificateS3Path() const{ return m_sslCertificateS3Path; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to SharePoint Server if you require a secure SSL connection.</p>
     * <p>You can simply generate a self-signed X509 certificate on any computer using
     * OpenSSL. For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline bool SslCertificateS3PathHasBeenSet() const { return m_sslCertificateS3PathHasBeenSet; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to SharePoint Server if you require a secure SSL connection.</p>
     * <p>You can simply generate a self-signed X509 certificate on any computer using
     * OpenSSL. For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline void SetSslCertificateS3Path(const S3Path& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = value; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to SharePoint Server if you require a secure SSL connection.</p>
     * <p>You can simply generate a self-signed X509 certificate on any computer using
     * OpenSSL. For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline void SetSslCertificateS3Path(S3Path&& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = std::move(value); }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to SharePoint Server if you require a secure SSL connection.</p>
     * <p>You can simply generate a self-signed X509 certificate on any computer using
     * OpenSSL. For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline SharePointConfiguration& WithSslCertificateS3Path(const S3Path& value) { SetSslCertificateS3Path(value); return *this;}

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to SharePoint Server if you require a secure SSL connection.</p>
     * <p>You can simply generate a self-signed X509 certificate on any computer using
     * OpenSSL. For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline SharePointConfiguration& WithSslCertificateS3Path(S3Path&& value) { SetSslCertificateS3Path(std::move(value)); return *this;}


    /**
     * <p>Whether you want to connect to SharePoint using basic authentication of user
     * name and password, or OAuth authentication of user name, password, client ID,
     * and client secret. You can use OAuth authentication for SharePoint Online.</p>
     */
    inline const SharePointOnlineAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>Whether you want to connect to SharePoint using basic authentication of user
     * name and password, or OAuth authentication of user name, password, client ID,
     * and client secret. You can use OAuth authentication for SharePoint Online.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>Whether you want to connect to SharePoint using basic authentication of user
     * name and password, or OAuth authentication of user name, password, client ID,
     * and client secret. You can use OAuth authentication for SharePoint Online.</p>
     */
    inline void SetAuthenticationType(const SharePointOnlineAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>Whether you want to connect to SharePoint using basic authentication of user
     * name and password, or OAuth authentication of user name, password, client ID,
     * and client secret. You can use OAuth authentication for SharePoint Online.</p>
     */
    inline void SetAuthenticationType(SharePointOnlineAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>Whether you want to connect to SharePoint using basic authentication of user
     * name and password, or OAuth authentication of user name, password, client ID,
     * and client secret. You can use OAuth authentication for SharePoint Online.</p>
     */
    inline SharePointConfiguration& WithAuthenticationType(const SharePointOnlineAuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>Whether you want to connect to SharePoint using basic authentication of user
     * name and password, or OAuth authentication of user name, password, client ID,
     * and client secret. You can use OAuth authentication for SharePoint Online.</p>
     */
    inline SharePointConfiguration& WithAuthenticationType(SharePointOnlineAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


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
    inline const ProxyConfiguration& GetProxyConfiguration() const{ return m_proxyConfiguration; }

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
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }

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
    inline void SetProxyConfiguration(const ProxyConfiguration& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }

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
    inline void SetProxyConfiguration(ProxyConfiguration&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }

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
    inline SharePointConfiguration& WithProxyConfiguration(const ProxyConfiguration& value) { SetProxyConfiguration(value); return *this;}

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
    inline SharePointConfiguration& WithProxyConfiguration(ProxyConfiguration&& value) { SetProxyConfiguration(std::move(value)); return *this;}

  private:

    SharePointVersion m_sharePointVersion;
    bool m_sharePointVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_crawlAttachments;
    bool m_crawlAttachmentsHasBeenSet = false;

    bool m_useChangeLog;
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

    bool m_disableLocalGroups;
    bool m_disableLocalGroupsHasBeenSet = false;

    S3Path m_sslCertificateS3Path;
    bool m_sslCertificateS3PathHasBeenSet = false;

    SharePointOnlineAuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

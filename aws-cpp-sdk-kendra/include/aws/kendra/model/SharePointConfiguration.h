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
   * <p>Provides configuration information for connecting to a Microsoft SharePoint
   * data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SharePointConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API SharePointConfiguration
  {
  public:
    SharePointConfiguration();
    SharePointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SharePointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of Microsoft SharePoint that you are using as a data source.</p>
     */
    inline const SharePointVersion& GetSharePointVersion() const{ return m_sharePointVersion; }

    /**
     * <p>The version of Microsoft SharePoint that you are using as a data source.</p>
     */
    inline bool SharePointVersionHasBeenSet() const { return m_sharePointVersionHasBeenSet; }

    /**
     * <p>The version of Microsoft SharePoint that you are using as a data source.</p>
     */
    inline void SetSharePointVersion(const SharePointVersion& value) { m_sharePointVersionHasBeenSet = true; m_sharePointVersion = value; }

    /**
     * <p>The version of Microsoft SharePoint that you are using as a data source.</p>
     */
    inline void SetSharePointVersion(SharePointVersion&& value) { m_sharePointVersionHasBeenSet = true; m_sharePointVersion = std::move(value); }

    /**
     * <p>The version of Microsoft SharePoint that you are using as a data source.</p>
     */
    inline SharePointConfiguration& WithSharePointVersion(const SharePointVersion& value) { SetSharePointVersion(value); return *this;}

    /**
     * <p>The version of Microsoft SharePoint that you are using as a data source.</p>
     */
    inline SharePointConfiguration& WithSharePointVersion(SharePointVersion&& value) { SetSharePointVersion(std::move(value)); return *this;}


    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const{ return m_urls; }

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline bool UrlsHasBeenSet() const { return m_urlsHasBeenSet; }

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline void SetUrls(const Aws::Vector<Aws::String>& value) { m_urlsHasBeenSet = true; m_urls = value; }

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline void SetUrls(Aws::Vector<Aws::String>&& value) { m_urlsHasBeenSet = true; m_urls = std::move(value); }

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline SharePointConfiguration& WithUrls(const Aws::Vector<Aws::String>& value) { SetUrls(value); return *this;}

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline SharePointConfiguration& WithUrls(Aws::Vector<Aws::String>&& value) { SetUrls(std::move(value)); return *this;}

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline SharePointConfiguration& AddUrls(const Aws::String& value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline SharePointConfiguration& AddUrls(Aws::String&& value) { m_urlsHasBeenSet = true; m_urls.push_back(std::move(value)); return *this; }

    /**
     * <p>The URLs of the Microsoft SharePoint site that contains the documents that
     * should be indexed.</p>
     */
    inline SharePointConfiguration& AddUrls(const char* value) { m_urlsHasBeenSet = true; m_urls.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline SharePointConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline SharePointConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of credentials stored in AWS Secrets Manager.
     * The credentials should be a user/password pair. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-sharepoint.html">Using
     * a Microsoft SharePoint Data Source</a>. For more information about AWS Secrets
     * Manager, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/intro.html">
     * What Is AWS Secrets Manager </a> in the <i>AWS Secrets Manager</i> user
     * guide.</p>
     */
    inline SharePointConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p> <code>TRUE</code> to include attachments to documents stored in your
     * Microsoft SharePoint site in the index; otherwise, <code>FALSE</code>.</p>
     */
    inline bool GetCrawlAttachments() const{ return m_crawlAttachments; }

    /**
     * <p> <code>TRUE</code> to include attachments to documents stored in your
     * Microsoft SharePoint site in the index; otherwise, <code>FALSE</code>.</p>
     */
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to include attachments to documents stored in your
     * Microsoft SharePoint site in the index; otherwise, <code>FALSE</code>.</p>
     */
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }

    /**
     * <p> <code>TRUE</code> to include attachments to documents stored in your
     * Microsoft SharePoint site in the index; otherwise, <code>FALSE</code>.</p>
     */
    inline SharePointConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to use the Microsoft SharePoint change log to
     * determine the documents that need to be updated in the index. Depending on the
     * size of the SharePoint change log, it may take longer for Amazon Kendra to use
     * the change log than it takes it to determine the changed documents using the
     * Amazon Kendra document crawler.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }

    /**
     * <p>Set to <code>TRUE</code> to use the Microsoft SharePoint change log to
     * determine the documents that need to be updated in the index. Depending on the
     * size of the SharePoint change log, it may take longer for Amazon Kendra to use
     * the change log than it takes it to determine the changed documents using the
     * Amazon Kendra document crawler.</p>
     */
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to use the Microsoft SharePoint change log to
     * determine the documents that need to be updated in the index. Depending on the
     * size of the SharePoint change log, it may take longer for Amazon Kendra to use
     * the change log than it takes it to determine the changed documents using the
     * Amazon Kendra document crawler.</p>
     */
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }

    /**
     * <p>Set to <code>TRUE</code> to use the Microsoft SharePoint change log to
     * determine the documents that need to be updated in the index. Depending on the
     * size of the SharePoint change log, it may take longer for Amazon Kendra to use
     * the change log than it takes it to determine the changed documents using the
     * Amazon Kendra document crawler.</p>
     */
    inline SharePointConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}


    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * included in the index. Documents that don't match the patterns are excluded from
     * the index. If a document matches both an inclusion pattern and an exclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns. Documents that match the patterns are
     * excluded from the index. Documents that don't match the patterns are included in
     * the index. If a document matches both an exclusion pattern and an inclusion
     * pattern, the document is not included in the index.</p> <p>The regex is applied
     * to the display URL of the SharePoint document.</p>
     */
    inline SharePointConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    
    inline SharePointConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    
    inline SharePointConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
     */
    inline SharePointConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
     */
    inline SharePointConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
     */
    inline SharePointConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * Microsoft SharePoint attributes to custom fields in the Amazon Kendra index. You
     * must first create the index fields using the operation before you map SharePoint
     * attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>.</p>
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
     * <p>A Boolean value that specifies whether local groups are disabled
     * (<code>True</code>) or enabled (<code>False</code>). </p>
     */
    inline bool GetDisableLocalGroups() const{ return m_disableLocalGroups; }

    /**
     * <p>A Boolean value that specifies whether local groups are disabled
     * (<code>True</code>) or enabled (<code>False</code>). </p>
     */
    inline bool DisableLocalGroupsHasBeenSet() const { return m_disableLocalGroupsHasBeenSet; }

    /**
     * <p>A Boolean value that specifies whether local groups are disabled
     * (<code>True</code>) or enabled (<code>False</code>). </p>
     */
    inline void SetDisableLocalGroups(bool value) { m_disableLocalGroupsHasBeenSet = true; m_disableLocalGroups = value; }

    /**
     * <p>A Boolean value that specifies whether local groups are disabled
     * (<code>True</code>) or enabled (<code>False</code>). </p>
     */
    inline SharePointConfiguration& WithDisableLocalGroups(bool value) { SetDisableLocalGroups(value); return *this;}

  private:

    SharePointVersion m_sharePointVersion;
    bool m_sharePointVersionHasBeenSet;

    Aws::Vector<Aws::String> m_urls;
    bool m_urlsHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;

    bool m_crawlAttachments;
    bool m_crawlAttachmentsHasBeenSet;

    bool m_useChangeLog;
    bool m_useChangeLogHasBeenSet;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet;

    Aws::String m_documentTitleFieldName;
    bool m_documentTitleFieldNameHasBeenSet;

    bool m_disableLocalGroups;
    bool m_disableLocalGroupsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

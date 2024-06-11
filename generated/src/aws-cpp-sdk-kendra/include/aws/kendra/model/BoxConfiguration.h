﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides the configuration information to connect to Box as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/BoxConfiguration">AWS
   * API Reference</a></p>
   */
  class BoxConfiguration
  {
  public:
    AWS_KENDRA_API BoxConfiguration();
    AWS_KENDRA_API BoxConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API BoxConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Box Enterprise platform. You can find the enterprise ID
     * in the Box Developer Console settings or when you create an app in Box and
     * download your authentication credentials. For example, <i>801234567</i>.</p>
     */
    inline const Aws::String& GetEnterpriseId() const{ return m_enterpriseId; }
    inline bool EnterpriseIdHasBeenSet() const { return m_enterpriseIdHasBeenSet; }
    inline void SetEnterpriseId(const Aws::String& value) { m_enterpriseIdHasBeenSet = true; m_enterpriseId = value; }
    inline void SetEnterpriseId(Aws::String&& value) { m_enterpriseIdHasBeenSet = true; m_enterpriseId = std::move(value); }
    inline void SetEnterpriseId(const char* value) { m_enterpriseIdHasBeenSet = true; m_enterpriseId.assign(value); }
    inline BoxConfiguration& WithEnterpriseId(const Aws::String& value) { SetEnterpriseId(value); return *this;}
    inline BoxConfiguration& WithEnterpriseId(Aws::String&& value) { SetEnterpriseId(std::move(value)); return *this;}
    inline BoxConfiguration& WithEnterpriseId(const char* value) { SetEnterpriseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs required to connect to your Box platform. The secret must
     * contain a JSON structure with the following keys:</p> <ul> <li> <p>clientID—The
     * identifier of the client OAuth 2.0 authentication application created in
     * Box.</p> </li> <li> <p>clientSecret—A set of characters known only to the OAuth
     * 2.0 authentication application created in Box.</p> </li> <li> <p>publicKeyId—The
     * identifier of the public key contained within an identity certificate.</p> </li>
     * <li> <p>privateKey—A set of characters that make up an encryption key.</p> </li>
     * <li> <p>passphrase—A set of characters that act like a password.</p> </li> </ul>
     * <p>You create an application in Box to generate the keys or credentials required
     * for the secret. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-box.html">Using a
     * Box data source</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline BoxConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline BoxConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline BoxConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use the Slack change log to determine which documents
     * require updating in the index. Depending on the data source change log's size,
     * it may take longer for Amazon Kendra to use the change log than to scan all of
     * your documents.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }
    inline BoxConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index comments.</p>
     */
    inline bool GetCrawlComments() const{ return m_crawlComments; }
    inline bool CrawlCommentsHasBeenSet() const { return m_crawlCommentsHasBeenSet; }
    inline void SetCrawlComments(bool value) { m_crawlCommentsHasBeenSet = true; m_crawlComments = value; }
    inline BoxConfiguration& WithCrawlComments(bool value) { SetCrawlComments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index the contents of tasks.</p>
     */
    inline bool GetCrawlTasks() const{ return m_crawlTasks; }
    inline bool CrawlTasksHasBeenSet() const { return m_crawlTasksHasBeenSet; }
    inline void SetCrawlTasks(bool value) { m_crawlTasksHasBeenSet = true; m_crawlTasks = value; }
    inline BoxConfiguration& WithCrawlTasks(bool value) { SetCrawlTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index web links.</p>
     */
    inline bool GetCrawlWebLinks() const{ return m_crawlWebLinks; }
    inline bool CrawlWebLinksHasBeenSet() const { return m_crawlWebLinksHasBeenSet; }
    inline void SetCrawlWebLinks(bool value) { m_crawlWebLinksHasBeenSet = true; m_crawlWebLinks = value; }
    inline BoxConfiguration& WithCrawlWebLinks(bool value) { SetCrawlWebLinks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Box files to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to Box
     * fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Box field names must exist in your Box custom
     * metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFileFieldMappings() const{ return m_fileFieldMappings; }
    inline bool FileFieldMappingsHasBeenSet() const { return m_fileFieldMappingsHasBeenSet; }
    inline void SetFileFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fileFieldMappingsHasBeenSet = true; m_fileFieldMappings = value; }
    inline void SetFileFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fileFieldMappingsHasBeenSet = true; m_fileFieldMappings = std::move(value); }
    inline BoxConfiguration& WithFileFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFileFieldMappings(value); return *this;}
    inline BoxConfiguration& WithFileFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFileFieldMappings(std::move(value)); return *this;}
    inline BoxConfiguration& AddFileFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fileFieldMappingsHasBeenSet = true; m_fileFieldMappings.push_back(value); return *this; }
    inline BoxConfiguration& AddFileFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fileFieldMappingsHasBeenSet = true; m_fileFieldMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Box tasks to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to Box
     * fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Box field names must exist in your Box custom
     * metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetTaskFieldMappings() const{ return m_taskFieldMappings; }
    inline bool TaskFieldMappingsHasBeenSet() const { return m_taskFieldMappingsHasBeenSet; }
    inline void SetTaskFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_taskFieldMappingsHasBeenSet = true; m_taskFieldMappings = value; }
    inline void SetTaskFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_taskFieldMappingsHasBeenSet = true; m_taskFieldMappings = std::move(value); }
    inline BoxConfiguration& WithTaskFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetTaskFieldMappings(value); return *this;}
    inline BoxConfiguration& WithTaskFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetTaskFieldMappings(std::move(value)); return *this;}
    inline BoxConfiguration& AddTaskFieldMappings(const DataSourceToIndexFieldMapping& value) { m_taskFieldMappingsHasBeenSet = true; m_taskFieldMappings.push_back(value); return *this; }
    inline BoxConfiguration& AddTaskFieldMappings(DataSourceToIndexFieldMapping&& value) { m_taskFieldMappingsHasBeenSet = true; m_taskFieldMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Box comments to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to Box
     * fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Box field names must exist in your Box custom
     * metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetCommentFieldMappings() const{ return m_commentFieldMappings; }
    inline bool CommentFieldMappingsHasBeenSet() const { return m_commentFieldMappingsHasBeenSet; }
    inline void SetCommentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings = value; }
    inline void SetCommentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings = std::move(value); }
    inline BoxConfiguration& WithCommentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetCommentFieldMappings(value); return *this;}
    inline BoxConfiguration& WithCommentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetCommentFieldMappings(std::move(value)); return *this;}
    inline BoxConfiguration& AddCommentFieldMappings(const DataSourceToIndexFieldMapping& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings.push_back(value); return *this; }
    inline BoxConfiguration& AddCommentFieldMappings(DataSourceToIndexFieldMapping&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Box web links to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Box fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Box field names must exist in your Box custom
     * metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetWebLinkFieldMappings() const{ return m_webLinkFieldMappings; }
    inline bool WebLinkFieldMappingsHasBeenSet() const { return m_webLinkFieldMappingsHasBeenSet; }
    inline void SetWebLinkFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_webLinkFieldMappingsHasBeenSet = true; m_webLinkFieldMappings = value; }
    inline void SetWebLinkFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_webLinkFieldMappingsHasBeenSet = true; m_webLinkFieldMappings = std::move(value); }
    inline BoxConfiguration& WithWebLinkFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetWebLinkFieldMappings(value); return *this;}
    inline BoxConfiguration& WithWebLinkFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetWebLinkFieldMappings(std::move(value)); return *this;}
    inline BoxConfiguration& AddWebLinkFieldMappings(const DataSourceToIndexFieldMapping& value) { m_webLinkFieldMappingsHasBeenSet = true; m_webLinkFieldMappings.push_back(value); return *this; }
    inline BoxConfiguration& AddWebLinkFieldMappings(DataSourceToIndexFieldMapping&& value) { m_webLinkFieldMappingsHasBeenSet = true; m_webLinkFieldMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain files and folders in
     * your Box platform. Files and folders that match the patterns are included in the
     * index. Files and folders that don't match the patterns are excluded from the
     * index. If a file or folder matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the file or folder isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }
    inline BoxConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}
    inline BoxConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}
    inline BoxConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    inline BoxConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }
    inline BoxConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain files and folders
     * from your Box platform. Files and folders that match the patterns are excluded
     * from the index.Files and folders that don't match the patterns are included in
     * the index. If a file or folder matches both an inclusion and exclusion pattern,
     * the exclusion pattern takes precedence and the file or folder isn't included in
     * the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }
    inline BoxConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}
    inline BoxConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}
    inline BoxConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    inline BoxConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }
    inline BoxConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon VPC to connect to your Box. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline BoxConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline BoxConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_enterpriseId;
    bool m_enterpriseIdHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_useChangeLog;
    bool m_useChangeLogHasBeenSet = false;

    bool m_crawlComments;
    bool m_crawlCommentsHasBeenSet = false;

    bool m_crawlTasks;
    bool m_crawlTasksHasBeenSet = false;

    bool m_crawlWebLinks;
    bool m_crawlWebLinksHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fileFieldMappings;
    bool m_fileFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_taskFieldMappings;
    bool m_taskFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_commentFieldMappings;
    bool m_commentFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_webLinkFieldMappings;
    bool m_webLinkFieldMappingsHasBeenSet = false;

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

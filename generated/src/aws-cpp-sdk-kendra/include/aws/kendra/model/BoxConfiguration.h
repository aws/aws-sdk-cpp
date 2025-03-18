/**
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
    AWS_KENDRA_API BoxConfiguration() = default;
    AWS_KENDRA_API BoxConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API BoxConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Box Enterprise platform. You can find the enterprise ID
     * in the Box Developer Console settings or when you create an app in Box and
     * download your authentication credentials. For example, <i>801234567</i>.</p>
     */
    inline const Aws::String& GetEnterpriseId() const { return m_enterpriseId; }
    inline bool EnterpriseIdHasBeenSet() const { return m_enterpriseIdHasBeenSet; }
    template<typename EnterpriseIdT = Aws::String>
    void SetEnterpriseId(EnterpriseIdT&& value) { m_enterpriseIdHasBeenSet = true; m_enterpriseId = std::forward<EnterpriseIdT>(value); }
    template<typename EnterpriseIdT = Aws::String>
    BoxConfiguration& WithEnterpriseId(EnterpriseIdT&& value) { SetEnterpriseId(std::forward<EnterpriseIdT>(value)); return *this;}
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
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    BoxConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use the Slack change log to determine which documents
     * require updating in the index. Depending on the data source change log's size,
     * it may take longer for Amazon Kendra to use the change log than to scan all of
     * your documents.</p>
     */
    inline bool GetUseChangeLog() const { return m_useChangeLog; }
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }
    inline BoxConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index comments.</p>
     */
    inline bool GetCrawlComments() const { return m_crawlComments; }
    inline bool CrawlCommentsHasBeenSet() const { return m_crawlCommentsHasBeenSet; }
    inline void SetCrawlComments(bool value) { m_crawlCommentsHasBeenSet = true; m_crawlComments = value; }
    inline BoxConfiguration& WithCrawlComments(bool value) { SetCrawlComments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index the contents of tasks.</p>
     */
    inline bool GetCrawlTasks() const { return m_crawlTasks; }
    inline bool CrawlTasksHasBeenSet() const { return m_crawlTasksHasBeenSet; }
    inline void SetCrawlTasks(bool value) { m_crawlTasksHasBeenSet = true; m_crawlTasks = value; }
    inline BoxConfiguration& WithCrawlTasks(bool value) { SetCrawlTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index web links.</p>
     */
    inline bool GetCrawlWebLinks() const { return m_crawlWebLinks; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFileFieldMappings() const { return m_fileFieldMappings; }
    inline bool FileFieldMappingsHasBeenSet() const { return m_fileFieldMappingsHasBeenSet; }
    template<typename FileFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFileFieldMappings(FileFieldMappingsT&& value) { m_fileFieldMappingsHasBeenSet = true; m_fileFieldMappings = std::forward<FileFieldMappingsT>(value); }
    template<typename FileFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    BoxConfiguration& WithFileFieldMappings(FileFieldMappingsT&& value) { SetFileFieldMappings(std::forward<FileFieldMappingsT>(value)); return *this;}
    template<typename FileFieldMappingsT = DataSourceToIndexFieldMapping>
    BoxConfiguration& AddFileFieldMappings(FileFieldMappingsT&& value) { m_fileFieldMappingsHasBeenSet = true; m_fileFieldMappings.emplace_back(std::forward<FileFieldMappingsT>(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetTaskFieldMappings() const { return m_taskFieldMappings; }
    inline bool TaskFieldMappingsHasBeenSet() const { return m_taskFieldMappingsHasBeenSet; }
    template<typename TaskFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetTaskFieldMappings(TaskFieldMappingsT&& value) { m_taskFieldMappingsHasBeenSet = true; m_taskFieldMappings = std::forward<TaskFieldMappingsT>(value); }
    template<typename TaskFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    BoxConfiguration& WithTaskFieldMappings(TaskFieldMappingsT&& value) { SetTaskFieldMappings(std::forward<TaskFieldMappingsT>(value)); return *this;}
    template<typename TaskFieldMappingsT = DataSourceToIndexFieldMapping>
    BoxConfiguration& AddTaskFieldMappings(TaskFieldMappingsT&& value) { m_taskFieldMappingsHasBeenSet = true; m_taskFieldMappings.emplace_back(std::forward<TaskFieldMappingsT>(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetCommentFieldMappings() const { return m_commentFieldMappings; }
    inline bool CommentFieldMappingsHasBeenSet() const { return m_commentFieldMappingsHasBeenSet; }
    template<typename CommentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetCommentFieldMappings(CommentFieldMappingsT&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings = std::forward<CommentFieldMappingsT>(value); }
    template<typename CommentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    BoxConfiguration& WithCommentFieldMappings(CommentFieldMappingsT&& value) { SetCommentFieldMappings(std::forward<CommentFieldMappingsT>(value)); return *this;}
    template<typename CommentFieldMappingsT = DataSourceToIndexFieldMapping>
    BoxConfiguration& AddCommentFieldMappings(CommentFieldMappingsT&& value) { m_commentFieldMappingsHasBeenSet = true; m_commentFieldMappings.emplace_back(std::forward<CommentFieldMappingsT>(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetWebLinkFieldMappings() const { return m_webLinkFieldMappings; }
    inline bool WebLinkFieldMappingsHasBeenSet() const { return m_webLinkFieldMappingsHasBeenSet; }
    template<typename WebLinkFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetWebLinkFieldMappings(WebLinkFieldMappingsT&& value) { m_webLinkFieldMappingsHasBeenSet = true; m_webLinkFieldMappings = std::forward<WebLinkFieldMappingsT>(value); }
    template<typename WebLinkFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    BoxConfiguration& WithWebLinkFieldMappings(WebLinkFieldMappingsT&& value) { SetWebLinkFieldMappings(std::forward<WebLinkFieldMappingsT>(value)); return *this;}
    template<typename WebLinkFieldMappingsT = DataSourceToIndexFieldMapping>
    BoxConfiguration& AddWebLinkFieldMappings(WebLinkFieldMappingsT&& value) { m_webLinkFieldMappingsHasBeenSet = true; m_webLinkFieldMappings.emplace_back(std::forward<WebLinkFieldMappingsT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    BoxConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    BoxConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    BoxConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    BoxConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon VPC to connect to your Box. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    BoxConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_enterpriseId;
    bool m_enterpriseIdHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_useChangeLog{false};
    bool m_useChangeLogHasBeenSet = false;

    bool m_crawlComments{false};
    bool m_crawlCommentsHasBeenSet = false;

    bool m_crawlTasks{false};
    bool m_crawlTasksHasBeenSet = false;

    bool m_crawlWebLinks{false};
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

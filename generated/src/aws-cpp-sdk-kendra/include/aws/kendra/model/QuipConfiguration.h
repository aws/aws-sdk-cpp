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
   * <p>Provides the configuration information to connect to Quip as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/QuipConfiguration">AWS
   * API Reference</a></p>
   */
  class QuipConfiguration
  {
  public:
    AWS_KENDRA_API QuipConfiguration() = default;
    AWS_KENDRA_API QuipConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API QuipConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Quip site domain. For example,
     * <i>https://quip-company.quipdomain.com/browse</i>. The domain in this example is
     * "quipdomain".</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    QuipConfiguration& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * key-value pairs that are required to connect to your Quip. The secret must
     * contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>accessToken—The token created in Quip. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-slack.html">Using
     * a Quip data source</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    QuipConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index file comments.</p>
     */
    inline bool GetCrawlFileComments() const { return m_crawlFileComments; }
    inline bool CrawlFileCommentsHasBeenSet() const { return m_crawlFileCommentsHasBeenSet; }
    inline void SetCrawlFileComments(bool value) { m_crawlFileCommentsHasBeenSet = true; m_crawlFileComments = value; }
    inline QuipConfiguration& WithCrawlFileComments(bool value) { SetCrawlFileComments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index the contents of chat rooms.</p>
     */
    inline bool GetCrawlChatRooms() const { return m_crawlChatRooms; }
    inline bool CrawlChatRoomsHasBeenSet() const { return m_crawlChatRoomsHasBeenSet; }
    inline void SetCrawlChatRooms(bool value) { m_crawlChatRoomsHasBeenSet = true; m_crawlChatRooms = value; }
    inline QuipConfiguration& WithCrawlChatRooms(bool value) { SetCrawlChatRooms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index attachments.</p>
     */
    inline bool GetCrawlAttachments() const { return m_crawlAttachments; }
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }
    inline QuipConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the Quip folders you want to index. You can find the
     * folder ID in your browser URL when you access your folder in Quip. For example,
     * <i>https://quip-company.quipdomain.com/zlLuOVNSarTL/folder-name</i>. The folder
     * ID in this example is "zlLuOVNSarTL".</p>
     */
    inline const Aws::Vector<Aws::String>& GetFolderIds() const { return m_folderIds; }
    inline bool FolderIdsHasBeenSet() const { return m_folderIdsHasBeenSet; }
    template<typename FolderIdsT = Aws::Vector<Aws::String>>
    void SetFolderIds(FolderIdsT&& value) { m_folderIdsHasBeenSet = true; m_folderIds = std::forward<FolderIdsT>(value); }
    template<typename FolderIdsT = Aws::Vector<Aws::String>>
    QuipConfiguration& WithFolderIds(FolderIdsT&& value) { SetFolderIds(std::forward<FolderIdsT>(value)); return *this;}
    template<typename FolderIdsT = Aws::String>
    QuipConfiguration& AddFolderIds(FolderIdsT&& value) { m_folderIdsHasBeenSet = true; m_folderIds.emplace_back(std::forward<FolderIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Quip threads to Amazon Kendra index field names. To
     * create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Quip fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Quip field names must exist in your Quip custom
     * metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetThreadFieldMappings() const { return m_threadFieldMappings; }
    inline bool ThreadFieldMappingsHasBeenSet() const { return m_threadFieldMappingsHasBeenSet; }
    template<typename ThreadFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetThreadFieldMappings(ThreadFieldMappingsT&& value) { m_threadFieldMappingsHasBeenSet = true; m_threadFieldMappings = std::forward<ThreadFieldMappingsT>(value); }
    template<typename ThreadFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    QuipConfiguration& WithThreadFieldMappings(ThreadFieldMappingsT&& value) { SetThreadFieldMappings(std::forward<ThreadFieldMappingsT>(value)); return *this;}
    template<typename ThreadFieldMappingsT = DataSourceToIndexFieldMapping>
    QuipConfiguration& AddThreadFieldMappings(ThreadFieldMappingsT&& value) { m_threadFieldMappingsHasBeenSet = true; m_threadFieldMappings.emplace_back(std::forward<ThreadFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Quip messages to Amazon Kendra index field names.
     * To create custom fields, use the <code>UpdateIndex</code> API before you map to
     * Quip fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Quip field names must exist in your Quip custom
     * metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetMessageFieldMappings() const { return m_messageFieldMappings; }
    inline bool MessageFieldMappingsHasBeenSet() const { return m_messageFieldMappingsHasBeenSet; }
    template<typename MessageFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetMessageFieldMappings(MessageFieldMappingsT&& value) { m_messageFieldMappingsHasBeenSet = true; m_messageFieldMappings = std::forward<MessageFieldMappingsT>(value); }
    template<typename MessageFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    QuipConfiguration& WithMessageFieldMappings(MessageFieldMappingsT&& value) { SetMessageFieldMappings(std::forward<MessageFieldMappingsT>(value)); return *this;}
    template<typename MessageFieldMappingsT = DataSourceToIndexFieldMapping>
    QuipConfiguration& AddMessageFieldMappings(MessageFieldMappingsT&& value) { m_messageFieldMappingsHasBeenSet = true; m_messageFieldMappings.emplace_back(std::forward<MessageFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map
     * attributes or field names of Quip attachments to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Quip fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Quip field names must exist in your Quip custom
     * metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetAttachmentFieldMappings() const { return m_attachmentFieldMappings; }
    inline bool AttachmentFieldMappingsHasBeenSet() const { return m_attachmentFieldMappingsHasBeenSet; }
    template<typename AttachmentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = std::forward<AttachmentFieldMappingsT>(value); }
    template<typename AttachmentFieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    QuipConfiguration& WithAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { SetAttachmentFieldMappings(std::forward<AttachmentFieldMappingsT>(value)); return *this;}
    template<typename AttachmentFieldMappingsT = DataSourceToIndexFieldMapping>
    QuipConfiguration& AddAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.emplace_back(std::forward<AttachmentFieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain files in your Quip
     * file system. Files that match the patterns are included in the index. Files that
     * don't match the patterns are excluded from the index. If a file matches both an
     * inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence, and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    QuipConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    QuipConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain files in your Quip
     * file system. Files that match the patterns are excluded from the index. Files
     * that don’t match the patterns are included in the index. If a file matches both
     * an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence, and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    QuipConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    QuipConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud (VPC) to
     * connect to your Quip. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = DataSourceVpcConfiguration>
    QuipConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_crawlFileComments{false};
    bool m_crawlFileCommentsHasBeenSet = false;

    bool m_crawlChatRooms{false};
    bool m_crawlChatRoomsHasBeenSet = false;

    bool m_crawlAttachments{false};
    bool m_crawlAttachmentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_folderIds;
    bool m_folderIdsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_threadFieldMappings;
    bool m_threadFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_messageFieldMappings;
    bool m_messageFieldMappingsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_attachmentFieldMappings;
    bool m_attachmentFieldMappingsHasBeenSet = false;

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

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
    AWS_KENDRA_API QuipConfiguration();
    AWS_KENDRA_API QuipConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API QuipConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Quip site domain. For example,
     * <i>https://quip-company.quipdomain.com/browse</i>. The domain in this example is
     * "quipdomain".</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline QuipConfiguration& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline QuipConfiguration& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline QuipConfiguration& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline QuipConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline QuipConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline QuipConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index file comments.</p>
     */
    inline bool GetCrawlFileComments() const{ return m_crawlFileComments; }
    inline bool CrawlFileCommentsHasBeenSet() const { return m_crawlFileCommentsHasBeenSet; }
    inline void SetCrawlFileComments(bool value) { m_crawlFileCommentsHasBeenSet = true; m_crawlFileComments = value; }
    inline QuipConfiguration& WithCrawlFileComments(bool value) { SetCrawlFileComments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index the contents of chat rooms.</p>
     */
    inline bool GetCrawlChatRooms() const{ return m_crawlChatRooms; }
    inline bool CrawlChatRoomsHasBeenSet() const { return m_crawlChatRoomsHasBeenSet; }
    inline void SetCrawlChatRooms(bool value) { m_crawlChatRoomsHasBeenSet = true; m_crawlChatRooms = value; }
    inline QuipConfiguration& WithCrawlChatRooms(bool value) { SetCrawlChatRooms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index attachments.</p>
     */
    inline bool GetCrawlAttachments() const{ return m_crawlAttachments; }
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
    inline const Aws::Vector<Aws::String>& GetFolderIds() const{ return m_folderIds; }
    inline bool FolderIdsHasBeenSet() const { return m_folderIdsHasBeenSet; }
    inline void SetFolderIds(const Aws::Vector<Aws::String>& value) { m_folderIdsHasBeenSet = true; m_folderIds = value; }
    inline void SetFolderIds(Aws::Vector<Aws::String>&& value) { m_folderIdsHasBeenSet = true; m_folderIds = std::move(value); }
    inline QuipConfiguration& WithFolderIds(const Aws::Vector<Aws::String>& value) { SetFolderIds(value); return *this;}
    inline QuipConfiguration& WithFolderIds(Aws::Vector<Aws::String>&& value) { SetFolderIds(std::move(value)); return *this;}
    inline QuipConfiguration& AddFolderIds(const Aws::String& value) { m_folderIdsHasBeenSet = true; m_folderIds.push_back(value); return *this; }
    inline QuipConfiguration& AddFolderIds(Aws::String&& value) { m_folderIdsHasBeenSet = true; m_folderIds.push_back(std::move(value)); return *this; }
    inline QuipConfiguration& AddFolderIds(const char* value) { m_folderIdsHasBeenSet = true; m_folderIds.push_back(value); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetThreadFieldMappings() const{ return m_threadFieldMappings; }
    inline bool ThreadFieldMappingsHasBeenSet() const { return m_threadFieldMappingsHasBeenSet; }
    inline void SetThreadFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_threadFieldMappingsHasBeenSet = true; m_threadFieldMappings = value; }
    inline void SetThreadFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_threadFieldMappingsHasBeenSet = true; m_threadFieldMappings = std::move(value); }
    inline QuipConfiguration& WithThreadFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetThreadFieldMappings(value); return *this;}
    inline QuipConfiguration& WithThreadFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetThreadFieldMappings(std::move(value)); return *this;}
    inline QuipConfiguration& AddThreadFieldMappings(const DataSourceToIndexFieldMapping& value) { m_threadFieldMappingsHasBeenSet = true; m_threadFieldMappings.push_back(value); return *this; }
    inline QuipConfiguration& AddThreadFieldMappings(DataSourceToIndexFieldMapping&& value) { m_threadFieldMappingsHasBeenSet = true; m_threadFieldMappings.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetMessageFieldMappings() const{ return m_messageFieldMappings; }
    inline bool MessageFieldMappingsHasBeenSet() const { return m_messageFieldMappingsHasBeenSet; }
    inline void SetMessageFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_messageFieldMappingsHasBeenSet = true; m_messageFieldMappings = value; }
    inline void SetMessageFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_messageFieldMappingsHasBeenSet = true; m_messageFieldMappings = std::move(value); }
    inline QuipConfiguration& WithMessageFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetMessageFieldMappings(value); return *this;}
    inline QuipConfiguration& WithMessageFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetMessageFieldMappings(std::move(value)); return *this;}
    inline QuipConfiguration& AddMessageFieldMappings(const DataSourceToIndexFieldMapping& value) { m_messageFieldMappingsHasBeenSet = true; m_messageFieldMappings.push_back(value); return *this; }
    inline QuipConfiguration& AddMessageFieldMappings(DataSourceToIndexFieldMapping&& value) { m_messageFieldMappingsHasBeenSet = true; m_messageFieldMappings.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetAttachmentFieldMappings() const{ return m_attachmentFieldMappings; }
    inline bool AttachmentFieldMappingsHasBeenSet() const { return m_attachmentFieldMappingsHasBeenSet; }
    inline void SetAttachmentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = value; }
    inline void SetAttachmentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = std::move(value); }
    inline QuipConfiguration& WithAttachmentFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetAttachmentFieldMappings(value); return *this;}
    inline QuipConfiguration& WithAttachmentFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetAttachmentFieldMappings(std::move(value)); return *this;}
    inline QuipConfiguration& AddAttachmentFieldMappings(const DataSourceToIndexFieldMapping& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(value); return *this; }
    inline QuipConfiguration& AddAttachmentFieldMappings(DataSourceToIndexFieldMapping&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain files in your Quip
     * file system. Files that match the patterns are included in the index. Files that
     * don't match the patterns are excluded from the index. If a file matches both an
     * inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence, and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }
    inline QuipConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}
    inline QuipConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}
    inline QuipConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    inline QuipConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }
    inline QuipConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain files in your Quip
     * file system. Files that match the patterns are excluded from the index. Files
     * that don’t match the patterns are included in the index. If a file matches both
     * an inclusion pattern and an exclusion pattern, the exclusion pattern takes
     * precedence, and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }
    inline QuipConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}
    inline QuipConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}
    inline QuipConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    inline QuipConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }
    inline QuipConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud (VPC) to
     * connect to your Quip. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline QuipConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline QuipConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    bool m_crawlFileComments;
    bool m_crawlFileCommentsHasBeenSet = false;

    bool m_crawlChatRooms;
    bool m_crawlChatRoomsHasBeenSet = false;

    bool m_crawlAttachments;
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

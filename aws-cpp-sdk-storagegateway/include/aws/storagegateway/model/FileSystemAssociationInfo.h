/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/storagegateway/model/Tag.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes the object returned by <code>DescribeFileSystemAssociations</code>
   * that describes a created file system association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/FileSystemAssociationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API FileSystemAssociationInfo
  {
  public:
    FileSystemAssociationInfo();
    FileSystemAssociationInfo(Aws::Utils::Json::JsonView jsonValue);
    FileSystemAssociationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const{ return m_fileSystemAssociationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline bool FileSystemAssociationARNHasBeenSet() const { return m_fileSystemAssociationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline void SetFileSystemAssociationARN(const Aws::String& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline void SetFileSystemAssociationARN(Aws::String&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline void SetFileSystemAssociationARN(const char* value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline FileSystemAssociationInfo& WithFileSystemAssociationARN(const Aws::String& value) { SetFileSystemAssociationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline FileSystemAssociationInfo& WithFileSystemAssociationARN(Aws::String&& value) { SetFileSystemAssociationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline FileSystemAssociationInfo& WithFileSystemAssociationARN(const char* value) { SetFileSystemAssociationARN(value); return *this;}


    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }

    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline FileSystemAssociationInfo& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline FileSystemAssociationInfo& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline FileSystemAssociationInfo& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline const Aws::String& GetFileSystemAssociationStatus() const{ return m_fileSystemAssociationStatus; }

    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline bool FileSystemAssociationStatusHasBeenSet() const { return m_fileSystemAssociationStatusHasBeenSet; }

    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline void SetFileSystemAssociationStatus(const Aws::String& value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus = value; }

    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline void SetFileSystemAssociationStatus(Aws::String&& value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus = std::move(value); }

    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline void SetFileSystemAssociationStatus(const char* value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus.assign(value); }

    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline FileSystemAssociationInfo& WithFileSystemAssociationStatus(const Aws::String& value) { SetFileSystemAssociationStatus(value); return *this;}

    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline FileSystemAssociationInfo& WithFileSystemAssociationStatus(Aws::String&& value) { SetFileSystemAssociationStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>MISCONFIGURED</code> | <code>UPDATING</code>
     * | <code>UNAVAILABLE</code> </p>
     */
    inline FileSystemAssociationInfo& WithFileSystemAssociationStatus(const char* value) { SetFileSystemAssociationStatus(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const{ return m_auditDestinationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(const Aws::String& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(Aws::String&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(const char* value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline FileSystemAssociationInfo& WithAuditDestinationARN(const Aws::String& value) { SetAuditDestinationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline FileSystemAssociationInfo& WithAuditDestinationARN(Aws::String&& value) { SetAuditDestinationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline FileSystemAssociationInfo& WithAuditDestinationARN(const char* value) { SetAuditDestinationARN(value); return *this;}


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline FileSystemAssociationInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline FileSystemAssociationInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline FileSystemAssociationInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline FileSystemAssociationInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline FileSystemAssociationInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline FileSystemAssociationInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline FileSystemAssociationInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }

    
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }

    
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }

    
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }

    
    inline FileSystemAssociationInfo& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}

    
    inline FileSystemAssociationInfo& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemAssociationARN;
    bool m_fileSystemAssociationARNHasBeenSet;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet;

    Aws::String m_fileSystemAssociationStatus;
    bool m_fileSystemAssociationStatusHasBeenSet;

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

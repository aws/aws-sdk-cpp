/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/EFSTransitEncryption.h>
#include <aws/batch/model/EFSAuthorizationConfig.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>This is used when you're using an Amazon Elastic File System file system for
   * job storage. For more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/efs-volumes.html">Amazon
   * EFS Volumes</a> in the <i>Batch User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EFSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class EFSVolumeConfiguration
  {
  public:
    AWS_BATCH_API EFSVolumeConfiguration();
    AWS_BATCH_API EFSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EFSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline EFSVolumeConfiguration& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline EFSVolumeConfiguration& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline EFSVolumeConfiguration& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline const Aws::String& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline void SetRootDirectory(const Aws::String& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline void SetRootDirectory(Aws::String&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline void SetRootDirectory(const char* value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory.assign(value); }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline EFSVolumeConfiguration& WithRootDirectory(const Aws::String& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline EFSVolumeConfiguration& WithRootDirectory(Aws::String&& value) { SetRootDirectory(std::move(value)); return *this;}

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume is used instead. Specifying <code>/</code> has the same effect as
     * omitting this parameter. The maximum length is 4,096 characters.</p> 
     * <p>If an EFS access point is specified in the <code>authorizationConfig</code>,
     * the root directory parameter must either be omitted or set to <code>/</code>,
     * which enforces the path set on the Amazon EFS access point.</p> 
     */
    inline EFSVolumeConfiguration& WithRootDirectory(const char* value) { SetRootDirectory(value); return *this;}


    /**
     * <p>Determines whether to enable encryption for Amazon EFS data in transit
     * between the Amazon ECS host and the Amazon EFS server. Transit encryption must
     * be enabled if Amazon EFS IAM authorization is used. If this parameter is
     * omitted, the default value of <code>DISABLED</code> is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/encryption-in-transit.html">Encrypting
     * data in transit</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline const EFSTransitEncryption& GetTransitEncryption() const{ return m_transitEncryption; }

    /**
     * <p>Determines whether to enable encryption for Amazon EFS data in transit
     * between the Amazon ECS host and the Amazon EFS server. Transit encryption must
     * be enabled if Amazon EFS IAM authorization is used. If this parameter is
     * omitted, the default value of <code>DISABLED</code> is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/encryption-in-transit.html">Encrypting
     * data in transit</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline bool TransitEncryptionHasBeenSet() const { return m_transitEncryptionHasBeenSet; }

    /**
     * <p>Determines whether to enable encryption for Amazon EFS data in transit
     * between the Amazon ECS host and the Amazon EFS server. Transit encryption must
     * be enabled if Amazon EFS IAM authorization is used. If this parameter is
     * omitted, the default value of <code>DISABLED</code> is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/encryption-in-transit.html">Encrypting
     * data in transit</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline void SetTransitEncryption(const EFSTransitEncryption& value) { m_transitEncryptionHasBeenSet = true; m_transitEncryption = value; }

    /**
     * <p>Determines whether to enable encryption for Amazon EFS data in transit
     * between the Amazon ECS host and the Amazon EFS server. Transit encryption must
     * be enabled if Amazon EFS IAM authorization is used. If this parameter is
     * omitted, the default value of <code>DISABLED</code> is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/encryption-in-transit.html">Encrypting
     * data in transit</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline void SetTransitEncryption(EFSTransitEncryption&& value) { m_transitEncryptionHasBeenSet = true; m_transitEncryption = std::move(value); }

    /**
     * <p>Determines whether to enable encryption for Amazon EFS data in transit
     * between the Amazon ECS host and the Amazon EFS server. Transit encryption must
     * be enabled if Amazon EFS IAM authorization is used. If this parameter is
     * omitted, the default value of <code>DISABLED</code> is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/encryption-in-transit.html">Encrypting
     * data in transit</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline EFSVolumeConfiguration& WithTransitEncryption(const EFSTransitEncryption& value) { SetTransitEncryption(value); return *this;}

    /**
     * <p>Determines whether to enable encryption for Amazon EFS data in transit
     * between the Amazon ECS host and the Amazon EFS server. Transit encryption must
     * be enabled if Amazon EFS IAM authorization is used. If this parameter is
     * omitted, the default value of <code>DISABLED</code> is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/encryption-in-transit.html">Encrypting
     * data in transit</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline EFSVolumeConfiguration& WithTransitEncryption(EFSTransitEncryption&& value) { SetTransitEncryption(std::move(value)); return *this;}


    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server. If you don't specify a transit encryption port, it uses
     * the port selection strategy that the Amazon EFS mount helper uses. The value
     * must be between 0 and 65,535. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-mount-helper.html">EFS mount
     * helper</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline int GetTransitEncryptionPort() const{ return m_transitEncryptionPort; }

    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server. If you don't specify a transit encryption port, it uses
     * the port selection strategy that the Amazon EFS mount helper uses. The value
     * must be between 0 and 65,535. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-mount-helper.html">EFS mount
     * helper</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline bool TransitEncryptionPortHasBeenSet() const { return m_transitEncryptionPortHasBeenSet; }

    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server. If you don't specify a transit encryption port, it uses
     * the port selection strategy that the Amazon EFS mount helper uses. The value
     * must be between 0 and 65,535. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-mount-helper.html">EFS mount
     * helper</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline void SetTransitEncryptionPort(int value) { m_transitEncryptionPortHasBeenSet = true; m_transitEncryptionPort = value; }

    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server. If you don't specify a transit encryption port, it uses
     * the port selection strategy that the Amazon EFS mount helper uses. The value
     * must be between 0 and 65,535. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-mount-helper.html">EFS mount
     * helper</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline EFSVolumeConfiguration& WithTransitEncryptionPort(int value) { SetTransitEncryptionPort(value); return *this;}


    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline const EFSAuthorizationConfig& GetAuthorizationConfig() const{ return m_authorizationConfig; }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline void SetAuthorizationConfig(const EFSAuthorizationConfig& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = value; }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline void SetAuthorizationConfig(EFSAuthorizationConfig&& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = std::move(value); }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline EFSVolumeConfiguration& WithAuthorizationConfig(const EFSAuthorizationConfig& value) { SetAuthorizationConfig(value); return *this;}

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline EFSVolumeConfiguration& WithAuthorizationConfig(EFSAuthorizationConfig&& value) { SetAuthorizationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;

    EFSTransitEncryption m_transitEncryption;
    bool m_transitEncryptionHasBeenSet = false;

    int m_transitEncryptionPort;
    bool m_transitEncryptionPortHasBeenSet = false;

    EFSAuthorizationConfig m_authorizationConfig;
    bool m_authorizationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/EFSTransitEncryption.h>
#include <aws/ecs/model/EFSAuthorizationConfig.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>This parameter is specified when you're using an Amazon Elastic File System
   * file system for task storage. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/efs-volumes.html">Amazon
   * EFS volumes</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/EFSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class EFSVolumeConfiguration
  {
  public:
    AWS_ECS_API EFSVolumeConfiguration() = default;
    AWS_ECS_API EFSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API EFSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EFS file system ID to use.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    EFSVolumeConfiguration& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host. If this parameter is omitted, the root of the Amazon
     * EFS volume will be used. Specifying <code>/</code> will have the same effect as
     * omitting this parameter.</p>  <p>If an EFS access point is specified
     * in the <code>authorizationConfig</code>, the root directory parameter must
     * either be omitted or set to <code>/</code> which will enforce the path set on
     * the EFS access point.</p> 
     */
    inline const Aws::String& GetRootDirectory() const { return m_rootDirectory; }
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
    template<typename RootDirectoryT = Aws::String>
    void SetRootDirectory(RootDirectoryT&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::forward<RootDirectoryT>(value); }
    template<typename RootDirectoryT = Aws::String>
    EFSVolumeConfiguration& WithRootDirectory(RootDirectoryT&& value) { SetRootDirectory(std::forward<RootDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to use encryption for Amazon EFS data in transit between
     * the Amazon ECS host and the Amazon EFS server. Transit encryption must be turned
     * on if Amazon EFS IAM authorization is used. If this parameter is omitted, the
     * default value of <code>DISABLED</code> is used. For more information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/encryption-in-transit.html">Encrypting
     * data in transit</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline EFSTransitEncryption GetTransitEncryption() const { return m_transitEncryption; }
    inline bool TransitEncryptionHasBeenSet() const { return m_transitEncryptionHasBeenSet; }
    inline void SetTransitEncryption(EFSTransitEncryption value) { m_transitEncryptionHasBeenSet = true; m_transitEncryption = value; }
    inline EFSVolumeConfiguration& WithTransitEncryption(EFSTransitEncryption value) { SetTransitEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server. If you do not specify a transit encryption port, it will
     * use the port selection strategy that the Amazon EFS mount helper uses. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/efs-mount-helper.html">EFS mount
     * helper</a> in the <i>Amazon Elastic File System User Guide</i>.</p>
     */
    inline int GetTransitEncryptionPort() const { return m_transitEncryptionPort; }
    inline bool TransitEncryptionPortHasBeenSet() const { return m_transitEncryptionPortHasBeenSet; }
    inline void SetTransitEncryptionPort(int value) { m_transitEncryptionPortHasBeenSet = true; m_transitEncryptionPort = value; }
    inline EFSVolumeConfiguration& WithTransitEncryptionPort(int value) { SetTransitEncryptionPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline const EFSAuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
    inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
    template<typename AuthorizationConfigT = EFSAuthorizationConfig>
    void SetAuthorizationConfig(AuthorizationConfigT&& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = std::forward<AuthorizationConfigT>(value); }
    template<typename AuthorizationConfigT = EFSAuthorizationConfig>
    EFSVolumeConfiguration& WithAuthorizationConfig(AuthorizationConfigT&& value) { SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;

    EFSTransitEncryption m_transitEncryption{EFSTransitEncryption::NOT_SET};
    bool m_transitEncryptionHasBeenSet = false;

    int m_transitEncryptionPort{0};
    bool m_transitEncryptionPortHasBeenSet = false;

    EFSAuthorizationConfig m_authorizationConfig;
    bool m_authorizationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

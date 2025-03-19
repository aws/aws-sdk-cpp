/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/FSxWindowsFileServerAuthorizationConfig.h>
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
   * <p>This parameter is specified when you're using <a
   * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/what-is.html">Amazon
   * FSx for Windows File Server</a> file system for task storage.</p> <p>For more
   * information and the input format, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/wfsx-volumes.html">Amazon
   * FSx for Windows File Server volumes</a> in the <i>Amazon Elastic Container
   * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/FSxWindowsFileServerVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class FSxWindowsFileServerVolumeConfiguration
  {
  public:
    AWS_ECS_API FSxWindowsFileServerVolumeConfiguration() = default;
    AWS_ECS_API FSxWindowsFileServerVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API FSxWindowsFileServerVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    FSxWindowsFileServerVolumeConfiguration& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline const Aws::String& GetRootDirectory() const { return m_rootDirectory; }
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
    template<typename RootDirectoryT = Aws::String>
    void SetRootDirectory(RootDirectoryT&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::forward<RootDirectoryT>(value); }
    template<typename RootDirectoryT = Aws::String>
    FSxWindowsFileServerVolumeConfiguration& WithRootDirectory(RootDirectoryT&& value) { SetRootDirectory(std::forward<RootDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization configuration details for the Amazon FSx for Windows File
     * Server file system.</p>
     */
    inline const FSxWindowsFileServerAuthorizationConfig& GetAuthorizationConfig() const { return m_authorizationConfig; }
    inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
    template<typename AuthorizationConfigT = FSxWindowsFileServerAuthorizationConfig>
    void SetAuthorizationConfig(AuthorizationConfigT&& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = std::forward<AuthorizationConfigT>(value); }
    template<typename AuthorizationConfigT = FSxWindowsFileServerAuthorizationConfig>
    FSxWindowsFileServerVolumeConfiguration& WithAuthorizationConfig(AuthorizationConfigT&& value) { SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;

    FSxWindowsFileServerAuthorizationConfig m_authorizationConfig;
    bool m_authorizationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

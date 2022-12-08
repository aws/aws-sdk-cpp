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
    AWS_ECS_API FSxWindowsFileServerVolumeConfiguration();
    AWS_ECS_API FSxWindowsFileServerVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API FSxWindowsFileServerVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The Amazon FSx for Windows File Server file system ID to use.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline const Aws::String& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }

    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline void SetRootDirectory(const Aws::String& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }

    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline void SetRootDirectory(Aws::String&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }

    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline void SetRootDirectory(const char* value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory.assign(value); }

    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithRootDirectory(const Aws::String& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithRootDirectory(Aws::String&& value) { SetRootDirectory(std::move(value)); return *this;}

    /**
     * <p>The directory within the Amazon FSx for Windows File Server file system to
     * mount as the root directory inside the host.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithRootDirectory(const char* value) { SetRootDirectory(value); return *this;}


    /**
     * <p>The authorization configuration details for the Amazon FSx for Windows File
     * Server file system.</p>
     */
    inline const FSxWindowsFileServerAuthorizationConfig& GetAuthorizationConfig() const{ return m_authorizationConfig; }

    /**
     * <p>The authorization configuration details for the Amazon FSx for Windows File
     * Server file system.</p>
     */
    inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }

    /**
     * <p>The authorization configuration details for the Amazon FSx for Windows File
     * Server file system.</p>
     */
    inline void SetAuthorizationConfig(const FSxWindowsFileServerAuthorizationConfig& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = value; }

    /**
     * <p>The authorization configuration details for the Amazon FSx for Windows File
     * Server file system.</p>
     */
    inline void SetAuthorizationConfig(FSxWindowsFileServerAuthorizationConfig&& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = std::move(value); }

    /**
     * <p>The authorization configuration details for the Amazon FSx for Windows File
     * Server file system.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithAuthorizationConfig(const FSxWindowsFileServerAuthorizationConfig& value) { SetAuthorizationConfig(value); return *this;}

    /**
     * <p>The authorization configuration details for the Amazon FSx for Windows File
     * Server file system.</p>
     */
    inline FSxWindowsFileServerVolumeConfiguration& WithAuthorizationConfig(FSxWindowsFileServerAuthorizationConfig&& value) { SetAuthorizationConfig(std::move(value)); return *this;}

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

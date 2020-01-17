/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This parameter is specified when you are using an Amazon Elastic File System
   * (Amazon EFS) file storage. Amazon EFS file systems are only supported when you
   * are using the EC2 launch type.</p> <important> <p>
   * <code>EFSVolumeConfiguration</code> remains in preview and is a Beta Service as
   * defined by and subject to the Beta Service Participation Service Terms located
   * at <a
   * href="https://aws.amazon.com/service-terms">https://aws.amazon.com/service-terms</a>
   * ("Beta Terms"). These Beta Terms apply to your participation in this preview of
   * <code>EFSVolumeConfiguration</code>.</p> </important><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/EFSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API EFSVolumeConfiguration
  {
  public:
    EFSVolumeConfiguration();
    EFSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    EFSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * directory inside the host.</p>
     */
    inline const Aws::String& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline void SetRootDirectory(const Aws::String& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline void SetRootDirectory(Aws::String&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline void SetRootDirectory(const char* value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory.assign(value); }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline EFSVolumeConfiguration& WithRootDirectory(const Aws::String& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline EFSVolumeConfiguration& WithRootDirectory(Aws::String&& value) { SetRootDirectory(std::move(value)); return *this;}

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline EFSVolumeConfiguration& WithRootDirectory(const char* value) { SetRootDirectory(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet;

    Aws::String m_rootDirectory;
    bool m_rootDirectoryHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

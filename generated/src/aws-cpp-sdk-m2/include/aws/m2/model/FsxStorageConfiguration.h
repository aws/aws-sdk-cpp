/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Defines the storage configuration for an Amazon FSx file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/FsxStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class FsxStorageConfiguration
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API FsxStorageConfiguration() = default;
    AWS_MAINFRAMEMODERNIZATION_API FsxStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API FsxStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file system identifier.</p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    FsxStorageConfiguration& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount point for the file system.</p>
     */
    inline const Aws::String& GetMountPoint() const { return m_mountPoint; }
    inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }
    template<typename MountPointT = Aws::String>
    void SetMountPoint(MountPointT&& value) { m_mountPointHasBeenSet = true; m_mountPoint = std::forward<MountPointT>(value); }
    template<typename MountPointT = Aws::String>
    FsxStorageConfiguration& WithMountPoint(MountPointT&& value) { SetMountPoint(std::forward<MountPointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_mountPoint;
    bool m_mountPointHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

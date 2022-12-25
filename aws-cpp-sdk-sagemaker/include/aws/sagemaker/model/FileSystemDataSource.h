/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FileSystemAccessMode.h>
#include <aws/sagemaker/model/FileSystemType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies a file system data source for a channel.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FileSystemDataSource">AWS
   * API Reference</a></p>
   */
  class FileSystemDataSource
  {
  public:
    AWS_SAGEMAKER_API FileSystemDataSource();
    AWS_SAGEMAKER_API FileSystemDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FileSystemDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file system id.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The file system id.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The file system id.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The file system id.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The file system id.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The file system id.</p>
     */
    inline FileSystemDataSource& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The file system id.</p>
     */
    inline FileSystemDataSource& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The file system id.</p>
     */
    inline FileSystemDataSource& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The access mode of the mount of the directory associated with the channel. A
     * directory can be mounted either in <code>ro</code> (read-only) or
     * <code>rw</code> (read-write) mode.</p>
     */
    inline const FileSystemAccessMode& GetFileSystemAccessMode() const{ return m_fileSystemAccessMode; }

    /**
     * <p>The access mode of the mount of the directory associated with the channel. A
     * directory can be mounted either in <code>ro</code> (read-only) or
     * <code>rw</code> (read-write) mode.</p>
     */
    inline bool FileSystemAccessModeHasBeenSet() const { return m_fileSystemAccessModeHasBeenSet; }

    /**
     * <p>The access mode of the mount of the directory associated with the channel. A
     * directory can be mounted either in <code>ro</code> (read-only) or
     * <code>rw</code> (read-write) mode.</p>
     */
    inline void SetFileSystemAccessMode(const FileSystemAccessMode& value) { m_fileSystemAccessModeHasBeenSet = true; m_fileSystemAccessMode = value; }

    /**
     * <p>The access mode of the mount of the directory associated with the channel. A
     * directory can be mounted either in <code>ro</code> (read-only) or
     * <code>rw</code> (read-write) mode.</p>
     */
    inline void SetFileSystemAccessMode(FileSystemAccessMode&& value) { m_fileSystemAccessModeHasBeenSet = true; m_fileSystemAccessMode = std::move(value); }

    /**
     * <p>The access mode of the mount of the directory associated with the channel. A
     * directory can be mounted either in <code>ro</code> (read-only) or
     * <code>rw</code> (read-write) mode.</p>
     */
    inline FileSystemDataSource& WithFileSystemAccessMode(const FileSystemAccessMode& value) { SetFileSystemAccessMode(value); return *this;}

    /**
     * <p>The access mode of the mount of the directory associated with the channel. A
     * directory can be mounted either in <code>ro</code> (read-only) or
     * <code>rw</code> (read-write) mode.</p>
     */
    inline FileSystemDataSource& WithFileSystemAccessMode(FileSystemAccessMode&& value) { SetFileSystemAccessMode(std::move(value)); return *this;}


    /**
     * <p>The file system type. </p>
     */
    inline const FileSystemType& GetFileSystemType() const{ return m_fileSystemType; }

    /**
     * <p>The file system type. </p>
     */
    inline bool FileSystemTypeHasBeenSet() const { return m_fileSystemTypeHasBeenSet; }

    /**
     * <p>The file system type. </p>
     */
    inline void SetFileSystemType(const FileSystemType& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = value; }

    /**
     * <p>The file system type. </p>
     */
    inline void SetFileSystemType(FileSystemType&& value) { m_fileSystemTypeHasBeenSet = true; m_fileSystemType = std::move(value); }

    /**
     * <p>The file system type. </p>
     */
    inline FileSystemDataSource& WithFileSystemType(const FileSystemType& value) { SetFileSystemType(value); return *this;}

    /**
     * <p>The file system type. </p>
     */
    inline FileSystemDataSource& WithFileSystemType(FileSystemType&& value) { SetFileSystemType(std::move(value)); return *this;}


    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline const Aws::String& GetDirectoryPath() const{ return m_directoryPath; }

    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline bool DirectoryPathHasBeenSet() const { return m_directoryPathHasBeenSet; }

    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline void SetDirectoryPath(const Aws::String& value) { m_directoryPathHasBeenSet = true; m_directoryPath = value; }

    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline void SetDirectoryPath(Aws::String&& value) { m_directoryPathHasBeenSet = true; m_directoryPath = std::move(value); }

    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline void SetDirectoryPath(const char* value) { m_directoryPathHasBeenSet = true; m_directoryPath.assign(value); }

    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline FileSystemDataSource& WithDirectoryPath(const Aws::String& value) { SetDirectoryPath(value); return *this;}

    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline FileSystemDataSource& WithDirectoryPath(Aws::String&& value) { SetDirectoryPath(std::move(value)); return *this;}

    /**
     * <p>The full path to the directory to associate with the channel.</p>
     */
    inline FileSystemDataSource& WithDirectoryPath(const char* value) { SetDirectoryPath(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    FileSystemAccessMode m_fileSystemAccessMode;
    bool m_fileSystemAccessModeHasBeenSet = false;

    FileSystemType m_fileSystemType;
    bool m_fileSystemTypeHasBeenSet = false;

    Aws::String m_directoryPath;
    bool m_directoryPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

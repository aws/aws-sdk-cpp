/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/PathFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of the manifest that links a job's source
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ManifestProperties">AWS
   * API Reference</a></p>
   */
  class ManifestProperties
  {
  public:
    AWS_DEADLINE_API ManifestProperties();
    AWS_DEADLINE_API ManifestProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ManifestProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file system location name.</p>
     */
    inline const Aws::String& GetFileSystemLocationName() const{ return m_fileSystemLocationName; }
    inline bool FileSystemLocationNameHasBeenSet() const { return m_fileSystemLocationNameHasBeenSet; }
    inline void SetFileSystemLocationName(const Aws::String& value) { m_fileSystemLocationNameHasBeenSet = true; m_fileSystemLocationName = value; }
    inline void SetFileSystemLocationName(Aws::String&& value) { m_fileSystemLocationNameHasBeenSet = true; m_fileSystemLocationName = std::move(value); }
    inline void SetFileSystemLocationName(const char* value) { m_fileSystemLocationNameHasBeenSet = true; m_fileSystemLocationName.assign(value); }
    inline ManifestProperties& WithFileSystemLocationName(const Aws::String& value) { SetFileSystemLocationName(value); return *this;}
    inline ManifestProperties& WithFileSystemLocationName(Aws::String&& value) { SetFileSystemLocationName(std::move(value)); return *this;}
    inline ManifestProperties& WithFileSystemLocationName(const char* value) { SetFileSystemLocationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's root path.</p>
     */
    inline const Aws::String& GetRootPath() const{ return m_rootPath; }
    inline bool RootPathHasBeenSet() const { return m_rootPathHasBeenSet; }
    inline void SetRootPath(const Aws::String& value) { m_rootPathHasBeenSet = true; m_rootPath = value; }
    inline void SetRootPath(Aws::String&& value) { m_rootPathHasBeenSet = true; m_rootPath = std::move(value); }
    inline void SetRootPath(const char* value) { m_rootPathHasBeenSet = true; m_rootPath.assign(value); }
    inline ManifestProperties& WithRootPath(const Aws::String& value) { SetRootPath(value); return *this;}
    inline ManifestProperties& WithRootPath(Aws::String&& value) { SetRootPath(std::move(value)); return *this;}
    inline ManifestProperties& WithRootPath(const char* value) { SetRootPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the root path.</p>
     */
    inline const PathFormat& GetRootPathFormat() const{ return m_rootPathFormat; }
    inline bool RootPathFormatHasBeenSet() const { return m_rootPathFormatHasBeenSet; }
    inline void SetRootPathFormat(const PathFormat& value) { m_rootPathFormatHasBeenSet = true; m_rootPathFormat = value; }
    inline void SetRootPathFormat(PathFormat&& value) { m_rootPathFormatHasBeenSet = true; m_rootPathFormat = std::move(value); }
    inline ManifestProperties& WithRootPathFormat(const PathFormat& value) { SetRootPathFormat(value); return *this;}
    inline ManifestProperties& WithRootPathFormat(PathFormat&& value) { SetRootPathFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path relative to the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputRelativeDirectories() const{ return m_outputRelativeDirectories; }
    inline bool OutputRelativeDirectoriesHasBeenSet() const { return m_outputRelativeDirectoriesHasBeenSet; }
    inline void SetOutputRelativeDirectories(const Aws::Vector<Aws::String>& value) { m_outputRelativeDirectoriesHasBeenSet = true; m_outputRelativeDirectories = value; }
    inline void SetOutputRelativeDirectories(Aws::Vector<Aws::String>&& value) { m_outputRelativeDirectoriesHasBeenSet = true; m_outputRelativeDirectories = std::move(value); }
    inline ManifestProperties& WithOutputRelativeDirectories(const Aws::Vector<Aws::String>& value) { SetOutputRelativeDirectories(value); return *this;}
    inline ManifestProperties& WithOutputRelativeDirectories(Aws::Vector<Aws::String>&& value) { SetOutputRelativeDirectories(std::move(value)); return *this;}
    inline ManifestProperties& AddOutputRelativeDirectories(const Aws::String& value) { m_outputRelativeDirectoriesHasBeenSet = true; m_outputRelativeDirectories.push_back(value); return *this; }
    inline ManifestProperties& AddOutputRelativeDirectories(Aws::String&& value) { m_outputRelativeDirectoriesHasBeenSet = true; m_outputRelativeDirectories.push_back(std::move(value)); return *this; }
    inline ManifestProperties& AddOutputRelativeDirectories(const char* value) { m_outputRelativeDirectoriesHasBeenSet = true; m_outputRelativeDirectories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file path.</p>
     */
    inline const Aws::String& GetInputManifestPath() const{ return m_inputManifestPath; }
    inline bool InputManifestPathHasBeenSet() const { return m_inputManifestPathHasBeenSet; }
    inline void SetInputManifestPath(const Aws::String& value) { m_inputManifestPathHasBeenSet = true; m_inputManifestPath = value; }
    inline void SetInputManifestPath(Aws::String&& value) { m_inputManifestPathHasBeenSet = true; m_inputManifestPath = std::move(value); }
    inline void SetInputManifestPath(const char* value) { m_inputManifestPathHasBeenSet = true; m_inputManifestPath.assign(value); }
    inline ManifestProperties& WithInputManifestPath(const Aws::String& value) { SetInputManifestPath(value); return *this;}
    inline ManifestProperties& WithInputManifestPath(Aws::String&& value) { SetInputManifestPath(std::move(value)); return *this;}
    inline ManifestProperties& WithInputManifestPath(const char* value) { SetInputManifestPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The has value of the file.</p>
     */
    inline const Aws::String& GetInputManifestHash() const{ return m_inputManifestHash; }
    inline bool InputManifestHashHasBeenSet() const { return m_inputManifestHashHasBeenSet; }
    inline void SetInputManifestHash(const Aws::String& value) { m_inputManifestHashHasBeenSet = true; m_inputManifestHash = value; }
    inline void SetInputManifestHash(Aws::String&& value) { m_inputManifestHashHasBeenSet = true; m_inputManifestHash = std::move(value); }
    inline void SetInputManifestHash(const char* value) { m_inputManifestHashHasBeenSet = true; m_inputManifestHash.assign(value); }
    inline ManifestProperties& WithInputManifestHash(const Aws::String& value) { SetInputManifestHash(value); return *this;}
    inline ManifestProperties& WithInputManifestHash(Aws::String&& value) { SetInputManifestHash(std::move(value)); return *this;}
    inline ManifestProperties& WithInputManifestHash(const char* value) { SetInputManifestHash(value); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemLocationName;
    bool m_fileSystemLocationNameHasBeenSet = false;

    Aws::String m_rootPath;
    bool m_rootPathHasBeenSet = false;

    PathFormat m_rootPathFormat;
    bool m_rootPathFormatHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputRelativeDirectories;
    bool m_outputRelativeDirectoriesHasBeenSet = false;

    Aws::String m_inputManifestPath;
    bool m_inputManifestPathHasBeenSet = false;

    Aws::String m_inputManifestHash;
    bool m_inputManifestHashHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws

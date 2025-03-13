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
    AWS_DEADLINE_API ManifestProperties() = default;
    AWS_DEADLINE_API ManifestProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ManifestProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file system location name.</p>
     */
    inline const Aws::String& GetFileSystemLocationName() const { return m_fileSystemLocationName; }
    inline bool FileSystemLocationNameHasBeenSet() const { return m_fileSystemLocationNameHasBeenSet; }
    template<typename FileSystemLocationNameT = Aws::String>
    void SetFileSystemLocationName(FileSystemLocationNameT&& value) { m_fileSystemLocationNameHasBeenSet = true; m_fileSystemLocationName = std::forward<FileSystemLocationNameT>(value); }
    template<typename FileSystemLocationNameT = Aws::String>
    ManifestProperties& WithFileSystemLocationName(FileSystemLocationNameT&& value) { SetFileSystemLocationName(std::forward<FileSystemLocationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file's root path.</p>
     */
    inline const Aws::String& GetRootPath() const { return m_rootPath; }
    inline bool RootPathHasBeenSet() const { return m_rootPathHasBeenSet; }
    template<typename RootPathT = Aws::String>
    void SetRootPath(RootPathT&& value) { m_rootPathHasBeenSet = true; m_rootPath = std::forward<RootPathT>(value); }
    template<typename RootPathT = Aws::String>
    ManifestProperties& WithRootPath(RootPathT&& value) { SetRootPath(std::forward<RootPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the root path.</p>
     */
    inline PathFormat GetRootPathFormat() const { return m_rootPathFormat; }
    inline bool RootPathFormatHasBeenSet() const { return m_rootPathFormatHasBeenSet; }
    inline void SetRootPathFormat(PathFormat value) { m_rootPathFormatHasBeenSet = true; m_rootPathFormat = value; }
    inline ManifestProperties& WithRootPathFormat(PathFormat value) { SetRootPathFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file path relative to the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputRelativeDirectories() const { return m_outputRelativeDirectories; }
    inline bool OutputRelativeDirectoriesHasBeenSet() const { return m_outputRelativeDirectoriesHasBeenSet; }
    template<typename OutputRelativeDirectoriesT = Aws::Vector<Aws::String>>
    void SetOutputRelativeDirectories(OutputRelativeDirectoriesT&& value) { m_outputRelativeDirectoriesHasBeenSet = true; m_outputRelativeDirectories = std::forward<OutputRelativeDirectoriesT>(value); }
    template<typename OutputRelativeDirectoriesT = Aws::Vector<Aws::String>>
    ManifestProperties& WithOutputRelativeDirectories(OutputRelativeDirectoriesT&& value) { SetOutputRelativeDirectories(std::forward<OutputRelativeDirectoriesT>(value)); return *this;}
    template<typename OutputRelativeDirectoriesT = Aws::String>
    ManifestProperties& AddOutputRelativeDirectories(OutputRelativeDirectoriesT&& value) { m_outputRelativeDirectoriesHasBeenSet = true; m_outputRelativeDirectories.emplace_back(std::forward<OutputRelativeDirectoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file path.</p>
     */
    inline const Aws::String& GetInputManifestPath() const { return m_inputManifestPath; }
    inline bool InputManifestPathHasBeenSet() const { return m_inputManifestPathHasBeenSet; }
    template<typename InputManifestPathT = Aws::String>
    void SetInputManifestPath(InputManifestPathT&& value) { m_inputManifestPathHasBeenSet = true; m_inputManifestPath = std::forward<InputManifestPathT>(value); }
    template<typename InputManifestPathT = Aws::String>
    ManifestProperties& WithInputManifestPath(InputManifestPathT&& value) { SetInputManifestPath(std::forward<InputManifestPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value of the file.</p>
     */
    inline const Aws::String& GetInputManifestHash() const { return m_inputManifestHash; }
    inline bool InputManifestHashHasBeenSet() const { return m_inputManifestHashHasBeenSet; }
    template<typename InputManifestHashT = Aws::String>
    void SetInputManifestHash(InputManifestHashT&& value) { m_inputManifestHashHasBeenSet = true; m_inputManifestHash = std::forward<InputManifestHashT>(value); }
    template<typename InputManifestHashT = Aws::String>
    ManifestProperties& WithInputManifestHash(InputManifestHashT&& value) { SetInputManifestHash(std::forward<InputManifestHashT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemLocationName;
    bool m_fileSystemLocationNameHasBeenSet = false;

    Aws::String m_rootPath;
    bool m_rootPathHasBeenSet = false;

    PathFormat m_rootPathFormat{PathFormat::NOT_SET};
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

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
   * <p>A file containing a batch job definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/FileBatchJobDefinition">AWS
   * API Reference</a></p>
   */
  class FileBatchJobDefinition
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API FileBatchJobDefinition() = default;
    AWS_MAINFRAMEMODERNIZATION_API FileBatchJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API FileBatchJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the file containing the batch job definition.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    FileBatchJobDefinition& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the file containing the batch job definition.</p>
     */
    inline const Aws::String& GetFolderPath() const { return m_folderPath; }
    inline bool FolderPathHasBeenSet() const { return m_folderPathHasBeenSet; }
    template<typename FolderPathT = Aws::String>
    void SetFolderPath(FolderPathT&& value) { m_folderPathHasBeenSet = true; m_folderPath = std::forward<FolderPathT>(value); }
    template<typename FolderPathT = Aws::String>
    FileBatchJobDefinition& WithFolderPath(FolderPathT&& value) { SetFolderPath(std::forward<FolderPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_folderPath;
    bool m_folderPathHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws

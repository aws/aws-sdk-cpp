/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/FileMetadata.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the input file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/InputFile">AWS
   * API Reference</a></p>
   */
  class InputFile
  {
  public:
    AWS_APPTEST_API InputFile() = default;
    AWS_APPTEST_API InputFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API InputFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source location of the input file.</p>
     */
    inline const Aws::String& GetSourceLocation() const { return m_sourceLocation; }
    inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
    template<typename SourceLocationT = Aws::String>
    void SetSourceLocation(SourceLocationT&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = std::forward<SourceLocationT>(value); }
    template<typename SourceLocationT = Aws::String>
    InputFile& WithSourceLocation(SourceLocationT&& value) { SetSourceLocation(std::forward<SourceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target location of the input file.</p>
     */
    inline const Aws::String& GetTargetLocation() const { return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    template<typename TargetLocationT = Aws::String>
    void SetTargetLocation(TargetLocationT&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::forward<TargetLocationT>(value); }
    template<typename TargetLocationT = Aws::String>
    InputFile& WithTargetLocation(TargetLocationT&& value) { SetTargetLocation(std::forward<TargetLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file metadata of the input file.</p>
     */
    inline const FileMetadata& GetFileMetadata() const { return m_fileMetadata; }
    inline bool FileMetadataHasBeenSet() const { return m_fileMetadataHasBeenSet; }
    template<typename FileMetadataT = FileMetadata>
    void SetFileMetadata(FileMetadataT&& value) { m_fileMetadataHasBeenSet = true; m_fileMetadata = std::forward<FileMetadataT>(value); }
    template<typename FileMetadataT = FileMetadata>
    InputFile& WithFileMetadata(FileMetadataT&& value) { SetFileMetadata(std::forward<FileMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceLocation;
    bool m_sourceLocationHasBeenSet = false;

    Aws::String m_targetLocation;
    bool m_targetLocationHasBeenSet = false;

    FileMetadata m_fileMetadata;
    bool m_fileMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws

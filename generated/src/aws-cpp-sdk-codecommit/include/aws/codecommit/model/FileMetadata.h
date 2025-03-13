/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/FileModeTypeEnum.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>A file to be added, updated, or deleted as part of a commit.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/FileMetadata">AWS
   * API Reference</a></p>
   */
  class FileMetadata
  {
  public:
    AWS_CODECOMMIT_API FileMetadata() = default;
    AWS_CODECOMMIT_API FileMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API FileMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full path to the file to be added or updated, including the name of the
     * file.</p>
     */
    inline const Aws::String& GetAbsolutePath() const { return m_absolutePath; }
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }
    template<typename AbsolutePathT = Aws::String>
    void SetAbsolutePath(AbsolutePathT&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::forward<AbsolutePathT>(value); }
    template<typename AbsolutePathT = Aws::String>
    FileMetadata& WithAbsolutePath(AbsolutePathT&& value) { SetAbsolutePath(std::forward<AbsolutePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blob ID that contains the file information.</p>
     */
    inline const Aws::String& GetBlobId() const { return m_blobId; }
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }
    template<typename BlobIdT = Aws::String>
    void SetBlobId(BlobIdT&& value) { m_blobIdHasBeenSet = true; m_blobId = std::forward<BlobIdT>(value); }
    template<typename BlobIdT = Aws::String>
    FileMetadata& WithBlobId(BlobIdT&& value) { SetBlobId(std::forward<BlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The extrapolated file mode permissions for the file. Valid values include
     * EXECUTABLE and NORMAL.</p>
     */
    inline FileModeTypeEnum GetFileMode() const { return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(FileModeTypeEnum value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline FileMetadata& WithFileMode(FileModeTypeEnum value) { SetFileMode(value); return *this;}
    ///@}
  private:

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    FileModeTypeEnum m_fileMode{FileModeTypeEnum::NOT_SET};
    bool m_fileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

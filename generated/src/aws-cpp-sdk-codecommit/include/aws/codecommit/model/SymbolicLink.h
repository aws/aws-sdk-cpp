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
   * <p>Returns information about a symbolic link in a repository
   * folder.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/SymbolicLink">AWS
   * API Reference</a></p>
   */
  class SymbolicLink
  {
  public:
    AWS_CODECOMMIT_API SymbolicLink() = default;
    AWS_CODECOMMIT_API SymbolicLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API SymbolicLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blob ID that contains the information about the symbolic link.</p>
     */
    inline const Aws::String& GetBlobId() const { return m_blobId; }
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }
    template<typename BlobIdT = Aws::String>
    void SetBlobId(BlobIdT&& value) { m_blobIdHasBeenSet = true; m_blobId = std::forward<BlobIdT>(value); }
    template<typename BlobIdT = Aws::String>
    SymbolicLink& WithBlobId(BlobIdT&& value) { SetBlobId(std::forward<BlobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the folder that contains the symbolic link.</p>
     */
    inline const Aws::String& GetAbsolutePath() const { return m_absolutePath; }
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }
    template<typename AbsolutePathT = Aws::String>
    void SetAbsolutePath(AbsolutePathT&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::forward<AbsolutePathT>(value); }
    template<typename AbsolutePathT = Aws::String>
    SymbolicLink& WithAbsolutePath(AbsolutePathT&& value) { SetAbsolutePath(std::forward<AbsolutePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path of the symbolic link from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const { return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    template<typename RelativePathT = Aws::String>
    void SetRelativePath(RelativePathT&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::forward<RelativePathT>(value); }
    template<typename RelativePathT = Aws::String>
    SymbolicLink& WithRelativePath(RelativePathT&& value) { SetRelativePath(std::forward<RelativePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode permissions of the blob that cotains information about the
     * symbolic link.</p>
     */
    inline FileModeTypeEnum GetFileMode() const { return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(FileModeTypeEnum value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline SymbolicLink& WithFileMode(FileModeTypeEnum value) { SetFileMode(value); return *this;}
    ///@}
  private:

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;

    FileModeTypeEnum m_fileMode{FileModeTypeEnum::NOT_SET};
    bool m_fileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

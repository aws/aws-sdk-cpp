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
    AWS_CODECOMMIT_API SymbolicLink();
    AWS_CODECOMMIT_API SymbolicLink(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API SymbolicLink& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blob ID that contains the information about the symbolic link.</p>
     */
    inline const Aws::String& GetBlobId() const{ return m_blobId; }
    inline bool BlobIdHasBeenSet() const { return m_blobIdHasBeenSet; }
    inline void SetBlobId(const Aws::String& value) { m_blobIdHasBeenSet = true; m_blobId = value; }
    inline void SetBlobId(Aws::String&& value) { m_blobIdHasBeenSet = true; m_blobId = std::move(value); }
    inline void SetBlobId(const char* value) { m_blobIdHasBeenSet = true; m_blobId.assign(value); }
    inline SymbolicLink& WithBlobId(const Aws::String& value) { SetBlobId(value); return *this;}
    inline SymbolicLink& WithBlobId(Aws::String&& value) { SetBlobId(std::move(value)); return *this;}
    inline SymbolicLink& WithBlobId(const char* value) { SetBlobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified path to the folder that contains the symbolic link.</p>
     */
    inline const Aws::String& GetAbsolutePath() const{ return m_absolutePath; }
    inline bool AbsolutePathHasBeenSet() const { return m_absolutePathHasBeenSet; }
    inline void SetAbsolutePath(const Aws::String& value) { m_absolutePathHasBeenSet = true; m_absolutePath = value; }
    inline void SetAbsolutePath(Aws::String&& value) { m_absolutePathHasBeenSet = true; m_absolutePath = std::move(value); }
    inline void SetAbsolutePath(const char* value) { m_absolutePathHasBeenSet = true; m_absolutePath.assign(value); }
    inline SymbolicLink& WithAbsolutePath(const Aws::String& value) { SetAbsolutePath(value); return *this;}
    inline SymbolicLink& WithAbsolutePath(Aws::String&& value) { SetAbsolutePath(std::move(value)); return *this;}
    inline SymbolicLink& WithAbsolutePath(const char* value) { SetAbsolutePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path of the symbolic link from the folder where the query
     * originated.</p>
     */
    inline const Aws::String& GetRelativePath() const{ return m_relativePath; }
    inline bool RelativePathHasBeenSet() const { return m_relativePathHasBeenSet; }
    inline void SetRelativePath(const Aws::String& value) { m_relativePathHasBeenSet = true; m_relativePath = value; }
    inline void SetRelativePath(Aws::String&& value) { m_relativePathHasBeenSet = true; m_relativePath = std::move(value); }
    inline void SetRelativePath(const char* value) { m_relativePathHasBeenSet = true; m_relativePath.assign(value); }
    inline SymbolicLink& WithRelativePath(const Aws::String& value) { SetRelativePath(value); return *this;}
    inline SymbolicLink& WithRelativePath(Aws::String&& value) { SetRelativePath(std::move(value)); return *this;}
    inline SymbolicLink& WithRelativePath(const char* value) { SetRelativePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file mode permissions of the blob that cotains information about the
     * symbolic link.</p>
     */
    inline const FileModeTypeEnum& GetFileMode() const{ return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    inline void SetFileMode(const FileModeTypeEnum& value) { m_fileModeHasBeenSet = true; m_fileMode = value; }
    inline void SetFileMode(FileModeTypeEnum&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::move(value); }
    inline SymbolicLink& WithFileMode(const FileModeTypeEnum& value) { SetFileMode(value); return *this;}
    inline SymbolicLink& WithFileMode(FileModeTypeEnum&& value) { SetFileMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_blobId;
    bool m_blobIdHasBeenSet = false;

    Aws::String m_absolutePath;
    bool m_absolutePathHasBeenSet = false;

    Aws::String m_relativePath;
    bool m_relativePathHasBeenSet = false;

    FileModeTypeEnum m_fileMode;
    bool m_fileModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

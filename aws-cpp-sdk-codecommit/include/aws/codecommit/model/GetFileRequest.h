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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API GetFileRequest : public CodeCommitRequest
  {
  public:
    GetFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline GetFileRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline GetFileRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the file.</p>
     */
    inline GetFileRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline const Aws::String& GetCommitSpecifier() const{ return m_commitSpecifier; }

    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline bool CommitSpecifierHasBeenSet() const { return m_commitSpecifierHasBeenSet; }

    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline void SetCommitSpecifier(const Aws::String& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = value; }

    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline void SetCommitSpecifier(Aws::String&& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = std::move(value); }

    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline void SetCommitSpecifier(const char* value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier.assign(value); }

    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline GetFileRequest& WithCommitSpecifier(const Aws::String& value) { SetCommitSpecifier(value); return *this;}

    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline GetFileRequest& WithCommitSpecifier(Aws::String&& value) { SetCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The fully-quaified reference that identifies the commit that contains the
     * file. For example, you could specify a full commit ID, a tag, a branch name, or
     * a reference such as refs/heads/master. If none is provided, then the head commit
     * will be used.</p>
     */
    inline GetFileRequest& WithCommitSpecifier(const char* value) { SetCommitSpecifier(value); return *this;}


    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline GetFileRequest& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline GetFileRequest& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified path to the file, including the full name and extension
     * of the file. For example, /examples/file.md is the fully-qualified path to a
     * file named file.md in a folder named examples.</p>
     */
    inline GetFileRequest& WithFilePath(const char* value) { SetFilePath(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_commitSpecifier;
    bool m_commitSpecifierHasBeenSet;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

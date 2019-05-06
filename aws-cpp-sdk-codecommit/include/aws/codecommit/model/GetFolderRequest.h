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
  class AWS_CODECOMMIT_API GetFolderRequest : public CodeCommitRequest
  {
  public:
    GetFolderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFolder"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline GetFolderRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline GetFolderRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline GetFolderRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline const Aws::String& GetCommitSpecifier() const{ return m_commitSpecifier; }

    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline bool CommitSpecifierHasBeenSet() const { return m_commitSpecifierHasBeenSet; }

    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline void SetCommitSpecifier(const Aws::String& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = value; }

    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline void SetCommitSpecifier(Aws::String&& value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier = std::move(value); }

    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline void SetCommitSpecifier(const char* value) { m_commitSpecifierHasBeenSet = true; m_commitSpecifier.assign(value); }

    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline GetFolderRequest& WithCommitSpecifier(const Aws::String& value) { SetCommitSpecifier(value); return *this;}

    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline GetFolderRequest& WithCommitSpecifier(Aws::String&& value) { SetCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>A fully-qualified reference used to identify a commit that contains the
     * version of the folder's content to return. A fully-qualified reference can be a
     * commit ID, branch name, tag, or reference such as HEAD. If no specifier is
     * provided, the folder content will be returned as it exists in the HEAD
     * commit.</p>
     */
    inline GetFolderRequest& WithCommitSpecifier(const char* value) { SetCommitSpecifier(value); return *this;}


    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline const Aws::String& GetFolderPath() const{ return m_folderPath; }

    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline bool FolderPathHasBeenSet() const { return m_folderPathHasBeenSet; }

    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline void SetFolderPath(const Aws::String& value) { m_folderPathHasBeenSet = true; m_folderPath = value; }

    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline void SetFolderPath(Aws::String&& value) { m_folderPathHasBeenSet = true; m_folderPath = std::move(value); }

    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline void SetFolderPath(const char* value) { m_folderPathHasBeenSet = true; m_folderPath.assign(value); }

    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline GetFolderRequest& WithFolderPath(const Aws::String& value) { SetFolderPath(value); return *this;}

    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline GetFolderRequest& WithFolderPath(Aws::String&& value) { SetFolderPath(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified path to the folder whose contents will be returned,
     * including the folder name. For example, /examples is a fully-qualified path to a
     * folder named examples that was created off of the root directory (/) of a
     * repository. </p>
     */
    inline GetFolderRequest& WithFolderPath(const char* value) { SetFolderPath(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_commitSpecifier;
    bool m_commitSpecifierHasBeenSet;

    Aws::String m_folderPath;
    bool m_folderPathHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

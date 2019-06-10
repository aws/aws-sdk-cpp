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
  class AWS_CODECOMMIT_API MergeBranchesByFastForwardRequest : public CodeCommitRequest
  {
  public:
    MergeBranchesByFastForwardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergeBranchesByFastForward"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline const Aws::String& GetSourceCommitSpecifier() const{ return m_sourceCommitSpecifier; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline bool SourceCommitSpecifierHasBeenSet() const { return m_sourceCommitSpecifierHasBeenSet; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetSourceCommitSpecifier(const Aws::String& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = value; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetSourceCommitSpecifier(Aws::String&& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = std::move(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetSourceCommitSpecifier(const char* value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier.assign(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithSourceCommitSpecifier(const Aws::String& value) { SetSourceCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithSourceCommitSpecifier(Aws::String&& value) { SetSourceCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithSourceCommitSpecifier(const char* value) { SetSourceCommitSpecifier(value); return *this;}


    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline const Aws::String& GetDestinationCommitSpecifier() const{ return m_destinationCommitSpecifier; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline bool DestinationCommitSpecifierHasBeenSet() const { return m_destinationCommitSpecifierHasBeenSet; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetDestinationCommitSpecifier(const Aws::String& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = value; }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetDestinationCommitSpecifier(Aws::String&& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = std::move(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline void SetDestinationCommitSpecifier(const char* value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier.assign(value); }

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithDestinationCommitSpecifier(const Aws::String& value) { SetDestinationCommitSpecifier(value); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithDestinationCommitSpecifier(Aws::String&& value) { SetDestinationCommitSpecifier(std::move(value)); return *this;}

    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit. For example, a branch name or a full commit ID.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithDestinationCommitSpecifier(const char* value) { SetDestinationCommitSpecifier(value); return *this;}


    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline const Aws::String& GetTargetBranch() const{ return m_targetBranch; }

    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline bool TargetBranchHasBeenSet() const { return m_targetBranchHasBeenSet; }

    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline void SetTargetBranch(const Aws::String& value) { m_targetBranchHasBeenSet = true; m_targetBranch = value; }

    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline void SetTargetBranch(Aws::String&& value) { m_targetBranchHasBeenSet = true; m_targetBranch = std::move(value); }

    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline void SetTargetBranch(const char* value) { m_targetBranchHasBeenSet = true; m_targetBranch.assign(value); }

    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithTargetBranch(const Aws::String& value) { SetTargetBranch(value); return *this;}

    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithTargetBranch(Aws::String&& value) { SetTargetBranch(std::move(value)); return *this;}

    /**
     * <p>The branch where the merge will be applied.</p>
     */
    inline MergeBranchesByFastForwardRequest& WithTargetBranch(const char* value) { SetTargetBranch(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet;

    Aws::String m_targetBranch;
    bool m_targetBranchHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

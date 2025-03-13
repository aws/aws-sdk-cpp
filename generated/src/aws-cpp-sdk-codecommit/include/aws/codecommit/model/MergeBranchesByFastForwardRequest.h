/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class MergeBranchesByFastForwardRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API MergeBranchesByFastForwardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MergeBranchesByFastForward"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository where you want to merge two branches.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    MergeBranchesByFastForwardRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, a branch name or a full commit ID).</p>
     */
    inline const Aws::String& GetSourceCommitSpecifier() const { return m_sourceCommitSpecifier; }
    inline bool SourceCommitSpecifierHasBeenSet() const { return m_sourceCommitSpecifierHasBeenSet; }
    template<typename SourceCommitSpecifierT = Aws::String>
    void SetSourceCommitSpecifier(SourceCommitSpecifierT&& value) { m_sourceCommitSpecifierHasBeenSet = true; m_sourceCommitSpecifier = std::forward<SourceCommitSpecifierT>(value); }
    template<typename SourceCommitSpecifierT = Aws::String>
    MergeBranchesByFastForwardRequest& WithSourceCommitSpecifier(SourceCommitSpecifierT&& value) { SetSourceCommitSpecifier(std::forward<SourceCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch, tag, HEAD, or other fully qualified reference used to identify a
     * commit (for example, a branch name or a full commit ID).</p>
     */
    inline const Aws::String& GetDestinationCommitSpecifier() const { return m_destinationCommitSpecifier; }
    inline bool DestinationCommitSpecifierHasBeenSet() const { return m_destinationCommitSpecifierHasBeenSet; }
    template<typename DestinationCommitSpecifierT = Aws::String>
    void SetDestinationCommitSpecifier(DestinationCommitSpecifierT&& value) { m_destinationCommitSpecifierHasBeenSet = true; m_destinationCommitSpecifier = std::forward<DestinationCommitSpecifierT>(value); }
    template<typename DestinationCommitSpecifierT = Aws::String>
    MergeBranchesByFastForwardRequest& WithDestinationCommitSpecifier(DestinationCommitSpecifierT&& value) { SetDestinationCommitSpecifier(std::forward<DestinationCommitSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch where the merge is applied.</p>
     */
    inline const Aws::String& GetTargetBranch() const { return m_targetBranch; }
    inline bool TargetBranchHasBeenSet() const { return m_targetBranchHasBeenSet; }
    template<typename TargetBranchT = Aws::String>
    void SetTargetBranch(TargetBranchT&& value) { m_targetBranchHasBeenSet = true; m_targetBranch = std::forward<TargetBranchT>(value); }
    template<typename TargetBranchT = Aws::String>
    MergeBranchesByFastForwardRequest& WithTargetBranch(TargetBranchT&& value) { SetTargetBranch(std::forward<TargetBranchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceCommitSpecifier;
    bool m_sourceCommitSpecifierHasBeenSet = false;

    Aws::String m_destinationCommitSpecifier;
    bool m_destinationCommitSpecifierHasBeenSet = false;

    Aws::String m_targetBranch;
    bool m_targetBranchHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

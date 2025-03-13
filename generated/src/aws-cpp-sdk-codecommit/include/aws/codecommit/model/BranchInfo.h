/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a branch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BranchInfo">AWS
   * API Reference</a></p>
   */
  class BranchInfo
  {
  public:
    AWS_CODECOMMIT_API BranchInfo() = default;
    AWS_CODECOMMIT_API BranchInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BranchInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the branch.</p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    BranchInfo& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    BranchInfo& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

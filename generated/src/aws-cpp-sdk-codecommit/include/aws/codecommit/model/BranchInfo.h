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
    AWS_CODECOMMIT_API BranchInfo();
    AWS_CODECOMMIT_API BranchInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API BranchInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the branch.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline BranchInfo& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline BranchInfo& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline BranchInfo& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last commit made to the branch.</p>
     */
    inline const Aws::String& GetCommitId() const{ return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    inline void SetCommitId(const Aws::String& value) { m_commitIdHasBeenSet = true; m_commitId = value; }
    inline void SetCommitId(Aws::String&& value) { m_commitIdHasBeenSet = true; m_commitId = std::move(value); }
    inline void SetCommitId(const char* value) { m_commitIdHasBeenSet = true; m_commitId.assign(value); }
    inline BranchInfo& WithCommitId(const Aws::String& value) { SetCommitId(value); return *this;}
    inline BranchInfo& WithCommitId(Aws::String&& value) { SetCommitId(std::move(value)); return *this;}
    inline BranchInfo& WithCommitId(const char* value) { SetCommitId(value); return *this;}
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

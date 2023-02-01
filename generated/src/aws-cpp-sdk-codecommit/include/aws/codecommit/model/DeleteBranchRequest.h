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
   * <p>Represents the input of a delete branch operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteBranchInput">AWS
   * API Reference</a></p>
   */
  class DeleteBranchRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API DeleteBranchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBranch"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline DeleteBranchRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline DeleteBranchRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the branch to be deleted.</p>
     */
    inline DeleteBranchRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the branch to delete.</p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }

    /**
     * <p>The name of the branch to delete.</p>
     */
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }

    /**
     * <p>The name of the branch to delete.</p>
     */
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }

    /**
     * <p>The name of the branch to delete.</p>
     */
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }

    /**
     * <p>The name of the branch to delete.</p>
     */
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }

    /**
     * <p>The name of the branch to delete.</p>
     */
    inline DeleteBranchRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}

    /**
     * <p>The name of the branch to delete.</p>
     */
    inline DeleteBranchRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch to delete.</p>
     */
    inline DeleteBranchRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

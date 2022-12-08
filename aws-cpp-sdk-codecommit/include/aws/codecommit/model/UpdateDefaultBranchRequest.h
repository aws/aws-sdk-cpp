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
   * <p>Represents the input of an update default branch operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranchInput">AWS
   * API Reference</a></p>
   */
  class UpdateDefaultBranchRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateDefaultBranchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDefaultBranch"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline UpdateDefaultBranchRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline UpdateDefaultBranchRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to set or change the default branch for.</p>
     */
    inline UpdateDefaultBranchRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline const Aws::String& GetDefaultBranchName() const{ return m_defaultBranchName; }

    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline bool DefaultBranchNameHasBeenSet() const { return m_defaultBranchNameHasBeenSet; }

    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline void SetDefaultBranchName(const Aws::String& value) { m_defaultBranchNameHasBeenSet = true; m_defaultBranchName = value; }

    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline void SetDefaultBranchName(Aws::String&& value) { m_defaultBranchNameHasBeenSet = true; m_defaultBranchName = std::move(value); }

    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline void SetDefaultBranchName(const char* value) { m_defaultBranchNameHasBeenSet = true; m_defaultBranchName.assign(value); }

    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline UpdateDefaultBranchRequest& WithDefaultBranchName(const Aws::String& value) { SetDefaultBranchName(value); return *this;}

    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline UpdateDefaultBranchRequest& WithDefaultBranchName(Aws::String&& value) { SetDefaultBranchName(std::move(value)); return *this;}

    /**
     * <p>The name of the branch to set as the default.</p>
     */
    inline UpdateDefaultBranchRequest& WithDefaultBranchName(const char* value) { SetDefaultBranchName(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_defaultBranchName;
    bool m_defaultBranchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

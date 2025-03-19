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
    AWS_CODECOMMIT_API UpdateDefaultBranchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDefaultBranch"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the repository for which you want to set or change the default
     * branch.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    UpdateDefaultBranchRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch to set as the default branch.</p>
     */
    inline const Aws::String& GetDefaultBranchName() const { return m_defaultBranchName; }
    inline bool DefaultBranchNameHasBeenSet() const { return m_defaultBranchNameHasBeenSet; }
    template<typename DefaultBranchNameT = Aws::String>
    void SetDefaultBranchName(DefaultBranchNameT&& value) { m_defaultBranchNameHasBeenSet = true; m_defaultBranchName = std::forward<DefaultBranchNameT>(value); }
    template<typename DefaultBranchNameT = Aws::String>
    UpdateDefaultBranchRequest& WithDefaultBranchName(DefaultBranchNameT&& value) { SetDefaultBranchName(std::forward<DefaultBranchNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_defaultBranchName;
    bool m_defaultBranchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws

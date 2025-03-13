/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the location of application artifacts stored in
   * GitHub.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GitHubLocation">AWS
   * API Reference</a></p>
   */
  class GitHubLocation
  {
  public:
    AWS_CODEDEPLOY_API GitHubLocation() = default;
    AWS_CODEDEPLOY_API GitHubLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API GitHubLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The GitHub account and repository pair that stores a reference to the commit
     * that represents the bundled artifacts for the application revision. </p>
     * <p>Specified as account/repository.</p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    GitHubLocation& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA1 commit ID of the GitHub commit that represents the bundled artifacts
     * for the application revision.</p>
     */
    inline const Aws::String& GetCommitId() const { return m_commitId; }
    inline bool CommitIdHasBeenSet() const { return m_commitIdHasBeenSet; }
    template<typename CommitIdT = Aws::String>
    void SetCommitId(CommitIdT&& value) { m_commitIdHasBeenSet = true; m_commitId = std::forward<CommitIdT>(value); }
    template<typename CommitIdT = Aws::String>
    GitHubLocation& WithCommitId(CommitIdT&& value) { SetCommitId(std::forward<CommitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_commitId;
    bool m_commitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/UpdateGitLabSelfManagedIntegrationDetail.h>
#include <aws/inspector2/model/UpdateGitHubIntegrationDetail.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains details required to update a code security integration with a
   * specific repository provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/UpdateIntegrationDetails">AWS
   * API Reference</a></p>
   */
  class UpdateIntegrationDetails
  {
  public:
    AWS_INSPECTOR2_API UpdateIntegrationDetails() = default;
    AWS_INSPECTOR2_API UpdateIntegrationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API UpdateIntegrationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details specific to updating an integration with a self-managed GitLab
     * instance.</p>
     */
    inline const UpdateGitLabSelfManagedIntegrationDetail& GetGitlabSelfManaged() const { return m_gitlabSelfManaged; }
    inline bool GitlabSelfManagedHasBeenSet() const { return m_gitlabSelfManagedHasBeenSet; }
    template<typename GitlabSelfManagedT = UpdateGitLabSelfManagedIntegrationDetail>
    void SetGitlabSelfManaged(GitlabSelfManagedT&& value) { m_gitlabSelfManagedHasBeenSet = true; m_gitlabSelfManaged = std::forward<GitlabSelfManagedT>(value); }
    template<typename GitlabSelfManagedT = UpdateGitLabSelfManagedIntegrationDetail>
    UpdateIntegrationDetails& WithGitlabSelfManaged(GitlabSelfManagedT&& value) { SetGitlabSelfManaged(std::forward<GitlabSelfManagedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details specific to updating an integration with GitHub.</p>
     */
    inline const UpdateGitHubIntegrationDetail& GetGithub() const { return m_github; }
    inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
    template<typename GithubT = UpdateGitHubIntegrationDetail>
    void SetGithub(GithubT&& value) { m_githubHasBeenSet = true; m_github = std::forward<GithubT>(value); }
    template<typename GithubT = UpdateGitHubIntegrationDetail>
    UpdateIntegrationDetails& WithGithub(GithubT&& value) { SetGithub(std::forward<GithubT>(value)); return *this;}
    ///@}
  private:

    UpdateGitLabSelfManagedIntegrationDetail m_gitlabSelfManaged;
    bool m_gitlabSelfManagedHasBeenSet = false;

    UpdateGitHubIntegrationDetail m_github;
    bool m_githubHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

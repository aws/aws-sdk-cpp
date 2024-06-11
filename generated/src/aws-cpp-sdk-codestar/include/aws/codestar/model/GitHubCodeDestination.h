/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>Information about the GitHub repository to be created in AWS CodeStar. This
   * is where the source code files provided with the project request will be
   * uploaded after project creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/GitHubCodeDestination">AWS
   * API Reference</a></p>
   */
  class GitHubCodeDestination
  {
  public:
    AWS_CODESTAR_API GitHubCodeDestination();
    AWS_CODESTAR_API GitHubCodeDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API GitHubCodeDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GitHubCodeDestination& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GitHubCodeDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GitHubCodeDestination& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline GitHubCodeDestination& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GitHubCodeDestination& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GitHubCodeDestination& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline GitHubCodeDestination& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline GitHubCodeDestination& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline GitHubCodeDestination& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline GitHubCodeDestination& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline GitHubCodeDestination& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline GitHubCodeDestination& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the GitHub repository is to be a private repository.</p>
     */
    inline bool GetPrivateRepository() const{ return m_privateRepository; }
    inline bool PrivateRepositoryHasBeenSet() const { return m_privateRepositoryHasBeenSet; }
    inline void SetPrivateRepository(bool value) { m_privateRepositoryHasBeenSet = true; m_privateRepository = value; }
    inline GitHubCodeDestination& WithPrivateRepository(bool value) { SetPrivateRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable issues for the GitHub repository.</p>
     */
    inline bool GetIssuesEnabled() const{ return m_issuesEnabled; }
    inline bool IssuesEnabledHasBeenSet() const { return m_issuesEnabledHasBeenSet; }
    inline void SetIssuesEnabled(bool value) { m_issuesEnabledHasBeenSet = true; m_issuesEnabled = value; }
    inline GitHubCodeDestination& WithIssuesEnabled(bool value) { SetIssuesEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }
    inline GitHubCodeDestination& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline GitHubCodeDestination& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline GitHubCodeDestination& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    bool m_privateRepository;
    bool m_privateRepositoryHasBeenSet = false;

    bool m_issuesEnabled;
    bool m_issuesEnabledHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws

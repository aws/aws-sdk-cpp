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
  class AWS_CODESTAR_API GitHubCodeDestination
  {
  public:
    GitHubCodeDestination();
    GitHubCodeDestination(Aws::Utils::Json::JsonView jsonValue);
    GitHubCodeDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline GitHubCodeDestination& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline GitHubCodeDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the GitHub repository to be created in AWS CodeStar.</p>
     */
    inline GitHubCodeDestination& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline GitHubCodeDestination& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline GitHubCodeDestination& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description for the GitHub repository to be created in AWS CodeStar. This
     * description displays in GitHub after the repository is created.</p>
     */
    inline GitHubCodeDestination& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline GitHubCodeDestination& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline GitHubCodeDestination& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of GitHub repository to be created in AWS CodeStar. Valid values are
     * User or Organization.</p>
     */
    inline GitHubCodeDestination& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline GitHubCodeDestination& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline GitHubCodeDestination& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The GitHub username for the owner of the GitHub repository to be created in
     * AWS CodeStar. If this repository should be owned by a GitHub organization,
     * provide its name.</p>
     */
    inline GitHubCodeDestination& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>Whether the GitHub repository is to be a private repository.</p>
     */
    inline bool GetPrivateRepository() const{ return m_privateRepository; }

    /**
     * <p>Whether the GitHub repository is to be a private repository.</p>
     */
    inline bool PrivateRepositoryHasBeenSet() const { return m_privateRepositoryHasBeenSet; }

    /**
     * <p>Whether the GitHub repository is to be a private repository.</p>
     */
    inline void SetPrivateRepository(bool value) { m_privateRepositoryHasBeenSet = true; m_privateRepository = value; }

    /**
     * <p>Whether the GitHub repository is to be a private repository.</p>
     */
    inline GitHubCodeDestination& WithPrivateRepository(bool value) { SetPrivateRepository(value); return *this;}


    /**
     * <p>Whether to enable issues for the GitHub repository.</p>
     */
    inline bool GetIssuesEnabled() const{ return m_issuesEnabled; }

    /**
     * <p>Whether to enable issues for the GitHub repository.</p>
     */
    inline bool IssuesEnabledHasBeenSet() const { return m_issuesEnabledHasBeenSet; }

    /**
     * <p>Whether to enable issues for the GitHub repository.</p>
     */
    inline void SetIssuesEnabled(bool value) { m_issuesEnabledHasBeenSet = true; m_issuesEnabled = value; }

    /**
     * <p>Whether to enable issues for the GitHub repository.</p>
     */
    inline GitHubCodeDestination& WithIssuesEnabled(bool value) { SetIssuesEnabled(value); return *this;}


    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline GitHubCodeDestination& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline GitHubCodeDestination& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The GitHub user's personal access token for the GitHub repository.</p>
     */
    inline GitHubCodeDestination& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    bool m_privateRepository;
    bool m_privateRepositoryHasBeenSet;

    bool m_issuesEnabled;
    bool m_issuesEnabledHasBeenSet;

    Aws::String m_token;
    bool m_tokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws

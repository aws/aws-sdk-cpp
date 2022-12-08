/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociationState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class ListRepositoryAssociationsRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositoryAssociations"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUREVIEWER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline const Aws::Vector<ProviderType>& GetProviderTypes() const{ return m_providerTypes; }

    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline bool ProviderTypesHasBeenSet() const { return m_providerTypesHasBeenSet; }

    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline void SetProviderTypes(const Aws::Vector<ProviderType>& value) { m_providerTypesHasBeenSet = true; m_providerTypes = value; }

    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline void SetProviderTypes(Aws::Vector<ProviderType>&& value) { m_providerTypesHasBeenSet = true; m_providerTypes = std::move(value); }

    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithProviderTypes(const Aws::Vector<ProviderType>& value) { SetProviderTypes(value); return *this;}

    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithProviderTypes(Aws::Vector<ProviderType>&& value) { SetProviderTypes(std::move(value)); return *this;}

    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddProviderTypes(const ProviderType& value) { m_providerTypesHasBeenSet = true; m_providerTypes.push_back(value); return *this; }

    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddProviderTypes(ProviderType&& value) { m_providerTypesHasBeenSet = true; m_providerTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline const Aws::Vector<RepositoryAssociationState>& GetStates() const{ return m_states; }

    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline void SetStates(const Aws::Vector<RepositoryAssociationState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline void SetStates(Aws::Vector<RepositoryAssociationState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline ListRepositoryAssociationsRequest& WithStates(const Aws::Vector<RepositoryAssociationState>& value) { SetStates(value); return *this;}

    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline ListRepositoryAssociationsRequest& WithStates(Aws::Vector<RepositoryAssociationState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline ListRepositoryAssociationsRequest& AddStates(const RepositoryAssociationState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>List of repository association states to use as a filter.</p> <p>The valid
     * repository association states are:</p> <ul> <li> <p> <b>Associated</b>: The
     * repository association is complete.</p> </li> <li> <p> <b>Associating</b>:
     * CodeGuru Reviewer is:</p> <ul> <li> <p>Setting up pull request notifications.
     * This is required for pull requests to trigger a CodeGuru Reviewer review.</p>
     *  <p>If your repository <code>ProviderType</code> is <code>GitHub</code>,
     * <code>GitHub Enterprise Server</code>, or <code>Bitbucket</code>, CodeGuru
     * Reviewer creates webhooks in your repository to trigger CodeGuru Reviewer
     * reviews. If you delete these webhooks, reviews of code in your repository cannot
     * be triggered.</p>  </li> <li> <p>Setting up source code access. This is
     * required for CodeGuru Reviewer to securely clone code in your repository.</p>
     * </li> </ul> </li> <li> <p> <b>Failed</b>: The repository failed to associate or
     * disassociate.</p> </li> <li> <p> <b>Disassociating</b>: CodeGuru Reviewer is
     * removing the repository's pull request notifications and source code access.</p>
     * </li> <li> <p> <b>Disassociated</b>: CodeGuru Reviewer successfully
     * disassociated the repository. You can create a new association with this
     * repository if you want to review source code in it later. You can control access
     * to code reviews created in anassociated repository with tags after it has been
     * disassociated. For more information, see <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-ug/auth-and-access-control-using-tags.html">Using
     * tags to control access to associated repositories</a> in the <i>Amazon CodeGuru
     * Reviewer User Guide</i>.</p> </li> </ul>
     */
    inline ListRepositoryAssociationsRequest& AddStates(RepositoryAssociationState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const{ return m_owners; }

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline void SetOwners(const Aws::Vector<Aws::String>& value) { m_ownersHasBeenSet = true; m_owners = value; }

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline void SetOwners(Aws::Vector<Aws::String>&& value) { m_ownersHasBeenSet = true; m_owners = std::move(value); }

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline ListRepositoryAssociationsRequest& WithOwners(const Aws::Vector<Aws::String>& value) { SetOwners(value); return *this;}

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline ListRepositoryAssociationsRequest& WithOwners(Aws::Vector<Aws::String>&& value) { SetOwners(std::move(value)); return *this;}

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline ListRepositoryAssociationsRequest& AddOwners(const Aws::String& value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline ListRepositoryAssociationsRequest& AddOwners(Aws::String&& value) { m_ownersHasBeenSet = true; m_owners.push_back(std::move(value)); return *this; }

    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline ListRepositoryAssociationsRequest& AddOwners(const char* value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }


    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page with a <code>nextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListRepositoryAssociations</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, <code>ListRepositoryAssociations</code> returns up
     * to 100 results and a <code>nextToken</code> value if applicable. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page with a <code>nextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListRepositoryAssociations</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, <code>ListRepositoryAssociations</code> returns up
     * to 100 results and a <code>nextToken</code> value if applicable. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page with a <code>nextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListRepositoryAssociations</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, <code>ListRepositoryAssociations</code> returns up
     * to 100 results and a <code>nextToken</code> value if applicable. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page with a <code>nextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>ListRepositoryAssociations</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, <code>ListRepositoryAssociations</code> returns up
     * to 100 results and a <code>nextToken</code> value if applicable. </p>
     */
    inline ListRepositoryAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListRepositoryAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListRepositoryAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListRepositoryAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProviderType> m_providerTypes;
    bool m_providerTypesHasBeenSet = false;

    Aws::Vector<RepositoryAssociationState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws

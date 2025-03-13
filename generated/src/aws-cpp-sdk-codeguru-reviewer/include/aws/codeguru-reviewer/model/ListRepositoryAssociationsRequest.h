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
    AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositoryAssociations"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUREVIEWER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>List of provider types to use as a filter.</p>
     */
    inline const Aws::Vector<ProviderType>& GetProviderTypes() const { return m_providerTypes; }
    inline bool ProviderTypesHasBeenSet() const { return m_providerTypesHasBeenSet; }
    template<typename ProviderTypesT = Aws::Vector<ProviderType>>
    void SetProviderTypes(ProviderTypesT&& value) { m_providerTypesHasBeenSet = true; m_providerTypes = std::forward<ProviderTypesT>(value); }
    template<typename ProviderTypesT = Aws::Vector<ProviderType>>
    ListRepositoryAssociationsRequest& WithProviderTypes(ProviderTypesT&& value) { SetProviderTypes(std::forward<ProviderTypesT>(value)); return *this;}
    inline ListRepositoryAssociationsRequest& AddProviderTypes(ProviderType value) { m_providerTypesHasBeenSet = true; m_providerTypes.push_back(value); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<RepositoryAssociationState>& GetStates() const { return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    template<typename StatesT = Aws::Vector<RepositoryAssociationState>>
    void SetStates(StatesT&& value) { m_statesHasBeenSet = true; m_states = std::forward<StatesT>(value); }
    template<typename StatesT = Aws::Vector<RepositoryAssociationState>>
    ListRepositoryAssociationsRequest& WithStates(StatesT&& value) { SetStates(std::forward<StatesT>(value)); return *this;}
    inline ListRepositoryAssociationsRequest& AddStates(RepositoryAssociationState value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of repository names to use as a filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    ListRepositoryAssociationsRequest& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    ListRepositoryAssociationsRequest& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of owners to use as a filter. For Amazon Web Services CodeCommit, it is
     * the name of the CodeCommit account that was used to associate the repository.
     * For other repository source providers, such as Bitbucket and GitHub Enterprise
     * Server, this is name of the account that was used to associate the repository.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const { return m_owners; }
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }
    template<typename OwnersT = Aws::Vector<Aws::String>>
    void SetOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners = std::forward<OwnersT>(value); }
    template<typename OwnersT = Aws::Vector<Aws::String>>
    ListRepositoryAssociationsRequest& WithOwners(OwnersT&& value) { SetOwners(std::forward<OwnersT>(value)); return *this;}
    template<typename OwnersT = Aws::String>
    ListRepositoryAssociationsRequest& AddOwners(OwnersT&& value) { m_ownersHasBeenSet = true; m_owners.emplace_back(std::forward<OwnersT>(value)); return *this; }
    ///@}

    ///@{
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
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRepositoryAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p>  <p>Treat this token as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRepositoryAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProviderType> m_providerTypes;
    bool m_providerTypesHasBeenSet = false;

    Aws::Vector<RepositoryAssociationState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws

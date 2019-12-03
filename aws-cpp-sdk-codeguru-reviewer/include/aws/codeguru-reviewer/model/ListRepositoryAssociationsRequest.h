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
  class AWS_CODEGURUREVIEWER_API ListRepositoryAssociationsRequest : public CodeGuruReviewerRequest
  {
  public:
    ListRepositoryAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRepositoryAssociations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
     * <p>List of states to use as a filter.</p>
     */
    inline const Aws::Vector<RepositoryAssociationState>& GetStates() const{ return m_states; }

    /**
     * <p>List of states to use as a filter.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>List of states to use as a filter.</p>
     */
    inline void SetStates(const Aws::Vector<RepositoryAssociationState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>List of states to use as a filter.</p>
     */
    inline void SetStates(Aws::Vector<RepositoryAssociationState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>List of states to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithStates(const Aws::Vector<RepositoryAssociationState>& value) { SetStates(value); return *this;}

    /**
     * <p>List of states to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithStates(Aws::Vector<RepositoryAssociationState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>List of states to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddStates(const RepositoryAssociationState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>List of states to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddStates(RepositoryAssociationState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>List of names to use as a filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>List of names to use as a filter.</p>
     */
    inline ListRepositoryAssociationsRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwners() const{ return m_owners; }

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline bool OwnersHasBeenSet() const { return m_ownersHasBeenSet; }

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline void SetOwners(const Aws::Vector<Aws::String>& value) { m_ownersHasBeenSet = true; m_owners = value; }

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline void SetOwners(Aws::Vector<Aws::String>&& value) { m_ownersHasBeenSet = true; m_owners = std::move(value); }

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline ListRepositoryAssociationsRequest& WithOwners(const Aws::Vector<Aws::String>& value) { SetOwners(value); return *this;}

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline ListRepositoryAssociationsRequest& WithOwners(Aws::Vector<Aws::String>&& value) { SetOwners(std::move(value)); return *this;}

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline ListRepositoryAssociationsRequest& AddOwners(const Aws::String& value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline ListRepositoryAssociationsRequest& AddOwners(Aws::String&& value) { m_ownersHasBeenSet = true; m_owners.push_back(std::move(value)); return *this; }

    /**
     * <p>List of owners to use as a filter. For AWS CodeCommit, the owner is the AWS
     * account id. For GitHub, it is the GitHub account name.</p>
     */
    inline ListRepositoryAssociationsRequest& AddOwners(const char* value) { m_ownersHasBeenSet = true; m_owners.push_back(value); return *this; }


    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListRepositoryAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListRepositoryAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListRepositoryAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListRepositoryAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListRepositoryAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListRepositoryAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of repository association results returned by
     * <code>ListRepositoryAssociations</code> in paginated output. When this parameter
     * is used, <code>ListRepositoryAssociations</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListRepositoryAssociations</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListRepositoryAssociations</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline ListRepositoryAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline ListRepositoryAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline ListRepositoryAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListRepositoryAssociations</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. </p> <note> <p>This token should be treated as an
     * opaque identifier that is only used to retrieve the next items in a list and not
     * for other programmatic purposes.</p> </note>
     */
    inline ListRepositoryAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProviderType> m_providerTypes;
    bool m_providerTypesHasBeenSet;

    Aws::Vector<RepositoryAssociationState> m_states;
    bool m_statesHasBeenSet;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;

    Aws::Vector<Aws::String> m_owners;
    bool m_ownersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws

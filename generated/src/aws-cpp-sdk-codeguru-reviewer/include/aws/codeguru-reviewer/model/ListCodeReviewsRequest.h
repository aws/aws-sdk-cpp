/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-reviewer/model/Type.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/codeguru-reviewer/model/JobState.h>
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
  class ListCodeReviewsRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API ListCodeReviewsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCodeReviews"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUREVIEWER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline const Aws::Vector<ProviderType>& GetProviderTypes() const{ return m_providerTypes; }

    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline bool ProviderTypesHasBeenSet() const { return m_providerTypesHasBeenSet; }

    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline void SetProviderTypes(const Aws::Vector<ProviderType>& value) { m_providerTypesHasBeenSet = true; m_providerTypes = value; }

    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline void SetProviderTypes(Aws::Vector<ProviderType>&& value) { m_providerTypesHasBeenSet = true; m_providerTypes = std::move(value); }

    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline ListCodeReviewsRequest& WithProviderTypes(const Aws::Vector<ProviderType>& value) { SetProviderTypes(value); return *this;}

    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline ListCodeReviewsRequest& WithProviderTypes(Aws::Vector<ProviderType>&& value) { SetProviderTypes(std::move(value)); return *this;}

    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline ListCodeReviewsRequest& AddProviderTypes(const ProviderType& value) { m_providerTypesHasBeenSet = true; m_providerTypes.push_back(value); return *this; }

    /**
     * <p>List of provider types for filtering that needs to be applied before
     * displaying the result. For example, <code>providerTypes=[GitHub]</code> lists
     * code reviews from GitHub.</p>
     */
    inline ListCodeReviewsRequest& AddProviderTypes(ProviderType&& value) { m_providerTypesHasBeenSet = true; m_providerTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<JobState>& GetStates() const{ return m_states; }

    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline void SetStates(const Aws::Vector<JobState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline void SetStates(Aws::Vector<JobState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline ListCodeReviewsRequest& WithStates(const Aws::Vector<JobState>& value) { SetStates(value); return *this;}

    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline ListCodeReviewsRequest& WithStates(Aws::Vector<JobState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline ListCodeReviewsRequest& AddStates(const JobState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>List of states for filtering that needs to be applied before displaying the
     * result. For example, <code>states=[Pending]</code> lists code reviews in the
     * Pending state.</p> <p>The valid code review states are:</p> <ul> <li> <p>
     * <code>Completed</code>: The code review is complete.</p> </li> <li> <p>
     * <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline ListCodeReviewsRequest& AddStates(JobState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const{ return m_repositoryNames; }

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline void SetRepositoryNames(const Aws::Vector<Aws::String>& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = value; }

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline void SetRepositoryNames(Aws::Vector<Aws::String>&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::move(value); }

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline ListCodeReviewsRequest& WithRepositoryNames(const Aws::Vector<Aws::String>& value) { SetRepositoryNames(value); return *this;}

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline ListCodeReviewsRequest& WithRepositoryNames(Aws::Vector<Aws::String>&& value) { SetRepositoryNames(std::move(value)); return *this;}

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline ListCodeReviewsRequest& AddRepositoryNames(const Aws::String& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline ListCodeReviewsRequest& AddRepositoryNames(Aws::String&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>List of repository names for filtering that needs to be applied before
     * displaying the result.</p>
     */
    inline ListCodeReviewsRequest& AddRepositoryNames(const char* value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }


    /**
     * <p>The type of code reviews to list in the response.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of code reviews to list in the response.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of code reviews to list in the response.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of code reviews to list in the response.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of code reviews to list in the response.</p>
     */
    inline ListCodeReviewsRequest& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of code reviews to list in the response.</p>
     */
    inline ListCodeReviewsRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results that are returned per call. The default is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that are returned per call. The default is
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results that are returned per call. The default is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that are returned per call. The default is
     * 100.</p>
     */
    inline ListCodeReviewsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline ListCodeReviewsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline ListCodeReviewsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged.</p>
     */
    inline ListCodeReviewsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProviderType> m_providerTypes;
    bool m_providerTypesHasBeenSet = false;

    Aws::Vector<JobState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws

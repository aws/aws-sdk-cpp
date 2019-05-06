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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ReviewPolicyLevel.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API ListReviewPolicyResultsForHITRequest : public MTurkRequest
  {
  public:
    ListReviewPolicyResultsForHITRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReviewPolicyResultsForHIT"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the HIT to retrieve review results for.</p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline const Aws::Vector<ReviewPolicyLevel>& GetPolicyLevels() const{ return m_policyLevels; }

    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline bool PolicyLevelsHasBeenSet() const { return m_policyLevelsHasBeenSet; }

    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline void SetPolicyLevels(const Aws::Vector<ReviewPolicyLevel>& value) { m_policyLevelsHasBeenSet = true; m_policyLevels = value; }

    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline void SetPolicyLevels(Aws::Vector<ReviewPolicyLevel>&& value) { m_policyLevelsHasBeenSet = true; m_policyLevels = std::move(value); }

    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithPolicyLevels(const Aws::Vector<ReviewPolicyLevel>& value) { SetPolicyLevels(value); return *this;}

    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithPolicyLevels(Aws::Vector<ReviewPolicyLevel>&& value) { SetPolicyLevels(std::move(value)); return *this;}

    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline ListReviewPolicyResultsForHITRequest& AddPolicyLevels(const ReviewPolicyLevel& value) { m_policyLevelsHasBeenSet = true; m_policyLevels.push_back(value); return *this; }

    /**
     * <p> The Policy Level(s) to retrieve review results for - HIT or Assignment. If
     * omitted, the default behavior is to retrieve all data for both policy levels.
     * For a list of all the described policies, see Review Policies. </p>
     */
    inline ListReviewPolicyResultsForHITRequest& AddPolicyLevels(ReviewPolicyLevel&& value) { m_policyLevelsHasBeenSet = true; m_policyLevels.push_back(std::move(value)); return *this; }


    /**
     * <p> Specify if the operation should retrieve a list of the actions taken
     * executing the Review Policies and their outcomes. </p>
     */
    inline bool GetRetrieveActions() const{ return m_retrieveActions; }

    /**
     * <p> Specify if the operation should retrieve a list of the actions taken
     * executing the Review Policies and their outcomes. </p>
     */
    inline bool RetrieveActionsHasBeenSet() const { return m_retrieveActionsHasBeenSet; }

    /**
     * <p> Specify if the operation should retrieve a list of the actions taken
     * executing the Review Policies and their outcomes. </p>
     */
    inline void SetRetrieveActions(bool value) { m_retrieveActionsHasBeenSet = true; m_retrieveActions = value; }

    /**
     * <p> Specify if the operation should retrieve a list of the actions taken
     * executing the Review Policies and their outcomes. </p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithRetrieveActions(bool value) { SetRetrieveActions(value); return *this;}


    /**
     * <p> Specify if the operation should retrieve a list of the results computed by
     * the Review Policies. </p>
     */
    inline bool GetRetrieveResults() const{ return m_retrieveResults; }

    /**
     * <p> Specify if the operation should retrieve a list of the results computed by
     * the Review Policies. </p>
     */
    inline bool RetrieveResultsHasBeenSet() const { return m_retrieveResultsHasBeenSet; }

    /**
     * <p> Specify if the operation should retrieve a list of the results computed by
     * the Review Policies. </p>
     */
    inline void SetRetrieveResults(bool value) { m_retrieveResultsHasBeenSet = true; m_retrieveResults = value; }

    /**
     * <p> Specify if the operation should retrieve a list of the results computed by
     * the Review Policies. </p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithRetrieveResults(bool value) { SetRetrieveResults(value); return *this;}


    /**
     * <p>Pagination token</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token</p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token</p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token</p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Limit the number of results returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Limit the number of results returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Limit the number of results returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Limit the number of results returned.</p>
     */
    inline ListReviewPolicyResultsForHITRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;

    Aws::Vector<ReviewPolicyLevel> m_policyLevels;
    bool m_policyLevelsHasBeenSet;

    bool m_retrieveActions;
    bool m_retrieveActionsHasBeenSet;

    bool m_retrieveResults;
    bool m_retrieveResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws

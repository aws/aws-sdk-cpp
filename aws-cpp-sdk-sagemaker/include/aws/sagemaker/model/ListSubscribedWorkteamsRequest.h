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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API ListSubscribedWorkteamsRequest : public SageMakerRequest
  {
  public:
    ListSubscribedWorkteamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscribedWorkteams"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline ListSubscribedWorkteamsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline ListSubscribedWorkteamsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the work team name. This filter returns only work teams whose
     * name contains the specified string.</p>
     */
    inline ListSubscribedWorkteamsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline ListSubscribedWorkteamsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline ListSubscribedWorkteamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListSubscribedWorkteams</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of labeling jobs, use the token in the next request.</p>
     */
    inline ListSubscribedWorkteamsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of work teams to return in each page of the response.</p>
     */
    inline ListSubscribedWorkteamsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API ListStackSetsRequest : public CloudFormationRequest
  {
  public:
    ListStackSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackSets"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline ListStackSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline ListStackSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request didn't return all of the remaining results,
     * the response object's <code>NextToken</code> parameter value is set to a token.
     * To retrieve the next set of results, call <code>ListStackSets</code> again and
     * assign that token to the request object's <code>NextToken</code> parameter. If
     * there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline ListStackSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline ListStackSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The status of the stack sets that you want to get summary information
     * about.</p>
     */
    inline const StackSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the stack sets that you want to get summary information
     * about.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the stack sets that you want to get summary information
     * about.</p>
     */
    inline void SetStatus(const StackSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the stack sets that you want to get summary information
     * about.</p>
     */
    inline void SetStatus(StackSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the stack sets that you want to get summary information
     * about.</p>
     */
    inline ListStackSetsRequest& WithStatus(const StackSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the stack sets that you want to get summary information
     * about.</p>
     */
    inline ListStackSetsRequest& WithStatus(StackSetStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    StackSetStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

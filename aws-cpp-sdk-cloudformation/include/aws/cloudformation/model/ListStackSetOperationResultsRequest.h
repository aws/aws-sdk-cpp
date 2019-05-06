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
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API ListStackSetOperationResultsRequest : public CloudFormationRequest
  {
  public:
    ListStackSetOperationResultsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackSetOperationResults"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline ListStackSetOperationResultsRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline ListStackSetOperationResultsRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that you want to get operation results
     * for.</p>
     */
    inline ListStackSetOperationResultsRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline ListStackSetOperationResultsRequest& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline ListStackSetOperationResultsRequest& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack set operation.</p>
     */
    inline ListStackSetOperationResultsRequest& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline ListStackSetOperationResultsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline ListStackSetOperationResultsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous request didn't return all of the remaining results, the
     * response object's <code>NextToken</code> parameter value is set to a token. To
     * retrieve the next set of results, call <code>ListStackSetOperationResults</code>
     * again and assign that token to the request object's <code>NextToken</code>
     * parameter. If there are no remaining results, the previous response object's
     * <code>NextToken</code> parameter is set to <code>null</code>.</p>
     */
    inline ListStackSetOperationResultsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListStackSetOperationResultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

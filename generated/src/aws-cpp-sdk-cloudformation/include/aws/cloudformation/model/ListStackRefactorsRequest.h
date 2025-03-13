/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackRefactorExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class ListStackRefactorsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API ListStackRefactorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStackRefactors"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Execution status to use as a filter. Specify one or more execution status
     * codes to list only stack refactors with the specified execution status
     * codes.</p>
     */
    inline const Aws::Vector<StackRefactorExecutionStatus>& GetExecutionStatusFilter() const { return m_executionStatusFilter; }
    inline bool ExecutionStatusFilterHasBeenSet() const { return m_executionStatusFilterHasBeenSet; }
    template<typename ExecutionStatusFilterT = Aws::Vector<StackRefactorExecutionStatus>>
    void SetExecutionStatusFilter(ExecutionStatusFilterT&& value) { m_executionStatusFilterHasBeenSet = true; m_executionStatusFilter = std::forward<ExecutionStatusFilterT>(value); }
    template<typename ExecutionStatusFilterT = Aws::Vector<StackRefactorExecutionStatus>>
    ListStackRefactorsRequest& WithExecutionStatusFilter(ExecutionStatusFilterT&& value) { SetExecutionStatusFilter(std::forward<ExecutionStatusFilterT>(value)); return *this;}
    inline ListStackRefactorsRequest& AddExecutionStatusFilter(StackRefactorExecutionStatus value) { m_executionStatusFilterHasBeenSet = true; m_executionStatusFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStackRefactorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListStackRefactorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<StackRefactorExecutionStatus> m_executionStatusFilter;
    bool m_executionStatusFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

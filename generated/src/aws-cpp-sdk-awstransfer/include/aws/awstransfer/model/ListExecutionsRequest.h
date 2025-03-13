/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ListExecutionsRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ListExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExecutions"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p> <p> This is
     * useful for pagination, for instance. If you have 100 executions for a workflow,
     * you might only want to list first 10. If so, call the API by specifying the
     * <code>max-results</code>: </p> <p> <code>aws transfer list-executions
     * --max-results 10</code> </p> <p> This returns details for the first 10
     * executions, as well as the pointer (<code>NextToken</code>) to the eleventh
     * execution. You can now call the API again, supplying the <code>NextToken</code>
     * value you received: </p> <p> <code>aws transfer list-executions --max-results 10
     * --next-token $somePointerReturnedFromPreviousListResult</code> </p> <p> This
     * call returns the next 10 executions, the 11th through the 20th. You can then
     * repeat the call until the details for all 100 executions have been returned.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExecutionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    ListExecutionsRequest& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

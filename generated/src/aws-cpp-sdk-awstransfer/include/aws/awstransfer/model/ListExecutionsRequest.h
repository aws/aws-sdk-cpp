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
    AWS_TRANSFER_API ListExecutionsRequest();

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
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline ListExecutionsRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline ListExecutionsRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline ListExecutionsRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

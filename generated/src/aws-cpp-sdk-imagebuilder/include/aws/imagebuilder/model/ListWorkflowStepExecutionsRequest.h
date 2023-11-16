/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ListWorkflowStepExecutionsRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowStepExecutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkflowStepExecutions"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline ListWorkflowStepExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListWorkflowStepExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListWorkflowStepExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListWorkflowStepExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline const Aws::String& GetWorkflowExecutionId() const{ return m_workflowExecutionId; }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline bool WorkflowExecutionIdHasBeenSet() const { return m_workflowExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline void SetWorkflowExecutionId(const Aws::String& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = value; }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline void SetWorkflowExecutionId(Aws::String&& value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId = std::move(value); }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline void SetWorkflowExecutionId(const char* value) { m_workflowExecutionIdHasBeenSet = true; m_workflowExecutionId.assign(value); }

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline ListWorkflowStepExecutionsRequest& WithWorkflowExecutionId(const Aws::String& value) { SetWorkflowExecutionId(value); return *this;}

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline ListWorkflowStepExecutionsRequest& WithWorkflowExecutionId(Aws::String&& value) { SetWorkflowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier that Image Builder assigned to keep track of runtime
     * details when it ran the workflow.</p>
     */
    inline ListWorkflowStepExecutionsRequest& WithWorkflowExecutionId(const char* value) { SetWorkflowExecutionId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workflowExecutionId;
    bool m_workflowExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws

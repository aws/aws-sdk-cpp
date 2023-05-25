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
  class DescribeExecutionRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API DescribeExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExecution"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline DescribeExecutionRequest& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline DescribeExecutionRequest& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline DescribeExecutionRequest& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribeExecutionRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribeExecutionRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribeExecutionRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

  private:

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

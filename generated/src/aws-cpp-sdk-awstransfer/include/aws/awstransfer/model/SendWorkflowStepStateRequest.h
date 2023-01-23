/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/CustomStepStatus.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class SendWorkflowStepStateRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API SendWorkflowStepStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendWorkflowStepState"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline SendWorkflowStepStateRequest& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline SendWorkflowStepStateRequest& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline SendWorkflowStepStateRequest& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


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
    inline SendWorkflowStepStateRequest& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline SendWorkflowStepStateRequest& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the execution of a workflow.</p>
     */
    inline SendWorkflowStepStateRequest& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline SendWorkflowStepStateRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline SendWorkflowStepStateRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>Used to distinguish between multiple callbacks for multiple Lambda steps
     * within the same execution.</p>
     */
    inline SendWorkflowStepStateRequest& WithToken(const char* value) { SetToken(value); return *this;}


    /**
     * <p>Indicates whether the specified step succeeded or failed.</p>
     */
    inline const CustomStepStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether the specified step succeeded or failed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether the specified step succeeded or failed.</p>
     */
    inline void SetStatus(const CustomStepStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether the specified step succeeded or failed.</p>
     */
    inline void SetStatus(CustomStepStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether the specified step succeeded or failed.</p>
     */
    inline SendWorkflowStepStateRequest& WithStatus(const CustomStepStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether the specified step succeeded or failed.</p>
     */
    inline SendWorkflowStepStateRequest& WithStatus(CustomStepStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    CustomStepStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

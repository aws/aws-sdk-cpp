﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the workflow ID for the workflow to assign and the execution role
   * used for executing the workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/WorkflowDetail">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API WorkflowDetail
  {
  public:
    WorkflowDetail();
    WorkflowDetail(Aws::Utils::Json::JsonView jsonValue);
    WorkflowDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline WorkflowDetail& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline WorkflowDetail& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline WorkflowDetail& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline WorkflowDetail& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline WorkflowDetail& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>Includes the necessary permissions for S3, EFS, and Lambda operations that
     * Transfer can assume, so that all workflow steps can operate on the required
     * resources</p>
     */
    inline WorkflowDetail& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}

  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

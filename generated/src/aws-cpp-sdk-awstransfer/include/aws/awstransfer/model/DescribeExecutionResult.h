/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/DescribedExecution.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{
  class DescribeExecutionResult
  {
  public:
    AWS_TRANSFER_API DescribeExecutionResult();
    AWS_TRANSFER_API DescribeExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribeExecutionResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribeExecutionResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline DescribeExecutionResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The structure that contains the details of the workflow' execution.</p>
     */
    inline const DescribedExecution& GetExecution() const{ return m_execution; }

    /**
     * <p>The structure that contains the details of the workflow' execution.</p>
     */
    inline void SetExecution(const DescribedExecution& value) { m_execution = value; }

    /**
     * <p>The structure that contains the details of the workflow' execution.</p>
     */
    inline void SetExecution(DescribedExecution&& value) { m_execution = std::move(value); }

    /**
     * <p>The structure that contains the details of the workflow' execution.</p>
     */
    inline DescribeExecutionResult& WithExecution(const DescribedExecution& value) { SetExecution(value); return *this;}

    /**
     * <p>The structure that contains the details of the workflow' execution.</p>
     */
    inline DescribeExecutionResult& WithExecution(DescribedExecution&& value) { SetExecution(std::move(value)); return *this;}

  private:

    Aws::String m_workflowId;

    DescribedExecution m_execution;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

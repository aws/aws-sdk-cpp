/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedExecution.h>
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
  class ListExecutionsResult
  {
  public:
    AWS_TRANSFER_API ListExecutionsResult();
    AWS_TRANSFER_API ListExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p>
     */
    inline ListExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p>
     */
    inline ListExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>ListExecutions</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional executions.</p>
     */
    inline ListExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListExecutionsResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline ListExecutionsResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the workflow.</p>
     */
    inline ListExecutionsResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>Returns the details for each execution, in a <code>ListedExecution</code>
     * array.</p>
     */
    inline const Aws::Vector<ListedExecution>& GetExecutions() const{ return m_executions; }

    /**
     * <p>Returns the details for each execution, in a <code>ListedExecution</code>
     * array.</p>
     */
    inline void SetExecutions(const Aws::Vector<ListedExecution>& value) { m_executions = value; }

    /**
     * <p>Returns the details for each execution, in a <code>ListedExecution</code>
     * array.</p>
     */
    inline void SetExecutions(Aws::Vector<ListedExecution>&& value) { m_executions = std::move(value); }

    /**
     * <p>Returns the details for each execution, in a <code>ListedExecution</code>
     * array.</p>
     */
    inline ListExecutionsResult& WithExecutions(const Aws::Vector<ListedExecution>& value) { SetExecutions(value); return *this;}

    /**
     * <p>Returns the details for each execution, in a <code>ListedExecution</code>
     * array.</p>
     */
    inline ListExecutionsResult& WithExecutions(Aws::Vector<ListedExecution>&& value) { SetExecutions(std::move(value)); return *this;}

    /**
     * <p>Returns the details for each execution, in a <code>ListedExecution</code>
     * array.</p>
     */
    inline ListExecutionsResult& AddExecutions(const ListedExecution& value) { m_executions.push_back(value); return *this; }

    /**
     * <p>Returns the details for each execution, in a <code>ListedExecution</code>
     * array.</p>
     */
    inline ListExecutionsResult& AddExecutions(ListedExecution&& value) { m_executions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::String m_workflowId;

    Aws::Vector<ListedExecution> m_executions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

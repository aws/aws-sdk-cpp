/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedWorkflow.h>
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
  class ListWorkflowsResult
  {
  public:
    AWS_TRANSFER_API ListWorkflowsResult();
    AWS_TRANSFER_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> <code>ListWorkflows</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional workflows.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>ListWorkflows</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional workflows.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> <code>ListWorkflows</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional workflows.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> <code>ListWorkflows</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional workflows.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> <code>ListWorkflows</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional workflows.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>ListWorkflows</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional workflows.</p>
     */
    inline ListWorkflowsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>ListWorkflows</code> returns the <code>NextToken</code> parameter in
     * the output. You can then pass the <code>NextToken</code> parameter in a
     * subsequent command to continue listing additional workflows.</p>
     */
    inline ListWorkflowsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns the <code>Arn</code>, <code>WorkflowId</code>, and
     * <code>Description</code> for each workflow.</p>
     */
    inline const Aws::Vector<ListedWorkflow>& GetWorkflows() const{ return m_workflows; }

    /**
     * <p>Returns the <code>Arn</code>, <code>WorkflowId</code>, and
     * <code>Description</code> for each workflow.</p>
     */
    inline void SetWorkflows(const Aws::Vector<ListedWorkflow>& value) { m_workflows = value; }

    /**
     * <p>Returns the <code>Arn</code>, <code>WorkflowId</code>, and
     * <code>Description</code> for each workflow.</p>
     */
    inline void SetWorkflows(Aws::Vector<ListedWorkflow>&& value) { m_workflows = std::move(value); }

    /**
     * <p>Returns the <code>Arn</code>, <code>WorkflowId</code>, and
     * <code>Description</code> for each workflow.</p>
     */
    inline ListWorkflowsResult& WithWorkflows(const Aws::Vector<ListedWorkflow>& value) { SetWorkflows(value); return *this;}

    /**
     * <p>Returns the <code>Arn</code>, <code>WorkflowId</code>, and
     * <code>Description</code> for each workflow.</p>
     */
    inline ListWorkflowsResult& WithWorkflows(Aws::Vector<ListedWorkflow>&& value) { SetWorkflows(std::move(value)); return *this;}

    /**
     * <p>Returns the <code>Arn</code>, <code>WorkflowId</code>, and
     * <code>Description</code> for each workflow.</p>
     */
    inline ListWorkflowsResult& AddWorkflows(const ListedWorkflow& value) { m_workflows.push_back(value); return *this; }

    /**
     * <p>Returns the <code>Arn</code>, <code>WorkflowId</code>, and
     * <code>Description</code> for each workflow.</p>
     */
    inline ListWorkflowsResult& AddWorkflows(ListedWorkflow&& value) { m_workflows.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListedWorkflow> m_workflows;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws

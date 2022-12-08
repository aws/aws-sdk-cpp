/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepGroupSummary.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{
  class ListWorkflowStepGroupsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepGroupsResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowStepGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowStepGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowStepGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline const Aws::Vector<WorkflowStepGroupSummary>& GetWorkflowStepGroupsSummary() const{ return m_workflowStepGroupsSummary; }

    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline void SetWorkflowStepGroupsSummary(const Aws::Vector<WorkflowStepGroupSummary>& value) { m_workflowStepGroupsSummary = value; }

    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline void SetWorkflowStepGroupsSummary(Aws::Vector<WorkflowStepGroupSummary>&& value) { m_workflowStepGroupsSummary = std::move(value); }

    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline ListWorkflowStepGroupsResult& WithWorkflowStepGroupsSummary(const Aws::Vector<WorkflowStepGroupSummary>& value) { SetWorkflowStepGroupsSummary(value); return *this;}

    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline ListWorkflowStepGroupsResult& WithWorkflowStepGroupsSummary(Aws::Vector<WorkflowStepGroupSummary>&& value) { SetWorkflowStepGroupsSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline ListWorkflowStepGroupsResult& AddWorkflowStepGroupsSummary(const WorkflowStepGroupSummary& value) { m_workflowStepGroupsSummary.push_back(value); return *this; }

    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline ListWorkflowStepGroupsResult& AddWorkflowStepGroupsSummary(WorkflowStepGroupSummary&& value) { m_workflowStepGroupsSummary.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkflowStepGroupSummary> m_workflowStepGroupsSummary;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws

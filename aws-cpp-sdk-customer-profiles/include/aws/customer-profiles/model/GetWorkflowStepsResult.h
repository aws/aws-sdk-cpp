/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/WorkflowStepItem.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetWorkflowStepsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetWorkflowStepsResult();
    AWS_CUSTOMERPROFILES_API GetWorkflowStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetWorkflowStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowStepsResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowStepsResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowStepsResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }

    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowType = value; }

    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowType = std::move(value); }

    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline GetWorkflowStepsResult& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline GetWorkflowStepsResult& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>List containing workflow step details.</p>
     */
    inline const Aws::Vector<WorkflowStepItem>& GetItems() const{ return m_items; }

    /**
     * <p>List containing workflow step details.</p>
     */
    inline void SetItems(const Aws::Vector<WorkflowStepItem>& value) { m_items = value; }

    /**
     * <p>List containing workflow step details.</p>
     */
    inline void SetItems(Aws::Vector<WorkflowStepItem>&& value) { m_items = std::move(value); }

    /**
     * <p>List containing workflow step details.</p>
     */
    inline GetWorkflowStepsResult& WithItems(const Aws::Vector<WorkflowStepItem>& value) { SetItems(value); return *this;}

    /**
     * <p>List containing workflow step details.</p>
     */
    inline GetWorkflowStepsResult& WithItems(Aws::Vector<WorkflowStepItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List containing workflow step details.</p>
     */
    inline GetWorkflowStepsResult& AddItems(const WorkflowStepItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List containing workflow step details.</p>
     */
    inline GetWorkflowStepsResult& AddItems(WorkflowStepItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetWorkflowStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetWorkflowStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetWorkflowStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workflowId;

    WorkflowType m_workflowType;

    Aws::Vector<WorkflowStepItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

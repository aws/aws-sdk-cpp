/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/WorkflowType.h>
#include <aws/customer-profiles/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/model/WorkflowAttributes.h>
#include <aws/customer-profiles/model/WorkflowMetrics.h>
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
  class GetWorkflowResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetWorkflowResult();
    AWS_CUSTOMERPROFILES_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetWorkflowResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline GetWorkflowResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}


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
    inline GetWorkflowResult& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}

    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline GetWorkflowResult& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}


    /**
     * <p>Status of workflow execution.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Status of workflow execution.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>Status of workflow execution.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>Status of workflow execution.</p>
     */
    inline GetWorkflowResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of workflow execution.</p>
     */
    inline GetWorkflowResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline const Aws::String& GetErrorDescription() const{ return m_errorDescription; }

    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline void SetErrorDescription(const Aws::String& value) { m_errorDescription = value; }

    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline void SetErrorDescription(Aws::String&& value) { m_errorDescription = std::move(value); }

    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline void SetErrorDescription(const char* value) { m_errorDescription.assign(value); }

    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline GetWorkflowResult& WithErrorDescription(const Aws::String& value) { SetErrorDescription(value); return *this;}

    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline GetWorkflowResult& WithErrorDescription(Aws::String&& value) { SetErrorDescription(std::move(value)); return *this;}

    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline GetWorkflowResult& WithErrorDescription(const char* value) { SetErrorDescription(value); return *this;}


    /**
     * <p>The timestamp that represents when workflow execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The timestamp that represents when workflow execution started.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }

    /**
     * <p>The timestamp that represents when workflow execution started.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }

    /**
     * <p>The timestamp that represents when workflow execution started.</p>
     */
    inline GetWorkflowResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The timestamp that represents when workflow execution started.</p>
     */
    inline GetWorkflowResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The timestamp that represents when workflow execution last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp that represents when workflow execution last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp that represents when workflow execution last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp that represents when workflow execution last updated.</p>
     */
    inline GetWorkflowResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp that represents when workflow execution last updated.</p>
     */
    inline GetWorkflowResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Attributes provided for workflow execution.</p>
     */
    inline const WorkflowAttributes& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Attributes provided for workflow execution.</p>
     */
    inline void SetAttributes(const WorkflowAttributes& value) { m_attributes = value; }

    /**
     * <p>Attributes provided for workflow execution.</p>
     */
    inline void SetAttributes(WorkflowAttributes&& value) { m_attributes = std::move(value); }

    /**
     * <p>Attributes provided for workflow execution.</p>
     */
    inline GetWorkflowResult& WithAttributes(const WorkflowAttributes& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attributes provided for workflow execution.</p>
     */
    inline GetWorkflowResult& WithAttributes(WorkflowAttributes&& value) { SetAttributes(std::move(value)); return *this;}


    /**
     * <p>Workflow specific execution metrics.</p>
     */
    inline const WorkflowMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Workflow specific execution metrics.</p>
     */
    inline void SetMetrics(const WorkflowMetrics& value) { m_metrics = value; }

    /**
     * <p>Workflow specific execution metrics.</p>
     */
    inline void SetMetrics(WorkflowMetrics&& value) { m_metrics = std::move(value); }

    /**
     * <p>Workflow specific execution metrics.</p>
     */
    inline GetWorkflowResult& WithMetrics(const WorkflowMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>Workflow specific execution metrics.</p>
     */
    inline GetWorkflowResult& WithMetrics(WorkflowMetrics&& value) { SetMetrics(std::move(value)); return *this;}

  private:

    Aws::String m_workflowId;

    WorkflowType m_workflowType;

    Status m_status;

    Aws::String m_errorDescription;

    Aws::Utils::DateTime m_startDate;

    Aws::Utils::DateTime m_lastUpdatedAt;

    WorkflowAttributes m_attributes;

    WorkflowMetrics m_metrics;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

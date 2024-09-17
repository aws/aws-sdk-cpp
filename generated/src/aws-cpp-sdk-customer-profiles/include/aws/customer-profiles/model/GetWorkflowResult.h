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


    ///@{
    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline GetWorkflowResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline GetWorkflowResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline const WorkflowType& GetWorkflowType() const{ return m_workflowType; }
    inline void SetWorkflowType(const WorkflowType& value) { m_workflowType = value; }
    inline void SetWorkflowType(WorkflowType&& value) { m_workflowType = std::move(value); }
    inline GetWorkflowResult& WithWorkflowType(const WorkflowType& value) { SetWorkflowType(value); return *this;}
    inline GetWorkflowResult& WithWorkflowType(WorkflowType&& value) { SetWorkflowType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of workflow execution.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetWorkflowResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetWorkflowResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline const Aws::String& GetErrorDescription() const{ return m_errorDescription; }
    inline void SetErrorDescription(const Aws::String& value) { m_errorDescription = value; }
    inline void SetErrorDescription(Aws::String&& value) { m_errorDescription = std::move(value); }
    inline void SetErrorDescription(const char* value) { m_errorDescription.assign(value); }
    inline GetWorkflowResult& WithErrorDescription(const Aws::String& value) { SetErrorDescription(value); return *this;}
    inline GetWorkflowResult& WithErrorDescription(Aws::String&& value) { SetErrorDescription(std::move(value)); return *this;}
    inline GetWorkflowResult& WithErrorDescription(const char* value) { SetErrorDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that represents when workflow execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }
    inline GetWorkflowResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline GetWorkflowResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that represents when workflow execution last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetWorkflowResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetWorkflowResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes provided for workflow execution.</p>
     */
    inline const WorkflowAttributes& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const WorkflowAttributes& value) { m_attributes = value; }
    inline void SetAttributes(WorkflowAttributes&& value) { m_attributes = std::move(value); }
    inline GetWorkflowResult& WithAttributes(const WorkflowAttributes& value) { SetAttributes(value); return *this;}
    inline GetWorkflowResult& WithAttributes(WorkflowAttributes&& value) { SetAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workflow specific execution metrics.</p>
     */
    inline const WorkflowMetrics& GetMetrics() const{ return m_metrics; }
    inline void SetMetrics(const WorkflowMetrics& value) { m_metrics = value; }
    inline void SetMetrics(WorkflowMetrics&& value) { m_metrics = std::move(value); }
    inline GetWorkflowResult& WithMetrics(const WorkflowMetrics& value) { SetMetrics(value); return *this;}
    inline GetWorkflowResult& WithMetrics(WorkflowMetrics&& value) { SetMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;

    WorkflowType m_workflowType;

    Status m_status;

    Aws::String m_errorDescription;

    Aws::Utils::DateTime m_startDate;

    Aws::Utils::DateTime m_lastUpdatedAt;

    WorkflowAttributes m_attributes;

    WorkflowMetrics m_metrics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

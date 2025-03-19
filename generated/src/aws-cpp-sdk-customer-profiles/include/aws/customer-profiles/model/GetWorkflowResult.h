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
    AWS_CUSTOMERPROFILES_API GetWorkflowResult() = default;
    AWS_CUSTOMERPROFILES_API GetWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    GetWorkflowResult& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of workflow. The only supported value is APPFLOW_INTEGRATION.</p>
     */
    inline WorkflowType GetWorkflowType() const { return m_workflowType; }
    inline void SetWorkflowType(WorkflowType value) { m_workflowTypeHasBeenSet = true; m_workflowType = value; }
    inline GetWorkflowResult& WithWorkflowType(WorkflowType value) { SetWorkflowType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of workflow execution.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetWorkflowResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workflow error messages during execution (if any).</p>
     */
    inline const Aws::String& GetErrorDescription() const { return m_errorDescription; }
    template<typename ErrorDescriptionT = Aws::String>
    void SetErrorDescription(ErrorDescriptionT&& value) { m_errorDescriptionHasBeenSet = true; m_errorDescription = std::forward<ErrorDescriptionT>(value); }
    template<typename ErrorDescriptionT = Aws::String>
    GetWorkflowResult& WithErrorDescription(ErrorDescriptionT&& value) { SetErrorDescription(std::forward<ErrorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that represents when workflow execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    GetWorkflowResult& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that represents when workflow execution last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetWorkflowResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes provided for workflow execution.</p>
     */
    inline const WorkflowAttributes& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = WorkflowAttributes>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = WorkflowAttributes>
    GetWorkflowResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Workflow specific execution metrics.</p>
     */
    inline const WorkflowMetrics& GetMetrics() const { return m_metrics; }
    template<typename MetricsT = WorkflowMetrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = WorkflowMetrics>
    GetWorkflowResult& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    WorkflowType m_workflowType{WorkflowType::NOT_SET};
    bool m_workflowTypeHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorDescription;
    bool m_errorDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    WorkflowAttributes m_attributes;
    bool m_attributesHasBeenSet = false;

    WorkflowMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

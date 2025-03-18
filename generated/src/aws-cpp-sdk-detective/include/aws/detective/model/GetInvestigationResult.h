/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/EntityType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/detective/model/Status.h>
#include <aws/detective/model/Severity.h>
#include <aws/detective/model/State.h>
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
namespace Detective
{
namespace Model
{
  class GetInvestigationResult
  {
  public:
    AWS_DETECTIVE_API GetInvestigationResult() = default;
    AWS_DETECTIVE_API GetInvestigationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API GetInvestigationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const { return m_graphArn; }
    template<typename GraphArnT = Aws::String>
    void SetGraphArn(GraphArnT&& value) { m_graphArnHasBeenSet = true; m_graphArn = std::forward<GraphArnT>(value); }
    template<typename GraphArnT = Aws::String>
    GetInvestigationResult& WithGraphArn(GraphArnT&& value) { SetGraphArn(std::forward<GraphArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
    template<typename InvestigationIdT = Aws::String>
    void SetInvestigationId(InvestigationIdT&& value) { m_investigationIdHasBeenSet = true; m_investigationId = std::forward<InvestigationIdT>(value); }
    template<typename InvestigationIdT = Aws::String>
    GetInvestigationResult& WithInvestigationId(InvestigationIdT&& value) { SetInvestigationId(std::forward<InvestigationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN). Detective supports IAM user ARNs and
     * IAM role ARNs.</p>
     */
    inline const Aws::String& GetEntityArn() const { return m_entityArn; }
    template<typename EntityArnT = Aws::String>
    void SetEntityArn(EntityArnT&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::forward<EntityArnT>(value); }
    template<typename EntityArnT = Aws::String>
    GetInvestigationResult& WithEntityArn(EntityArnT&& value) { SetEntityArn(std::forward<EntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as an IAM
     * user and/or IAM role.</p>
     */
    inline EntityType GetEntityType() const { return m_entityType; }
    inline void SetEntityType(EntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline GetInvestigationResult& WithEntityType(EntityType value) { SetEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the investigation report in UTC time stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    GetInvestigationResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time used to set the scope time within which you want to
     * generate the investigation report. The value is an UTC ISO8601 formatted string.
     * For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeStartTime() const { return m_scopeStartTime; }
    template<typename ScopeStartTimeT = Aws::Utils::DateTime>
    void SetScopeStartTime(ScopeStartTimeT&& value) { m_scopeStartTimeHasBeenSet = true; m_scopeStartTime = std::forward<ScopeStartTimeT>(value); }
    template<typename ScopeStartTimeT = Aws::Utils::DateTime>
    GetInvestigationResult& WithScopeStartTime(ScopeStartTimeT&& value) { SetScopeStartTime(std::forward<ScopeStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data and time when the investigation began. The value is an UTC ISO8601
     * formatted string. For example, <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetScopeEndTime() const { return m_scopeEndTime; }
    template<typename ScopeEndTimeT = Aws::Utils::DateTime>
    void SetScopeEndTime(ScopeEndTimeT&& value) { m_scopeEndTimeHasBeenSet = true; m_scopeEndTime = std::forward<ScopeEndTimeT>(value); }
    template<typename ScopeEndTimeT = Aws::Utils::DateTime>
    GetInvestigationResult& WithScopeEndTime(ScopeEndTimeT&& value) { SetScopeEndTime(std::forward<ScopeEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status based on the completion status of the investigation.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetInvestigationResult& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity assigned is based on the likelihood and impact of the indicators
     * of compromise discovered in the investigation.</p>
     */
    inline Severity GetSeverity() const { return m_severity; }
    inline void SetSeverity(Severity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline GetInvestigationResult& WithSeverity(Severity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * that you have completed reviewing the investigation.</p>
     */
    inline State GetState() const { return m_state; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetInvestigationResult& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInvestigationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_graphArn;
    bool m_graphArnHasBeenSet = false;

    Aws::String m_investigationId;
    bool m_investigationIdHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    EntityType m_entityType{EntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scopeStartTime{};
    bool m_scopeStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_scopeEndTime{};
    bool m_scopeEndTimeHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Severity m_severity{Severity::NOT_SET};
    bool m_severityHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/detective/model/Severity.h>
#include <aws/detective/model/Status.h>
#include <aws/detective/model/State.h>
#include <aws/core/utils/DateTime.h>
#include <aws/detective/model/EntityType.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details about the investigation related to a potential security event
   * identified by Detective.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/InvestigationDetail">AWS
   * API Reference</a></p>
   */
  class InvestigationDetail
  {
  public:
    AWS_DETECTIVE_API InvestigationDetail() = default;
    AWS_DETECTIVE_API InvestigationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API InvestigationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
    inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }
    template<typename InvestigationIdT = Aws::String>
    void SetInvestigationId(InvestigationIdT&& value) { m_investigationIdHasBeenSet = true; m_investigationId = std::forward<InvestigationIdT>(value); }
    template<typename InvestigationIdT = Aws::String>
    InvestigationDetail& WithInvestigationId(InvestigationIdT&& value) { SetInvestigationId(std::forward<InvestigationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Severity based on the likelihood and impact of the indicators of compromise
     * discovered in the investigation.</p>
     */
    inline Severity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(Severity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline InvestigationDetail& WithSeverity(Severity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status based on the completion status of the investigation.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline InvestigationDetail& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline InvestigationDetail& WithState(State value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the creation time of the investigation report. The value is
     * an UTC ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    InvestigationDetail& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline const Aws::String& GetEntityArn() const { return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    template<typename EntityArnT = Aws::String>
    void SetEntityArn(EntityArnT&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::forward<EntityArnT>(value); }
    template<typename EntityArnT = Aws::String>
    InvestigationDetail& WithEntityArn(EntityArnT&& value) { SetEntityArn(std::forward<EntityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as IAM user
     * and role.</p>
     */
    inline EntityType GetEntityType() const { return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(EntityType value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline InvestigationDetail& WithEntityType(EntityType value) { SetEntityType(value); return *this;}
    ///@}
  private:

    Aws::String m_investigationId;
    bool m_investigationIdHasBeenSet = false;

    Severity m_severity{Severity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    EntityType m_entityType{EntityType::NOT_SET};
    bool m_entityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws

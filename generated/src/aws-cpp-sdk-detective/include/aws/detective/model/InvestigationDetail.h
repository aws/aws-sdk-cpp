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
    AWS_DETECTIVE_API InvestigationDetail();
    AWS_DETECTIVE_API InvestigationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API InvestigationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const{ return m_investigationId; }
    inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }
    inline void SetInvestigationId(const Aws::String& value) { m_investigationIdHasBeenSet = true; m_investigationId = value; }
    inline void SetInvestigationId(Aws::String&& value) { m_investigationIdHasBeenSet = true; m_investigationId = std::move(value); }
    inline void SetInvestigationId(const char* value) { m_investigationIdHasBeenSet = true; m_investigationId.assign(value); }
    inline InvestigationDetail& WithInvestigationId(const Aws::String& value) { SetInvestigationId(value); return *this;}
    inline InvestigationDetail& WithInvestigationId(Aws::String&& value) { SetInvestigationId(std::move(value)); return *this;}
    inline InvestigationDetail& WithInvestigationId(const char* value) { SetInvestigationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Severity based on the likelihood and impact of the indicators of compromise
     * discovered in the investigation.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline InvestigationDetail& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}
    inline InvestigationDetail& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status based on the completion status of the investigation.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InvestigationDetail& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline InvestigationDetail& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the investigation. An archived investigation indicates
     * you have completed reviewing the investigation.</p>
     */
    inline const State& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InvestigationDetail& WithState(const State& value) { SetState(value); return *this;}
    inline InvestigationDetail& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the creation time of the investigation report. The value is
     * an UTC ISO8601 formatted string. For example,
     * <code>2021-08-18T16:35:56.284Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline InvestigationDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline InvestigationDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the IAM user and IAM role.</p>
     */
    inline const Aws::String& GetEntityArn() const{ return m_entityArn; }
    inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
    inline void SetEntityArn(const Aws::String& value) { m_entityArnHasBeenSet = true; m_entityArn = value; }
    inline void SetEntityArn(Aws::String&& value) { m_entityArnHasBeenSet = true; m_entityArn = std::move(value); }
    inline void SetEntityArn(const char* value) { m_entityArnHasBeenSet = true; m_entityArn.assign(value); }
    inline InvestigationDetail& WithEntityArn(const Aws::String& value) { SetEntityArn(value); return *this;}
    inline InvestigationDetail& WithEntityArn(Aws::String&& value) { SetEntityArn(std::move(value)); return *this;}
    inline InvestigationDetail& WithEntityArn(const char* value) { SetEntityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of entity. For example, Amazon Web Services accounts, such as IAM user
     * and role.</p>
     */
    inline const EntityType& GetEntityType() const{ return m_entityType; }
    inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
    inline void SetEntityType(const EntityType& value) { m_entityTypeHasBeenSet = true; m_entityType = value; }
    inline void SetEntityType(EntityType&& value) { m_entityTypeHasBeenSet = true; m_entityType = std::move(value); }
    inline InvestigationDetail& WithEntityType(const EntityType& value) { SetEntityType(value); return *this;}
    inline InvestigationDetail& WithEntityType(EntityType&& value) { SetEntityType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_investigationId;
    bool m_investigationIdHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_entityArn;
    bool m_entityArnHasBeenSet = false;

    EntityType m_entityType;
    bool m_entityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws

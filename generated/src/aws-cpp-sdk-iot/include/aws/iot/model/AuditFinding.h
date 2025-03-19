/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/AuditFindingSeverity.h>
#include <aws/iot/model/NonCompliantResource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/RelatedResource.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The findings (results) of the audit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditFinding">AWS
   * API Reference</a></p>
   */
  class AuditFinding
  {
  public:
    AWS_IOT_API AuditFinding() = default;
    AWS_IOT_API AuditFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for this set of audit findings. This identifier is used
     * to apply mitigation tasks to one or more sets of findings.</p>
     */
    inline const Aws::String& GetFindingId() const { return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    template<typename FindingIdT = Aws::String>
    void SetFindingId(FindingIdT&& value) { m_findingIdHasBeenSet = true; m_findingId = std::forward<FindingIdT>(value); }
    template<typename FindingIdT = Aws::String>
    AuditFinding& WithFindingId(FindingIdT&& value) { SetFindingId(std::forward<FindingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the audit that generated this result (finding).</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    AuditFinding& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audit check that generated this result.</p>
     */
    inline const Aws::String& GetCheckName() const { return m_checkName; }
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }
    template<typename CheckNameT = Aws::String>
    void SetCheckName(CheckNameT&& value) { m_checkNameHasBeenSet = true; m_checkName = std::forward<CheckNameT>(value); }
    template<typename CheckNameT = Aws::String>
    AuditFinding& WithCheckName(CheckNameT&& value) { SetCheckName(std::forward<CheckNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the audit started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const { return m_taskStartTime; }
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    void SetTaskStartTime(TaskStartTimeT&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::forward<TaskStartTimeT>(value); }
    template<typename TaskStartTimeT = Aws::Utils::DateTime>
    AuditFinding& WithTaskStartTime(TaskStartTimeT&& value) { SetTaskStartTime(std::forward<TaskStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline const Aws::Utils::DateTime& GetFindingTime() const { return m_findingTime; }
    inline bool FindingTimeHasBeenSet() const { return m_findingTimeHasBeenSet; }
    template<typename FindingTimeT = Aws::Utils::DateTime>
    void SetFindingTime(FindingTimeT&& value) { m_findingTimeHasBeenSet = true; m_findingTime = std::forward<FindingTimeT>(value); }
    template<typename FindingTimeT = Aws::Utils::DateTime>
    AuditFinding& WithFindingTime(FindingTimeT&& value) { SetFindingTime(std::forward<FindingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the result (finding).</p>
     */
    inline AuditFindingSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(AuditFindingSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline AuditFinding& WithSeverity(AuditFindingSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that was found to be noncompliant with the audit check.</p>
     */
    inline const NonCompliantResource& GetNonCompliantResource() const { return m_nonCompliantResource; }
    inline bool NonCompliantResourceHasBeenSet() const { return m_nonCompliantResourceHasBeenSet; }
    template<typename NonCompliantResourceT = NonCompliantResource>
    void SetNonCompliantResource(NonCompliantResourceT&& value) { m_nonCompliantResourceHasBeenSet = true; m_nonCompliantResource = std::forward<NonCompliantResourceT>(value); }
    template<typename NonCompliantResourceT = NonCompliantResource>
    AuditFinding& WithNonCompliantResource(NonCompliantResourceT&& value) { SetNonCompliantResource(std::forward<NonCompliantResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of related resources.</p>
     */
    inline const Aws::Vector<RelatedResource>& GetRelatedResources() const { return m_relatedResources; }
    inline bool RelatedResourcesHasBeenSet() const { return m_relatedResourcesHasBeenSet; }
    template<typename RelatedResourcesT = Aws::Vector<RelatedResource>>
    void SetRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = std::forward<RelatedResourcesT>(value); }
    template<typename RelatedResourcesT = Aws::Vector<RelatedResource>>
    AuditFinding& WithRelatedResources(RelatedResourcesT&& value) { SetRelatedResources(std::forward<RelatedResourcesT>(value)); return *this;}
    template<typename RelatedResourcesT = RelatedResource>
    AuditFinding& AddRelatedResources(RelatedResourcesT&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.emplace_back(std::forward<RelatedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason the resource was noncompliant.</p>
     */
    inline const Aws::String& GetReasonForNonCompliance() const { return m_reasonForNonCompliance; }
    inline bool ReasonForNonComplianceHasBeenSet() const { return m_reasonForNonComplianceHasBeenSet; }
    template<typename ReasonForNonComplianceT = Aws::String>
    void SetReasonForNonCompliance(ReasonForNonComplianceT&& value) { m_reasonForNonComplianceHasBeenSet = true; m_reasonForNonCompliance = std::forward<ReasonForNonComplianceT>(value); }
    template<typename ReasonForNonComplianceT = Aws::String>
    AuditFinding& WithReasonForNonCompliance(ReasonForNonComplianceT&& value) { SetReasonForNonCompliance(std::forward<ReasonForNonComplianceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A code that indicates the reason that the resource was noncompliant.</p>
     */
    inline const Aws::String& GetReasonForNonComplianceCode() const { return m_reasonForNonComplianceCode; }
    inline bool ReasonForNonComplianceCodeHasBeenSet() const { return m_reasonForNonComplianceCodeHasBeenSet; }
    template<typename ReasonForNonComplianceCodeT = Aws::String>
    void SetReasonForNonComplianceCode(ReasonForNonComplianceCodeT&& value) { m_reasonForNonComplianceCodeHasBeenSet = true; m_reasonForNonComplianceCode = std::forward<ReasonForNonComplianceCodeT>(value); }
    template<typename ReasonForNonComplianceCodeT = Aws::String>
    AuditFinding& WithReasonForNonComplianceCode(ReasonForNonComplianceCodeT&& value) { SetReasonForNonComplianceCode(std::forward<ReasonForNonComplianceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the audit finding was suppressed or not during reporting.
     * </p>
     */
    inline bool GetIsSuppressed() const { return m_isSuppressed; }
    inline bool IsSuppressedHasBeenSet() const { return m_isSuppressedHasBeenSet; }
    inline void SetIsSuppressed(bool value) { m_isSuppressedHasBeenSet = true; m_isSuppressed = value; }
    inline AuditFinding& WithIsSuppressed(bool value) { SetIsSuppressed(value); return *this;}
    ///@}
  private:

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    Aws::Utils::DateTime m_taskStartTime{};
    bool m_taskStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_findingTime{};
    bool m_findingTimeHasBeenSet = false;

    AuditFindingSeverity m_severity{AuditFindingSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    NonCompliantResource m_nonCompliantResource;
    bool m_nonCompliantResourceHasBeenSet = false;

    Aws::Vector<RelatedResource> m_relatedResources;
    bool m_relatedResourcesHasBeenSet = false;

    Aws::String m_reasonForNonCompliance;
    bool m_reasonForNonComplianceHasBeenSet = false;

    Aws::String m_reasonForNonComplianceCode;
    bool m_reasonForNonComplianceCodeHasBeenSet = false;

    bool m_isSuppressed{false};
    bool m_isSuppressedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

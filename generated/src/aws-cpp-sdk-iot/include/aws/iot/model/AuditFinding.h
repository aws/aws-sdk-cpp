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
    AWS_IOT_API AuditFinding();
    AWS_IOT_API AuditFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for this set of audit findings. This identifier is used
     * to apply mitigation tasks to one or more sets of findings.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }
    inline AuditFinding& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}
    inline AuditFinding& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}
    inline AuditFinding& WithFindingId(const char* value) { SetFindingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the audit that generated this result (finding).</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline AuditFinding& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline AuditFinding& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline AuditFinding& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audit check that generated this result.</p>
     */
    inline const Aws::String& GetCheckName() const{ return m_checkName; }
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }
    inline void SetCheckName(const Aws::String& value) { m_checkNameHasBeenSet = true; m_checkName = value; }
    inline void SetCheckName(Aws::String&& value) { m_checkNameHasBeenSet = true; m_checkName = std::move(value); }
    inline void SetCheckName(const char* value) { m_checkNameHasBeenSet = true; m_checkName.assign(value); }
    inline AuditFinding& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}
    inline AuditFinding& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}
    inline AuditFinding& WithCheckName(const char* value) { SetCheckName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the audit started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = value; }
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::move(value); }
    inline AuditFinding& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}
    inline AuditFinding& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline const Aws::Utils::DateTime& GetFindingTime() const{ return m_findingTime; }
    inline bool FindingTimeHasBeenSet() const { return m_findingTimeHasBeenSet; }
    inline void SetFindingTime(const Aws::Utils::DateTime& value) { m_findingTimeHasBeenSet = true; m_findingTime = value; }
    inline void SetFindingTime(Aws::Utils::DateTime&& value) { m_findingTimeHasBeenSet = true; m_findingTime = std::move(value); }
    inline AuditFinding& WithFindingTime(const Aws::Utils::DateTime& value) { SetFindingTime(value); return *this;}
    inline AuditFinding& WithFindingTime(Aws::Utils::DateTime&& value) { SetFindingTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the result (finding).</p>
     */
    inline const AuditFindingSeverity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const AuditFindingSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(AuditFindingSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline AuditFinding& WithSeverity(const AuditFindingSeverity& value) { SetSeverity(value); return *this;}
    inline AuditFinding& WithSeverity(AuditFindingSeverity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that was found to be noncompliant with the audit check.</p>
     */
    inline const NonCompliantResource& GetNonCompliantResource() const{ return m_nonCompliantResource; }
    inline bool NonCompliantResourceHasBeenSet() const { return m_nonCompliantResourceHasBeenSet; }
    inline void SetNonCompliantResource(const NonCompliantResource& value) { m_nonCompliantResourceHasBeenSet = true; m_nonCompliantResource = value; }
    inline void SetNonCompliantResource(NonCompliantResource&& value) { m_nonCompliantResourceHasBeenSet = true; m_nonCompliantResource = std::move(value); }
    inline AuditFinding& WithNonCompliantResource(const NonCompliantResource& value) { SetNonCompliantResource(value); return *this;}
    inline AuditFinding& WithNonCompliantResource(NonCompliantResource&& value) { SetNonCompliantResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of related resources.</p>
     */
    inline const Aws::Vector<RelatedResource>& GetRelatedResources() const{ return m_relatedResources; }
    inline bool RelatedResourcesHasBeenSet() const { return m_relatedResourcesHasBeenSet; }
    inline void SetRelatedResources(const Aws::Vector<RelatedResource>& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = value; }
    inline void SetRelatedResources(Aws::Vector<RelatedResource>&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = std::move(value); }
    inline AuditFinding& WithRelatedResources(const Aws::Vector<RelatedResource>& value) { SetRelatedResources(value); return *this;}
    inline AuditFinding& WithRelatedResources(Aws::Vector<RelatedResource>&& value) { SetRelatedResources(std::move(value)); return *this;}
    inline AuditFinding& AddRelatedResources(const RelatedResource& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.push_back(value); return *this; }
    inline AuditFinding& AddRelatedResources(RelatedResource&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason the resource was noncompliant.</p>
     */
    inline const Aws::String& GetReasonForNonCompliance() const{ return m_reasonForNonCompliance; }
    inline bool ReasonForNonComplianceHasBeenSet() const { return m_reasonForNonComplianceHasBeenSet; }
    inline void SetReasonForNonCompliance(const Aws::String& value) { m_reasonForNonComplianceHasBeenSet = true; m_reasonForNonCompliance = value; }
    inline void SetReasonForNonCompliance(Aws::String&& value) { m_reasonForNonComplianceHasBeenSet = true; m_reasonForNonCompliance = std::move(value); }
    inline void SetReasonForNonCompliance(const char* value) { m_reasonForNonComplianceHasBeenSet = true; m_reasonForNonCompliance.assign(value); }
    inline AuditFinding& WithReasonForNonCompliance(const Aws::String& value) { SetReasonForNonCompliance(value); return *this;}
    inline AuditFinding& WithReasonForNonCompliance(Aws::String&& value) { SetReasonForNonCompliance(std::move(value)); return *this;}
    inline AuditFinding& WithReasonForNonCompliance(const char* value) { SetReasonForNonCompliance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A code that indicates the reason that the resource was noncompliant.</p>
     */
    inline const Aws::String& GetReasonForNonComplianceCode() const{ return m_reasonForNonComplianceCode; }
    inline bool ReasonForNonComplianceCodeHasBeenSet() const { return m_reasonForNonComplianceCodeHasBeenSet; }
    inline void SetReasonForNonComplianceCode(const Aws::String& value) { m_reasonForNonComplianceCodeHasBeenSet = true; m_reasonForNonComplianceCode = value; }
    inline void SetReasonForNonComplianceCode(Aws::String&& value) { m_reasonForNonComplianceCodeHasBeenSet = true; m_reasonForNonComplianceCode = std::move(value); }
    inline void SetReasonForNonComplianceCode(const char* value) { m_reasonForNonComplianceCodeHasBeenSet = true; m_reasonForNonComplianceCode.assign(value); }
    inline AuditFinding& WithReasonForNonComplianceCode(const Aws::String& value) { SetReasonForNonComplianceCode(value); return *this;}
    inline AuditFinding& WithReasonForNonComplianceCode(Aws::String&& value) { SetReasonForNonComplianceCode(std::move(value)); return *this;}
    inline AuditFinding& WithReasonForNonComplianceCode(const char* value) { SetReasonForNonComplianceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the audit finding was suppressed or not during reporting.
     * </p>
     */
    inline bool GetIsSuppressed() const{ return m_isSuppressed; }
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

    Aws::Utils::DateTime m_taskStartTime;
    bool m_taskStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_findingTime;
    bool m_findingTimeHasBeenSet = false;

    AuditFindingSeverity m_severity;
    bool m_severityHasBeenSet = false;

    NonCompliantResource m_nonCompliantResource;
    bool m_nonCompliantResourceHasBeenSet = false;

    Aws::Vector<RelatedResource> m_relatedResources;
    bool m_relatedResourcesHasBeenSet = false;

    Aws::String m_reasonForNonCompliance;
    bool m_reasonForNonComplianceHasBeenSet = false;

    Aws::String m_reasonForNonComplianceCode;
    bool m_reasonForNonComplianceCodeHasBeenSet = false;

    bool m_isSuppressed;
    bool m_isSuppressedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

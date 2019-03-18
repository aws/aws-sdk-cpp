/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API AuditFinding
  {
  public:
    AuditFinding();
    AuditFinding(Aws::Utils::Json::JsonView jsonValue);
    AuditFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline AuditFinding& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline AuditFinding& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the audit that generated this result (finding)</p>
     */
    inline AuditFinding& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>The audit check that generated this result.</p>
     */
    inline const Aws::String& GetCheckName() const{ return m_checkName; }

    /**
     * <p>The audit check that generated this result.</p>
     */
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }

    /**
     * <p>The audit check that generated this result.</p>
     */
    inline void SetCheckName(const Aws::String& value) { m_checkNameHasBeenSet = true; m_checkName = value; }

    /**
     * <p>The audit check that generated this result.</p>
     */
    inline void SetCheckName(Aws::String&& value) { m_checkNameHasBeenSet = true; m_checkName = std::move(value); }

    /**
     * <p>The audit check that generated this result.</p>
     */
    inline void SetCheckName(const char* value) { m_checkNameHasBeenSet = true; m_checkName.assign(value); }

    /**
     * <p>The audit check that generated this result.</p>
     */
    inline AuditFinding& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}

    /**
     * <p>The audit check that generated this result.</p>
     */
    inline AuditFinding& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}

    /**
     * <p>The audit check that generated this result.</p>
     */
    inline AuditFinding& WithCheckName(const char* value) { SetCheckName(value); return *this;}


    /**
     * <p>The time the audit started.</p>
     */
    inline const Aws::Utils::DateTime& GetTaskStartTime() const{ return m_taskStartTime; }

    /**
     * <p>The time the audit started.</p>
     */
    inline bool TaskStartTimeHasBeenSet() const { return m_taskStartTimeHasBeenSet; }

    /**
     * <p>The time the audit started.</p>
     */
    inline void SetTaskStartTime(const Aws::Utils::DateTime& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = value; }

    /**
     * <p>The time the audit started.</p>
     */
    inline void SetTaskStartTime(Aws::Utils::DateTime&& value) { m_taskStartTimeHasBeenSet = true; m_taskStartTime = std::move(value); }

    /**
     * <p>The time the audit started.</p>
     */
    inline AuditFinding& WithTaskStartTime(const Aws::Utils::DateTime& value) { SetTaskStartTime(value); return *this;}

    /**
     * <p>The time the audit started.</p>
     */
    inline AuditFinding& WithTaskStartTime(Aws::Utils::DateTime&& value) { SetTaskStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline const Aws::Utils::DateTime& GetFindingTime() const{ return m_findingTime; }

    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline bool FindingTimeHasBeenSet() const { return m_findingTimeHasBeenSet; }

    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline void SetFindingTime(const Aws::Utils::DateTime& value) { m_findingTimeHasBeenSet = true; m_findingTime = value; }

    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline void SetFindingTime(Aws::Utils::DateTime&& value) { m_findingTimeHasBeenSet = true; m_findingTime = std::move(value); }

    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline AuditFinding& WithFindingTime(const Aws::Utils::DateTime& value) { SetFindingTime(value); return *this;}

    /**
     * <p>The time the result (finding) was discovered.</p>
     */
    inline AuditFinding& WithFindingTime(Aws::Utils::DateTime&& value) { SetFindingTime(std::move(value)); return *this;}


    /**
     * <p>The severity of the result (finding).</p>
     */
    inline const AuditFindingSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the result (finding).</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the result (finding).</p>
     */
    inline void SetSeverity(const AuditFindingSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the result (finding).</p>
     */
    inline void SetSeverity(AuditFindingSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the result (finding).</p>
     */
    inline AuditFinding& WithSeverity(const AuditFindingSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the result (finding).</p>
     */
    inline AuditFinding& WithSeverity(AuditFindingSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>The resource that was found to be non-compliant with the audit check.</p>
     */
    inline const NonCompliantResource& GetNonCompliantResource() const{ return m_nonCompliantResource; }

    /**
     * <p>The resource that was found to be non-compliant with the audit check.</p>
     */
    inline bool NonCompliantResourceHasBeenSet() const { return m_nonCompliantResourceHasBeenSet; }

    /**
     * <p>The resource that was found to be non-compliant with the audit check.</p>
     */
    inline void SetNonCompliantResource(const NonCompliantResource& value) { m_nonCompliantResourceHasBeenSet = true; m_nonCompliantResource = value; }

    /**
     * <p>The resource that was found to be non-compliant with the audit check.</p>
     */
    inline void SetNonCompliantResource(NonCompliantResource&& value) { m_nonCompliantResourceHasBeenSet = true; m_nonCompliantResource = std::move(value); }

    /**
     * <p>The resource that was found to be non-compliant with the audit check.</p>
     */
    inline AuditFinding& WithNonCompliantResource(const NonCompliantResource& value) { SetNonCompliantResource(value); return *this;}

    /**
     * <p>The resource that was found to be non-compliant with the audit check.</p>
     */
    inline AuditFinding& WithNonCompliantResource(NonCompliantResource&& value) { SetNonCompliantResource(std::move(value)); return *this;}


    /**
     * <p>The list of related resources.</p>
     */
    inline const Aws::Vector<RelatedResource>& GetRelatedResources() const{ return m_relatedResources; }

    /**
     * <p>The list of related resources.</p>
     */
    inline bool RelatedResourcesHasBeenSet() const { return m_relatedResourcesHasBeenSet; }

    /**
     * <p>The list of related resources.</p>
     */
    inline void SetRelatedResources(const Aws::Vector<RelatedResource>& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = value; }

    /**
     * <p>The list of related resources.</p>
     */
    inline void SetRelatedResources(Aws::Vector<RelatedResource>&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources = std::move(value); }

    /**
     * <p>The list of related resources.</p>
     */
    inline AuditFinding& WithRelatedResources(const Aws::Vector<RelatedResource>& value) { SetRelatedResources(value); return *this;}

    /**
     * <p>The list of related resources.</p>
     */
    inline AuditFinding& WithRelatedResources(Aws::Vector<RelatedResource>&& value) { SetRelatedResources(std::move(value)); return *this;}

    /**
     * <p>The list of related resources.</p>
     */
    inline AuditFinding& AddRelatedResources(const RelatedResource& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.push_back(value); return *this; }

    /**
     * <p>The list of related resources.</p>
     */
    inline AuditFinding& AddRelatedResources(RelatedResource&& value) { m_relatedResourcesHasBeenSet = true; m_relatedResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline const Aws::String& GetReasonForNonCompliance() const{ return m_reasonForNonCompliance; }

    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline bool ReasonForNonComplianceHasBeenSet() const { return m_reasonForNonComplianceHasBeenSet; }

    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline void SetReasonForNonCompliance(const Aws::String& value) { m_reasonForNonComplianceHasBeenSet = true; m_reasonForNonCompliance = value; }

    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline void SetReasonForNonCompliance(Aws::String&& value) { m_reasonForNonComplianceHasBeenSet = true; m_reasonForNonCompliance = std::move(value); }

    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline void SetReasonForNonCompliance(const char* value) { m_reasonForNonComplianceHasBeenSet = true; m_reasonForNonCompliance.assign(value); }

    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline AuditFinding& WithReasonForNonCompliance(const Aws::String& value) { SetReasonForNonCompliance(value); return *this;}

    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline AuditFinding& WithReasonForNonCompliance(Aws::String&& value) { SetReasonForNonCompliance(std::move(value)); return *this;}

    /**
     * <p>The reason the resource was non-compliant.</p>
     */
    inline AuditFinding& WithReasonForNonCompliance(const char* value) { SetReasonForNonCompliance(value); return *this;}


    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline const Aws::String& GetReasonForNonComplianceCode() const{ return m_reasonForNonComplianceCode; }

    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline bool ReasonForNonComplianceCodeHasBeenSet() const { return m_reasonForNonComplianceCodeHasBeenSet; }

    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline void SetReasonForNonComplianceCode(const Aws::String& value) { m_reasonForNonComplianceCodeHasBeenSet = true; m_reasonForNonComplianceCode = value; }

    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline void SetReasonForNonComplianceCode(Aws::String&& value) { m_reasonForNonComplianceCodeHasBeenSet = true; m_reasonForNonComplianceCode = std::move(value); }

    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline void SetReasonForNonComplianceCode(const char* value) { m_reasonForNonComplianceCodeHasBeenSet = true; m_reasonForNonComplianceCode.assign(value); }

    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline AuditFinding& WithReasonForNonComplianceCode(const Aws::String& value) { SetReasonForNonComplianceCode(value); return *this;}

    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline AuditFinding& WithReasonForNonComplianceCode(Aws::String&& value) { SetReasonForNonComplianceCode(std::move(value)); return *this;}

    /**
     * <p>A code which indicates the reason that the resource was non-compliant.</p>
     */
    inline AuditFinding& WithReasonForNonComplianceCode(const char* value) { SetReasonForNonComplianceCode(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet;

    Aws::Utils::DateTime m_taskStartTime;
    bool m_taskStartTimeHasBeenSet;

    Aws::Utils::DateTime m_findingTime;
    bool m_findingTimeHasBeenSet;

    AuditFindingSeverity m_severity;
    bool m_severityHasBeenSet;

    NonCompliantResource m_nonCompliantResource;
    bool m_nonCompliantResourceHasBeenSet;

    Aws::Vector<RelatedResource> m_relatedResources;
    bool m_relatedResourcesHasBeenSet;

    Aws::String m_reasonForNonCompliance;
    bool m_reasonForNonComplianceHasBeenSet;

    Aws::String m_reasonForNonComplianceCode;
    bool m_reasonForNonComplianceCodeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
